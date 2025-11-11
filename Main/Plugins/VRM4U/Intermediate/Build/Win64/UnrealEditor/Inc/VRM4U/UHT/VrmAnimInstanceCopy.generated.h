// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmAnimInstanceCopy.h"

#ifdef VRM4U_VrmAnimInstanceCopy_generated_h
#error "VrmAnimInstanceCopy.generated.h already included, missing '#pragma once' in VrmAnimInstanceCopy.h"
#endif
#define VRM4U_VrmAnimInstanceCopy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USkeletalMeshComponent;
class USkinnedMeshComponent;
class UVrmAssetListObject;
class UVrmMetaObject;

// ********** Begin ScriptStruct FVrmAnimInstanceCopyProxy *****************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FVrmAnimInstanceCopyProxy;
// ********** End ScriptStruct FVrmAnimInstanceCopyProxy *******************************************

// ********** Begin Class UVrmAnimInstanceCopy *****************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_58_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVrmSpringBoneIgnoreWingBone); \
	DECLARE_FUNCTION(execSetVrmSpringBoneBool); \
	DECLARE_FUNCTION(execSetVrmSpringBoneParam); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyDataForCustomSpring); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyData);


VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceCopy_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUVrmAnimInstanceCopy(); \
	friend struct Z_Construct_UClass_UVrmAnimInstanceCopy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceCopy_NoRegister(); \
public: \
	DECLARE_CLASS2(UVrmAnimInstanceCopy, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), Z_Construct_UClass_UVrmAnimInstanceCopy_NoRegister) \
	DECLARE_SERIALIZER(UVrmAnimInstanceCopy)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstanceCopy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstanceCopy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstanceCopy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstanceCopy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVrmAnimInstanceCopy(UVrmAnimInstanceCopy&&) = delete; \
	UVrmAnimInstanceCopy(const UVrmAnimInstanceCopy&) = delete; \
	NO_API virtual ~UVrmAnimInstanceCopy();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_58_RPC_WRAPPERS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_58_INCLASS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVrmAnimInstanceCopy;

// ********** End Class UVrmAnimInstanceCopy *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
