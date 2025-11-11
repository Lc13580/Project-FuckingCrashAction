// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmImportUI.h"

#ifdef VRM4UIMPORTER_VrmImportUI_generated_h
#error "VrmImportUI.generated.h already included, missing '#pragma once' in VrmImportUI.h"
#endif
#define VRM4UIMPORTER_VrmImportUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVrmImportUI *************************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetToDefault);


VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmImportUI_NoRegister();

#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVrmImportUI(); \
	friend struct Z_Construct_UClass_UVrmImportUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmImportUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UVrmImportUI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4UImporter"), Z_Construct_UClass_UVrmImportUI_NoRegister) \
	DECLARE_SERIALIZER(UVrmImportUI) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VRM4UIMPORTER_API UVrmImportUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmImportUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VRM4UIMPORTER_API, UVrmImportUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmImportUI); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVrmImportUI(UVrmImportUI&&) = delete; \
	UVrmImportUI(const UVrmImportUI&) = delete; \
	VRM4UIMPORTER_API virtual ~UVrmImportUI();


#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_16_PROLOG
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_19_RPC_WRAPPERS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_19_INCLASS \
	FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVrmImportUI;

// ********** End Class UVrmImportUI ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
