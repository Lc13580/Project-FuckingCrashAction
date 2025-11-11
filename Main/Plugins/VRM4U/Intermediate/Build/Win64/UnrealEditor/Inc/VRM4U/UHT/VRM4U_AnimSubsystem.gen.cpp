// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U_AnimSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVRM4U_AnimSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem();
VRM4U_API UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem_NoRegister();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmTransformData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVrmTransformData *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVrmTransformData;
class UScriptStruct* FVrmTransformData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVrmTransformData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVrmTransformData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmTransformData, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmTransformData"));
	}
	return Z_Registration_Info_UScriptStruct_FVrmTransformData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVrmTransformData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)\n" },
#endif
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransform_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BoneTransform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RawData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmTransformData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_ValueProp = { "BoneTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_Key_KeyProp = { "BoneTransform_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform = { "BoneTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmTransformData, BoneTransform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneTransform_MetaData), NewProp_BoneTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_ValueProp = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_Key_KeyProp = { "RawData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVrmTransformData, RawData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmTransformData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmTransformData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"VrmTransformData",
	Z_Construct_UScriptStruct_FVrmTransformData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmTransformData_Statics::PropPointers),
	sizeof(FVrmTransformData),
	alignof(FVrmTransformData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmTransformData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVrmTransformData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVrmTransformData()
{
	if (!Z_Registration_Info_UScriptStruct_FVrmTransformData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVrmTransformData.InnerSingleton, Z_Construct_UScriptStruct_FVrmTransformData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVrmTransformData.InnerSingleton;
}
// ********** End ScriptStruct FVrmTransformData ***************************************************

// ********** Begin Class UVRM4U_AnimSubsystem Function Clear **************************************
struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UVRM4U_AnimSubsystem Function Clear ****************************************

// ********** Begin Class UVRM4U_AnimSubsystem Function GetBoneByIndex *****************************
struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics
{
	struct VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms
	{
		int32 index;
		TMap<FString,FTransform> trans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "GetBoneByIndex", Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execGetBoneByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBoneByIndex(Z_Param_index,Z_Param_Out_trans);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_AnimSubsystem Function GetBoneByIndex *******************************

// ********** Begin Class UVRM4U_AnimSubsystem Function GetBoneByPort ******************************
struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics
{
	struct VRM4U_AnimSubsystem_eventGetBoneByPort_Parms
	{
		int32 port;
		TMap<FString,FTransform> trans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_port;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetBoneByPort_Parms, port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetBoneByPort_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "GetBoneByPort", Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::VRM4U_AnimSubsystem_eventGetBoneByPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::VRM4U_AnimSubsystem_eventGetBoneByPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execGetBoneByPort)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_port);
	P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBoneByPort(Z_Param_port,Z_Param_Out_trans);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_AnimSubsystem Function GetBoneByPort ********************************

// ********** Begin Class UVRM4U_AnimSubsystem Function GetRawdataByIndex **************************
struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics
{
	struct VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms
	{
		int32 index;
		TMap<FString,FTransform> trans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "GetRawdataByIndex", Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execGetRawdataByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRawdataByIndex(Z_Param_index,Z_Param_Out_trans);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_AnimSubsystem Function GetRawdataByIndex ****************************

// ********** Begin Class UVRM4U_AnimSubsystem Function GetRawdataByPort ***************************
struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics
{
	struct VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms
	{
		int32 port;
		TMap<FString,FTransform> trans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_port;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms, port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "GetRawdataByPort", Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execGetRawdataByPort)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_port);
	P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRawdataByPort(Z_Param_port,Z_Param_Out_trans);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_AnimSubsystem Function GetRawdataByPort *****************************

// ********** Begin Class UVRM4U_AnimSubsystem Function SetBoneTransform ***************************
struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics
{
	struct VRM4U_AnimSubsystem_eventSetBoneTransform_Parms
	{
		int32 port;
		TMap<FString,FTransform> trans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_port;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventSetBoneTransform_Parms, port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventSetBoneTransform_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trans_MetaData), NewProp_trans_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "SetBoneTransform", Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::VRM4U_AnimSubsystem_eventSetBoneTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::VRM4U_AnimSubsystem_eventSetBoneTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execSetBoneTransform)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_port);
	P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoneTransform(Z_Param_port,Z_Param_Out_trans);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_AnimSubsystem Function SetBoneTransform *****************************

// ********** Begin Class UVRM4U_AnimSubsystem Function SetRawData *********************************
struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics
{
	struct VRM4U_AnimSubsystem_eventSetRawData_Parms
	{
		int32 port;
		TMap<FString,FTransform> trans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_port;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventSetRawData_Parms, port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventSetRawData_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trans_MetaData), NewProp_trans_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "SetRawData", Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::VRM4U_AnimSubsystem_eventSetRawData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::VRM4U_AnimSubsystem_eventSetRawData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execSetRawData)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_port);
	P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRawData(Z_Param_port,Z_Param_Out_trans);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_AnimSubsystem Function SetRawData ***********************************

// ********** Begin Class UVRM4U_AnimSubsystem *****************************************************
void UVRM4U_AnimSubsystem::StaticRegisterNativesUVRM4U_AnimSubsystem()
{
	UClass* Class = UVRM4U_AnimSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Clear", &UVRM4U_AnimSubsystem::execClear },
		{ "GetBoneByIndex", &UVRM4U_AnimSubsystem::execGetBoneByIndex },
		{ "GetBoneByPort", &UVRM4U_AnimSubsystem::execGetBoneByPort },
		{ "GetRawdataByIndex", &UVRM4U_AnimSubsystem::execGetRawdataByIndex },
		{ "GetRawdataByPort", &UVRM4U_AnimSubsystem::execGetRawdataByPort },
		{ "SetBoneTransform", &UVRM4U_AnimSubsystem::execSetBoneTransform },
		{ "SetRawData", &UVRM4U_AnimSubsystem::execSetRawData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVRM4U_AnimSubsystem;
UClass* UVRM4U_AnimSubsystem::GetPrivateStaticClass()
{
	using TClass = UVRM4U_AnimSubsystem;
	if (!Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VRM4U_AnimSubsystem"),
			Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.InnerSingleton,
			StaticRegisterNativesUVRM4U_AnimSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem_NoRegister()
{
	return UVRM4U_AnimSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4U_AnimSubsystem.h" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear, "Clear" }, // 1969232519
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex, "GetBoneByIndex" }, // 4068066477
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort, "GetBoneByPort" }, // 734005642
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex, "GetRawdataByIndex" }, // 2145961197
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort, "GetRawdataByPort" }, // 730046329
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform, "SetBoneTransform" }, // 2172079040
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData, "SetRawData" }, // 2630192673
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4U_AnimSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::ClassParams = {
	&UVRM4U_AnimSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem()
{
	if (!Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.OuterSingleton, Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.OuterSingleton;
}
UVRM4U_AnimSubsystem::UVRM4U_AnimSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4U_AnimSubsystem);
UVRM4U_AnimSubsystem::~UVRM4U_AnimSubsystem() {}
// ********** End Class UVRM4U_AnimSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h__Script_VRM4U_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVrmTransformData::StaticStruct, Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewStructOps, TEXT("VrmTransformData"), &Z_Registration_Info_UScriptStruct_FVrmTransformData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmTransformData), 2102125985U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRM4U_AnimSubsystem, UVRM4U_AnimSubsystem::StaticClass, TEXT("UVRM4U_AnimSubsystem"), &Z_Registration_Info_UClass_UVRM4U_AnimSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRM4U_AnimSubsystem), 2429168824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h__Script_VRM4U_2856080598(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h__Script_VRM4U_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h__Script_VRM4U_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h__Script_VRM4U_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h__Script_VRM4U_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
