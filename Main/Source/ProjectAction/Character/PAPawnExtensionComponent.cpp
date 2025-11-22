// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PAPawnExtensionComponent.h"

#include "ProjectActionLogChannels.h"
#include "ProjectActionGameplayTags.h"
#include "Components/GameFrameworkComponentManager.h"

const FName UPAPawnExtensionComponent::NAME_ActorFeatureName("PawnExtension");

UPAPawnExtensionComponent::UPAPawnExtensionComponent(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);

	PawnData = nullptr;
	//AbilitySystemComponent = nullptr;
}

void UPAPawnExtensionComponent::SetupPlayerInputComponent()
{
	CheckDefaultInitialization();
}

void UPAPawnExtensionComponent::SetPawnData(const UPAPawnData* InPawnData)
{
	check(InPawnData);
	
	APawn* Pawn = GetPawnChecked<APawn>();

	if (Pawn->GetLocalRole() != ROLE_Authority)
	{
		return;
	}

	if (PawnData)
	{
		UE_LOG(PA_Log, Error, TEXT("Trying to set PawnData [%s] on pawn [%s] that already has valid PawnData [%s]."), *GetNameSafe(InPawnData), *GetNameSafe(Pawn), *GetNameSafe(PawnData));
		return;
	}

	PawnData = InPawnData;
}

void UPAPawnExtensionComponent::HandleControllerChanged()
{
	// if (AbilitySystemComponent && (AbilitySystemComponent->GetAvatarActor() == GetPawnChecked<APawn>()))
	// {
	// 	ensure(AbilitySystemComponent->AbilityActorInfo->OwnerActor == AbilitySystemComponent->GetOwnerActor());
	// 	if (AbilitySystemComponent->GetOwnerActor() == nullptr)
	// 	{
	// 		UninitializeAbilitySystem();
	// 	}
	// 	else
	// 	{
	// 		AbilitySystemComponent->RefreshAbilityActorInfo();
	// 	}
	// }

	CheckDefaultInitialization();
}

void UPAPawnExtensionComponent::OnRegister()
{
	Super::OnRegister();

	const APawn* Pawn = GetPawn<APawn>();
	ensureAlwaysMsgf((Pawn != nullptr), TEXT("PawnExtensionComponent on [%s] can only be added to Pawn actors."), *GetNameSafe(GetOwner()));

	TArray<UActorComponent*> PawnExtensionComponents;
	Pawn->GetComponents(UPAPawnExtensionComponent::StaticClass(), PawnExtensionComponents);
	ensureAlwaysMsgf((PawnExtensionComponents.Num() == 1), TEXT("Only one PawnExtensionComponent should exist on [%s]."), *GetNameSafe(GetOwner()));

	// Register with the init state system early, this will only work if this is a game world
	RegisterInitStateFeature();
}

void UPAPawnExtensionComponent::BeginPlay()
{
	Super::BeginPlay();
	// Listen for changes to all features
	BindOnActorInitStateChanged(NAME_None, FGameplayTag(), false);
	
	// Notifies state manager that we have spawned, then try rest of default initialization
	ensure(TryToChangeInitState(ProjectActionGameplayTags::InitState_Spawned));
	CheckDefaultInitialization();
}

void UPAPawnExtensionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	//UninitializeAbilitySystem();
	UnregisterInitStateFeature();

	Super::EndPlay(EndPlayReason);
}

bool UPAPawnExtensionComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState,
	FGameplayTag DesiredState) const
{
		
	check(Manager);
	APawn* Pawn = GetPawnChecked<APawn>();
	//特例判断
	if (!CurrentState.IsValid() && DesiredState == ProjectActionGameplayTags::InitState_Spawned)
	{
		// As long as we are on a valid pawn, we count as spawned
		if (Pawn)
		{
			return true;
		}
	}

	if (CurrentState == ProjectActionGameplayTags::InitState_Spawned && DesiredState == ProjectActionGameplayTags::InitState_DataAvailable)
	{
		// PawnData 必须有
		if (!PawnData)
		{
			return false;
		}

		const bool bHasAuthority = Pawn->HasAuthority();
		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();

		if (bHasAuthority || bIsLocallyControlled)
		{
			if (!GetController<AController>())
			{
				return false;
			}

			return true;
		}
	}
	else if (CurrentState == ProjectActionGameplayTags::InitState_DataAvailable && DesiredState == ProjectActionGameplayTags::InitState_DataInitialized)
	{
		// Transition to initialize if all features have their data available
		return Manager->HaveAllFeaturesReachedInitState(Pawn, ProjectActionGameplayTags::InitState_DataAvailable);
	}
	else if (CurrentState == ProjectActionGameplayTags::InitState_DataInitialized && DesiredState == ProjectActionGameplayTags::InitState_GameplayReady)
	{
		return true;
	}
	
	return false;
}

void UPAPawnExtensionComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager,
	FGameplayTag CurrentState, FGameplayTag DesiredState)
{
	if (DesiredState == ProjectActionGameplayTags::InitState_DataInitialized)
	{
		// This is currently all handled by other components listening to this state change
	}
}

void UPAPawnExtensionComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	//作用：别的 Feature 的状态变了，Manager 会广播到这里。
	//同一个 Actor 上，可能有多个实现了 InitState 接口的组件（不同 FeatureName）
	//当某个组件状态改变时，Manager 会把这个变化通过 OnActorInitStateChanged 通知给其他组件
	if (Params.FeatureName != NAME_ActorFeatureName)
	{
		if (Params.FeatureState == ProjectActionGameplayTags::InitState_DataAvailable)
		{
			CheckDefaultInitialization();
		}
	}
}

void UPAPawnExtensionComponent::CheckDefaultInitialization()
{
	// Before checking our progress, try progressing any other features we might depend on
	CheckDefaultInitializationForImplementers();

	static const TArray<FGameplayTag> StateChain = { ProjectActionGameplayTags::InitState_Spawned, ProjectActionGameplayTags::InitState_DataAvailable, ProjectActionGameplayTags::InitState_DataInitialized, ProjectActionGameplayTags::InitState_GameplayReady };

	// This will try to progress from spawned (which is only set in BeginPlay) through the data initialization stages until it gets to gameplay ready
	ContinueInitStateChain(StateChain);
}
