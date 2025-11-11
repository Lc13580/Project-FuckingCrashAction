// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmAnimInstance.h"

#ifdef VRM4U_VrmAnimInstance_generated_h
#error "VrmAnimInstance.generated.h already included, missing '#pragma once' in VrmAnimInstance.h"
#endif
#define VRM4U_VrmAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USkeletalMeshComponent;
class UVrmMetaObject;
enum class EVRMBlendShapeGroup : uint8;

// ********** Begin ScriptStruct FVrmAnimInstanceProxy *********************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FVrmAnimInstanceProxy;
// ********** End ScriptStruct FVrmAnimInstanceProxy ***********************************************

// ********** Begin Class UVrmAnimInstance *********************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVrmData); \
	DECLARE_FUNCTION(execSetMorphTargetVRM);


VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstance_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUVrmAnimInstance(); \
	friend struct Z_Construct_UClass_UVrmAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UVrmAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), Z_Construct_UClass_UVrmAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UVrmAnimInstance)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVrmAnimInstance(UVrmAnimInstance&&) = delete; \
	UVrmAnimInstance(const UVrmAnimInstance&) = delete; \
	NO_API virtual ~UVrmAnimInstance();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_67_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_RPC_WRAPPERS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_INCLASS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVrmAnimInstance;

// ********** End Class UVrmAnimInstance ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h

// ********** Begin Enum EVRMBlendShapeGroup *******************************************************
#define FOREACH_ENUM_EVRMBLENDSHAPEGROUP(op) \
	op(EVRMBlendShapeGroup::BSG_Neutoral) \
	op(EVRMBlendShapeGroup::BSG_A) \
	op(EVRMBlendShapeGroup::BSG_I) \
	op(EVRMBlendShapeGroup::BSG_U) \
	op(EVRMBlendShapeGroup::BSG_E) \
	op(EVRMBlendShapeGroup::BSG_O) \
	op(EVRMBlendShapeGroup::BSG_Blink) \
	op(EVRMBlendShapeGroup::BSG_Joy) \
	op(EVRMBlendShapeGroup::BSG_Angry) \
	op(EVRMBlendShapeGroup::BSG_Sorrow) \
	op(EVRMBlendShapeGroup::BSG_Fun) \
	op(EVRMBlendShapeGroup::BSG_LookUp) \
	op(EVRMBlendShapeGroup::BSG_LookDown) \
	op(EVRMBlendShapeGroup::BSG_LookLeft) \
	op(EVRMBlendShapeGroup::BSG_LookRight) \
	op(EVRMBlendShapeGroup::BSG_Blink_L) \
	op(EVRMBlendShapeGroup::BSG_Blink_R) \
	op(EVRMBlendShapeGroup::Num) 

enum class EVRMBlendShapeGroup : uint8;
template<> struct TIsUEnumClass<EVRMBlendShapeGroup> { enum { Value = true }; };
template<> VRM4U_API UEnum* StaticEnum<EVRMBlendShapeGroup>();
// ********** End Enum EVRMBlendShapeGroup *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
