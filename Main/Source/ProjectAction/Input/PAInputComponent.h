// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "PAInputConfig.h"
#include "PAInputComponent.generated.h"

class UEnhancedInputLocalPlayerSubsystem;
class UInputAction;
class UObject;

/**
 * 这个InputComponent只是用于解耦，专注于输入的绑定
 */
UCLASS(Config = Input)
class PROJECTACTION_API UPAInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	UPAInputComponent(const FObjectInitializer& ObjectInitializer);

	//正常Lyra框架这里会给一些InputMapping的自定义逻辑，如AddNative/AbilityInputMapping, 但是这里不写，用不上
	//void AddNativeAbilityInputMapping(...)
	//void AddAbilityInputMapping(...)

	void RemoveBinds(TArray<uint32>& BindHandles);

	template<class UserClass, typename FuncType>
	void BindNativeAction(const UPAInputConfig* PAInputConfig, const FGameplayTag& GameplayTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func, bool bLogNotFound)
	{
		check(PAInputConfig);

		if (const UInputAction* IA = PAInputConfig->FindNativeInputActionForTag(GameplayTag, bLogNotFound))
		{
			this->BindAction(IA, TriggerEvent, Object, Func);
		}
	}

	template<class UserClass, typename PressedFuncType, typename ReleasedFuncType>
	void BindAbilityActions(const UPAInputConfig* PAInputConfig, const FGameplayTag& GameplayTag, UserClass* Object, PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, bool bLogNotFound, TArray<uint32>& BindHandles)
	{
		check(PAInputConfig);

		for (const FPAInputAction& Action : PAInputConfig->AbilityInputAction)
		{
			if (Action.Action && Action.InputTag.IsValid())
			{
				if (PressedFunc)
				{
					//绑定
					uint32 Handle = BindAction(Action.Action, Object, ETriggerEvent::Triggered, Object, PressedFunc, Action.InputTag).GetHandle();
					BindHandles.Add(Handle);
				}

				if (ReleasedFunc)
				{
					//绑定
					uint32 Handle = BindAction(Action.Action, Object, ETriggerEvent::Completed, Object, ReleasedFunc, Action.InputTag).GetHandle();
					BindHandles.Add(Handle);
				}
			}
		}
	}
};
