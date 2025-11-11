// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRM4U_VMCSubsystem.h"

#ifdef VRM4UCAPTURE_VRM4U_VMCSubsystem_generated_h
#error "VRM4U_VMCSubsystem.generated.h already included, missing '#pragma once' in VRM4U_VMCSubsystem.h"
#endif
#define VRM4UCAPTURE_VRM4U_VMCSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 

// ********** Begin Class UVRM4U_VMCSubsystem ******************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVMCData); \
	DECLARE_FUNCTION(execDestroyVMCServerAll); \
	DECLARE_FUNCTION(execDestroyVMCServer); \
	DECLARE_FUNCTION(execCreateVMCServer);


VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRM4U_VMCSubsystem(); \
	friend struct Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVRM4U_VMCSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4UCapture"), Z_Construct_UClass_UVRM4U_VMCSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UVRM4U_VMCSubsystem)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRM4U_VMCSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVRM4U_VMCSubsystem(UVRM4U_VMCSubsystem&&) = delete; \
	UVRM4U_VMCSubsystem(const UVRM4U_VMCSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRM4U_VMCSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRM4U_VMCSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRM4U_VMCSubsystem) \
	NO_API virtual ~UVRM4U_VMCSubsystem();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_24_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVRM4U_VMCSubsystem;

// ********** End Class UVRM4U_VMCSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UCapture_Public_VRM4U_VMCSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
