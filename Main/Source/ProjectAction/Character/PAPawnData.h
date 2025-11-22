// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Input/PAInputConfig.h"
#include "PAPawnData.generated.h"

#define UE_API PROJECTACTION_API

UCLASS(MinimalAPI, BlueprintType, Const, Meta = (DisplayName = "PA Pawn Data", ShortTooltip = "Data asset used to define a Pawn."))
class UPAPawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPAPawnData(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PA | Pawn")
	TSubclassOf<APawn> PawnClass;

	//todo 以后这里要加一些AbilitySet

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PA | InputConfig")
	TObjectPtr<UPAInputConfig> InputConfig;

	//todo 摄像头设置，按照Lyra的来
};

#undef UE_API
