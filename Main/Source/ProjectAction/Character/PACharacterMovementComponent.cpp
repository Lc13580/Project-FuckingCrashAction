// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PACharacterMovementComponent.h"

UPACharacterMovementComponent::UPACharacterMovementComponent(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
}

void UPACharacterMovementComponent::SimulateMovement(float DeltaTime)
{
	Super::SimulateMovement(DeltaTime);
}

bool UPACharacterMovementComponent::CanAttemptJump() const
{
	//return Super::CanAttemptJump();
	return IsJumpAllowed() &&
		(IsMovingOnGround() /*||IsFalling()*/);
	
}

void UPACharacterMovementComponent::InitializeComponent()
{
	Super::InitializeComponent();
}
