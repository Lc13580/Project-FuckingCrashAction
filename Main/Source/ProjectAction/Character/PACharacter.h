// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularCharacter.h"
#include "PAPawnExtensionComponent.h"
#include "PACharacter.generated.h"

#define UE_API PROJECTACTION_API

/**
 * 
 */
UCLASS(MinimalAPI, Config = Game, Meta = (ShortTooltip = "The base character pawn class used by this project."))
class APACharacter : public AModularCharacter
{
	GENERATED_BODY()
	
public:
	UE_API APACharacter(const FObjectInitializer& ObjectInitializer);


	//~ Begin AActor Interface
	UE_API virtual void PreInitializeComponents() override;
	UE_API virtual void BeginPlay() override;
	UE_API virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	UE_API virtual void Reset() override;
	UE_API virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	UE_API virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;
	//~ End AActor Interface

	//~APawn interface
	UE_API virtual void NotifyControllerChanged() override;
	//~End of APawn interface
	
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UPAPawnExtensionComponent> PawnExtComponent;

	//todo 这是角色死亡时候需要做的功能，现在不给与关注
	//something will happen when character die
	// Begins the death sequence for the character (disables collision, disables movement, etc...)
	// UFUNCTION()
	// UE_API virtual void OnDeathStarted(AActor* OwningActor);
	//
	// // Ends the death sequence for the character (detaches controller, destroys pawn, etc...)
	// UFUNCTION()
	// UE_API virtual void OnDeathFinished(AActor* OwningActor);
	//
	// UE_API void DisableMovementAndCollision();
	// UE_API void DestroyDueToDeath();
	// UE_API void UninitAndDestroy();
	
protected:
	UE_API virtual void PossessedBy(AController* NewController) override;
	UE_API virtual void UnPossessed() override;

	UE_API virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
};

#undef UE_API