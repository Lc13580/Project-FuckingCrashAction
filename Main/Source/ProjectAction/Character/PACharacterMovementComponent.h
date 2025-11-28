// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PACharacterMovementComponent.generated.h"

#define UE_API PROJECTACTION_API

UCLASS(MinimalAPI)
class UPACharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UE_API UPACharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UE_API virtual void SimulateMovement(float DeltaTime) override;

	UE_API virtual bool CanAttemptJump() const override;

	UE_API virtual void InitializeComponent() override;
};

#undef UE_API