// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonData.h"
#include <PropertyID.h>
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonReader.h"

TArray<uint32> FPropertyID::propertyID_array;

TMap<FString, FString> FLightJsonData::ConvertLightBaseDatatoJsonData(ULightComponent* light)
{
	TMap<FString, FString> light_base_map;

	FLightBaseParameters* light_base_params = new FLightBaseParameters();
	light_base_params = light_base_params->GetLightBaseParameters(light);

	light_base_map.Add("Intansity", FCommonImpl::FromFloat(light_base_params->Intensity));
	light_base_map.Add("LightColor", FCommonImpl::FromColor(light_base_params->LightColor));
	light_base_map.Add("bAffectsWorld", FCommonImpl::FromUInt32(light_base_params->bAffectsWorld));
	light_base_map.Add("CastShadows", FCommonImpl::FromUInt32(light_base_params->CastShadows));
	light_base_map.Add("CastStaticShadows", FCommonImpl::FromUInt32(light_base_params->CastStaticShadows));
	light_base_map.Add("CastDynamicShadows", FCommonImpl::FromUInt32(light_base_params->CastDynamicShadows));
	light_base_map.Add("bAffectTranslucentLighting", FCommonImpl::FromUInt32(light_base_params->bAffectTranslucentLighting));
	light_base_map.Add("bTransmission", FCommonImpl::FromUInt32(light_base_params->bTransmission));
	light_base_map.Add("bCastVolumetricShadow", FCommonImpl::FromUInt32(light_base_params->bCastVolumetricShadow));
	light_base_map.Add("bCastDeepShadow", FCommonImpl::FromUInt32(light_base_params->bCastDeepShadow));
	light_base_map.Add("bAffectGlobalIllumination", FCommonImpl::FromUInt32(light_base_params->bAffectGlobalIllumination));
	light_base_map.Add("bAffectReflection", FCommonImpl::FromUInt32(light_base_params->bAffectReflection));
	light_base_map.Add("DeepShadowLayerDistribution", FCommonImpl::FromFloat(light_base_params->DeepShadowLayerDistribution));
	light_base_map.Add("IndirectLightingIntensity", FCommonImpl::FromFloat(light_base_params->IndirectLightingIntensity));
	light_base_map.Add("VolumetricScatteringIntensity", FCommonImpl::FromFloat(light_base_params->VolumetricScatteringIntensity));
	light_base_map.Add("SamplesPerPixel", FCommonImpl::FromInt(light_base_params->SamplesPerPixel));

	return light_base_map;
}

TMap<FString, FString> FLightJsonData::ConvertLightDatatoJsonData(ULightComponent* light)
{
	TMap<FString, FString> light_map = ConvertLightBaseDatatoJsonData(light);

	FLightParameters* light_params = new FLightParameters();
	light_params = light_params->GetLightParameters(light);

	light_map.Add("bUseTemperature", FCommonImpl::FromUInt32(light_params->bUseTemperature));
	light_map.Add("Temperature", FCommonImpl::FromFloat(light_params->Temperature));
	light_map.Add("SpecularScale", FCommonImpl::FromFloat(light_params->SpecularScale));
	light_map.Add("MaxDrawDistance", FCommonImpl::FromFloat(light_params->MaxDrawDistance));
	light_map.Add("MaxDistanceFadeRange", FCommonImpl::FromFloat(light_params->MaxDistanceFadeRange));
	light_map.Add("ShadowResolutionScale", FCommonImpl::FromFloat(light_params->ShadowResolutionScale));
	light_map.Add("ShadowBias", FCommonImpl::FromFloat(light_params->ShadowBias));
	light_map.Add("ShadowSlopeBias", FCommonImpl::FromFloat(light_params->ShadowSlopeBias));
	light_map.Add("ShadowSharpen", FCommonImpl::FromFloat(light_params->ShadowSharpen));
	light_map.Add("ContactShadowLength", FCommonImpl::FromFloat(light_params->ContactShadowLength));
	light_map.Add("ContactShadowCastingIntensity", FCommonImpl::FromFloat(light_params->ContactShadowCastingIntensity));
	light_map.Add("ContactShadowNonCastingIntensity", FCommonImpl::FromFloat(light_params->ContactShadowNonCastingIntensity));
	light_map.Add("ContactShadowLengthInWS", FCommonImpl::FromUInt32(light_params->ContactShadowLengthInWS));
	light_map.Add("CastTranslucentShadows", FCommonImpl::FromUInt32(light_params->CastTranslucentShadows));
	light_map.Add("bCastShadowsFromCinematicObjectsOnly", FCommonImpl::FromUInt32(light_params->bCastShadowsFromCinematicObjectsOnly));
	light_map.Add("bForceCachedShadowsForMovablePrimitives", FCommonImpl::FromUInt32(light_params->bForceCachedShadowsForMovablePrimitives));
	light_map.Add("LightingChannels", FCommonImpl::FromStruct(light_params->LightingChannels));
	//light_map.Add("LightFunctionMaterial", FCommonImpl::FromUInt32(light_params->LightFunctionMaterial));
	//light_map.Add("StashedLightFunctionMaterial", FCommonImpl::FromUInt32(light_params->StashedLightFunctionMaterial));
	light_map.Add("LightFunctionScale", FCommonImpl::FromVector(light_params->LightFunctionScale));
	//light_map.Add("IESTexture", FCommonImpl::FromUInt32(light_params->IESTexture));
	light_map.Add("bUseIESBrightness", FCommonImpl::FromUInt32(light_params->bUseIESBrightness));
	light_map.Add("IESBrightnessScale", FCommonImpl::FromFloat(light_params->IESBrightnessScale));
	light_map.Add("LightFunctionFadeDistance", FCommonImpl::FromFloat(light_params->LightFunctionFadeDistance));
	light_map.Add("DisabledBrightness", FCommonImpl::FromFloat(light_params->DisabledBrightness));
	light_map.Add("bEnableLightShaftBloom", FCommonImpl::FromUInt32(light_params->bEnableLightShaftBloom));
	light_map.Add("BloomScale", FCommonImpl::FromFloat(light_params->BloomScale));
	light_map.Add("BloomThreshold", FCommonImpl::FromFloat(light_params->BloomThreshold));
	light_map.Add("BloomMaxBrightness", FCommonImpl::FromFloat(light_params->BloomMaxBrightness));
	light_map.Add("BloomTint", FCommonImpl::FromColor(light_params->BloomTint));
	light_map.Add("bUseRayTracedDistanceFieldShadows", FCommonImpl::FromBool(light_params->bUseRayTracedDistanceFieldShadows));
	light_map.Add("bUseTemperature", FCommonImpl::FromFloat(light_params->bUseTemperature));

	return light_map;
}

TMap<FString, FString> FLightJsonData::ConvertLocalLightDatatoJsonData(ULocalLightComponent* light)
{
	TMap<FString, FString> local_light_map = ConvertLightBaseDatatoJsonData(light);

	FLocalLightParameters* local_light_params = new FLocalLightParameters();
	local_light_params = local_light_params->GetLocalLightParameters(light);

	local_light_map.Add("IntensityUnits", FCommonImpl::FromLightUnits(local_light_params->IntensityUnits));
	local_light_map.Add("InverseExposureBlend", FCommonImpl::FromFloat(local_light_params->InverseExposureBlend));
	local_light_map.Add("AttenuationRadius", FCommonImpl::FromFloat(local_light_params->AttenuationRadius));

	return local_light_map;
}

FString FLightJsonData::ConvertDirectionalLightDatatoJsonData(UDirectionalLightComponent* light)
{
	TMap<FString, FString> directional_light_map = ConvertLightDatatoJsonData(light);

	FDirectionalLightParameters* directional_light_params = new FDirectionalLightParameters();
	directional_light_params = directional_light_params->GetDirectionalLightParameters(light);

	directional_light_map.Add("LightSourceAngle", FCommonImpl::FromFloat(directional_light_params->LightSourceAngle));
	directional_light_map.Add("LightSourceSoftAngle", FCommonImpl::FromFloat(directional_light_params->LightSourceSoftAngle));
	directional_light_map.Add("ShadowCascadeBiasDistribution", FCommonImpl::FromFloat(directional_light_params->ShadowCascadeBiasDistribution));
	directional_light_map.Add("bEnableLightShaftOcclusion", FCommonImpl::FromUInt32(directional_light_params->bEnableLightShaftOcclusion));
	directional_light_map.Add("OcclusionMaskDarkness", FCommonImpl::FromFloat(directional_light_params->OcclusionMaskDarkness));
	directional_light_map.Add("OcclusionDepthRange", FCommonImpl::FromFloat(directional_light_params->OcclusionDepthRange));
	directional_light_map.Add("LightShaftOverrideDirection", FCommonImpl::FromVector(directional_light_params->LightShaftOverrideDirection));
	directional_light_map.Add("DynamicShadowDistanceMovableLight", FCommonImpl::FromFloat(directional_light_params->DynamicShadowDistanceMovableLight));
	directional_light_map.Add("DynamicShadowDistanceStationaryLight", FCommonImpl::FromFloat(directional_light_params->DynamicShadowDistanceStationaryLight));
	directional_light_map.Add("DynamicShadowCascades", FCommonImpl::FromInt32(directional_light_params->DynamicShadowCascades));
	directional_light_map.Add("CascadeDistributionExponent", FCommonImpl::FromFloat(directional_light_params->CascadeDistributionExponent));
	directional_light_map.Add("CascadeTransitionFraction", FCommonImpl::FromFloat(directional_light_params->CascadeTransitionFraction));
	directional_light_map.Add("ShadowDistanceFadeoutFraction", FCommonImpl::FromFloat(directional_light_params->ShadowDistanceFadeoutFraction));
	directional_light_map.Add("bUseInsetShadowsForMovableObjects", FCommonImpl::FromUInt32(directional_light_params->bUseInsetShadowsForMovableObjects));
	directional_light_map.Add("FarShadowCascadeCount", FCommonImpl::FromInt32(directional_light_params->FarShadowCascadeCount));
	directional_light_map.Add("FarShadowDistance", FCommonImpl::FromFloat(directional_light_params->FarShadowDistance));
	directional_light_map.Add("DistanceFieldShadowDistance", FCommonImpl::FromFloat(directional_light_params->DistanceFieldShadowDistance));
	directional_light_map.Add("ShadowSourceAngleFactor", FCommonImpl::FromFloat(directional_light_params->ShadowSourceAngleFactor));
	directional_light_map.Add("TraceDistance", FCommonImpl::FromFloat(directional_light_params->TraceDistance));
	directional_light_map.Add("bAtmosphereSunLight", FCommonImpl::FromUInt32(directional_light_params->bAtmosphereSunLight));
	directional_light_map.Add("AtmosphereSunLightIndex", FCommonImpl::FromInt32(directional_light_params->AtmosphereSunLightIndex));
	directional_light_map.Add("AtmosphereSunDiskColorScale", FCommonImpl::FromLinearColor(directional_light_params->AtmosphereSunDiskColorScale));
	directional_light_map.Add("bPerPixelAtmosphereTransmittance", FCommonImpl::FromUInt32(directional_light_params->bPerPixelAtmosphereTransmittance));
	directional_light_map.Add("bCastShadowsOnClouds", FCommonImpl::FromUInt32(directional_light_params->bCastShadowsOnClouds));
	directional_light_map.Add("bCastShadowsOnAtmosphere", FCommonImpl::FromUInt32(directional_light_params->bCastShadowsOnAtmosphere));
	directional_light_map.Add("bCastCloudShadows", FCommonImpl::FromUInt32(directional_light_params->bCastCloudShadows));
	directional_light_map.Add("CloudShadowStrength", FCommonImpl::FromFloat(directional_light_params->CloudShadowStrength));
	directional_light_map.Add("CloudShadowOnAtmosphereStrength", FCommonImpl::FromFloat(directional_light_params->CloudShadowOnAtmosphereStrength));
	directional_light_map.Add("CloudShadowOnSurfaceStrength", FCommonImpl::FromFloat(directional_light_params->CloudShadowOnSurfaceStrength));
	directional_light_map.Add("CloudShadowDepthBias", FCommonImpl::FromFloat(directional_light_params->CloudShadowDepthBias));
	directional_light_map.Add("CloudShadowExtent", FCommonImpl::FromFloat(directional_light_params->CloudShadowExtent));
	directional_light_map.Add("CloudShadowMapResolutionScale", FCommonImpl::FromFloat(directional_light_params->CloudShadowMapResolutionScale));
	directional_light_map.Add("CloudShadowRaySampleCountScale", FCommonImpl::FromFloat(directional_light_params->CloudShadowRaySampleCountScale));
	directional_light_map.Add("CloudScatteredLuminanceScale", FCommonImpl::FromLinearColor(directional_light_params->CloudScatteredLuminanceScale));
	directional_light_map.Add("bCastModulatedShadows", FCommonImpl::FromUInt32(directional_light_params->bCastModulatedShadows));
	directional_light_map.Add("ModulatedShadowColor", FCommonImpl::FromColor(directional_light_params->ModulatedShadowColor));
	directional_light_map.Add("ShadowAmount", FCommonImpl::FromFloat(directional_light_params->ShadowAmount));


	TSharedRef<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	//for (auto Pair : directional_light_map)
	//{
	JsonObject->SetStringField("LightSourceAngle", FCommonImpl::FromFloat(directional_light_params->LightSourceAngle));
	//}

	FString directional_light_string;
	TSharedRef<TJsonWriter<>> JsonWriter = TJsonWriterFactory<>::Create(&directional_light_string);
	FJsonSerializer::Serialize(JsonObject, JsonWriter);

	return directional_light_string;

}


FString FSceneActorJsonData::WriteLightDatatoJsonFile(TArray<AActor*> actor_array, FLightJsonData light_json_data, uint32 outPropertyID)
{
	TMap<FString, FString>* light_maps = new TMap<FString, FString>();

	for (AActor* current_actor : actor_array)
	{
		if(current_actor->FindComponentByClass<UDirectionalLightComponent>())
		{
			UDirectionalLightComponent* directional_light = Cast<UDirectionalLightComponent>(current_actor);
			FString directional_light_string = light_json_data.ConvertDirectionalLightDatatoJsonData(directional_light);
			outPropertyID = FPropertyID::SpawnActorPropertyID();
			light_maps->Add(FCommonImpl::FromUInt32(outPropertyID), directional_light_string);
		}
		else if (current_actor->FindComponentByClass<UPointLightComponent>())
		{
			//UPointLightComponent* point_light = Cast<UPointLightComponent>(current_actor);
			//FString* point_light_map = light_json_data.ConvertDirectionalLightDatatoJsonData(point_light);
		}
	}
	return "0";
}

FString FSceneActorJsonData::ConvertlLightDatatoJsonString(TArray<AActor*> actor_array)
{
	FString light_data_string;
	
	return light_data_string;
}

