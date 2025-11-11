// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporterFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVRM4UImporterFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVRM4UImporterFactory();
VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVRM4UImporterFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVRM4UImporterFactory ****************************************************
void UVRM4UImporterFactory::StaticRegisterNativesUVRM4UImporterFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVRM4UImporterFactory;
UClass* UVRM4UImporterFactory::GetPrivateStaticClass()
{
	using TClass = UVRM4UImporterFactory;
	if (!Z_Registration_Info_UClass_UVRM4UImporterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VRM4UImporterFactory"),
			Z_Registration_Info_UClass_UVRM4UImporterFactory.InnerSingleton,
			StaticRegisterNativesUVRM4UImporterFactory,
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
	return Z_Registration_Info_UClass_UVRM4UImporterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVRM4UImporterFactory_NoRegister()
{
	return UVRM4UImporterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVRM4UImporterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4UImporterFactory.h" },
		{ "ModuleRelativePath", "Private/VRM4UImporterFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4UImporterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVRM4UImporterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4UImporterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRM4UImporterFactory_Statics::ClassParams = {
	&UVRM4UImporterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4UImporterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVRM4UImporterFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVRM4UImporterFactory()
{
	if (!Z_Registration_Info_UClass_UVRM4UImporterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRM4UImporterFactory.OuterSingleton, Z_Construct_UClass_UVRM4UImporterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVRM4UImporterFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4UImporterFactory);
UVRM4UImporterFactory::~UVRM4UImporterFactory() {}
// ********** End Class UVRM4UImporterFactory ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VRM4UImporterFactory_h__Script_VRM4UImporter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVRM4UImporterFactory, UVRM4UImporterFactory::StaticClass, TEXT("UVRM4UImporterFactory"), &Z_Registration_Info_UClass_UVRM4UImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRM4UImporterFactory), 423653396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VRM4UImporterFactory_h__Script_VRM4UImporter_3942291011(TEXT("/Script/VRM4UImporter"),
	Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VRM4UImporterFactory_h__Script_VRM4UImporter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Project_FuckingCrashAction_Main_Plugins_VRM4U_Source_VRM4UImporter_Private_VRM4UImporterFactory_h__Script_VRM4UImporter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
