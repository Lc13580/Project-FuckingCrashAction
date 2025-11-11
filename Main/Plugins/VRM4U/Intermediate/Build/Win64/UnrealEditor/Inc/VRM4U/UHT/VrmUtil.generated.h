// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmUtil.h"

#ifdef VRM4U_VrmUtil_generated_h
#error "VrmUtil.generated.h already included, missing '#pragma once' in VrmUtil.h"
#endif
#define VRM4U_VrmUtil_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FImportOptionData *************************************************
#define FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_339_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImportOptionData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FImportOptionData;
// ********** End ScriptStruct FImportOptionData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h

// ********** Begin Enum EVRMImportMaterialType ****************************************************
#define FOREACH_ENUM_EVRMIMPORTMATERIALTYPE(op) \
	op(EVRMImportMaterialType::VRMIMT_Auto) \
	op(EVRMImportMaterialType::VRMIMT_MToon) \
	op(EVRMImportMaterialType::VRMIMT_MToonUnlit) \
	op(EVRMImportMaterialType::VRMIMT_SSS) \
	op(EVRMImportMaterialType::VRMIMT_SSSProfile) \
	op(EVRMImportMaterialType::VRMIMT_Unlit) \
	op(EVRMImportMaterialType::VRMIMT_glTF) \
	op(EVRMImportMaterialType::VRMIMT_UEFNLit) \
	op(EVRMImportMaterialType::VRMIMT_UEFNUnlit) \
	op(EVRMImportMaterialType::VRMIMT_UEFNSSSProfile) \
	op(EVRMImportMaterialType::VRMIMT_Custom) 

enum class EVRMImportMaterialType : uint8;
template<> struct TIsUEnumClass<EVRMImportMaterialType> { enum { Value = true }; };
template<> VRM4U_API UEnum* StaticEnum<EVRMImportMaterialType>();
// ********** End Enum EVRMImportMaterialType ******************************************************

// ********** Begin Enum EVRMImportTextureCompressType *********************************************
#define FOREACH_ENUM_EVRMIMPORTTEXTURECOMPRESSTYPE(op) \
	op(EVRMImportTextureCompressType::VRMITC_Auto) \
	op(EVRMImportTextureCompressType::VRMITC_DXT1) \
	op(EVRMImportTextureCompressType::VRMITC_BC7) \
	op(EVRMImportTextureCompressType::VRMITC_NoCompression) 

enum class EVRMImportTextureCompressType : uint8;
template<> struct TIsUEnumClass<EVRMImportTextureCompressType> { enum { Value = true }; };
template<> VRM4U_API UEnum* StaticEnum<EVRMImportTextureCompressType>();
// ********** End Enum EVRMImportTextureCompressType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
