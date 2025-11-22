// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "PAInputConfig.generated.h"

class UInputAction;;

USTRUCT(BlueprintType)
struct FPAInputAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<const UInputAction> Action;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (Categories = "InputTag"))
	FGameplayTag InputTag;
};



UCLASS(BlueprintType, Const)
class PROJECTACTION_API UPAInputConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	//const FObjectInitializer& ObjectInitializer 会默认初始化子对象，无参的情况就不会
	UPAInputConfig(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "PA|InputConfig")
	const UInputAction* FindNativeInputActionForTag(const FGameplayTag& ActionTag, bool bLogNotFound = true) const;

	UFUNCTION(BlueprintCallable, Category = "PA|InputConfig")
	const UInputAction* FindAbilityInputActionForTag(const FGameplayTag& ActionTag, bool bLogNotFound = true) const;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "Input Action"))
	TArray<FPAInputAction> NativeInputAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "Input Action"))
	TArray<FPAInputAction> AbilityInputAction;
};
