// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE2ChaosExporter/Public/UELightExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUELightExporter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UE2CHAOSEXPORTER_API UClass* Z_Construct_UClass_UUELightData();
	UE2CHAOSEXPORTER_API UClass* Z_Construct_UClass_UUELightData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE2ChaosExporter();
// End Cross Module References
	void UUELightData::StaticRegisterNativesUUELightData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUELightData);
	UClass* Z_Construct_UClass_UUELightData_NoRegister()
	{
		return UUELightData::StaticClass();
	}
	struct Z_Construct_UClass_UUELightData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUELightData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE2ChaosExporter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUELightData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUELightData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UELightExporter.h" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUELightData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUELightData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUELightData_Statics::ClassParams = {
		&UUELightData::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUELightData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUELightData_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUELightData()
	{
		if (!Z_Registration_Info_UClass_UUELightData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUELightData.OuterSingleton, Z_Construct_UClass_UUELightData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUELightData.OuterSingleton;
	}
	template<> UE2CHAOSEXPORTER_API UClass* StaticClass<UUELightData>()
	{
		return UUELightData::StaticClass();
	}
	UUELightData::UUELightData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUELightData);
	UUELightData::~UUELightData() {}
	struct Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUELightData, UUELightData::StaticClass, TEXT("UUELightData"), &Z_Registration_Info_UClass_UUELightData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUELightData), 3876636537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_990780382(TEXT("/Script/UE2ChaosExporter"),
		Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
