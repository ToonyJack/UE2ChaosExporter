// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE2ChaosExporter/Public/JsonData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UE2CHAOSEXPORTER_API UClass* Z_Construct_UClass_UJsonData();
	UE2CHAOSEXPORTER_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE2ChaosExporter();
// End Cross Module References
	void UJsonData::StaticRegisterNativesUJsonData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJsonData);
	UClass* Z_Construct_UClass_UJsonData_NoRegister()
	{
		return UJsonData::StaticClass();
	}
	struct Z_Construct_UClass_UJsonData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE2ChaosExporter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "JsonData.h" },
		{ "ModuleRelativePath", "Public/JsonData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJsonData_Statics::ClassParams = {
		&UJsonData::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonData_Statics::Class_MetaDataParams), Z_Construct_UClass_UJsonData_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UJsonData()
	{
		if (!Z_Registration_Info_UClass_UJsonData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJsonData.OuterSingleton, Z_Construct_UClass_UJsonData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJsonData.OuterSingleton;
	}
	template<> UE2CHAOSEXPORTER_API UClass* StaticClass<UJsonData>()
	{
		return UJsonData::StaticClass();
	}
	UJsonData::UJsonData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonData);
	UJsonData::~UJsonData() {}
	struct Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_JsonData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_JsonData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJsonData, UJsonData::StaticClass, TEXT("UJsonData"), &Z_Registration_Info_UClass_UJsonData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJsonData), 1177207763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_JsonData_h_2046632158(TEXT("/Script/UE2ChaosExporter"),
		Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_JsonData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_JsonData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
