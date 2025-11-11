// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrmPoseableMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVrmPoseableMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrmPoseableMeshComponent();
VRM4U_API UClass* Z_Construct_UClass_UVrmPoseableMeshComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVrmPoseableMeshComponent Function Init **********************************
static FName NAME_UVrmPoseableMeshComponent_Init = FName(TEXT("Init"));
void UVrmPoseableMeshComponent::Init()
{
	UFunction* Func = FindFunctionChecked(NAME_UVrmPoseableMeshComponent_Init);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVrmPoseableMeshComponent, nullptr, "Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVrmPoseableMeshComponent_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmPoseableMeshComponent_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UVrmPoseableMeshComponent Function Init ************************************

// ********** Begin Class UVrmPoseableMeshComponent Function VRMCopyPoseAndMorphFromSkeletalComponent 
struct Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics
{
	struct VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms
	{
		USkeletalMeshComponent* InComponentToCopy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|PoseableMesh" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponentToCopy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponentToCopy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy = { "InComponentToCopy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms, InComponentToCopy), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponentToCopy_MetaData), NewProp_InComponentToCopy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::NewProp_InComponentToCopy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVrmPoseableMeshComponent, nullptr, "VRMCopyPoseAndMorphFromSkeletalComponent", Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::VrmPoseableMeshComponent_eventVRMCopyPoseAndMorphFromSkeletalComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVrmPoseableMeshComponent::execVRMCopyPoseAndMorphFromSkeletalComponent)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InComponentToCopy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->VRMCopyPoseAndMorphFromSkeletalComponent(Z_Param_InComponentToCopy);
	P_NATIVE_END;
}
// ********** End Class UVrmPoseableMeshComponent Function VRMCopyPoseAndMorphFromSkeletalComponent 

// ********** Begin Class UVrmPoseableMeshComponent ************************************************
void UVrmPoseableMeshComponent::StaticRegisterNativesUVrmPoseableMeshComponent()
{
	UClass* Class = UVrmPoseableMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "VRMCopyPoseAndMorphFromSkeletalComponent", &UVrmPoseableMeshComponent::execVRMCopyPoseAndMorphFromSkeletalComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVrmPoseableMeshComponent;
UClass* UVrmPoseableMeshComponent::GetPrivateStaticClass()
{
	using TClass = UVrmPoseableMeshComponent;
	if (!Z_Registration_Info_UClass_UVrmPoseableMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VrmPoseableMeshComponent"),
			Z_Registration_Info_UClass_UVrmPoseableMeshComponent.InnerSingleton,
			StaticRegisterNativesUVrmPoseableMeshComponent,
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
	return Z_Registration_Info_UClass_UVrmPoseableMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVrmPoseableMeshComponent_NoRegister()
{
	return UVrmPoseableMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVrmPoseableMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "VrmPoseableMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseParentAsLeader_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmPoseableMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseParentAsLeader_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParentAsLeader;
	static void NewProp_bUseDefaultMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmPoseableMeshComponent_Init, "Init" }, // 3163475358
		{ &Z_Construct_UFunction_UVrmPoseableMeshComponent_VRMCopyPoseAndMorphFromSkeletalComponent, "VRMCopyPoseAndMorphFromSkeletalComponent" }, // 667236271
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmPoseableMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader_SetBit(void* Obj)
{
	((UVrmPoseableMeshComponent*)Obj)->bUseParentAsLeader = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader = { "bUseParentAsLeader", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmPoseableMeshComponent), &Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseParentAsLeader_MetaData), NewProp_bUseParentAsLeader_MetaData) };
void Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial_SetBit(void* Obj)
{
	((UVrmPoseableMeshComponent*)Obj)->bUseDefaultMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial = { "bUseDefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVrmPoseableMeshComponent), &Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultMaterial_MetaData), NewProp_bUseDefaultMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseParentAsLeader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::NewProp_bUseDefaultMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::ClassParams = {
	&UVrmPoseableMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrmPoseableMeshComponent()
{
	if (!Z_Registration_Info_UClass_UVrmPoseableMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmPoseableMeshComponent.OuterSingleton, Z_Construct_UClass_UVrmPoseableMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrmPoseableMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmPoseableMeshComponent);
UVrmPoseableMeshComponent::~UVrmPoseableMeshComponent() {}
// ********** End Class UVrmPoseableMeshComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h__Script_VRM4U_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrmPoseableMeshComponent, UVrmPoseableMeshComponent::StaticClass, TEXT("UVrmPoseableMeshComponent"), &Z_Registration_Info_UClass_UVrmPoseableMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmPoseableMeshComponent), 3305589614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h__Script_VRM4U_1340699864(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h__Script_VRM4U_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4U_Public_VrmPoseableMeshComponent_h__Script_VRM4U_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
