// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PAHeroComponent.h"

#include "EnhancedInputSubsystems.h"
#include "PAPawnExtensionComponent.h"
#include "ProjectActionGameplayTags.h"
#include "ProjectActionLogChannels.h"
#include "Components/GameFrameworkComponentManager.h"
#include "Input/PAInputComponent.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Misc/UObjectToken.h"
#include "UserSettings/EnhancedInputUserSettings.h"


const FName UPAHeroComponent::NAME_BindInputsNow("BindInputsNow");
const FName UPAHeroComponent::NAME_ActorFeatureName("Hero");

UPAHeroComponent::UPAHeroComponent(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	bReadyToBindInputs = false;
}

bool UPAHeroComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState,
	FGameplayTag DesiredState) const
{
	check(Manager);

	APawn* Pawn = GetPawn<APawn>();

	

	// ① 空 -> Spawned：只要挂在一个 Pawn 上就行
	if (!CurrentState.IsValid() && DesiredState == ProjectActionGameplayTags::InitState_Spawned)
	{
		return (Pawn != nullptr);
	}
	// ② Spawned -> DataAvailable：本地玩家控制 + 有 InputComponent
	else if (CurrentState == ProjectActionGameplayTags::InitState_Spawned &&
			 DesiredState == ProjectActionGameplayTags::InitState_DataAvailable)
	{
		if (!Pawn)
		{
			return false;
		}

		// 只关心本地玩家
		APlayerController* PC = Cast<APlayerController>(Pawn->GetController());
		if (!PC || !PC->IsLocalController())
		{
			return false;
		}

		// 必须已经有 InputComponent（SetupPlayerInputComponent 走完）
		if (!Pawn->InputComponent)
		{
			return false;
		}

		return true;
	}
	// ③ DataAvailable -> DataInitialized：如果你暂时不依赖 PawnExtension，可以直接允许
	else if (CurrentState == ProjectActionGameplayTags::InitState_DataAvailable &&
			 DesiredState == ProjectActionGameplayTags::InitState_DataInitialized)
	{
		return Manager->HasFeatureReachedInitState(Pawn, UPAPawnExtensionComponent::NAME_ActorFeatureName, ProjectActionGameplayTags::InitState_DataInitialized);
	}
	// ④ DataInitialized -> GameplayReady：直接允许
	else if (CurrentState == ProjectActionGameplayTags::InitState_DataInitialized &&
			 DesiredState == ProjectActionGameplayTags::InitState_GameplayReady)
	{
		return true;
	}

	return false;
	
	
}

void UPAHeroComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState,
	FGameplayTag DesiredState)
{
	//如果数据合法且初始化完毕
	if (CurrentState == ProjectActionGameplayTags::InitState_DataAvailable && DesiredState == ProjectActionGameplayTags::InitState_DataInitialized)
	{
		//安全检查
		APawn* Pawn = GetPawn<APawn>();
		//PS检查
		// ALyraPlayerState* LyraPS = GetPlayerState<ALyraPlayerState>();
		// if (!ensure(Pawn && LyraPS))
		// {
		// 	return;
		// }

		//PawnData检查，尝试初始化PawnExtComp身上的ASC
		// const ULyraPawnData* PawnData = nullptr;
		//
		// if (ULyraPawnExtensionComponent* PawnExtComp = ULyraPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		// {
		// 	PawnData = PawnExtComp->GetPawnData<ULyraPawnData>();
		//
		// 	// The player state holds the persistent data for this player (state that persists across deaths and multiple pawns).
		// 	// The ability system component and attribute sets live on the player state.
		// 	PawnExtComp->InitializeAbilitySystem(LyraPS->GetLyraAbilitySystemComponent(), LyraPS);
		// }

		//Controller检查
		// if (ALyraPlayerController* LyraPC = GetController<ALyraPlayerController>())
		// {
		// 	if (Pawn->InputComponent != nullptr)
		// 	{
		// 		InitializePlayerInput(Pawn->InputComponent);
		// 	}
		// }

		//PawnData的相机检查
		// Hook up the delegate for all pawns, in case we spectate later
		// if (PawnData)
		// {
		// 	if (ULyraCameraComponent* CameraComponent = ULyraCameraComponent::FindCameraComponent(Pawn))
		// 	{
		// 		CameraComponent->DetermineCameraModeDelegate.BindUObject(this, &ThisClass::DetermineCameraMode);
		// 	}
		// }
	}
}

void UPAHeroComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{

	if (Params.FeatureName == UPAPawnExtensionComponent::NAME_ActorFeatureName)
	{
		if (Params.FeatureState == ProjectActionGameplayTags::InitState_DataInitialized)
		{
			CheckDefaultInitialization();
		}
	}
	
}

void UPAHeroComponent::CheckDefaultInitialization()
{
	static const TArray<FGameplayTag> StateChain = { ProjectActionGameplayTags::InitState_Spawned, ProjectActionGameplayTags::InitState_DataAvailable, ProjectActionGameplayTags::InitState_DataInitialized, ProjectActionGameplayTags::InitState_GameplayReady };

	// This will try to progress from spawned (which is only set in BeginPlay) through the data initialization stages until it gets to gameplay ready
	ContinueInitStateChain(StateChain);
}

void UPAHeroComponent::OnRegister()
{
	Super::OnRegister();
	
	if (!GetPawn<APawn>())
	{
		UE_LOG(PA_Log, Error, TEXT("[ULyraHeroComponent::OnRegister] This component has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint."));

#if WITH_EDITOR
		if (GIsEditor)
		{
			static const FText Message = NSLOCTEXT("LyraHeroComponent", "NotOnPawnError", "has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint. This will cause a crash if you PIE!");
			static const FName HeroMessageLogName = TEXT("LyraHeroComponent");
			
			FMessageLog(HeroMessageLogName).Error()
				->AddToken(FUObjectToken::Create(this, FText::FromString(GetNameSafe(this))))
				->AddToken(FTextToken::Create(Message));
				
			FMessageLog(HeroMessageLogName).Open();
		}
#endif
	}
	else
	{
		// Register with the init state system early, this will only work if this is a game world
		RegisterInitStateFeature();
	}
}

void UPAHeroComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPAHeroComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();

	Super::EndPlay(EndPlayReason);
}

void UPAHeroComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	const APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
		return;
	
	const APlayerController* PC = Cast<APlayerController>(Pawn->GetController());
	check(PC);
	
	if (!PC && !PC->IsLocalController())
		return;

	const ULocalPlayer* LP = PC->GetLocalPlayer();
	check(LP);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	Subsystem->ClearAllMappings();

	if (const UPAPawnExtensionComponent* PawnExtComponent = UPAPawnExtensionComponent::FindPawnExtComponent(Pawn))
	{
		if (const UPAPawnData* PawnData = PawnExtComponent->GetPawnData<UPAPawnData>())
		{
			if (const UPAInputConfig* InputConfig = PawnData->InputConfig)
			{
				for (const FInputMappingContextAndPriority& Mapping : DefaultInputMapping)
				{
					if (UInputMappingContext* IMC = Mapping.InputMapping.LoadSynchronous())
					{
						if (Mapping.bRegisterWithSettings)
						{
							UEnhancedInputUserSettings* Settings = Subsystem->GetUserSettings();
							Settings->RegisterInputMappingContext(IMC);
						}
						
						FModifyContextOptions ModifyContextOptions{};
						ModifyContextOptions.bIgnoreAllPressedKeysUntilRelease = false;

						Subsystem->AddMappingContext(IMC, Mapping.Priority, ModifyContextOptions);
					}
				}

				UPAInputComponent* PAIC = Cast<UPAInputComponent>(PlayerInputComponent);
				if (ensure(PAIC, TEXT("Unexpected Input Component class! The Gameplay Abilities will not be bound to their inputs. Change the input component to UPAInputComponent or a subclass of it.")))
				{
					PAIC->AddInputMapping(InputConfig, Subsystem);

					PAIC->BindNativeAction(InputConfig, ProjectActionGameplayTags::InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move, /*bLogIfNotFound=*/ false);
					PAIC->BindNativeAction(InputConfig, ProjectActionGameplayTags::InputTag_Look_Mouse, ETriggerEvent::Triggered, this, &ThisClass::Input_LookMouse, /*bLogIfNotFound=*/ false);
					PAIC->BindNativeAction(InputConfig, ProjectActionGameplayTags::InputTag_Look_Stick, ETriggerEvent::Triggered, this, &ThisClass::Input_LookStick, /*bLogIfNotFound=*/ false);
				}
			}
		}
	}

	
	
}

void UPAHeroComponent::Input_Move(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();
	const AController* Controller = Pawn ? Pawn->GetController() : nullptr;

	if (Controller)
	{
		const FVector2D Value = InputActionValue.Get<FVector2D>();
		const FRotator MovementRotation(0.0f, Controller->GetControlRotation().Yaw, 0.0f);
		
		if (Value.X != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::RightVector);
			const auto MovementValue = Value.X * PAHero::IsRunning? PAHero::RunningSpeed: 1.0f;
			Pawn->AddMovementInput(MovementDirection, MovementValue);
		}

		if (Value.Y != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::ForwardVector);
			const auto MovementValue = Value.Y * PAHero::IsRunning? PAHero::RunningSpeed: 1.0f;
			Pawn->AddMovementInput(MovementDirection, Value.Y);
		}
	}
}

void UPAHeroComponent::Input_LookMouse(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)	return;

	const auto InputValue = InputActionValue.Get<FVector2D>();

	if (InputValue.X != 0.0f)
	{
		Pawn->AddControllerYawInput(InputValue.X);
	}

	if (InputValue.Y != 0.0f)
	{
		Pawn->AddControllerPitchInput(InputValue.Y);
	}
}

void UPAHeroComponent::Input_LookStick(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)	return;

	const auto InputValue = InputActionValue.Get<FVector2D>();

	const auto World = GetWorld();
	
	if (InputValue.X != 0.0f)
	{
		Pawn->AddControllerYawInput(InputValue.X * PAHero::LookYawRate * World->GetDeltaSeconds());
	}

	if (InputValue.Y != 0.0f)
	{
		Pawn->AddControllerYawInput(InputValue.Y * PAHero::LookYawRate * World->GetDeltaSeconds());
	}
}


