// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PAPawnData.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/PawnComponent.h"
#include "PAPawnExtensionComponent.generated.h"

#define UE_API PROJECTACTION_API
/**
 * 
 */
UCLASS(MinimalAPI)
class UPAPawnExtensionComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()

public:
	UPAPawnExtensionComponent(const FObjectInitializer& ObjectInitializer);

	static UE_API const FName NAME_ActorFeatureName;
	virtual FName GetFeatureName() const override {return NAME_ActorFeatureName;} 
	
	static UPAPawnExtensionComponent* FindPawnExtComponent(const AActor* Actor) {return( Actor?  Actor->FindComponentByClass<UPAPawnExtensionComponent>() : nullptr) ;}
	
	UE_API void SetupPlayerInputComponent();
	
	template <class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }
	UE_API void SetPawnData(const UPAPawnData* InPawnData);

	UE_API void HandleControllerChanged();
	
protected:

	UE_API virtual void OnRegister() override;
	UE_API virtual void BeginPlay() override;
	UE_API virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(EditInstanceOnly, /*ReplicatedUsing = OnRep_PawnData,*/ Category = "Lyra|Pawn")
	TObjectPtr<const UPAPawnData> PawnData;

	//todo UPROPERTY ABILITYSYSTEM

	// ===================== InitState 接口实现 =====================
protected:
	UE_API virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const override;
	UE_API virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) override;
	UE_API virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) override;
	UE_API virtual void CheckDefaultInitialization() override;
};

#undef UE_API