// Fill out your copyright notice in the Description page of Project Settings.


#include "UELightExporter.h"
#include "Components/BrushComponent.h"
#include "PhysicsEngine/BodySetup.h"
#include <PhysicsEngine/BoxElem.h>
#include <Kismet/GameplayStatics.h>


FLightBaseParameters* FLightBaseParameters::GetLightBaseParameters(ULightComponent* light)
{
	FLightBaseParameters* light_base_params = nullptr;

	light_base_params->Intensity = light->Intensity;
	light_base_params->LightColor = light->LightColor;
	light_base_params->bAffectsWorld = light->bAffectsWorld;
	light_base_params->CastShadows = light->CastShadows;
	light_base_params->CastStaticShadows = light->CastStaticShadows;
	light_base_params->CastDynamicShadows = light->CastDynamicShadows;
	light_base_params->bAffectTranslucentLighting = light->bAffectTranslucentLighting;
	light_base_params->bTransmission = light->bTransmission;
	light_base_params->bCastVolumetricShadow = light->bCastVolumetricShadow;
	light_base_params->bCastDeepShadow = light->bCastDeepShadow;
	light_base_params->CastRaytracedShadow = light->CastRaytracedShadow;
	light_base_params->bAffectReflection = light->bAffectReflection;
	light_base_params->bAffectGlobalIllumination = light->bAffectGlobalIllumination;
	light_base_params->DeepShadowLayerDistribution = light->DeepShadowLayerDistribution;
	light_base_params->IndirectLightingIntensity = light->IndirectLightingIntensity;
	light_base_params->VolumetricScatteringIntensity = light->VolumetricScatteringIntensity;
	light_base_params->SamplesPerPixel = light->SamplesPerPixel;

	return light_base_params;
}

FLightParameters* FLightParameters::GetLightParameters(ULightComponent* light)
{
	FLightParameters* light_params = nullptr;

	light_params->bUseTemperature = light->bUseTemperature;
	light_params->Temperature = light->Temperature;
	light_params->SpecularScale = light->SpecularScale;
	light_params->MaxDrawDistance = light->MaxDrawDistance;
	light_params->MaxDistanceFadeRange = light->MaxDistanceFadeRange;
	light_params->ShadowResolutionScale = light->ShadowResolutionScale;
	light_params->ShadowBias = light->ShadowBias;
	light_params->ShadowSlopeBias = light->ShadowSlopeBias;
	light_params->ShadowSharpen = light->ShadowSharpen;
	light_params->ContactShadowLength = light->ContactShadowLength;
	light_params->ContactShadowCastingIntensity = light->ContactShadowCastingIntensity;
	light_params->ContactShadowNonCastingIntensity = light->ContactShadowNonCastingIntensity;
	light_params->ContactShadowLengthInWS = light->ContactShadowLengthInWS;
	light_params->CastTranslucentShadows = light->CastTranslucentShadows;
	light_params->bCastShadowsFromCinematicObjectsOnly = light->bCastShadowsFromCinematicObjectsOnly;
	light_params->bForceCachedShadowsForMovablePrimitives = light->bForceCachedShadowsForMovablePrimitives;
	light_params->LightingChannels = light->LightingChannels;
	light_params->LightFunctionMaterial = light->LightFunctionMaterial;
	light_params->StashedLightFunctionMaterial = light->StashedLightFunctionMaterial;
	light_params->LightFunctionScale = light->LightFunctionScale;
	light_params->IESTexture = light->IESTexture;
	light_params->bUseIESBrightness = light->bUseIESBrightness;
	light_params->IESBrightnessScale = light->IESBrightnessScale;
	light_params->LightFunctionFadeDistance = light->LightFunctionFadeDistance;
	light_params->DisabledBrightness = light->DisabledBrightness;
	light_params->bEnableLightShaftBloom = light->bEnableLightShaftBloom;
	light_params->BloomScale = light->BloomScale;
	light_params->BloomThreshold = light->BloomThreshold;
	light_params->BloomMaxBrightness = light->BloomMaxBrightness;
	light_params->BloomTint = light->BloomTint;
	light_params->bUseRayTracedDistanceFieldShadows = light->bUseRayTracedDistanceFieldShadows;
	light_params->RayStartOffsetDepthScale = light->RayStartOffsetDepthScale;

	return light_params;
}

FLocalLightParameters* FLocalLightParameters::GetLocalLightParameters(ULocalLightComponent* light)
{
	FLocalLightParameters* local_light_params = nullptr;

	local_light_params->IntensityUnits = light->IntensityUnits;
	local_light_params->InverseExposureBlend = light->InverseExposureBlend;
	local_light_params->AttenuationRadius = light->AttenuationRadius;

	return local_light_params;
}


FDirectionalLightParameters* FDirectionalLightParameters::GetDirectionalLightParameters(UDirectionalLightComponent* light)
{
	FDirectionalLightParameters* directional_light_params = nullptr;

	directional_light_params->LightSourceAngle = light->LightSourceAngle;
	directional_light_params->LightSourceSoftAngle = light->LightSourceSoftAngle;
	directional_light_params->ShadowCascadeBiasDistribution = light->ShadowCascadeBiasDistribution;
	directional_light_params->bEnableLightShaftOcclusion = light->bEnableLightShaftOcclusion;
	directional_light_params->OcclusionMaskDarkness = light->OcclusionMaskDarkness;
	directional_light_params->OcclusionDepthRange = light->OcclusionDepthRange;
	directional_light_params->LightShaftOverrideDirection = light->LightShaftOverrideDirection;
	directional_light_params->DynamicShadowDistanceMovableLight = light->DynamicShadowDistanceMovableLight;
	directional_light_params->DynamicShadowDistanceStationaryLight = light->DynamicShadowDistanceStationaryLight;
	directional_light_params->DynamicShadowCascades = light->DynamicShadowCascades;
	directional_light_params->CascadeDistributionExponent = light->CascadeDistributionExponent;
	directional_light_params->CascadeTransitionFraction = light->CascadeTransitionFraction;
	directional_light_params->ShadowDistanceFadeoutFraction = light->ShadowDistanceFadeoutFraction;
	directional_light_params->bUseInsetShadowsForMovableObjects = light->bUseInsetShadowsForMovableObjects;
	directional_light_params->FarShadowCascadeCount = light->FarShadowCascadeCount;
	directional_light_params->FarShadowDistance = light->FarShadowDistance;
	directional_light_params->DistanceFieldShadowDistance = light->DistanceFieldShadowDistance;
	directional_light_params->ShadowSourceAngleFactor = light->ShadowSourceAngleFactor;
	directional_light_params->TraceDistance = light->TraceDistance;
	directional_light_params->bAtmosphereSunLight = light->bAtmosphereSunLight;
	directional_light_params->AtmosphereSunLightIndex = light->AtmosphereSunLightIndex;
	directional_light_params->AtmosphereSunDiskColorScale = light->AtmosphereSunDiskColorScale;
	directional_light_params->bPerPixelAtmosphereTransmittance = light->bPerPixelAtmosphereTransmittance;
	directional_light_params->bCastShadowsOnClouds = light->bCastShadowsOnClouds;
	directional_light_params->bCastShadowsOnAtmosphere = light->bCastShadowsOnAtmosphere;
	directional_light_params->bCastCloudShadows = light->bCastCloudShadows;
	directional_light_params->CloudShadowStrength = light->CloudShadowStrength;
	directional_light_params->CloudShadowOnAtmosphereStrength = light->CloudShadowOnAtmosphereStrength;
	directional_light_params->CloudShadowOnSurfaceStrength = light->CloudShadowOnSurfaceStrength;
	directional_light_params->CloudShadowDepthBias = light->CloudShadowDepthBias;
	directional_light_params->CloudShadowExtent = light->CloudShadowExtent;
	directional_light_params->CloudShadowMapResolutionScale = light->CloudShadowMapResolutionScale;
	directional_light_params->CloudShadowRaySampleCountScale = light->CloudShadowRaySampleCountScale;
	directional_light_params->CloudScatteredLuminanceScale = light->CloudScatteredLuminanceScale;
	directional_light_params->bCastModulatedShadows = light->bCastModulatedShadows;
	directional_light_params->ModulatedShadowColor = light->ModulatedShadowColor;
	directional_light_params->ShadowAmount = light->ShadowAmount;

	return directional_light_params;
}

FPointLightParameters* FPointLightParameters::GetPointLightParameters(UPointLightComponent* light)
{
	FPointLightParameters* point_light_params = nullptr;

	point_light_params->bUseInverseSquaredFalloff = light->bUseInverseSquaredFalloff;
	point_light_params->LightFalloffExponent = light->LightFalloffExponent;
	point_light_params->SourceRadius = light->SourceRadius;
	point_light_params->SoftSourceRadius = light->SoftSourceRadius;
	point_light_params->SourceLength = light->SourceLength;

	return point_light_params;
}

FSpotLightParameters* FSpotLightParameters::GetSpotLightParameters(USpotLightComponent* light)
{
	FSpotLightParameters* spot_light_params = nullptr;

	spot_light_params->InnerConeAngle = light->InnerConeAngle;
	spot_light_params->OuterConeAngle = light->OuterConeAngle;

	return spot_light_params;
}

FRectLightParameters* FRectLightParameters::GetRectLightParameters(URectLightComponent* light)
{
	FRectLightParameters* rect_light_params = nullptr;

	rect_light_params->SourceWidth = light->SourceWidth;
	rect_light_params->SourceHeight = light->SourceHeight;
	rect_light_params->BarnDoorAngle = light->BarnDoorAngle;
	rect_light_params->BarnDoorLength = light->BarnDoorLength;
	rect_light_params->SourceTexture = light->SourceTexture;

	return rect_light_params;
}

FSkyLightParameters* FSkyLightParameters::GetSkyLightParameters(USkyLightComponent* light)
{
	FSkyLightParameters* sky_light_params = nullptr;

	sky_light_params->bRealTimeCapture = light->bRealTimeCapture;
	sky_light_params->SourceType = light->SourceType;
	sky_light_params->Cubemap = light->Cubemap;
	sky_light_params->SourceCubemapAngle = light->SourceCubemapAngle;
	sky_light_params->CubemapResolution = light->CubemapResolution;
	sky_light_params->SkyDistanceThreshold = light->SkyDistanceThreshold;
	sky_light_params->bCaptureEmissiveOnly = light->bCaptureEmissiveOnly;
	sky_light_params->bLowerHemisphereIsBlack = light->bLowerHemisphereIsBlack;
	sky_light_params->LowerHemisphereColor = light->LowerHemisphereColor;
	sky_light_params->OcclusionMaxDistance = light->OcclusionMaxDistance;
	sky_light_params->Contrast = light->Contrast;
	sky_light_params->OcclusionExponent = light->OcclusionExponent;
	sky_light_params->MinOcclusion = light->MinOcclusion;
	sky_light_params->OcclusionTint = light->OcclusionTint;
	sky_light_params->bCloudAmbientOcclusion = light->bCloudAmbientOcclusion;
	sky_light_params->CloudAmbientOcclusionStrength = light->CloudAmbientOcclusionStrength;
	sky_light_params->CloudAmbientOcclusionExtent = light->CloudAmbientOcclusionExtent;
	sky_light_params->CloudAmbientOcclusionMapResolutionScale = light->CloudAmbientOcclusionMapResolutionScale;
	sky_light_params->CloudAmbientOcclusionApertureScale = light->CloudAmbientOcclusionApertureScale;
	sky_light_params->OcclusionCombineMode = light->OcclusionCombineMode;
	sky_light_params->bShowIlluminanceMeter = light->bShowIlluminanceMeter;

	return sky_light_params;
}

FHeightFogParameters* FHeightFogParameters::GetHeightFogParameters(UExponentialHeightFogComponent* height_fog)
{
	FHeightFogParameters* height_fog_params = nullptr;

	height_fog_params->FogDensity = height_fog->FogDensity;
	height_fog_params->FogHeightFalloff = height_fog->FogHeightFalloff;
	height_fog_params->SecondFogData.FogDensity = height_fog->SecondFogData.FogDensity;
	height_fog_params->SecondFogData.FogHeightFalloff = height_fog->SecondFogData.FogHeightFalloff;
	height_fog_params->SecondFogData.FogHeightOffset = height_fog->SecondFogData.FogHeightOffset;
	height_fog_params->FogInscatteringLuminance = height_fog->FogInscatteringLuminance;
	height_fog_params->SkyAtmosphereAmbientContributionColorScale = height_fog->SkyAtmosphereAmbientContributionColorScale;
	height_fog_params->InscatteringColorCubemap = height_fog->InscatteringColorCubemap;
	height_fog_params->InscatteringColorCubemapAngle = height_fog->InscatteringColorCubemapAngle;
	height_fog_params->InscatteringTextureTint = height_fog->InscatteringTextureTint;
	height_fog_params->FullyDirectionalInscatteringColorDistance = height_fog->FullyDirectionalInscatteringColorDistance;
	height_fog_params->NonDirectionalInscatteringColorDistance = height_fog->NonDirectionalInscatteringColorDistance;
	height_fog_params->DirectionalInscatteringExponent = height_fog->DirectionalInscatteringExponent;
	height_fog_params->DirectionalInscatteringStartDistance = height_fog->DirectionalInscatteringStartDistance;
	height_fog_params->DirectionalInscatteringLuminance = height_fog->DirectionalInscatteringLuminance;
	height_fog_params->FogMaxOpacity = height_fog->FogMaxOpacity;
	height_fog_params->StartDistance = height_fog->StartDistance;
	height_fog_params->FogCutoffDistance = height_fog->FogCutoffDistance;
	height_fog_params->bEnableVolumetricFog = height_fog->bEnableVolumetricFog;
	height_fog_params->VolumetricFogScatteringDistribution = height_fog->VolumetricFogScatteringDistribution;
	height_fog_params->VolumetricFogAlbedo = height_fog->VolumetricFogAlbedo;
	height_fog_params->VolumetricFogEmissive = height_fog->VolumetricFogEmissive;
	height_fog_params->VolumetricFogExtinctionScale = height_fog->VolumetricFogExtinctionScale;
	height_fog_params->VolumetricFogDistance = height_fog->VolumetricFogDistance;
	height_fog_params->VolumetricFogStartDistance = height_fog->VolumetricFogStartDistance;
	height_fog_params->VolumetricFogNearFadeInDistance = height_fog->VolumetricFogNearFadeInDistance;
	height_fog_params->VolumetricFogStaticLightingScatteringIntensity = height_fog->VolumetricFogStaticLightingScatteringIntensity;
	height_fog_params->bOverrideLightColorsWithFogInscatteringColors = height_fog->bOverrideLightColorsWithFogInscatteringColors;

	return height_fog_params;
}

FSkyAtmosphereParameters* FSkyAtmosphereParameters::GetSkyAtmosphereParameters(USkyAtmosphereComponent* sky_atmosphere)
{
	FSkyAtmosphereParameters* sky_atmosphere_fog_params = nullptr;

	sky_atmosphere_fog_params->TransformMode = sky_atmosphere->TransformMode;
	sky_atmosphere_fog_params->BottomRadius = sky_atmosphere->BottomRadius;
	sky_atmosphere_fog_params->GroundAlbedo = sky_atmosphere->GroundAlbedo;
	sky_atmosphere_fog_params->AtmosphereHeight = sky_atmosphere->AtmosphereHeight;
	sky_atmosphere_fog_params->MultiScatteringFactor = sky_atmosphere->MultiScatteringFactor;
	sky_atmosphere_fog_params->TraceSampleCountScale = sky_atmosphere->TraceSampleCountScale;
	sky_atmosphere_fog_params->RayleighScatteringScale = sky_atmosphere->RayleighScatteringScale;
	sky_atmosphere_fog_params->RayleighScattering = sky_atmosphere->RayleighScattering;
	sky_atmosphere_fog_params->RayleighExponentialDistribution = sky_atmosphere->RayleighExponentialDistribution;
	sky_atmosphere_fog_params->MieScatteringScale = sky_atmosphere->MieScatteringScale;
	sky_atmosphere_fog_params->MieScattering = sky_atmosphere->MieScattering;
	sky_atmosphere_fog_params->MieAbsorptionScale = sky_atmosphere->MieAbsorptionScale;
	sky_atmosphere_fog_params->MieAbsorption = sky_atmosphere->MieAbsorption;
	sky_atmosphere_fog_params->MieAnisotropy = sky_atmosphere->MieAnisotropy;
	sky_atmosphere_fog_params->MieExponentialDistribution = sky_atmosphere->MieExponentialDistribution;
	sky_atmosphere_fog_params->OtherAbsorptionScale = sky_atmosphere->OtherAbsorptionScale;
	sky_atmosphere_fog_params->OtherAbsorption = sky_atmosphere->OtherAbsorption;
	sky_atmosphere_fog_params->OtherTentDistribution.TipAltitude = sky_atmosphere->OtherTentDistribution.TipAltitude;
	sky_atmosphere_fog_params->OtherTentDistribution.TipValue = sky_atmosphere->OtherTentDistribution.TipValue;
	sky_atmosphere_fog_params->OtherTentDistribution.Width = sky_atmosphere->OtherTentDistribution.Width;
	sky_atmosphere_fog_params->SkyLuminanceFactor = sky_atmosphere->SkyLuminanceFactor;
	sky_atmosphere_fog_params->AerialPespectiveViewDistanceScale = sky_atmosphere->AerialPespectiveViewDistanceScale;
	sky_atmosphere_fog_params->HeightFogContribution = sky_atmosphere->HeightFogContribution;
	sky_atmosphere_fog_params->TransmittanceMinLightElevationAngle = sky_atmosphere->TransmittanceMinLightElevationAngle;
	sky_atmosphere_fog_params->AerialPerspectiveStartDepth = sky_atmosphere->AerialPerspectiveStartDepth;

	return sky_atmosphere_fog_params;
}
/*
UUELightData::PostProcessParameters UUELightData::GetPostProcessParameters(UPostProcessComponent* post_prcess)
{
	PostProcessParameters post_process_params;

	post_process_params.LenParams = GetLenParameters(post_prcess);
	post_process_params.ColorGradingParams = GetColorGradingParameters(post_prcess);
	post_process_params.FilmParams = GetFilmParameters(post_prcess);
	post_process_params.GlobalIluminationParams = GetGlobalIluminationParameters(post_prcess);
	post_process_params.ReflectionsParams = GetReflectionsParameters(post_prcess);
	post_process_params.RenderFeaturesParams = GetRenderFeaturesParameters(post_prcess);
	post_process_params.FilmGrainParams = GetFilmGrainParameters(post_prcess);
	post_process_params.PathTracingParams = GetPathTracingParameters(post_prcess);
	post_process_params.PostProcessVolumSettingsParams = GetPostProcessVolumSettingsParameters(post_prcess);

	return post_process_params;
}

UUELightData::LenParameters UUELightData::GetLenParameters(UPostProcessComponent* post_prcess)
{
	LenParameters lens_params;

	lens_params.BloomParams = GetBloomParameters(post_prcess);
	lens_params.ExposureParams = GetExposureParameters(post_prcess);
	lens_params.ChromaticAberrationParams = GetChromaticAberrationParameters(post_prcess);
	lens_params.DirtMaskParams = GetDirtMaskParameters(post_prcess);
	lens_params.CameraParams = GetCameraParameters(post_prcess);
	lens_params.ImageEffectsParams = GetImageEffectsParameters(post_prcess);
	lens_params.LensFlaresParams = GetLensFlaresParameters(post_prcess);
	lens_params.DepthofFieldParams = GetDepthofFieldParameters(post_prcess);

	return lens_params;
}

UUELightData::BloomParameters UUELightData::GetBloomParameters(UPostProcessComponent* post_process)
{
	BloomParameters bloom_params;
	
	bloom_params.BloomMethod = post_process->Settings.BloomMethod;
	bloom_params.BloomIntensity = post_process->Settings.BloomIntensity;
	bloom_params.BloomThreshold = post_process->Settings.BloomThreshold;
	bloom_params.BloomConvolutionScatterDispersion = post_process->Settings.BloomConvolutionScatterDispersion;
	bloom_params.BloomConvolutionTexture = post_process->Settings.BloomConvolutionTexture;
	bloom_params.BloomSizeScale = post_process->Settings.BloomSizeScale;
	bloom_params.Bloom1Size = post_process->Settings.Bloom1Size;
	bloom_params.Bloom2Size = post_process->Settings.Bloom2Size;
	bloom_params.Bloom3Size = post_process->Settings.Bloom3Size;
	bloom_params.Bloom4Size = post_process->Settings.Bloom4Size;
	bloom_params.Bloom5Size = post_process->Settings.Bloom5Size;
	bloom_params.Bloom6Size = post_process->Settings.Bloom6Size;
	bloom_params.Bloom1Tint = post_process->Settings.Bloom1Tint;
	bloom_params.Bloom2Tint = post_process->Settings.Bloom2Tint;
	bloom_params.Bloom3Tint = post_process->Settings.Bloom3Tint;
	bloom_params.Bloom4Tint = post_process->Settings.Bloom4Tint;
	bloom_params.Bloom5Tint = post_process->Settings.Bloom5Tint;
	bloom_params.Bloom6Tint = post_process->Settings.Bloom6Tint;
	bloom_params.BloomConvolutionSize = post_process->Settings.BloomConvolutionSize;
	bloom_params.BloomConvolutionCenterUV = post_process->Settings.BloomConvolutionCenterUV;
	bloom_params.BloomConvolutionPreFilterMin = post_process->Settings.BloomConvolutionPreFilterMin;
	bloom_params.BloomConvolutionPreFilterMax = post_process->Settings.BloomConvolutionPreFilterMax;
	bloom_params.BloomConvolutionPreFilterMult = post_process->Settings.BloomConvolutionPreFilterMult;
	bloom_params.BloomConvolutionBufferScale = post_process->Settings.BloomConvolutionBufferScale;

	return bloom_params;
}

UUELightData::ExposureParameters UUELightData::GetExposureParameters(UPostProcessComponent* post_prcess)
{
	ExposureParameters exposure_params;

	exposure_params.AutoExposureMethod = post_prcess->Settings.AutoExposureMethod;
	exposure_params.AutoExposureCompensation = post_prcess->Settings.AutoExposureBias;
	exposure_params.bAutoExposureApplePhysicalCameraExposure = post_prcess->Settings.AutoExposureApplyPhysicalCameraExposure;
	exposure_params.AutoExposureCompensationCurve = post_prcess->Settings.AutoExposureBiasCurve;
	exposure_params.AutoExposureMeteringMask = post_prcess->Settings.AutoExposureMeterMask;
	exposure_params.AutoExposureMinEV100 = post_prcess->Settings.AutoExposureMinBrightness;
	exposure_params.AutoExposureMaxEV100 = post_prcess->Settings.AutoExposureMaxBrightness;
	exposure_params.AutoExposureSpeedUp = post_prcess->Settings.AutoExposureSpeedUp;
	exposure_params.AutoExposureSpeedDown = post_prcess->Settings.AutoExposureSpeedDown;
	exposure_params.AutoExposureLowPercent = post_prcess->Settings.AutoExposureLowPercent;
	exposure_params.AutoExposureHighPercent = post_prcess->Settings.AutoExposureHighPercent;
	exposure_params.AutoExposureHistogramMinEV100 = post_prcess->Settings.HistogramLogMin;
	exposure_params.AutoExposureHistogramMaxEV100 = post_prcess->Settings.HistogramLogMax;

	return exposure_params;
}

UUELightData::ChromaticAberrationParameters UUELightData::GetChromaticAberrationParameters(UPostProcessComponent* post_prcess)
{
	ChromaticAberrationParameters chromatic_aberration_params;

	chromatic_aberration_params.SceneFringeIntensity = post_prcess->Settings.SceneFringeIntensity;
	chromatic_aberration_params.ChromaticAberrationStartOffset = post_prcess->Settings.ChromaticAberrationStartOffset;

	return chromatic_aberration_params;
}

UUELightData::DirtMaskParameters UUELightData::GetDirtMaskParameters(UPostProcessComponent* post_prcess)
{
	DirtMaskParameters dirt_mask_params;

	dirt_mask_params.DirtMaskTexture = post_prcess->Settings.BloomDirtMask;
	dirt_mask_params.DirtMaskIntensity = post_prcess->Settings.BloomDirtMaskIntensity;
	dirt_mask_params.DirtMaskTint = post_prcess->Settings.BloomDirtMaskTint;

	return dirt_mask_params;
}

UUELightData::CameraParameters UUELightData::GetCameraParameters(UPostProcessComponent* post_prcess)
{
	CameraParameters camera_params;

	camera_params.CameraShutterSpeed = post_prcess->Settings.CameraShutterSpeed;
	camera_params.CameraISO = post_prcess->Settings.CameraISO;
	camera_params.DepthOfFieldFstop = post_prcess->Settings.DepthOfFieldFstop;
	camera_params.DepthOfFieldMinFstop = post_prcess->Settings.DepthOfFieldMinFstop;
	camera_params.DepthOfFieldBladeCount = post_prcess->Settings.DepthOfFieldBladeCount;

	return camera_params;
}

UUELightData::LensFlaresParameters UUELightData::GetLensFlaresParameters(UPostProcessComponent* post_prcess)
{
	LensFlaresParameters lens_flares_params;

	lens_flares_params.LensFlaresIntensity = post_prcess->Settings.LensFlareIntensity;
	lens_flares_params.LensFlaresTint = post_prcess->Settings.LensFlareTint;
	lens_flares_params.LensFlareThreshold = post_prcess->Settings.LensFlareThreshold;
	lens_flares_params.LensFlareBokehSize = post_prcess->Settings.LensFlareBokehSize;
	lens_flares_params.LensFlareBokehShape = post_prcess->Settings.LensFlareBokehShape;
	for (int i = 0; i < 8; i++)
	{
		lens_flares_params.LensFlareTints[i] = post_prcess->Settings.LensFlareTints[i];
	}

	return lens_flares_params;
}

UUELightData::ImageEffectsParameters UUELightData::GetImageEffectsParameters(UPostProcessComponent* post_prcess)
{
	ImageEffectsParameters image_effects_params;

	image_effects_params.VignetteIntensity = post_prcess->Settings.VignetteIntensity;
	image_effects_params.Sharpen = post_prcess->Settings.Sharpen;

	return image_effects_params;
}

UUELightData::DepthofFieldParameters UUELightData::GetDepthofFieldParameters(UPostProcessComponent* post_prcess)
{
	DepthofFieldParameters depth_of_field_params;

	depth_of_field_params.DepthOfFieldSensorWidth = post_prcess->Settings.DepthOfFieldSensorWidth;
	depth_of_field_params.DepthOfFieldFocalDistance = post_prcess->Settings.DepthOfFieldFocalDistance;
	depth_of_field_params.DepthOfFieldDepthBlurAmount = post_prcess->Settings.DepthOfFieldDepthBlurAmount;
	depth_of_field_params.DepthOfFieldSqueezeFactor = post_prcess->Settings.DepthOfFieldSqueezeFactor;
	depth_of_field_params.DepthOfFieldDepthBlurRadius = post_prcess->Settings.DepthOfFieldDepthBlurRadius;

	return depth_of_field_params;
}

UUELightData::ColorGradingParameters UUELightData::GetColorGradingParameters(UPostProcessComponent* post_prcess)
{
	ColorGradingParameters color_grading_params;

	color_grading_params.TemperatureParams = GetTemperatureParameters(post_prcess);
	color_grading_params.GlobalParams = GetGlobalParameters(post_prcess);
	color_grading_params.ShadowsParams = GetShadowsParameters(post_prcess);
	color_grading_params.MidtonesParams = GetMidtonesParameters(post_prcess);
	color_grading_params.HighlightsParams = GetHighlightsParameters(post_prcess);
	color_grading_params.MiscParams = GetMiscParameters(post_prcess);

	return color_grading_params;
}

UUELightData::TemperatureParameters UUELightData::GetTemperatureParameters(UPostProcessComponent* post_prcess)
{
	TemperatureParameters temperature_params;

	temperature_params.TemperatureType = post_prcess->Settings.TemperatureType;
	temperature_params.WhiteTemp = post_prcess->Settings.WhiteTemp;
	temperature_params.WhiteTint = post_prcess->Settings.WhiteTint;

	return temperature_params;
}

UUELightData::GlobalParameters UUELightData::GetGlobalParameters(UPostProcessComponent* post_prcess)
{
	GlobalParameters global_params;

	global_params.ColorSaturation = post_prcess->Settings.ColorSaturation;
	global_params.ColorContrast = post_prcess->Settings.ColorContrast;
	global_params.ColorGamma = post_prcess->Settings.ColorGamma;
	global_params.ColorGain = post_prcess->Settings.ColorGain;
	global_params.ColorOffset = post_prcess->Settings.ColorOffset;

	return global_params;
}

UUELightData::ShadowsParameters UUELightData::GetShadowsParameters(UPostProcessComponent* post_prcess)
{
	ShadowsParameters shadows_params;

	shadows_params.ColorSaturationShadows = post_prcess->Settings.ColorSaturationShadows;
	shadows_params.ColorContrastShadows = post_prcess->Settings.ColorContrastShadows;
	shadows_params.ColorGammaShadows = post_prcess->Settings.ColorGammaShadows;
	shadows_params.ColorGainShadows = post_prcess->Settings.ColorGainShadows;
	shadows_params.ColorOffsetShadows = post_prcess->Settings.ColorOffsetShadows;
	shadows_params.ColorCorrectionShadowsMax = post_prcess->Settings.ColorCorrectionShadowsMax;

	return shadows_params;
}

UUELightData::MidtonesParameters UUELightData::GetMidtonesParameters(UPostProcessComponent* post_prcess)
{
	MidtonesParameters midtones_params;

	midtones_params.ColorSaturationMidtones = post_prcess->Settings.ColorSaturationMidtones;
	midtones_params.ColorContrastMidtones = post_prcess->Settings.ColorContrastMidtones;
	midtones_params.ColorGammaMidtones = post_prcess->Settings.ColorGammaMidtones;
	midtones_params.ColorGainMidtones = post_prcess->Settings.ColorGainMidtones;
	midtones_params.ColorOffsetMidtones = post_prcess->Settings.ColorOffsetMidtones;

	return midtones_params;
}

UUELightData::HighlightsParameters UUELightData::GetHighlightsParameters(UPostProcessComponent* post_prcess)
{
	HighlightsParameters highlights_params;

	highlights_params.ColorSaturationHighlights = post_prcess->Settings.ColorSaturationHighlights;
	highlights_params.ColorContrastHighlights = post_prcess->Settings.ColorContrastHighlights;
	highlights_params.ColorGammaHighlights = post_prcess->Settings.ColorGammaHighlights;
	highlights_params.ColorGainHighlights = post_prcess->Settings.ColorGainHighlights;
	highlights_params.ColorOffsetHighlights = post_prcess->Settings.ColorOffsetHighlights;
	highlights_params.ColorCorrectionHighlightsMin = post_prcess->Settings.ColorCorrectionHighlightsMin;
	highlights_params.ColorCorrectionHighlightsMax = post_prcess->Settings.ColorCorrectionHighlightsMax;

	return highlights_params;
}

UUELightData::MiscParameters UUELightData::GetMiscParameters(UPostProcessComponent* post_prcess)
{
	MiscParameters misc_params;

	misc_params.BlueCorrection = post_prcess->Settings.BlueCorrection;
	misc_params.ExpandGamut = post_prcess->Settings.ExpandGamut;
	misc_params.ToneCurveAmount = post_prcess->Settings.ToneCurveAmount;
	misc_params.SceneColorTint = post_prcess->Settings.SceneColorTint;
	misc_params.ColorGradingIntensity = post_prcess->Settings.ColorGradingIntensity;
	misc_params.ColorGradingLUT = post_prcess->Settings.ColorGradingLUT;

	return misc_params;
}

UUELightData::FilmParameters UUELightData::GetFilmParameters(UPostProcessComponent* post_prcess)
{
	FilmParameters film_params;

	film_params.FilmSlope = post_prcess->Settings.FilmSlope;
	film_params.FilmToe = post_prcess->Settings.FilmToe;
	film_params.FilmShoulder = post_prcess->Settings.FilmShoulder;
	film_params.FilmBlackClip = post_prcess->Settings.FilmBlackClip;
	film_params.FilmWhiteClip = post_prcess->Settings.FilmWhiteClip;

	return film_params;
}

UUELightData::GlobalIluminationParameters UUELightData::GetGlobalIluminationParameters(UPostProcessComponent* post_prcess)
{
	GlobalIluminationParameters gi_params;

	gi_params.DynamicGlobalIlluminationMethod = post_prcess->Settings.DynamicGlobalIlluminationMethod;
	gi_params.IndirectLightingColor = post_prcess->Settings.IndirectLightingColor;
	gi_params.IndirectLightingIntensity = post_prcess->Settings.IndirectLightingIntensity;
	gi_params.LumenGIParams = GetLumenGlobalIluminationParameters(post_prcess);
	gi_params.RayTracingGIParams = GetRayTracingGlobalIluminationParameters(post_prcess);

	return gi_params;
}

UUELightData::LumenGlobalIluminationParameters UUELightData::GetLumenGlobalIluminationParameters(UPostProcessComponent* post_prcess)
{
	LumenGlobalIluminationParameters lumen_gi_params;

	lumen_gi_params.LumenSceneLightingQuality = post_prcess->Settings.LumenSceneLightingQuality;
	lumen_gi_params.LumenSceneDetail = post_prcess->Settings.LumenSceneDetail;
	lumen_gi_params.LumenSceneViewDistance = post_prcess->Settings.LumenSceneViewDistance;
	lumen_gi_params.LumenSceneLightingUpdateSpeed = post_prcess->Settings.LumenFinalGatherQuality;
	lumen_gi_params.LumenFinalGatherLightingUpdateSpeed = post_prcess->Settings.LumenFinalGatherLightingUpdateSpeed;
	lumen_gi_params.LumenMaxTraceDistance = post_prcess->Settings.LumenMaxTraceDistance;
	lumen_gi_params.LumenDiffuseColorBoost = post_prcess->Settings.LumenDiffuseColorBoost;
	lumen_gi_params.LumenSkylightLeaking = post_prcess->Settings.LumenSkylightLeaking;
	lumen_gi_params.LumenFinalGatherQuality = post_prcess->Settings.LumenFinalGatherQuality;
	lumen_gi_params.LumenFullSkylightLeakingDistance = post_prcess->Settings.LumenFullSkylightLeakingDistance;
	lumen_gi_params.LumenSurfaceCacheResolution = post_prcess->Settings.LumenSurfaceCacheResolution;

	return lumen_gi_params;
}

UUELightData::RayTracingGlobalIluminationParameters UUELightData::GetRayTracingGlobalIluminationParameters(UPostProcessComponent* post_prcess)
{
	RayTracingGlobalIluminationParameters ray_tracing_gi_params;

	ray_tracing_gi_params.RayTracingGIType = post_prcess->Settings.RayTracingGIType;
	ray_tracing_gi_params.RayTracingGIMaxBounces = post_prcess->Settings.RayTracingGIMaxBounces;
	ray_tracing_gi_params.RayTracingGISamplesPerPixel = post_prcess->Settings.RayTracingGISamplesPerPixel;

	return ray_tracing_gi_params;
}

UUELightData::ReflectionsParameters UUELightData::GetReflectionsParameters(UPostProcessComponent* post_prcess)
{
	ReflectionsParameters refection_params;

	refection_params.ReflectionMethod = post_prcess->Settings.ReflectionMethod;
	refection_params.LumenReflecParams = GetLumenReflectionsParameters(post_prcess);
	refection_params.SSReflecParams = GetScreenSpaceReflectionsParameters(post_prcess);
	refection_params.RayTracingReflecParams = GetRayTracingReflectionsParameters(post_prcess);

	return refection_params;
}

UUELightData::LumenReflectionsParameters UUELightData::GetLumenReflectionsParameters(UPostProcessComponent* post_prcess)
{
	LumenReflectionsParameters lumen_reflection_params;

	lumen_reflection_params.LumenReflectionQuality = post_prcess->Settings.LumenReflectionQuality;
	lumen_reflection_params.LumenRayLightingMode = post_prcess->Settings.LumenRayLightingMode;
	lumen_reflection_params.LumenFrontLayerTranslucencyReflections = post_prcess->Settings.LumenFrontLayerTranslucencyReflections;
	lumen_reflection_params.LumenMaxReflectionBounces = post_prcess->Settings.LumenMaxReflectionBounces;

	return lumen_reflection_params;
}

UUELightData::ScreenSpaceReflectionsParameters UUELightData::GetScreenSpaceReflectionsParameters(UPostProcessComponent* post_prcess)
{
	ScreenSpaceReflectionsParameters ss_reflection_params;

	ss_reflection_params.ScreenSpaceReflectionIntensity = post_prcess->Settings.ScreenSpaceReflectionIntensity;
	ss_reflection_params.ScreenSpaceReflectionQuality = post_prcess->Settings.ScreenSpaceReflectionQuality;
	ss_reflection_params.ScreenSpaceReflectionMaxRoughness = post_prcess->Settings.ScreenSpaceReflectionMaxRoughness;

	return ss_reflection_params;
}

UUELightData::RayTracingReflectionsParameters UUELightData::GetRayTracingReflectionsParameters(UPostProcessComponent* post_prcess)
{
	RayTracingReflectionsParameters ray_tracing_reflection_params;

	ray_tracing_reflection_params.RayTracingReflectionsMaxRoughness = post_prcess->Settings.RayTracingReflectionsMaxRoughness;
	ray_tracing_reflection_params.RayTracingReflectionsMaxBounces = post_prcess->Settings.RayTracingReflectionsMaxBounces;
	ray_tracing_reflection_params.RayTracingReflectionsSamplesPerPixel = post_prcess->Settings.RayTracingReflectionsSamplesPerPixel;
	ray_tracing_reflection_params.RayTracingReflectionsShadows = post_prcess->Settings.RayTracingReflectionsShadows;
	ray_tracing_reflection_params.RayTracingReflectionsTranslucency = post_prcess->Settings.RayTracingReflectionsTranslucency;

	return ray_tracing_reflection_params;
}

UUELightData::RenderFeaturesParameters UUELightData::GetRenderFeaturesParameters(UPostProcessComponent* post_prcess)
{
	RenderFeaturesParameters render_feature_params;

	render_feature_params.PPMParams = GetPostProcessMaterialsParameters(post_prcess);
	render_feature_params.CubemapParams = GetAmbientCubemapParameters(post_prcess);
	render_feature_params.AOParams = GetAmbientOcclusionParameters(post_prcess);
	render_feature_params.RTAOParams = GetRayTracingAmbientOcclusionParameters(post_prcess);
	render_feature_params.MutionBlurParams = GetMotionBlurParameters(post_prcess);
	render_feature_params.TranslucencyParams = GeTranslucencyParameters(post_prcess);
	render_feature_params.RTTranslucencyParams = GetRayTracingTranslucencyParameters(post_prcess);

	return render_feature_params;
}

UUELightData::PostProcessMaterialsParameters UUELightData::GetPostProcessMaterialsParameters(UPostProcessComponent* post_prcess)
{
	PostProcessMaterialsParameters post_materials_params;

	post_materials_params.WeightedBlendables = post_prcess->Settings.WeightedBlendables;

	return post_materials_params;
}

UUELightData::AmbientCubemapParameters UUELightData::GetAmbientCubemapParameters(UPostProcessComponent* post_prcess)
{
	AmbientCubemapParameters ambient_cubemap_params;

	ambient_cubemap_params.AmbientCubemap = post_prcess->Settings.AmbientCubemap;
	ambient_cubemap_params.AmbientCubemapTint = post_prcess->Settings.AmbientCubemapTint;
	ambient_cubemap_params.AmbientCubemapIntensity = post_prcess->Settings.AmbientCubemapIntensity;

	return ambient_cubemap_params;
}

UUELightData::AmbientOcclusionParameters UUELightData::GetAmbientOcclusionParameters(UPostProcessComponent* post_prcess)
{
	AmbientOcclusionParameters ambient_occlusion_params;

	ambient_occlusion_params.AmbientOcclusionIntensity = post_prcess->Settings.AmbientOcclusionIntensity;
	ambient_occlusion_params.AmbientOcclusionStaticFraction = post_prcess->Settings.AmbientOcclusionStaticFraction;
	ambient_occlusion_params.AmbientOcclusionRadius = post_prcess->Settings.AmbientOcclusionRadius;
	ambient_occlusion_params.AmbientOcclusionRadiusInWS = post_prcess->Settings.AmbientOcclusionRadiusInWS;
	ambient_occlusion_params.AmbientOcclusionFadeDistance = post_prcess->Settings.AmbientOcclusionFadeDistance;
	ambient_occlusion_params.AmbientOcclusionFadeRadius = post_prcess->Settings.AmbientOcclusionFadeRadius;
	ambient_occlusion_params.AmbientOcclusionPower = post_prcess->Settings.AmbientOcclusionPower;
	ambient_occlusion_params.AmbientOcclusionBias = post_prcess->Settings.AmbientOcclusionBias;
	ambient_occlusion_params.AmbientOcclusionQuality = post_prcess->Settings.AmbientOcclusionQuality;
	ambient_occlusion_params.AmbientOcclusionMipBlend = post_prcess->Settings.AmbientOcclusionMipBlend;
	ambient_occlusion_params.AmbientOcclusionMipScale = post_prcess->Settings.AmbientOcclusionMipScale;
	ambient_occlusion_params.AmbientOcclusionMipThreshold = post_prcess->Settings.AmbientOcclusionMipThreshold;
	ambient_occlusion_params.AmbientOcclusionTemporalBlendWeight = post_prcess->Settings.AmbientOcclusionTemporalBlendWeight;

	return ambient_occlusion_params;
}

UUELightData::RayTracingAmbientOcclusionParameters UUELightData::GetRayTracingAmbientOcclusionParameters(UPostProcessComponent* post_prcess)
{
	RayTracingAmbientOcclusionParameters ray_tracing_ao_params;

	ray_tracing_ao_params.RayTracingAO = post_prcess->Settings.RayTracingAO;
	ray_tracing_ao_params.RayTracingAOSamplesPerPixel = post_prcess->Settings.RayTracingAOSamplesPerPixel;
	ray_tracing_ao_params.RayTracingAOIntensity = post_prcess->Settings.RayTracingAOIntensity;
	ray_tracing_ao_params.RayTracingAORadius = post_prcess->Settings.RayTracingAORadius;

	return ray_tracing_ao_params;
}

UUELightData::MotionBlurParameters UUELightData::GetMotionBlurParameters(UPostProcessComponent* post_prcess)
{
	MotionBlurParameters motion_blur_params;

	motion_blur_params.MotionBlurAmount = post_prcess->Settings.MotionBlurAmount;
	motion_blur_params.MotionBlurMax = post_prcess->Settings.MotionBlurMax;
	motion_blur_params.MotionBlurTargetFPS = post_prcess->Settings.MotionBlurTargetFPS;
	motion_blur_params.MotionBlurPerObjectSize = post_prcess->Settings.MotionBlurPerObjectSize;

	return motion_blur_params;
}

UUELightData::TranslucencyParameters UUELightData::GeTranslucencyParameters(UPostProcessComponent* post_prcess)
{
	TranslucencyParameters translucency_params;

	translucency_params.TranslucencyType = post_prcess->Settings.TranslucencyType;

	return translucency_params;
}

UUELightData::RayTracingTranslucencyParameters UUELightData::GetRayTracingTranslucencyParameters(UPostProcessComponent* post_prcess)
{
	RayTracingTranslucencyParameters ray_tracing_translucency_params;

	ray_tracing_translucency_params.RayTracingTranslucencyMaxRoughness = post_prcess->Settings.RayTracingTranslucencyMaxRoughness;
	ray_tracing_translucency_params.RayTracingTranslucencyRefractionRays = post_prcess->Settings.RayTracingTranslucencyRefractionRays;
	ray_tracing_translucency_params.RayTracingTranslucencySamplesPerPixel = post_prcess->Settings.RayTracingTranslucencySamplesPerPixel;
	ray_tracing_translucency_params.RayTracingTranslucencyShadows = post_prcess->Settings.RayTracingTranslucencyShadows;
	ray_tracing_translucency_params.RayTracingTranslucencyRefraction = post_prcess->Settings.RayTracingTranslucencyRefraction;

	return ray_tracing_translucency_params;
}

UUELightData::FilmGrainParameters UUELightData::GetFilmGrainParameters(UPostProcessComponent* post_prcess)
{
	FilmGrainParameters film_grain_params;

	film_grain_params.FilmGrainIntensity = post_prcess->Settings.FilmGrainIntensity;
	film_grain_params.FilmGrainIntensityShadows = post_prcess->Settings.FilmGrainIntensityShadows;
	film_grain_params.FilmGrainIntensityMidtones = post_prcess->Settings.FilmGrainIntensityMidtones;
	film_grain_params.FilmGrainIntensityHighlights = post_prcess->Settings.FilmGrainIntensityHighlights;
	film_grain_params.FilmGrainShadowsMax = post_prcess->Settings.FilmGrainShadowsMax;
	film_grain_params.FilmGrainHighlightsMin = post_prcess->Settings.FilmGrainHighlightsMin;
	film_grain_params.FilmGrainTexelSize = post_prcess->Settings.FilmGrainTexelSize;
	film_grain_params.FilmGrainHighlightsMax = post_prcess->Settings.FilmGrainHighlightsMax;
	film_grain_params.FilmGrainTexture = post_prcess->Settings.FilmGrainTexture;

	return film_grain_params;
}

UUELightData::PathTracingParameters UUELightData::GetPathTracingParameters(UPostProcessComponent* post_prcess)
{
	PathTracingParameters ray_tracing_params;

	ray_tracing_params.PathTracingMaxBounces = post_prcess->Settings.PathTracingMaxBounces;
	ray_tracing_params.PathTracingSamplesPerPixel = post_prcess->Settings.PathTracingSamplesPerPixel;
	ray_tracing_params.PathTracingMaxPathExposure = post_prcess->Settings.PathTracingMaxPathExposure;
	ray_tracing_params.PathTracingEnableReferenceDOF = post_prcess->Settings.PathTracingEnableReferenceDOF;
	ray_tracing_params.PathTracingEnableReferenceAtmosphere = post_prcess->Settings.PathTracingEnableReferenceAtmosphere;
	ray_tracing_params.PathTracingEnableDenoiser = post_prcess->Settings.PathTracingEnableDenoiser;
	ray_tracing_params.LightComParams = GetLightingComponentsParameters(post_prcess);

	return ray_tracing_params;
}

UUELightData::LightingComponentsParameters UUELightData::GetLightingComponentsParameters(UPostProcessComponent* post_prcess)
{
	LightingComponentsParameters light_component_params;

	light_component_params.PathTracingIncludeEmissive = post_prcess->Settings.PathTracingIncludeEmissive;
	light_component_params.PathTracingIncludeIndirectEmissive = post_prcess->Settings.PathTracingIncludeIndirectEmissive;
	light_component_params.PathTracingIncludeDiffuse = post_prcess->Settings.PathTracingIncludeDiffuse;
	light_component_params.PathTracingIncludeIndirectDiffuse = post_prcess->Settings.PathTracingIncludeIndirectDiffuse;
	light_component_params.PathTracingIncludeSpecular = post_prcess->Settings.PathTracingIncludeSpecular;
	light_component_params.PathTracingIncludeIndirectSpecular = post_prcess->Settings.PathTracingIncludeIndirectSpecular;
	light_component_params.PathTracingIncludeVolume = post_prcess->Settings.PathTracingIncludeVolume;
	light_component_params.PathTracingIncludeIndirectVolume = post_prcess->Settings.PathTracingIncludeIndirectVolume;

	return light_component_params;
}

UUELightData::PostProcessVolumSettingsParameters UUELightData::GetPostProcessVolumSettingsParameters(UPostProcessComponent* post_prcess)
{
	PostProcessVolumSettingsParameters post_volum_setting_params;

	post_volum_setting_params.Priority = post_prcess->Priority;
	post_volum_setting_params.BlendRadius = post_prcess->BlendRadius;
	post_volum_setting_params.BlendWeight = post_prcess->BlendWeight;
	post_volum_setting_params.bEnabled = post_prcess->bEnabled;
	post_volum_setting_params.bUnbound = post_prcess->bUnbound;

	return post_volum_setting_params;
}

UUELightData::BrushSettingsParameters UUELightData::GetBrushSettingsParameters(AActor* actor)
{
	BrushSettingsParameters brush_setting_params;

	UBrushComponent* brush = actor->FindComponentByClass<UBrushComponent>();
	UBodySetup* bodysetup = brush->GetBodySetup();

	for (FKBoxElem item: bodysetup->AggGeom.BoxElems)
	{
		brush_setting_params.Center = item.Center;
		brush_setting_params.Rotation = item.Rotation;
		brush_setting_params.X = item.X;
		brush_setting_params.Y = item.Y;
		brush_setting_params.Z = item.Z;
	}

	return brush_setting_params;
}
*/
