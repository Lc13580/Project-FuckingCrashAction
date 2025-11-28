// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/PawnComponent.h"
#include "GameFeature/GFA_AddInputContextMapping.h"
#include "PAHeroComponent.generated.h"

#define UE_API PROJECTACTION_API

namespace PAHero
{
	static float LookYawRate = 300.0f;
	static float LookPitchRate = 100.0f;
	static bool IsRunning = false;
	static float RunningSpeed = 3.0f;
}


UCLASS(MinimalAPI, Blueprintable, Meta=(BlueprintSpawnableComponent))
class UPAHeroComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()

public:
	UE_API UPAHeroComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer());

	/** The name of the extension event sent via UGameFrameworkComponentManager when ability inputs are ready to bind */
	static UE_API const FName NAME_BindInputsNow;
	
	/** The name of this component-implemented feature */
	static UE_API const FName NAME_ActorFeatureName;
	
	
	//~ Begin IGameFrameworkInitStateInterface interface
	virtual FName GetFeatureName() const override { return NAME_ActorFeatureName; }
	UE_API virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const override;
	UE_API virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) override;
	UE_API virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) override;
	UE_API virtual void CheckDefaultInitialization() override;
	//~ End IGameFrameworkInitStateInterface interface

protected:

	UE_API virtual void OnRegister() override;
	UE_API virtual void BeginPlay() override;
	UE_API virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	UE_API virtual void InitializePlayerInput(UInputComponent* PlayerInputComponent);
	
	UE_API void Input_AbilityInputTagPressed(FGameplayTag InputTag);
	UE_API void Input_AbilityInputTagReleased(FGameplayTag InputTag);

	UE_API void Input_Move(const FInputActionValue& InputActionValue);
	UE_API void Input_LookMouse(const FInputActionValue& InputActionValue);
	UE_API void Input_LookStick(const FInputActionValue& InputActionValue);
	
protected:
	
	//UPROPERTY(EditAnywhere)
	//TArray<FInputMappingContextAndPriority> DefaultInputMappings;
	UPROPERTY(EditAnywhere)
	TArray<FInputMappingContextAndPriority> DefaultInputMapping;

	bool bReadyToBindInputs;
};

# undef  UE_API
