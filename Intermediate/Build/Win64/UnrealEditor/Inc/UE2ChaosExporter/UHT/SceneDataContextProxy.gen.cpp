// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE2ChaosExporter/Public/SceneDataContextProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneDataContextProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UE2CHAOSEXPORTER_API UClass* Z_Construct_UClass_USceneDataContextProxy();
	UE2CHAOSEXPORTER_API UClass* Z_Construct_UClass_USceneDataContextProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE2ChaosExporter();
// End Cross Module References
	void USceneDataContextProxy::StaticRegisterNativesUSceneDataContextProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneDataContextProxy);
	UClass* Z_Construct_UClass_USceneDataContextProxy_NoRegister()
	{
		return USceneDataContextProxy::StaticClass();
	}
	struct Z_Construct_UClass_USceneDataContextProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneDataContextProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE2ChaosExporter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneDataContextProxy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneDataContextProxy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SceneDataContextProxy.h" },
		{ "ModuleRelativePath", "Public/SceneDataContextProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneDataContextProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneDataContextProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneDataContextProxy_Statics::ClassParams = {
		&USceneDataContextProxy::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USceneDataContextProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_USceneDataContextProxy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USceneDataContextProxy()
	{
		if (!Z_Registration_Info_UClass_USceneDataContextProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneDataContextProxy.OuterSingleton, Z_Construct_UClass_USceneDataContextProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneDataContextProxy.OuterSingleton;
	}
	template<> UE2CHAOSEXPORTER_API UClass* StaticClass<USceneDataContextProxy>()
	{
		return USceneDataContextProxy::StaticClass();
	}
	USceneDataContextProxy::USceneDataContextProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneDataContextProxy);
	USceneDataContextProxy::~USceneDataContextProxy() {}
	struct Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_SceneDataContextProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_SceneDataContextProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneDataContextProxy, USceneDataContextProxy::StaticClass, TEXT("USceneDataContextProxy"), &Z_Registration_Info_UClass_USceneDataContextProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneDataContextProxy), 2311358971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_SceneDataContextProxy_h_964970944(TEXT("/Script/UE2ChaosExporter"),
		Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_SceneDataContextProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_SceneDataContextProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS