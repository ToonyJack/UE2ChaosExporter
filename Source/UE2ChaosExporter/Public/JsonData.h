// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <UELightExporter.h>
#include <PropertyID.h>
#include "CommonImpl.h"

class FLightJsonData
{

	FLightJsonData();

	struct DirectionalLightJsonData
	{
		FPropertyID propertyID;
		FCommonImpl::EActorType Type = FCommonImpl::EActorType::DirectionalLight;
		FName Name;
		FTransform Transform;
		TMap<FString, TSharedPtr<UObject>> DirectionalLightMap;
	};

	struct PointLightJsonData
	{
		FPropertyID propertyID;
		FCommonImpl::EActorType Type = FCommonImpl::EActorType::PointLight;
		FName Name;
		FTransform Transform;
		FLightBaseParameters LightBaseParams;
		UUELightData::LightParameters LightParams;
		UUELightData::LocalLightParameters LocalLightParams;
		UUELightData::PointLightParameters PointLightParams;
	};

	struct SpotLightJsonData
	{
		FPropertyID propertyID;
		FCommonImpl::EActorType Type = FCommonImpl::EActorType::SpotLight;
		FName Name;
		FTransform Transform;
		FLightBaseParameters LightBaseParams;
		UUELightData::LightParameters LightParams;
		UUELightData::LocalLightParameters LocalLightParams;
		UUELightData::PointLightParameters PointLightParams;
		UUELightData::SpotLightParameters SpotLightParams;
	};

	struct RectLightJsonData
	{
		FPropertyID propertyID;
		FCommonImpl::EActorType Type = FCommonImpl::EActorType::RectLight;
		FName Name;
		FTransform Transform;
		FLightBaseParameters LightBaseParams;
		UUELightData::LightParameters LightParams;
		UUELightData::LocalLightParameters LocalLightParams;
		UUELightData::RectLightParameters RectLightParams;
	};

	struct SkyLightJsonData
	{
		FPropertyID propertyID;
		FCommonImpl::EActorType Type = FCommonImpl::EActorType::SkyLight;
		FName Name;
		FTransform Transform;
		FLightBaseParameters LightBaseParams;
		UUELightData::SkyLightParameters SkyLightParams;
	};

	struct HeightFogJsonData
	{
		FPropertyID propertyID;
		FCommonImpl::EActorType Type = FCommonImpl::EActorType::HeightFog;
		FName Name;
		FTransform Transform;
		UUELightData::HeightFogParameters HeightFogParams;
	};

	struct SkyAtmosphereJsonData
	{
		FPropertyID propertyID;
		FCommonImpl::EActorType Type = FCommonImpl::EActorType::SkyAtmosphere;
		FName Name;
		FTransform Transform;
		UUELightData::SkyAtmosphereParameters SkyAtmosphereParams;
	};

	struct PostProcessJsonData
	{
		FPropertyID propertyID;
		FCommonImpl::EActorType Type = FCommonImpl::EActorType::PostPrcess;
		FName Name;
		FTransform Transform;
		UUELightData::PostProcessParameters PostProcessParams;
	};

	void WriteDirectionalLightJsonData(TArray<AActor*> actor_array, UUELightData* light_data, FPropertyID* propertyID, FString json_file_path, TSharedRef<FJsonObject> JsonObject);

	TMap<uint32, DirectionalLightJsonData> ConvertDirectionalLightDatatoJsonData(TArray<AActor*> actor_array, UUELightData* light_data, FPropertyID* propertyID);

	PointLightJsonData ConvertPointLightDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID);
	SpotLightJsonData ConvertSpotLightDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID);
	RectLightJsonData ConvertRectLightDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID);
	SkyLightJsonData ConvertSkyLightDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID);
	HeightFogJsonData ConvertHeightFogDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID);
	SkyAtmosphereJsonData ConvertSkyAtmosphereDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID);
	PostProcessJsonData ConvertPostProcessDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID);
};

class FSceneInstanceJsonData
{

};
