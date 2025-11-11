// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_VrmQuestHandBone.h"
#include "AnimNode_VrmQuestHandBone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmQuestHandBone() {}

// ********** Begin Cross Module References ********************************************************
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimGraphNode_VrmQuestHandBone ******************************************
void UAnimGraphNode_VrmQuestHandBone::StaticRegisterNativesUAnimGraphNode_VrmQuestHandBone()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimGraphNode_VrmQuestHandBone;
UClass* UAnimGraphNode_VrmQuestHandBone::GetPrivateStaticClass()
{
	using TClass = UAnimGraphNode_VrmQuestHandBone;
	if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmQuestHandBone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimGraphNode_VrmQuestHandBone"),
			Z_Registration_Info_UClass_UAnimGraphNode_VrmQuestHandBone.InnerSingleton,
			StaticRegisterNativesUAnimGraphNode_VrmQuestHandBone,
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
	return Z_Registration_Info_UClass_UAnimGraphNode_VrmQuestHandBone.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_NoRegister()
{
	return UAnimGraphNode_VrmQuestHandBone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmQuestHandBone.h" },
		{ "Keywords", "VRM4U" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmQuestHandBone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmQuestHandBone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmQuestHandBone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_VrmQuestHandBone, Node), Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 973209652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::ClassParams = {
	&UAnimGraphNode_VrmQuestHandBone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmQuestHandBone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmQuestHandBone.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_VrmQuestHandBone.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmQuestHandBone);
UAnimGraphNode_VrmQuestHandBone::~UAnimGraphNode_VrmQuestHandBone() {}
// ********** End Class UAnimGraphNode_VrmQuestHandBone ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmQuestHandBone_h__Script_VRM4UImporter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone, UAnimGraphNode_VrmQuestHandBone::StaticClass, TEXT("UAnimGraphNode_VrmQuestHandBone"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmQuestHandBone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmQuestHandBone), 877522757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmQuestHandBone_h__Script_VRM4UImporter_3863072812(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmQuestHandBone_h__Script_VRM4UImporter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmQuestHandBone_h__Script_VRM4UImporter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
