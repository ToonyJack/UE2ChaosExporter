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
#include "UELightExporter.generated.h"


/**
 * 
 */
UCLASS()
class UE2CHAOSEXPORTER_API UUELightData : public UObject
{
	GENERATED_BODY()	

public:

	/// <summary>
	/// Common Light Parameter Struct
	/// </summary>
	
	struct LightBaseParameters
	{
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
	};
	
	struct LightParameters
	{
		uint32 bUseTemperature;
		float Temperature;
		float SpecularScale;
		float MaxDrawDistance;
		float MaxDistanceFadeRange;
		float ShadowResolutionScale;
		float ShadowBias;
		float ShadowSlopeBias;
		float ShadowSharpen;
		float ContactShadowLength;
		float ContactShadowCastingIntensity;
		float ContactShadowNonCastingIntensity;
		uint32 ContactShadowLengthInWS;
		uint32 CastTranslucentShadows;
		uint32 bCastShadowsFromCinematicObjectsOnly;
		uint32 bForceCachedShadowsForMovablePrimitives;
		FLightingChannels LightingChannels;
		TObjectPtr<class UMaterialInterface> LightFunctionMaterial;
		TObjectPtr<class UMaterialInterface> StashedLightFunctionMaterial;
		FVector LightFunctionScale;
		TObjectPtr<class UTextureLightProfile> IESTexture;
		uint32 bUseIESBrightness;
		float IESBrightnessScale;
		float LightFunctionFadeDistance;
		float DisabledBrightness;
		uint32 bEnableLightShaftBloom;
		float BloomScale;
		float BloomThreshold;
		float BloomMaxBrightness;
		FColor BloomTint;
		bool bUseRayTracedDistanceFieldShadows;
		float RayStartOffsetDepthScale;
	};

	/// <summary>
	/// Directional Light Parameters Struct
	/// </summary>
	struct DirectionalLightParameters
	{
		float LightSourceAngle;
		float LightSourceSoftAngle;
		float ShadowCascadeBiasDistribution;
		uint32 bEnableLightShaftOcclusion;
		float OcclusionMaskDarkness;
		float OcclusionDepthRange;
		FVector LightShaftOverrideDirection;
		float DynamicShadowDistanceMovableLight;
		float DynamicShadowDistanceStationaryLight;
		int32 DynamicShadowCascades;
		float CascadeDistributionExponent;
		float CascadeTransitionFraction;
		float ShadowDistanceFadeoutFraction;
		uint32 bUseInsetShadowsForMovableObjects;
		int32 FarShadowCascadeCount;
		float FarShadowDistance;
		float DistanceFieldShadowDistance;
		float ShadowSourceAngleFactor;
		float TraceDistance;
		uint32 bAtmosphereSunLight;
		int32 AtmosphereSunLightIndex;
		FLinearColor AtmosphereSunDiskColorScale;
		uint32 bPerPixelAtmosphereTransmittance;
		uint32 bCastShadowsOnClouds;
		uint32 bCastShadowsOnAtmosphere;
		uint32 bCastCloudShadows;
		float CloudShadowStrength;
		float CloudShadowOnAtmosphereStrength;
		float CloudShadowOnSurfaceStrength;
		float CloudShadowDepthBias;
		float CloudShadowExtent;
		float CloudShadowMapResolutionScale;
		float CloudShadowRaySampleCountScale;
		FLinearColor CloudScatteredLuminanceScale;
		uint32 bCastModulatedShadows;
		FColor ModulatedShadowColor;
		float ShadowAmount;
	};

	/// <summary>
	/// Spot Light Parameters Struct
	/// </summary>
	struct SpotLightParameters
	{
		float InnerConeAngle;
		float OuterConeAngle;
	};

	/// <summary>
	/// Point Light Parameters Struct
	/// </summary>
	struct PointLightParameters
	{
		uint32 bUseInverseSquaredFalloff;
		float LightFalloffExponent;
		float SourceRadius;
		float SoftSourceRadius;
		float SourceLength;
		ELightUnits IntensityUnits;
		float InverseExposureBlend;
		float AttenuationRadius;
	};

	/// <summary>
	/// Rect Light Parameters Struct
	/// </summary>
	struct RectLightParameters
	{
		float SourceWidth;
		float SourceHeight;
		float BarnDoorAngle;
		float BarnDoorLength;
		TObjectPtr<class UTexture> SourceTexture;
	};

	/// <summary>
	/// Sky Light Parameters Struct
	/// </summary>
	struct SkyLightParameters
	{
		bool bRealTimeCapture;
		TEnumAsByte<enum ESkyLightSourceType> SourceType;
		TObjectPtr<class UTextureCube> Cubemap;
		float SourceCubemapAngle;
		int32 CubemapResolution;
		float SkyDistanceThreshold;
		bool bCaptureEmissiveOnly;
		bool bLowerHemisphereIsBlack;
		FLinearColor LowerHemisphereColor;
		float OcclusionMaxDistance;
		float Contrast;
		float OcclusionExponent;
		float MinOcclusion;
		FColor OcclusionTint;
		uint32 bCloudAmbientOcclusion;
		float CloudAmbientOcclusionStrength;
		float CloudAmbientOcclusionExtent;
		float CloudAmbientOcclusionMapResolutionScale;
		float CloudAmbientOcclusionApertureScale;
		TEnumAsByte<enum EOcclusionCombineMode> OcclusionCombineMode;
		uint32 bShowIlluminanceMeter;
	};

	/// <summary>
	/// Height Fog Parameters Struct
	/// </summary>
	struct HeightFogParameters
	{
		float FogDensity;
		float FogHeightFalloff;
		FExponentialHeightFogData SecondFogData;
		FLinearColor FogInscatteringLuminance;
		FLinearColor SkyAtmosphereAmbientContributionColorScale;
		TObjectPtr<class UTextureCube> InscatteringColorCubemap;
		float InscatteringColorCubemapAngle;
		FLinearColor InscatteringTextureTint;
		float FullyDirectionalInscatteringColorDistance;
		float NonDirectionalInscatteringColorDistance;
		float DirectionalInscatteringExponent;
		float DirectionalInscatteringStartDistance;
		FLinearColor DirectionalInscatteringLuminance;
		float FogMaxOpacity;
		float StartDistance;
		float FogCutoffDistance;
		bool bEnableVolumetricFog;
		float VolumetricFogScatteringDistribution;
		FColor VolumetricFogAlbedo;
		FLinearColor VolumetricFogEmissive;
		float VolumetricFogExtinctionScale;
		float VolumetricFogDistance;
		float VolumetricFogStartDistance;
		float VolumetricFogNearFadeInDistance;
		float VolumetricFogStaticLightingScatteringIntensity;
		bool bOverrideLightColorsWithFogInscatteringColors;
	};

	/// <summary>
	/// SkyAtmosphere Fog Parameters Struct
	/// </summary>
	struct SkyAtmosphereParameters
	{
		ESkyAtmosphereTransformMode TransformMode;
		float BottomRadius;
		FColor GroundAlbedo;
		float AtmosphereHeight;
		float MultiScatteringFactor;
		float TraceSampleCountScale;
		float RayleighScatteringScale;
		FLinearColor RayleighScattering;
		float RayleighExponentialDistribution;
		float MieScatteringScale;
		FLinearColor MieScattering;
		float MieAbsorptionScale;
		FLinearColor MieAbsorption;
		float MieAnisotropy;
		float MieExponentialDistribution;
		float OtherAbsorptionScale;
		FLinearColor OtherAbsorption;
		FTentDistribution OtherTentDistribution;
		FLinearColor SkyLuminanceFactor;
		float AerialPespectiveViewDistanceScale;
		float HeightFogContribution;
		float TransmittanceMinLightElevationAngle;
		float AerialPerspectiveStartDepth;
	};

	/// <summary>
	/// PostPrcess Parameters Struct
	/// Categray Lens Parameters
	/// </summary>
	struct BloomParameters
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

	struct ExposureParameters
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

	struct ChromaticAberrationParameters
	{
		float SceneFringeIntensity;
		float ChromaticAberrationStartOffset;
	};

	struct DirtMaskParameters
	{
		TObjectPtr<class UTexture> DirtMaskTexture;
		float DirtMaskIntensity;
		FLinearColor DirtMaskTint;
	};

	struct CameraParameters
	{
		float CameraShutterSpeed;
		float CameraISO;
		float DepthOfFieldFstop;
		float DepthOfFieldMinFstop;
		float DepthOfFieldBladeCount;
	};

	struct LensFlaresParameters
	{
		float LensFlaresIntensity;
		FLinearColor LensFlaresTint;
		float LensFlareBokehSize;
		float LensFlareThreshold;
		TObjectPtr<class UTexture> LensFlareBokehShape;
		FLinearColor LensFlareTints[8];
	};

	struct ImageEffectsParameters
	{
		float VignetteIntensity;
		float Sharpen;
	};

	struct DepthofFieldParameters
	{
		float DepthOfFieldSensorWidth;
		float DepthOfFieldSqueezeFactor;
		float DepthOfFieldFocalDistance;
		float DepthOfFieldDepthBlurAmount;
		float DepthOfFieldDepthBlurRadius;
	};

	struct LenParameters
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

public:

	TArray<ULightComponent*> GetCurrentLevelAllLight(TArray<AActor*> current_level_all_actors);
	LightBaseParameters GetLightBaseParameters(ULightComponent* light);
	LightParameters GetLightParameters(ULightComponent* light);

	TArray<UDirectionalLightComponent*> GetCurrentLevelDirectionalLight(TArray<ULightComponent*> lighting_Array);
	DirectionalLightParameters GetDirectionalLightParameters(UDirectionalLightComponent* light);

	TArray<UPointLightComponent*> GetCurrentLevelPointlLight(TArray<ULightComponent*> lighting_Array);
	PointLightParameters GetPointLightParameters(UPointLightComponent* light);

	TArray<USpotLightComponent*> GetCurrentLevelSpotLight(TArray<ULightComponent*> lighting_Array);
	SpotLightParameters GetSpotLightParameters(USpotLightComponent* light);

	TArray<URectLightComponent*> GetCurrentLevelRectLight(TArray<ULightComponent*> lighting_Array);
	RectLightParameters GetRectLightParameters(URectLightComponent* light);

	TArray<USkyLightComponent*> GetCurrentLevelSkyLight(TArray<ULightComponent*> lighting_Array);
	SkyLightParameters GetSkyLightParameters(USkyLightComponent* light);

	TArray<UExponentialHeightFogComponent*> GetCurrentLevelHeightFog(TArray<AActor*> current_level_environment_lighting_actors);
	HeightFogParameters GetHeightFogParameters(UExponentialHeightFogComponent* height_fog);

	TArray<USkyAtmosphereComponent*> GetCurrentLevelSkyAtmosphereFog(TArray<AActor*> current_level_environment_lighting_actors);
	SkyAtmosphereParameters GetSkyAtmosphereParameters(USkyAtmosphereComponent* sky_atmosphere);

	TArray<UPostProcessComponent*> GetCurrentLevelPostProcess(TArray<AActor*> current_level_environment_lighting_actors);
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

	TArray<UVolumetricCloudComponent*> GetCurrentLevelVolumetricCloud(TArray<AActor*> current_level_environment_lighting_actors);

	
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

	LightingComponentsParameters GetLightingComponentsParameters(UPostProcessComponent* post_prcess);
};
