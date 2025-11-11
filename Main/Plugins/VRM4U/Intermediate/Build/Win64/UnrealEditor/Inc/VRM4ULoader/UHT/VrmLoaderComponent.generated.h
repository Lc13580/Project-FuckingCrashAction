// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmLoaderComponent.h"

#ifdef VRM4ULOADER_VrmLoaderComponent_generated_h
#error "VrmLoaderComponent.generated.h already included, missing '#pragma once' in VrmLoaderComponent.h"
#endif
#define VRM4ULOADER_VrmLoaderComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UVrmAssetListObject;

// ********** Begin Delegate FOnFinishLoad *********************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_44_DELEGATE \
static void FOnFinishLoad_DelegateWrapper(const FMulticastScriptDelegate& OnFinishLoad, UVrmAssetListObject* AssetList);


// ********** End Delegate FOnFinishLoad ***********************************************************

// ********** Begin Class UVrmLoaderComponent ******************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLoadVRMFileAsync); \
	DECLARE_FUNCTION(execLoadVRMFile);


VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmLoaderComponent_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUVrmLoaderComponent(); \
	friend struct Z_Construct_UClass_UVrmLoaderComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmLoaderComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVrmLoaderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4ULoader"), Z_Construct_UClass_UVrmLoaderComponent_NoRegister) \
	DECLARE_SERIALIZER(UVrmLoaderComponent)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmLoaderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmLoaderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmLoaderComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVrmLoaderComponent(UVrmLoaderComponent&&) = delete; \
	UVrmLoaderComponent(const UVrmLoaderComponent&) = delete; \
	NO_API virtual ~UVrmLoaderComponent();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_32_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_35_RPC_WRAPPERS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_35_INCLASS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVrmLoaderComponent;

// ********** End Class UVrmLoaderComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
