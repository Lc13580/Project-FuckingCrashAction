// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmCameraCheckComponent.h"

#ifdef VRM4U_VrmCameraCheckComponent_generated_h
#error "VrmCameraCheckComponent.generated.h already included, missing '#pragma once' in VrmCameraCheckComponent.h"
#endif
#define VRM4U_VrmCameraCheckComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FVrmCameraCheckDelegate ***********************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_26_DELEGATE \
static void FVrmCameraCheckDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmCameraCheckDelegate);


// ********** End Delegate FVrmCameraCheckDelegate *************************************************

// ********** Begin Class UVrmCameraCheckComponent *************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetCameraCheck);


VRM4U_API UClass* Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVrmCameraCheckComponent(); \
	friend struct Z_Construct_UClass_UVrmCameraCheckComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4U_API UClass* Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVrmCameraCheckComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister) \
	DECLARE_SERIALIZER(UVrmCameraCheckComponent)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmCameraCheckComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmCameraCheckComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmCameraCheckComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmCameraCheckComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVrmCameraCheckComponent(UVrmCameraCheckComponent&&) = delete; \
	UVrmCameraCheckComponent(const UVrmCameraCheckComponent&) = delete; \
	NO_API virtual ~UVrmCameraCheckComponent();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_19_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_RPC_WRAPPERS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_INCLASS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVrmCameraCheckComponent;

// ********** End Class UVrmCameraCheckComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
