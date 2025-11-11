// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmDropFiles.h"

#ifdef VRM4U_VrmDropFiles_generated_h
#error "VrmDropFiles.generated.h already included, missing '#pragma once' in VrmDropFiles.h"
#endif
#define VRM4U_VrmDropFiles_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnDropFiles **********************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_42_DELEGATE \
static void FOnDropFiles_DelegateWrapper(const FMulticastScriptDelegate& OnDropFiles, const FString& FileName);


// ********** End Delegate FOnDropFiles ************************************************************

// ********** Begin Class UVrmDropFilesComponent ***************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_33_RPC_WRAPPERS \
	DECLARE_FUNCTION(execVRMGetOpenFileName);


VRM4U_API UClass* Z_Construct_UClass_UVrmDropFilesComponent_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUVrmDropFilesComponent(); \
	friend struct Z_Construct_UClass_UVrmDropFilesComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4U_API UClass* Z_Construct_UClass_UVrmDropFilesComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVrmDropFilesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), Z_Construct_UClass_UVrmDropFilesComponent_NoRegister) \
	DECLARE_SERIALIZER(UVrmDropFilesComponent)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmDropFilesComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmDropFilesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmDropFilesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmDropFilesComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVrmDropFilesComponent(UVrmDropFilesComponent&&) = delete; \
	UVrmDropFilesComponent(const UVrmDropFilesComponent&) = delete; \
	NO_API virtual ~UVrmDropFilesComponent();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_30_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_33_RPC_WRAPPERS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_33_INCLASS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVrmDropFilesComponent;

// ********** End Class UVrmDropFilesComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmDropFiles_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
