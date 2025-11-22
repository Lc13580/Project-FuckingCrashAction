// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/PAInputComponent.h"

UPAInputComponent::UPAInputComponent(const FObjectInitializer& ObjectInitializer)
{
}

void UPAInputComponent::RemoveBinds(TArray<uint32>& BindHandles)
{
	for (uint32 Handle : BindHandles)
	{
		RemoveBindingByHandle(Handle);
	}
	BindHandles.Reset();
}
