// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "Components/LightComponent.h"
#include <Components/DirectionalLightComponent.h>
#include <Components/PointLightComponent.h>
#include <Components/SpotLightComponent.h>
#include <Components/RectLightComponent.h>
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include <Components/SkyAtmosphereComponent.h>
#include "Components/SkyLightComponent.h"
#include "ActorData.h"



class FUELightData : public FActorData
{

public:

	FUELightData(){}

	/*
	PostProcessParameters GetPostProcessParameters(UPostProcessComponent* post_prcess);
	LenParameters GetLenParameters(UPostProcessComponent* post_prcess);
	ColorGradingParameters GetColorGradingParameters(UPostProcessComponent* post_prcess);
	FilmParameters GetFilmParameters(UPostProcessComponent* post_prcess);
	GlobalIluminationParameters GetGlobalIluminationParameters(UPostProcessComponent* post_prcess);
	ReflectionsParameters GetReflectionsParameters(UPostProcessComponent* post_prcess);
	RenderFeaturesParameters GetRenderFeaturesParameters(UPostProcessComponent* post_prcess);
	FilmGrainParameters GetFilmGrainParameters(UPostProcessComponent* post_prcess);
	PathTracingParameters GetPathTracingParameters(UPostProcessComponent* post_prcess);
	PostProcessVolumSettingsParameters GetPostProcessVolumSettingsParameters(UPostProcessComponent* post_prcess);
	BrushSettingsParameters GetBrushSettingsParameters(AActor* actor);



private:

	BloomParameters GetBloomParameters(UPostProcessComponent* post_prcess);
	ExposureParameters GetExposureParameters(UPostProcessComponent* post_prcess);
	ChromaticAberrationParameters GetChromaticAberrationParameters(UPostProcessComponent* post_prcess);
	DirtMaskParameters GetDirtMaskParameters(UPostProcessComponent* post_prcess);
	CameraParameters GetCameraParameters(UPostProcessComponent* post_prcess);
	LensFlaresParameters GetLensFlaresParameters(UPostProcessComponent* post_prcess);
	ImageEffectsParameters GetImageEffectsParameters(UPostProcessComponent* post_prcess);
	DepthofFieldParameters GetDepthofFieldParameters(UPostProcessComponent* post_prcess);

	TemperatureParameters GetTemperatureParameters(UPostProcessComponent* post_prcess);
	GlobalParameters GetGlobalParameters(UPostProcessComponent* post_prcess);
	ShadowsParameters GetShadowsParameters(UPostProcessComponent* post_prcess);
	MidtonesParameters GetMidtonesParameters(UPostProcessComponent* post_prcess);
	HighlightsParameters GetHighlightsParameters(UPostProcessComponent* post_prcess);
	MiscParameters GetMiscParameters(UPostProcessComponent* post_prcess);

	LumenGlobalIluminationParameters GetLumenGlobalIluminationParameters(UPostProcessComponent* post_prcess);
	RayTracingGlobalIluminationParameters GetRayTracingGlobalIluminationParameters(UPostProcessComponent* post_prcess);

	LumenReflectionsParameters GetLumenReflectionsParameters(UPostProcessComponent* post_prcess);
	ScreenSpaceReflectionsParameters GetScreenSpaceReflectionsParameters(UPostProcessComponent* post_prcess);
	RayTracingReflectionsParameters GetRayTracingReflectionsParameters(UPostProcessComponent* post_prcess);

	PostProcessMaterialsParameters GetPostProcessMaterialsParameters(UPostProcessComponent* post_prcess);
	AmbientCubemapParameters GetAmbientCubemapParameters(UPostProcessComponent* post_prcess);
	AmbientOcclusionParameters GetAmbientOcclusionParameters(UPostProcessComponent* post_prcess);
	RayTracingAmbientOcclusionParameters GetRayTracingAmbientOcclusionParameters(UPostProcessComponent* post_prcess);
	MotionBlurParameters GetMotionBlurParameters(UPostProcessComponent* post_prcess);
	TranslucencyParameters GeTranslucencyParameters(UPostProcessComponent* post_prcess);
	RayTracingTranslucencyParameters GetRayTracingTranslucencyParameters(UPostProcessComponent* post_prcess);
	*/
};


/// <summary>
/// Common Light Parameter Class
/// </summary>
class FLightBaseParameters : public FUELightData
{

public:

	FLightBaseParameters() {};

	float Intensity;

	FColor LightColor;

	uint32 bAffectsWorld;

	uint32 CastShadows;

	uint32 CastStaticShadows;

	uint32 CastDynamicShadows;

	uint32 bAffectTranslucentLighting;

	uint32 bTransmission;

	uint32 bCastVolumetricShadow;

	uint32 bCastDeepShadow;

	TEnumAsByte<ECastRayTracedShadow::Type> CastRaytracedShadow;

	uint32 bAffectReflection;

	uint32 bAffectGlobalIllumination;

	float DeepShadowLayerDistribution;

	float IndirectLightingIntensity;

	float VolumetricScatteringIntensity;

	int SamplesPerPixel;

public:

	FLightBaseParameters* GetLightBaseParameters(ULightComponent* light);
};

class FLightParameters : public FLightBaseParameters
{

public:

	FLightParameters(){}

	UPROPERTY(EditAnywhere)
	uint32 bUseTemperature;

	UPROPERTY(EditAnywhere)
	float Temperature;

	UPROPERTY(EditAnywhere)
	float SpecularScale;

	UPROPERTY(EditAnywhere)
	float MaxDrawDistance;

	UPROPERTY(EditAnywhere)
	float MaxDistanceFadeRange;

	UPROPERTY(EditAnywhere)
	float ShadowResolutionScale;

	UPROPERTY(EditAnywhere)
	float ShadowBias;

	UPROPERTY(EditAnywhere)
	float ShadowSlopeBias;

	UPROPERTY(EditAnywhere)
	float ShadowSharpen;

	UPROPERTY(EditAnywhere)
	float ContactShadowLength;

	UPROPERTY(EditAnywhere)
	float ContactShadowCastingIntensity;

	UPROPERTY(EditAnywhere)
	float ContactShadowNonCastingIntensity;

	UPROPERTY(EditAnywhere)
	uint32 ContactShadowLengthInWS;

	UPROPERTY(EditAnywhere)
	uint32 CastTranslucentShadows;

	UPROPERTY(EditAnywhere)
	uint32 bCastShadowsFromCinematicObjectsOnly;

	UPROPERTY(EditAnywhere)
	uint32 bForceCachedShadowsForMovablePrimitives;

	UPROPERTY(EditAnywhere)
	FLightingChannels LightingChannels;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UMaterialInterface> LightFunctionMaterial;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UMaterialInterface> StashedLightFunctionMaterial;

	UPROPERTY(EditAnywhere)
	FVector LightFunctionScale;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UTextureLightProfile> IESTexture;

	UPROPERTY(EditAnywhere)
	uint32 bUseIESBrightness;

	UPROPERTY(EditAnywhere)
	float IESBrightnessScale;

	UPROPERTY(EditAnywhere)
	float LightFunctionFadeDistance;

	UPROPERTY(EditAnywhere)
	float DisabledBrightness;

	UPROPERTY(EditAnywhere)
	uint32 bEnableLightShaftBloom;

	UPROPERTY(EditAnywhere)
	float BloomScale;

	UPROPERTY(EditAnywhere)
	float BloomThreshold;

	UPROPERTY(EditAnywhere)
	float BloomMaxBrightness;

	UPROPERTY(EditAnywhere)
	FColor BloomTint;

	UPROPERTY(EditAnywhere)
	bool bUseRayTracedDistanceFieldShadows;

	UPROPERTY(EditAnywhere)
	float RayStartOffsetDepthScale;

public:
	FLightParameters* GetLightParameters(ULightComponent* light);
};

class FLocalLightParameters : public FLightParameters
{

public:

	FLocalLightParameters(){}

	UPROPERTY(EditAnywhere)
	ELightUnits IntensityUnits;

	UPROPERTY(EditAnywhere)
	float InverseExposureBlend;

	UPROPERTY(EditAnywhere)
	float AttenuationRadius;

public:

	FLocalLightParameters* GetLocalLightParameters(ULocalLightComponent* light);
};

/// <summary>
/// Directional Light Parameters Struct
/// </summary>
class FDirectionalLightParameters : public FLightParameters
{

public:
	FDirectionalLightParameters() {}

	UPROPERTY(EditAnywhere)
	float LightSourceAngle;

	UPROPERTY(EditAnywhere)
	float LightSourceSoftAngle;

	UPROPERTY(EditAnywhere)
	float ShadowCascadeBiasDistribution;

	UPROPERTY(EditAnywhere)
	uint32 bEnableLightShaftOcclusion;

	UPROPERTY(EditAnywhere)
	float OcclusionMaskDarkness;

	UPROPERTY(EditAnywhere)
	float OcclusionDepthRange;

	UPROPERTY(EditAnywhere)
	FVector LightShaftOverrideDirection;

	UPROPERTY(EditAnywhere)
	float DynamicShadowDistanceMovableLight;

	UPROPERTY(EditAnywhere)
	float DynamicShadowDistanceStationaryLight;

	UPROPERTY(EditAnywhere)
	int32 DynamicShadowCascades;

	UPROPERTY(EditAnywhere)
	float CascadeDistributionExponent;

	UPROPERTY(EditAnywhere)
	float CascadeTransitionFraction;

	UPROPERTY(EditAnywhere)
	float ShadowDistanceFadeoutFraction;

	UPROPERTY(EditAnywhere)
	uint32 bUseInsetShadowsForMovableObjects;

	UPROPERTY(EditAnywhere)
	int32 FarShadowCascadeCount;

	UPROPERTY(EditAnywhere)
	float FarShadowDistance;

	UPROPERTY(EditAnywhere)
	float DistanceFieldShadowDistance;

	UPROPERTY(EditAnywhere)
	float ShadowSourceAngleFactor;

	UPROPERTY(EditAnywhere)
	float TraceDistance;

	UPROPERTY(EditAnywhere)
	uint32 bAtmosphereSunLight;

	UPROPERTY(EditAnywhere)
	int32 AtmosphereSunLightIndex;

	UPROPERTY(EditAnywhere)
	FLinearColor AtmosphereSunDiskColorScale;

	UPROPERTY(EditAnywhere)
	uint32 bPerPixelAtmosphereTransmittance;

	UPROPERTY(EditAnywhere)
	uint32 bCastShadowsOnClouds;

	UPROPERTY(EditAnywhere)
	uint32 bCastShadowsOnAtmosphere;

	UPROPERTY(EditAnywhere)
	uint32 bCastCloudShadows;

	UPROPERTY(EditAnywhere)
	float CloudShadowStrength;

	UPROPERTY(EditAnywhere)
	float CloudShadowOnAtmosphereStrength;

	UPROPERTY(EditAnywhere)
	float CloudShadowOnSurfaceStrength;

	UPROPERTY(EditAnywhere)
	float CloudShadowDepthBias;

	UPROPERTY(EditAnywhere)
	float CloudShadowExtent;

	UPROPERTY(EditAnywhere)
	float CloudShadowMapResolutionScale;

	UPROPERTY(EditAnywhere)
	float CloudShadowRaySampleCountScale;

	UPROPERTY(EditAnywhere)
	FLinearColor CloudScatteredLuminanceScale;

	UPROPERTY(EditAnywhere)
	uint32 bCastModulatedShadows;

	UPROPERTY(EditAnywhere)
	FColor ModulatedShadowColor;

	UPROPERTY(EditAnywhere)
	float ShadowAmount;

public:

	FDirectionalLightParameters* GetDirectionalLightParameters(UDirectionalLightComponent* light);
};

/// <summary>
/// Point Light Parameters Struct
/// </summary>
class FPointLightParameters : public FLocalLightParameters
{

public:

	FPointLightParameters(){}

	UPROPERTY(EditAnywhere)
	uint32 bUseInverseSquaredFalloff;

	UPROPERTY(EditAnywhere)
	float LightFalloffExponent;

	UPROPERTY(EditAnywhere)
	float SourceRadius;

	UPROPERTY(EditAnywhere)
	float SoftSourceRadius;

	UPROPERTY(EditAnywhere)
	float SourceLength;

public:

	FPointLightParameters* GetPointLightParameters(UPointLightComponent* light);
};

/// <summary>
/// Spot Light Parameters Struct
/// </summary>
class FSpotLightParameters : public FPointLightParameters
{

public:

	FSpotLightParameters(){}

	UPROPERTY(EditAnywhere)
	float InnerConeAngle;

	UPROPERTY(EditAnywhere)
	float OuterConeAngle;

public:

	FSpotLightParameters* GetSpotLightParameters(USpotLightComponent* light);
};

/// <summary>
/// Rect Light Parameters Struct
/// </summary>
class FRectLightParameters : public FLocalLightParameters
{

public:

	FRectLightParameters(){}

	UPROPERTY(EditAnywhere)
	float SourceWidth;

	UPROPERTY(EditAnywhere)
	float SourceHeight;

	UPROPERTY(EditAnywhere)
	float BarnDoorAngle;

	UPROPERTY(EditAnywhere)
	float BarnDoorLength;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UTexture> SourceTexture;

public:

	FRectLightParameters* GetRectLightParameters(URectLightComponent* light);
};

/// <summary>
/// Sky Light Parameters Struct
/// </summary>
class FSkyLightParameters : public FLightBaseParameters
{

public:

	FSkyLightParameters(){}

	UPROPERTY(EditAnywhere)
	bool bRealTimeCapture;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<enum ESkyLightSourceType> SourceType;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UTextureCube> Cubemap;

	UPROPERTY(EditAnywhere)
	float SourceCubemapAngle;

	UPROPERTY(EditAnywhere)
	int32 CubemapResolution;

	UPROPERTY(EditAnywhere)
	float SkyDistanceThreshold;

	UPROPERTY(EditAnywhere)
	bool bCaptureEmissiveOnly;

	UPROPERTY(EditAnywhere)
	bool bLowerHemisphereIsBlack;

	UPROPERTY(EditAnywhere)
	FLinearColor LowerHemisphereColor;

	UPROPERTY(EditAnywhere)
	float OcclusionMaxDistance;

	UPROPERTY(EditAnywhere)
	float Contrast;

	UPROPERTY(EditAnywhere)
	float OcclusionExponent;

	UPROPERTY(EditAnywhere)
	float MinOcclusion;

	UPROPERTY(EditAnywhere)
	FColor OcclusionTint;

	UPROPERTY(EditAnywhere)
	uint32 bCloudAmbientOcclusion;

	UPROPERTY(EditAnywhere)
	float CloudAmbientOcclusionStrength;

	UPROPERTY(EditAnywhere)
	float CloudAmbientOcclusionExtent;

	UPROPERTY(EditAnywhere)
	float CloudAmbientOcclusionMapResolutionScale;

	UPROPERTY(EditAnywhere)
	float CloudAmbientOcclusionApertureScale;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<enum EOcclusionCombineMode> OcclusionCombineMode;

	UPROPERTY(EditAnywhere)
	uint32 bShowIlluminanceMeter;

public:

	FSkyLightParameters* GetSkyLightParameters(USkyLightComponent* light);

};

/// <summary>
/// Height Fog Parameters Struct
/// </summary>
class FHeightFogParameters : public FUELightData
{

public:

	FHeightFogParameters(){}

	UPROPERTY(EditAnywhere)
	float FogDensity;

	UPROPERTY(EditAnywhere)
	float FogHeightFalloff;

	UPROPERTY(EditAnywhere)
	FExponentialHeightFogData SecondFogData;

	UPROPERTY(EditAnywhere)
	FLinearColor FogInscatteringLuminance;

	UPROPERTY(EditAnywhere)
	FLinearColor SkyAtmosphereAmbientContributionColorScale;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UTextureCube> InscatteringColorCubemap;

	UPROPERTY(EditAnywhere)
	float InscatteringColorCubemapAngle;

	UPROPERTY(EditAnywhere)
	FLinearColor InscatteringTextureTint;

	UPROPERTY(EditAnywhere)
	float FullyDirectionalInscatteringColorDistance;

	UPROPERTY(EditAnywhere)
	float NonDirectionalInscatteringColorDistance;

	UPROPERTY(EditAnywhere)
	float DirectionalInscatteringExponent;

	UPROPERTY(EditAnywhere)
	float DirectionalInscatteringStartDistance;

	UPROPERTY(EditAnywhere)
	FLinearColor DirectionalInscatteringLuminance;

	UPROPERTY(EditAnywhere)
	float FogMaxOpacity;

	UPROPERTY(EditAnywhere)
	float StartDistance;

	UPROPERTY(EditAnywhere)
	float FogCutoffDistance;

	UPROPERTY(EditAnywhere)
	bool bEnableVolumetricFog;

	UPROPERTY(EditAnywhere)
	float VolumetricFogScatteringDistribution;

	UPROPERTY(EditAnywhere)
	FColor VolumetricFogAlbedo;

	UPROPERTY(EditAnywhere)
	FLinearColor VolumetricFogEmissive;

	UPROPERTY(EditAnywhere)
	float VolumetricFogExtinctionScale;

	UPROPERTY(EditAnywhere)
	float VolumetricFogDistance;

	UPROPERTY(EditAnywhere)
	float VolumetricFogStartDistance;

	UPROPERTY(EditAnywhere)
	float VolumetricFogNearFadeInDistance;

	UPROPERTY(EditAnywhere)
	float VolumetricFogStaticLightingScatteringIntensity;

	UPROPERTY(EditAnywhere)
	bool bOverrideLightColorsWithFogInscatteringColors;

public:
	
	FHeightFogParameters* GetHeightFogParameters(UExponentialHeightFogComponent* height_fog);

};

/// <summary>
/// SkyAtmosphere Fog Parameters Struct
/// </summary>
class FSkyAtmosphereParameters : public FUELightData
{

public:

	FSkyAtmosphereParameters(){}

	UPROPERTY(EditAnywhere)
	ESkyAtmosphereTransformMode TransformMode;

	UPROPERTY(EditAnywhere)
	float BottomRadius;

	UPROPERTY(EditAnywhere)
	FColor GroundAlbedo;

	UPROPERTY(EditAnywhere)
	float AtmosphereHeight;

	UPROPERTY(EditAnywhere)
	float MultiScatteringFactor;

	UPROPERTY(EditAnywhere)
	float TraceSampleCountScale;

	UPROPERTY(EditAnywhere)
	float RayleighScatteringScale;

	UPROPERTY(EditAnywhere)
	FLinearColor RayleighScattering;

	UPROPERTY(EditAnywhere)
	float RayleighExponentialDistribution;

	UPROPERTY(EditAnywhere)
	float MieScatteringScale;

	UPROPERTY(EditAnywhere)
	FLinearColor MieScattering;

	UPROPERTY(EditAnywhere)
	float MieAbsorptionScale;

	UPROPERTY(EditAnywhere)
	FLinearColor MieAbsorption;

	UPROPERTY(EditAnywhere)
	float MieAnisotropy;

	UPROPERTY(EditAnywhere)
	float MieExponentialDistribution;

	UPROPERTY(EditAnywhere)
	float OtherAbsorptionScale;

	UPROPERTY(EditAnywhere)
	FLinearColor OtherAbsorption;

	UPROPERTY(EditAnywhere)
	FTentDistribution OtherTentDistribution;

	UPROPERTY(EditAnywhere)
	FLinearColor SkyLuminanceFactor;

	UPROPERTY(EditAnywhere)
	float AerialPespectiveViewDistanceScale;

	UPROPERTY(EditAnywhere)
	float HeightFogContribution;

	UPROPERTY(EditAnywhere)
	float TransmittanceMinLightElevationAngle;

	UPROPERTY(EditAnywhere)
	float AerialPerspectiveStartDepth;

public:

	FSkyAtmosphereParameters* GetSkyAtmosphereParameters(USkyAtmosphereComponent* sky_atmosphere);
};

/*
/// <summary>
/// PostPrcess Parameters Struct
/// Categray Lens Parameters
/// </summary>
class FBloomParameters
{
	TEnumAsByte<enum EBloomMethod> BloomMethod;
	float BloomIntensity;
	float BloomThreshold;
	float BloomConvolutionScatterDispersion;
	TObjectPtr<class UTexture2D> BloomConvolutionTexture;
	float BloomSizeScale;
	float Bloom1Size;
	float Bloom2Size;
	float Bloom3Size;
	float Bloom4Size;
	float Bloom5Size;
	float Bloom6Size;
	FLinearColor Bloom1Tint;
	FLinearColor Bloom2Tint;
	FLinearColor Bloom3Tint;
	FLinearColor Bloom4Tint;
	FLinearColor Bloom5Tint;
	FLinearColor Bloom6Tint;
	float BloomConvolutionSize;
	FVector2D BloomConvolutionCenterUV;
	float BloomConvolutionPreFilterMin;
	float BloomConvolutionPreFilterMax;
	float BloomConvolutionPreFilterMult;
	float BloomConvolutionBufferScale;
};

class FExposureParameters
{
	TEnumAsByte<enum EAutoExposureMethod> AutoExposureMethod;
	float AutoExposureCompensation;
	bool bAutoExposureApplePhysicalCameraExposure;
	TObjectPtr<class UCurveFloat> AutoExposureCompensationCurve;
	TObjectPtr<class UTexture> AutoExposureMeteringMask;
	float AutoExposureMaxEV100;
	float AutoExposureMinEV100;
	float AutoExposureSpeedUp;
	float AutoExposureSpeedDown;
	float AutoExposureLowPercent;
	float AutoExposureHighPercent;
	float AutoExposureHistogramMinEV100;
	float AutoExposureHistogramMaxEV100;
};

class FChromaticAberrationParameters
{
	float SceneFringeIntensity;
	float ChromaticAberrationStartOffset;
};

class FDirtMaskParameters
{
	TObjectPtr<class UTexture> DirtMaskTexture;
	float DirtMaskIntensity;
	FLinearColor DirtMaskTint;
};

class CameraParameters
{
	float CameraShutterSpeed;
	float CameraISO;
	float DepthOfFieldFstop;
	float DepthOfFieldMinFstop;
	float DepthOfFieldBladeCount;
};

class LensFlaresParameters
{
	float LensFlaresIntensity;
	FLinearColor LensFlaresTint;
	float LensFlareBokehSize;
	float LensFlareThreshold;
	TObjectPtr<class UTexture> LensFlareBokehShape;
	FLinearColor LensFlareTints[8];
};

class ImageEffectsParameters
{
	float VignetteIntensity;
	float Sharpen;
};

class DepthofFieldParameters
{
	float DepthOfFieldSensorWidth;
	float DepthOfFieldSqueezeFactor;
	float DepthOfFieldFocalDistance;
	float DepthOfFieldDepthBlurAmount;
	float DepthOfFieldDepthBlurRadius;
};

class LenParameters
{
	BloomParameters BloomParams;
	ExposureParameters ExposureParams;
	ChromaticAberrationParameters ChromaticAberrationParams;
	DirtMaskParameters DirtMaskParams;
	CameraParameters CameraParams;
	LensFlaresParameters LensFlaresParams;
	ImageEffectsParameters ImageEffectsParams;
	DepthofFieldParameters DepthofFieldParams;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Color Grading Parameters
/// </summary>
struct TemperatureParameters
{
	TEnumAsByte<enum ETemperatureMethod> TemperatureType;
	float WhiteTemp;
	float WhiteTint;
};

struct GlobalParameters
{
	FVector4 ColorSaturation;
	FVector4 ColorContrast;
	FVector4 ColorGamma;
	FVector4 ColorGain;
	FVector4 ColorOffset;
};

struct ShadowsParameters
{
	FVector4 ColorSaturationShadows;
	FVector4 ColorContrastShadows;
	FVector4 ColorGammaShadows;
	FVector4 ColorGainShadows;
	FVector4 ColorOffsetShadows;
	float ColorCorrectionShadowsMax;
};

struct MidtonesParameters
{
	FVector4 ColorSaturationMidtones;
	FVector4 ColorContrastMidtones;
	FVector4 ColorGammaMidtones;
	FVector4 ColorGainMidtones;
	FVector4 ColorOffsetMidtones;
};

struct HighlightsParameters
{
	FVector4 ColorSaturationHighlights;
	FVector4 ColorContrastHighlights;
	FVector4 ColorGammaHighlights;
	FVector4 ColorGainHighlights;
	FVector4 ColorOffsetHighlights;
	float ColorCorrectionHighlightsMin;
	float ColorCorrectionHighlightsMax;
};

struct MiscParameters
{
	float BlueCorrection;
	float ExpandGamut;
	float ToneCurveAmount;
	FLinearColor SceneColorTint;
	float ColorGradingIntensity;
	TObjectPtr<class UTexture> ColorGradingLUT;
};

struct ColorGradingParameters
{
	TemperatureParameters TemperatureParams;
	GlobalParameters GlobalParams;
	ShadowsParameters ShadowsParams;
	MidtonesParameters MidtonesParams;
	HighlightsParameters HighlightsParams;
	MiscParameters MiscParams;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Film Parameters
/// </summary>
struct FilmParameters
{
	float FilmSlope;
	float FilmToe;
	float FilmShoulder;
	float FilmBlackClip;
	float FilmWhiteClip;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Global Ilumination Parameters
/// </summary>

struct LumenGlobalIluminationParameters
{
	float LumenSceneLightingQuality;
	float LumenSceneDetail;
	float LumenSceneViewDistance;
	float LumenSceneLightingUpdateSpeed;
	float LumenFinalGatherQuality;
	float LumenFinalGatherLightingUpdateSpeed;
	float LumenMaxTraceDistance;
	float LumenDiffuseColorBoost;
	float LumenSkylightLeaking;
	float LumenFullSkylightLeakingDistance;
	float LumenSurfaceCacheResolution;
};

struct RayTracingGlobalIluminationParameters
{
	ERayTracingGlobalIlluminationType RayTracingGIType;
	int32 RayTracingGIMaxBounces;
	int32 RayTracingGISamplesPerPixel;
};

struct GlobalIluminationParameters
{
	TEnumAsByte<EDynamicGlobalIlluminationMethod::Type> DynamicGlobalIlluminationMethod;
	LumenGlobalIluminationParameters LumenGIParams;
	RayTracingGlobalIluminationParameters RayTracingGIParams;
	FLinearColor IndirectLightingColor;
	float IndirectLightingIntensity;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Reflections Parameters
/// </summary>

struct LumenReflectionsParameters
{
	float LumenReflectionQuality;
	ELumenRayLightingModeOverride LumenRayLightingMode;
	uint8 LumenFrontLayerTranslucencyReflections;
	int32 LumenMaxReflectionBounces;
};

struct ScreenSpaceReflectionsParameters
{
	float ScreenSpaceReflectionIntensity;
	float ScreenSpaceReflectionQuality;
	float ScreenSpaceReflectionMaxRoughness;
};

struct RayTracingReflectionsParameters
{
	float RayTracingReflectionsMaxRoughness;
	int32 RayTracingReflectionsMaxBounces;
	int32 RayTracingReflectionsSamplesPerPixel;
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows;
	uint8 RayTracingReflectionsTranslucency;
};

struct ReflectionsParameters
{
	TEnumAsByte<EReflectionMethod::Type> ReflectionMethod;
	LumenReflectionsParameters LumenReflecParams;
	ScreenSpaceReflectionsParameters SSReflecParams;
	RayTracingReflectionsParameters RayTracingReflecParams;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Render Features Parameters
/// </summary>

struct PostProcessMaterialsParameters
{
	FWeightedBlendables WeightedBlendables;
};

struct AmbientCubemapParameters
{
	FLinearColor AmbientCubemapTint;
	float AmbientCubemapIntensity;
	TObjectPtr<class UTextureCube> AmbientCubemap;
};

struct AmbientOcclusionParameters
{
	float AmbientOcclusionIntensity;
	float AmbientOcclusionStaticFraction;
	float AmbientOcclusionRadius;
	uint32 AmbientOcclusionRadiusInWS;
	float AmbientOcclusionFadeDistance;
	float AmbientOcclusionFadeRadius;
	float AmbientOcclusionPower;
	float AmbientOcclusionBias;
	float AmbientOcclusionQuality;
	float AmbientOcclusionMipBlend;
	float AmbientOcclusionMipScale;
	float AmbientOcclusionMipThreshold;
	float AmbientOcclusionTemporalBlendWeight;
};

struct RayTracingAmbientOcclusionParameters
{
	uint32 RayTracingAO;
	int32 RayTracingAOSamplesPerPixel;
	float RayTracingAOIntensity;
	float RayTracingAORadius;
};

struct MotionBlurParameters
{
	float MotionBlurAmount;
	float MotionBlurMax;
	int32 MotionBlurTargetFPS;
	float MotionBlurPerObjectSize;
};

struct TranslucencyParameters
{
	ETranslucencyType TranslucencyType;
};

struct RayTracingTranslucencyParameters
{
	float RayTracingTranslucencyMaxRoughness;
	int32 RayTracingTranslucencyRefractionRays;
	int32 RayTracingTranslucencySamplesPerPixel;
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows;
	uint8 RayTracingTranslucencyRefraction;
};

struct RenderFeaturesParameters
{
	PostProcessMaterialsParameters PPMParams;
	AmbientCubemapParameters CubemapParams;
	AmbientOcclusionParameters AOParams;
	RayTracingAmbientOcclusionParameters RTAOParams;
	MotionBlurParameters MutionBlurParams;
	TranslucencyParameters TranslucencyParams;
	RayTracingTranslucencyParameters RTTranslucencyParams;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Film Grain Parameters
/// </summary>
struct FilmGrainParameters
{
	float FilmGrainIntensity;
	float FilmGrainIntensityShadows;
	float FilmGrainIntensityMidtones;
	float FilmGrainIntensityHighlights;
	float FilmGrainShadowsMax;
	float FilmGrainHighlightsMin;
	float FilmGrainHighlightsMax;
	float FilmGrainTexelSize;
	TObjectPtr<class UTexture2D> FilmGrainTexture;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Path Tracing Parameters
/// </summary>

struct LightingComponentsParameters
{
	uint32 PathTracingIncludeEmissive;
	uint32 PathTracingIncludeIndirectEmissive;
	uint32 PathTracingIncludeDiffuse;
	uint32 PathTracingIncludeIndirectDiffuse;
	uint32 PathTracingIncludeSpecular;
	uint32 PathTracingIncludeIndirectSpecular;
	uint32 PathTracingIncludeVolume;
	uint32 PathTracingIncludeIndirectVolume;
};

struct PathTracingParameters
{
	int32 PathTracingMaxBounces;
	int32 PathTracingSamplesPerPixel;
	float PathTracingMaxPathExposure;
	uint32 PathTracingEnableReferenceDOF;
	uint32 PathTracingEnableReferenceAtmosphere;
	uint32 PathTracingEnableDenoiser;
	LightingComponentsParameters LightComParams;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Post Process Volum Settings Parameters
/// </summary>
struct PostProcessVolumSettingsParameters
{
	float Priority;
	float BlendRadius;
	float BlendWeight;
	uint32 bEnabled;
	uint32 bUnbound;
};

/// <summary>
/// PostPrcess Parameters Struct
/// Categray Brush Settings Parameters
/// </summary>
struct BrushSettingsParameters
{
	FVector Center;
	FRotator Rotation;
	float X;
	float Y;
	float Z;
};

/// <summary>
/// All PostPrcess Parameters Struct
/// </summary>
struct PostProcessParameters
{
	LenParameters LenParams;
	ColorGradingParameters ColorGradingParams;
	FilmParameters FilmParams;
	GlobalIluminationParameters GlobalIluminationParams;
	ReflectionsParameters ReflectionsParams;
	RenderFeaturesParameters RenderFeaturesParams;
	FilmGrainParameters FilmGrainParams;
	PathTracingParameters PathTracingParams;
	PostProcessVolumSettingsParameters PostProcessVolumSettingsParams;
	BrushSettingsParameters BrushSettingsParams;
};
*/
