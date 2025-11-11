// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmEditorEventComponent.h"

#ifdef VRM4U_VrmEditorEventComponent_generated_h
#error "VrmEditorEventComponent.generated.h already included, missing '#pragma once' in VrmEditorEventComponent.h"
#endif
#define VRM4U_VrmEditorEventComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EVRM4U_PIEEvent : uint8;

// ********** Begin Delegate FVrmSelectionChangedEventDelegate *************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_37_DELEGATE \
static void FVrmSelectionChangedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmSelectionChangedEventDelegate, bool dummy);


// ********** End Delegate FVrmSelectionChangedEventDelegate ***************************************

// ********** Begin Delegate FVrmSelectionObjectEventDelegate **************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_38_DELEGATE \
static void FVrmSelectionObjectEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmSelectionObjectEventDelegate, bool dummy);


// ********** End Delegate FVrmSelectionObjectEventDelegate ****************************************

// ********** Begin Delegate FVrmPIEEventDelegate **************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_48_DELEGATE \
static void FVrmPIEEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmPIEEventDelegate, EVRM4U_PIEEvent dummy);


// ********** End Delegate FVrmPIEEventDelegate ****************************************************

// ********** Begin Delegate FVrmGlobalTimeChangeEventDelegate *************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_58_DELEGATE \
static void FVrmGlobalTimeChangeEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmGlobalTimeChangeEventDelegate, float CurrentTime);


// ********** End Delegate FVrmGlobalTimeChangeEventDelegate ***************************************

// ********** Begin Class UVrmEditorEventComponent *************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_33_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetGlobalTimeCheck); \
	DECLARE_FUNCTION(execSetPIEEventCheck); \
	DECLARE_FUNCTION(execSetSelectCheck);


VRM4U_API UClass* Z_Construct_UClass_UVrmEditorEventComponent_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUVrmEditorEventComponent(); \
	friend struct Z_Construct_UClass_UVrmEditorEventComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4U_API UClass* Z_Construct_UClass_UVrmEditorEventComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVrmEditorEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRM4U"), Z_Construct_UClass_UVrmEditorEventComponent_NoRegister) \
	DECLARE_SERIALIZER(UVrmEditorEventComponent)


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmEditorEventComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmEditorEventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmEditorEventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmEditorEventComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVrmEditorEventComponent(UVrmEditorEventComponent&&) = delete; \
	UVrmEditorEventComponent(const UVrmEditorEventComponent&) = delete; \
	NO_API virtual ~UVrmEditorEventComponent();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_30_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_33_RPC_WRAPPERS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_33_INCLASS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVrmEditorEventComponent;

// ********** End Class UVrmEditorEventComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmEditorEventComponent_h

// ********** Begin Enum EVRM4U_PIEEvent ***********************************************************
#define FOREACH_ENUM_EVRM4U_PIEEVENT(op) \
	op(EVRM4U_PIEEvent::PreBeginPIE) \
	op(EVRM4U_PIEEvent::BeginPIE) \
	op(EVRM4U_PIEEvent::PrePIEEnded) \
	op(EVRM4U_PIEEvent::PostPIEStarted) \
	op(EVRM4U_PIEEvent::EndPIE) \
	op(EVRM4U_PIEEvent::PausePIE) \
	op(EVRM4U_PIEEvent::ResumePIE) \
	op(EVRM4U_PIEEvent::SingleStepPIE) \
	op(EVRM4U_PIEEvent::OnPreSwitchBeginPIEAndSIE) \
	op(EVRM4U_PIEEvent::OnSwitchBeginPIEAndSIE) 

enum class EVRM4U_PIEEvent : uint8;
template<> struct TIsUEnumClass<EVRM4U_PIEEvent> { enum { Value = true }; };
template<> VRM4U_API UEnum* StaticEnum<EVRM4U_PIEEvent>();
// ********** End Enum EVRM4U_PIEEvent *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
