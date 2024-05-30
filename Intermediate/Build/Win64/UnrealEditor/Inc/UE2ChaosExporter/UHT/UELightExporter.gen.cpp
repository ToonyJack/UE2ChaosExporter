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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECastRayTracedShadow();
	UE2CHAOSEXPORTER_API UClass* Z_Construct_UClass_UUELightData();
	UE2CHAOSEXPORTER_API UClass* Z_Construct_UClass_UUELightData_NoRegister();
	UE2CHAOSEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FLightBaseParameters();
	UPackage* Z_Construct_UPackage__Script_UE2ChaosExporter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightBaseParameters;
class UScriptStruct* FLightBaseParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightBaseParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightBaseParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightBaseParameters, (UObject*)Z_Construct_UPackage__Script_UE2ChaosExporter(), TEXT("LightBaseParameters"));
	}
	return Z_Registration_Info_UScriptStruct_LightBaseParameters.OuterSingleton;
}
template<> UE2CHAOSEXPORTER_API UScriptStruct* StaticStruct<FLightBaseParameters>()
{
	return FLightBaseParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLightBaseParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsWorld_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bAffectsWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastStaticShadows_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CastStaticShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastDynamicShadows_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CastDynamicShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTranslucentLighting_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bAffectTranslucentLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastVolumetricShadow_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bCastVolumetricShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastDeepShadow_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bCastDeepShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastRaytracedShadow_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CastRaytracedShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectReflection_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bAffectReflection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectGlobalIllumination_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_bAffectGlobalIllumination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeepShadowLayerDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeepShadowLayerDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerPixel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Common Light Parameter Struct\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nCommon Light Parameter Struct\n</summary>" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightBaseParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_Intensity_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_Intensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_LightColor_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_LightColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectsWorld_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectsWorld = { "bAffectsWorld", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, bAffectsWorld), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectsWorld_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectsWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastShadows_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, CastShadows), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastShadows_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastShadows_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastStaticShadows_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastStaticShadows = { "CastStaticShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, CastStaticShadows), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastStaticShadows_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastStaticShadows_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastDynamicShadows_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastDynamicShadows = { "CastDynamicShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, CastDynamicShadows), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastDynamicShadows_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastDynamicShadows_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectTranslucentLighting_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectTranslucentLighting = { "bAffectTranslucentLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, bAffectTranslucentLighting), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectTranslucentLighting_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectTranslucentLighting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bTransmission_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bTransmission = { "bTransmission", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, bTransmission), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bTransmission_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bTransmission_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastVolumetricShadow_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastVolumetricShadow = { "bCastVolumetricShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, bCastVolumetricShadow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastVolumetricShadow_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastVolumetricShadow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastDeepShadow_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastDeepShadow = { "bCastDeepShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, bCastDeepShadow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastDeepShadow_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastDeepShadow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastRaytracedShadow_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastRaytracedShadow = { "CastRaytracedShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, CastRaytracedShadow), Z_Construct_UEnum_Engine_ECastRayTracedShadow, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastRaytracedShadow_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastRaytracedShadow_MetaData) }; // 1032894229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectReflection_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectReflection = { "bAffectReflection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, bAffectReflection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectReflection_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectReflection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectGlobalIllumination_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectGlobalIllumination = { "bAffectGlobalIllumination", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, bAffectGlobalIllumination), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectGlobalIllumination_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectGlobalIllumination_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_DeepShadowLayerDistribution_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_DeepShadowLayerDistribution = { "DeepShadowLayerDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, DeepShadowLayerDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_DeepShadowLayerDistribution_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_DeepShadowLayerDistribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, IndirectLightingIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_IndirectLightingIntensity_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_IndirectLightingIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, VolumetricScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_VolumetricScatteringIntensity_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_VolumetricScatteringIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "LightBaseParameters" },
		{ "ModuleRelativePath", "Public/UELightExporter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightBaseParameters, SamplesPerPixel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_SamplesPerPixel_MetaData), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_SamplesPerPixel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightBaseParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectsWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastStaticShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastDynamicShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectTranslucentLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastVolumetricShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bCastDeepShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_CastRaytracedShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectReflection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_bAffectGlobalIllumination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_DeepShadowLayerDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_IndirectLightingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewProp_SamplesPerPixel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightBaseParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE2ChaosExporter,
		nullptr,
		&NewStructOps,
		"LightBaseParameters",
		Z_Construct_UScriptStruct_FLightBaseParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::PropPointers),
		sizeof(FLightBaseParameters),
		alignof(FLightBaseParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLightBaseParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightBaseParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLightBaseParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_LightBaseParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightBaseParameters.InnerSingleton, Z_Construct_UScriptStruct_FLightBaseParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LightBaseParameters.InnerSingleton;
	}
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ScriptStructInfo[] = {
		{ FLightBaseParameters::StaticStruct, Z_Construct_UScriptStruct_FLightBaseParameters_Statics::NewStructOps, TEXT("LightBaseParameters"), &Z_Registration_Info_UScriptStruct_LightBaseParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightBaseParameters), 3069845960U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUELightData, UUELightData::StaticClass, TEXT("UUELightData"), &Z_Registration_Info_UClass_UUELightData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUELightData), 2248535878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_2050003288(TEXT("/Script/UE2ChaosExporter"),
		Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEPlugins_Plugins_UE2ChaosExporter_Source_UE2ChaosExporter_Public_UELightExporter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
