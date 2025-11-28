#pragma once

#include "NativeGameplayTags.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagsManager.h"


namespace ProjectActionGameplayTags
{
	PROJECTACTION_API FGameplayTag FindGameplayTag(const FString& FInputString, bool bMatchPartialString = false);

	//组件化时序控制标签
	PROJECTACTION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ProjectAction_GameplayTag_Test);
	PROJECTACTION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_Spawned);
	PROJECTACTION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_DataAvailable);
	PROJECTACTION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_DataInitialized);
	PROJECTACTION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InitState_GameplayReady);



	//输入的标签
	PROJECTACTION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	PROJECTACTION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look_Mouse);
	PROJECTACTION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look_Stick);
};
