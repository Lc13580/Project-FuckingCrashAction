// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmAnimInstanceRetargetFromMannequin.h"

#ifdef VRM4U_VrmAnimInstanceRetargetFromMannequin_generated_h
#error "VrmAnimInstanceRetargetFromMannequin.generated.h already included, missing '#pragma once' in VrmAnimInstanceRetargetFromMannequin.h"
#endif
#define VRM4U_VrmAnimInstanceRetargetFromMannequin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIKRetargeter;
class UVrmAssetListObject;
class UVrmMetaObject;

// ********** Begin ScriptStruct FVrmAnimInstanceRetargetFromMannequinProxy ************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmAnimInstanceRetargetFromMannequinProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FVrmAnimInstanceRetargetFromMannequinProxy;
// ********** End ScriptStruct FVrmAnimInstanceRetargetFromMannequinProxy **************************

// ********** Begin Class UVrmAnimInstanceRetargetFromMannequin ************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_67_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVrmSpringBoneIgnoreWingBone); \
	DECLARE_FUNCTION(execSetVrmSpringBoneBool); \
	DECLARE_FUNCTION(execSetVrmSpringBoneParam); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyDataForCustomSpring); \
	DECLARE_FUNCTION(execSetVrmAssetList); \
	DECLARE_FUNCTION(execSetRetargetData);


VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceRetargetFromMannequin_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUVrmAnimInstanceRetargetFromMannequin(); \
	friend struct Z_Construct_UClass_UVrmAnimInstanceRetargetFromMannequin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceRetargetFromMannequin_NoRegister(); \
public: \
	DECLARE_CLASS2(UVrmAnimInstanceRetargetFromMannequin, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), Z_Construct_UClass_UVrmAnimInstanceRetargetFromMannequin_NoRegister) \
	DECLARE_SERIALIZER(UVrmAnimInstanceRetargetFromMannequin)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstanceRetargetFromMannequin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstanceRetargetFromMannequin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstanceRetargetFromMannequin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstanceRetargetFromMannequin); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVrmAnimInstanceRetargetFromMannequin(UVrmAnimInstanceRetargetFromMannequin&&) = delete; \
	UVrmAnimInstanceRetargetFromMannequin(const UVrmAnimInstanceRetargetFromMannequin&) = delete; \
	NO_API virtual ~UVrmAnimInstanceRetargetFromMannequin();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_64_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_67_RPC_WRAPPERS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_67_INCLASS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVrmAnimInstanceRetargetFromMannequin;

// ********** End Class UVrmAnimInstanceRetargetFromMannequin **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceRetargetFromMannequin_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
