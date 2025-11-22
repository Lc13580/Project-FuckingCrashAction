// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/PAInputConfig.h"

#include "ProjectActionLogChannels.h"

UPAInputConfig::UPAInputConfig(const FObjectInitializer& ObjectInitializer)
{
}

const UInputAction* UPAInputConfig::FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FPAInputAction& Action : NativeInputAction)
	{
		if (Action.InputTag == InputTag)
		{
			return Action.Action;
		}
	}

	if (bLogNotFound)
		UE_LOG(PA_Log_Input, Error, TEXT("Can't find NativeInputAction for InputTag [%s] on InputConfig [%s]."), *InputTag.ToString(), *GetNameSafe(this));
	
	return nullptr;
}

const UInputAction* UPAInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FPAInputAction& Action : AbilityInputAction)
	{
		if (Action.InputTag == InputTag)
		{
			return Action.Action;
		}
	}

	if (bLogNotFound)
		UE_LOG(PA_Log_Input, Error, TEXT("Can't find NativeInputAction for InputTag [%s] on InputConfig [%s]."), *InputTag.ToString(), *GetNameSafe(this));
	
	return nullptr;
}
