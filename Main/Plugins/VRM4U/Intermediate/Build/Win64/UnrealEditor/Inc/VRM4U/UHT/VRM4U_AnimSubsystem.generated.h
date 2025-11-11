// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRM4U_AnimSubsystem.h"

#ifdef VRM4U_VRM4U_AnimSubsystem_generated_h
#error "VRM4U_AnimSubsystem.generated.h already included, missing '#pragma once' in VRM4U_AnimSubsystem.h"
#endif
#define VRM4U_VRM4U_AnimSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 

// ********** Begin ScriptStruct FVrmTransformData *************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmTransformData_Statics; \
	VRM4U_API static class UScriptStruct* StaticStruct();


struct FVrmTransformData;
// ********** End ScriptStruct FVrmTransformData ***************************************************

// ********** Begin Class UVRM4U_AnimSubsystem *****************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRawData); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execGetRawdataByPort); \
	DECLARE_FUNCTION(execGetRawdataByIndex); \
	DECLARE_FUNCTION(execGetBoneByPort); \
	DECLARE_FUNCTION(execGetBoneByIndex); \
	DECLARE_FUNCTION(execClear);


VRM4U_API UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRM4U_AnimSubsystem(); \
	friend struct Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4U_API UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVRM4U_AnimSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4U"), Z_Construct_UClass_UVRM4U_AnimSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UVRM4U_AnimSubsystem)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRM4U_AnimSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVRM4U_AnimSubsystem(UVRM4U_AnimSubsystem&&) = delete; \
	UVRM4U_AnimSubsystem(const UVRM4U_AnimSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRM4U_AnimSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRM4U_AnimSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRM4U_AnimSubsystem) \
	NO_API virtual ~UVRM4U_AnimSubsystem();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_35_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVRM4U_AnimSubsystem;

// ********** End Class UVRM4U_AnimSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
