// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRM4U_RenderSubsystem.h"

#ifdef VRM4URENDER_VRM4U_RenderSubsystem_generated_h
#error "VRM4U_RenderSubsystem.generated.h already included, missing '#pragma once' in VRM4U_RenderSubsystem.h"
#endif
#define VRM4URENDER_VRM4U_RenderSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTextureRenderTarget2D;
class UVrmExtensionRimFilterData;

// ********** Begin Class UVRM4U_RenderSubsystem ***************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetViewExtension); \
	DECLARE_FUNCTION(execResetSceneTextureExtentHistory); \
	DECLARE_FUNCTION(execRemoveAllCaptureTexture); \
	DECLARE_FUNCTION(execRemoveCaptureTexture); \
	DECLARE_FUNCTION(execAddCaptureTexture); \
	DECLARE_FUNCTION(execRemoveRimFilterDataByPriority); \
	DECLARE_FUNCTION(execRemoveRimFilterData); \
	DECLARE_FUNCTION(execAddRimFilterData);


VRM4URENDER_API UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRM4U_RenderSubsystem(); \
	friend struct Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4URENDER_API UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVRM4U_RenderSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4URender"), Z_Construct_UClass_UVRM4U_RenderSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UVRM4U_RenderSubsystem)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRM4U_RenderSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVRM4U_RenderSubsystem(UVRM4U_RenderSubsystem&&) = delete; \
	UVRM4U_RenderSubsystem(const UVRM4U_RenderSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRM4U_RenderSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRM4U_RenderSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRM4U_RenderSubsystem) \
	NO_API virtual ~UVRM4U_RenderSubsystem();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_59_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_63_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVRM4U_RenderSubsystem;

// ********** End Class UVRM4U_RenderSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h

// ********** Begin Enum EVRM4U_CaptureSource ******************************************************
#define FOREACH_ENUM_EVRM4U_CAPTURESOURCE(op) \
	op(ColorTexturePostOpaque) \
	op(ColorTextureOverlay) \
	op(DepthTexture) \
	op(NormalTexture) \
	op(VelocityTexture) \
	op(SceneColorTexturePostOpaque) \
	op(SceneColorTextureOverlay) \
	op(SceneDepthTexture) \
	op(GBufferATexture) \
	op(GBufferBTexture) \
	op(GBufferCTexture) \
	op(GBufferDTexture) \
	op(GBufferETexture) \
	op(GBufferFTexture) \
	op(GBufferVelocityTexture) \
	op(ScreenSpaceAOTexture) \
	op(CustomDepthTexture) 

enum EVRM4U_CaptureSource : int;
template<> VRM4URENDER_API UEnum* StaticEnum<EVRM4U_CaptureSource>();
// ********** End Enum EVRM4U_CaptureSource ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
