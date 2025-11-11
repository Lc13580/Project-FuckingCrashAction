// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U_RenderSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVRM4U_RenderSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4URender();
VRM4URENDER_API UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem();
VRM4URENDER_API UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem_NoRegister();
VRM4URENDER_API UClass* Z_Construct_UClass_UVrmExtensionRimFilterData_NoRegister();
VRM4URENDER_API UEnum* Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVRM4U_CaptureSource ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRM4U_CaptureSource;
static UEnum* EVRM4U_CaptureSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVRM4U_CaptureSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVRM4U_CaptureSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource, (UObject*)Z_Construct_UPackage__Script_VRM4URender(), TEXT("EVRM4U_CaptureSource"));
	}
	return Z_Registration_Info_UEnum_EVRM4U_CaptureSource.OuterSingleton;
}
template<> VRM4URENDER_API UEnum* StaticEnum<EVRM4U_CaptureSource>()
{
	return EVRM4U_CaptureSource_StaticEnum();
}
struct Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ColorTextureOverlay.Name", "ColorTextureOverlay" },
		{ "ColorTexturePostOpaque.Name", "ColorTexturePostOpaque" },
		{ "CustomDepthTexture.Comment", "// Custom Depth / Stencil\n" },
		{ "CustomDepthTexture.Name", "CustomDepthTexture" },
		{ "CustomDepthTexture.ToolTip", "Custom Depth / Stencil" },
		{ "DepthTexture.Name", "DepthTexture" },
		{ "GBufferATexture.Comment", "// GBuffer\n" },
		{ "GBufferATexture.Name", "GBufferATexture" },
		{ "GBufferATexture.ToolTip", "GBuffer" },
		{ "GBufferBTexture.Name", "GBufferBTexture" },
		{ "GBufferCTexture.Name", "GBufferCTexture" },
		{ "GBufferDTexture.Name", "GBufferDTexture" },
		{ "GBufferETexture.Name", "GBufferETexture" },
		{ "GBufferFTexture.Name", "GBufferFTexture" },
		{ "GBufferVelocityTexture.Name", "GBufferVelocityTexture" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
		{ "NormalTexture.Name", "NormalTexture" },
		{ "SceneColorTextureOverlay.Name", "SceneColorTextureOverlay" },
		{ "SceneColorTexturePostOpaque.Comment", "//SmallDepthTexture,\n" },
		{ "SceneColorTexturePostOpaque.Name", "SceneColorTexturePostOpaque" },
		{ "SceneColorTexturePostOpaque.ToolTip", "SmallDepthTexture," },
		{ "SceneDepthTexture.Name", "SceneDepthTexture" },
		{ "ScreenSpaceAOTexture.Comment", "// SSAO\n" },
		{ "ScreenSpaceAOTexture.Name", "ScreenSpaceAOTexture" },
		{ "ScreenSpaceAOTexture.ToolTip", "SSAO" },
		{ "VelocityTexture.Name", "VelocityTexture" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ColorTexturePostOpaque", (int64)ColorTexturePostOpaque },
		{ "ColorTextureOverlay", (int64)ColorTextureOverlay },
		{ "DepthTexture", (int64)DepthTexture },
		{ "NormalTexture", (int64)NormalTexture },
		{ "VelocityTexture", (int64)VelocityTexture },
		{ "SceneColorTexturePostOpaque", (int64)SceneColorTexturePostOpaque },
		{ "SceneColorTextureOverlay", (int64)SceneColorTextureOverlay },
		{ "SceneDepthTexture", (int64)SceneDepthTexture },
		{ "GBufferATexture", (int64)GBufferATexture },
		{ "GBufferBTexture", (int64)GBufferBTexture },
		{ "GBufferCTexture", (int64)GBufferCTexture },
		{ "GBufferDTexture", (int64)GBufferDTexture },
		{ "GBufferETexture", (int64)GBufferETexture },
		{ "GBufferFTexture", (int64)GBufferFTexture },
		{ "GBufferVelocityTexture", (int64)GBufferVelocityTexture },
		{ "ScreenSpaceAOTexture", (int64)ScreenSpaceAOTexture },
		{ "CustomDepthTexture", (int64)CustomDepthTexture },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VRM4URender,
	nullptr,
	"EVRM4U_CaptureSource",
	"EVRM4U_CaptureSource",
	Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource()
{
	if (!Z_Registration_Info_UEnum_EVRM4U_CaptureSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRM4U_CaptureSource.InnerSingleton, Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVRM4U_CaptureSource.InnerSingleton;
}
// ********** End Enum EVRM4U_CaptureSource ********************************************************

// ********** Begin Class UVRM4U_RenderSubsystem Function AddCaptureTexture ************************
struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics
{
	struct VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms
	{
		UTextureRenderTarget2D* Texture;
		TEnumAsByte<EVRM4U_CaptureSource> CaptureSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::NewProp_CaptureSource = { "CaptureSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms, CaptureSource), Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource, METADATA_PARAMS(0, nullptr) }; // 778105896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::NewProp_CaptureSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "AddCaptureTexture", Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::VRM4U_RenderSubsystem_eventAddCaptureTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execAddCaptureTexture)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture);
	P_GET_PROPERTY(FByteProperty,Z_Param_CaptureSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCaptureTexture(Z_Param_Texture,EVRM4U_CaptureSource(Z_Param_CaptureSource));
	P_NATIVE_END;
}
// ********** End Class UVRM4U_RenderSubsystem Function AddCaptureTexture **************************

// ********** Begin Class UVRM4U_RenderSubsystem Function AddRimFilterData *************************
struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics
{
	struct VRM4U_RenderSubsystem_eventAddRimFilterData_Parms
	{
		UVrmExtensionRimFilterData* FilterData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::NewProp_FilterData = { "FilterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventAddRimFilterData_Parms, FilterData), Z_Construct_UClass_UVrmExtensionRimFilterData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::NewProp_FilterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "AddRimFilterData", Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::VRM4U_RenderSubsystem_eventAddRimFilterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::VRM4U_RenderSubsystem_eventAddRimFilterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execAddRimFilterData)
{
	P_GET_OBJECT(UVrmExtensionRimFilterData,Z_Param_FilterData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddRimFilterData(Z_Param_FilterData);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_RenderSubsystem Function AddRimFilterData ***************************

// ********** Begin Class UVRM4U_RenderSubsystem Function RemoveAllCaptureTexture ******************
struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "RemoveAllCaptureTexture", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execRemoveAllCaptureTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllCaptureTexture();
	P_NATIVE_END;
}
// ********** End Class UVRM4U_RenderSubsystem Function RemoveAllCaptureTexture ********************

// ********** Begin Class UVRM4U_RenderSubsystem Function RemoveCaptureTexture *********************
struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics
{
	struct VRM4U_RenderSubsystem_eventRemoveCaptureTexture_Parms
	{
		UTextureRenderTarget2D* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventRemoveCaptureTexture_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "RemoveCaptureTexture", Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::VRM4U_RenderSubsystem_eventRemoveCaptureTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::VRM4U_RenderSubsystem_eventRemoveCaptureTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execRemoveCaptureTexture)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCaptureTexture(Z_Param_Texture);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_RenderSubsystem Function RemoveCaptureTexture ***********************

// ********** Begin Class UVRM4U_RenderSubsystem Function RemoveRimFilterData **********************
struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics
{
	struct VRM4U_RenderSubsystem_eventRemoveRimFilterData_Parms
	{
		UVrmExtensionRimFilterData* FilterData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::NewProp_FilterData = { "FilterData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventRemoveRimFilterData_Parms, FilterData), Z_Construct_UClass_UVrmExtensionRimFilterData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::NewProp_FilterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "RemoveRimFilterData", Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::VRM4U_RenderSubsystem_eventRemoveRimFilterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::VRM4U_RenderSubsystem_eventRemoveRimFilterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execRemoveRimFilterData)
{
	P_GET_OBJECT(UVrmExtensionRimFilterData,Z_Param_FilterData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveRimFilterData(Z_Param_FilterData);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_RenderSubsystem Function RemoveRimFilterData ************************

// ********** Begin Class UVRM4U_RenderSubsystem Function RemoveRimFilterDataByPriority ************
struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics
{
	struct VRM4U_RenderSubsystem_eventRemoveRimFilterDataByPriority_Parms
	{
		int32 Priotiry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_Priotiry", "-1" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priotiry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::NewProp_Priotiry = { "Priotiry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VRM4U_RenderSubsystem_eventRemoveRimFilterDataByPriority_Parms, Priotiry), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::NewProp_Priotiry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "RemoveRimFilterDataByPriority", Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::VRM4U_RenderSubsystem_eventRemoveRimFilterDataByPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::VRM4U_RenderSubsystem_eventRemoveRimFilterDataByPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execRemoveRimFilterDataByPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Priotiry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveRimFilterDataByPriority(Z_Param_Priotiry);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_RenderSubsystem Function RemoveRimFilterDataByPriority **************

// ********** Begin Class UVRM4U_RenderSubsystem Function ResetSceneTextureExtentHistory ***********
struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "ResetSceneTextureExtentHistory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execResetSceneTextureExtentHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSceneTextureExtentHistory();
	P_NATIVE_END;
}
// ********** End Class UVRM4U_RenderSubsystem Function ResetSceneTextureExtentHistory *************

// ********** Begin Class UVRM4U_RenderSubsystem Function SetViewExtension *************************
struct Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics
{
	struct VRM4U_RenderSubsystem_eventSetViewExtension_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((VRM4U_RenderSubsystem_eventSetViewExtension_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VRM4U_RenderSubsystem_eventSetViewExtension_Parms), &Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVRM4U_RenderSubsystem, nullptr, "SetViewExtension", Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::VRM4U_RenderSubsystem_eventSetViewExtension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::VRM4U_RenderSubsystem_eventSetViewExtension_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVRM4U_RenderSubsystem::execSetViewExtension)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewExtension(Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class UVRM4U_RenderSubsystem Function SetViewExtension ***************************

// ********** Begin Class UVRM4U_RenderSubsystem ***************************************************
void UVRM4U_RenderSubsystem::StaticRegisterNativesUVRM4U_RenderSubsystem()
{
	UClass* Class = UVRM4U_RenderSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCaptureTexture", &UVRM4U_RenderSubsystem::execAddCaptureTexture },
		{ "AddRimFilterData", &UVRM4U_RenderSubsystem::execAddRimFilterData },
		{ "RemoveAllCaptureTexture", &UVRM4U_RenderSubsystem::execRemoveAllCaptureTexture },
		{ "RemoveCaptureTexture", &UVRM4U_RenderSubsystem::execRemoveCaptureTexture },
		{ "RemoveRimFilterData", &UVRM4U_RenderSubsystem::execRemoveRimFilterData },
		{ "RemoveRimFilterDataByPriority", &UVRM4U_RenderSubsystem::execRemoveRimFilterDataByPriority },
		{ "ResetSceneTextureExtentHistory", &UVRM4U_RenderSubsystem::execResetSceneTextureExtentHistory },
		{ "SetViewExtension", &UVRM4U_RenderSubsystem::execSetViewExtension },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVRM4U_RenderSubsystem;
UClass* UVRM4U_RenderSubsystem::GetPrivateStaticClass()
{
	using TClass = UVRM4U_RenderSubsystem;
	if (!Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VRM4U_RenderSubsystem"),
			Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.InnerSingleton,
			StaticRegisterNativesUVRM4U_RenderSubsystem,
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
	return Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem_NoRegister()
{
	return UVRM4U_RenderSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4U_RenderSubsystem.h" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureList_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_RenderSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureList_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureList_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CaptureList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddCaptureTexture, "AddCaptureTexture" }, // 3251739354
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_AddRimFilterData, "AddRimFilterData" }, // 1078887517
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveAllCaptureTexture, "RemoveAllCaptureTexture" }, // 2840671149
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveCaptureTexture, "RemoveCaptureTexture" }, // 1088787533
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterData, "RemoveRimFilterData" }, // 114653603
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_RemoveRimFilterDataByPriority, "RemoveRimFilterDataByPriority" }, // 4253089518
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_ResetSceneTextureExtentHistory, "ResetSceneTextureExtentHistory" }, // 3911708477
		{ &Z_Construct_UFunction_UVRM4U_RenderSubsystem_SetViewExtension, "SetViewExtension" }, // 2227305398
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4U_RenderSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::NewProp_CaptureList_ValueProp = { "CaptureList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_VRM4URender_EVRM4U_CaptureSource, METADATA_PARAMS(0, nullptr) }; // 778105896
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::NewProp_CaptureList_Key_KeyProp = { "CaptureList_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::NewProp_CaptureList = { "CaptureList", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVRM4U_RenderSubsystem, CaptureList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureList_MetaData), NewProp_CaptureList_MetaData) }; // 778105896
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::NewProp_CaptureList_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::NewProp_CaptureList_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::NewProp_CaptureList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4URender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::ClassParams = {
	&UVRM4U_RenderSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRM4U_RenderSubsystem()
{
	if (!Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.OuterSingleton, Z_Construct_UClass_UVRM4U_RenderSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRM4U_RenderSubsystem.OuterSingleton;
}
UVRM4U_RenderSubsystem::UVRM4U_RenderSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4U_RenderSubsystem);
UVRM4U_RenderSubsystem::~UVRM4U_RenderSubsystem() {}
// ********** End Class UVRM4U_RenderSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h__Script_VRM4URender_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVRM4U_CaptureSource_StaticEnum, TEXT("EVRM4U_CaptureSource"), &Z_Registration_Info_UEnum_EVRM4U_CaptureSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 778105896U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRM4U_RenderSubsystem, UVRM4U_RenderSubsystem::StaticClass, TEXT("UVRM4U_RenderSubsystem"), &Z_Registration_Info_UClass_UVRM4U_RenderSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRM4U_RenderSubsystem), 2170335939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h__Script_VRM4URender_42407119(TEXT("/Script/VRM4URender"),
	Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h__Script_VRM4URender_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h__Script_VRM4URender_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h__Script_VRM4URender_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4URender_Public_VRM4U_RenderSubsystem_h__Script_VRM4URender_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
