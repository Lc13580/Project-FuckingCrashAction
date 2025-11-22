// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PAPawnData.h"

UPAPawnData::UPAPawnData(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	this->PawnClass = nullptr;
	this->InputConfig = nullptr;
	//this->DefaultCameraMode = nullptr;
}
