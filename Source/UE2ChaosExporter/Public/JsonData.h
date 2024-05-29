// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <UELightExporter.h>
#include <PropertyID.h>
#include "JsonData.generated.h"


/**
 * 
 */
UCLASS()
class FLightJsonData
{
	
	struct DirectionalLightJsonData
	{
		FPropertyID propertyID;
		FName Name;
		FTransform Transform;
		UUELightData::LightBaseParameters LightBaseParams;
		UUELightData::LightParameters LightParams;
		UUELightData::DirectionalLightParameters DirectionalLightParams;
	};

	struct PointLightJsonData
	{
		FPropertyID propertyID;
		FName Name;
		FTransform Transform;
		UUELightData::LightBaseParameters LightBaseParams;
		UUELightData::LightParameters LightParams;
		UUELightData::LocalLightParameters LocalLightParams;
		UUELightData::PointLightParameters PointLightParams;
	};

	struct SpotLightJsonData
	{
		FPropertyID propertyID;
		FName Name;
		FTransform Transform;
		UUELightData::LightBaseParameters LightBaseParams;
		UUELightData::LightParameters LightParams;
		UUELightData::LocalLightParameters LocalLightParams;
		UUELightData::PointLightParameters PointLightParams;
		UUELightData::SpotLightParameters SpotLightParams;
	};

	struct RectLightJsonData
	{
		FPropertyID propertyID;
		FName Name;
		FTransform Transform;
		UUELightData::LightBaseParameters LightBaseParams;
		UUELightData::LightParameters LightParams;
		UUELightData::LocalLightParameters LocalLightParams;
		UUELightData::RectLightParameters RectLightParams;
	};

	struct SkyLightJsonData
	{
		FPropertyID propertyID;
		FName Name;
		FTransform Transform;
		UUELightData::LightBaseParameters LightBaseParams;
		UUELightData::SkyLightParameters SkyLightParams;
	};

	struct HeightFogJsonData
	{
		FPropertyID propertyID;
		FName Name;
		FTransform Transform;
		UUELightData::HeightFogParameters HeightFogParams;
	};

	struct SkyAtmosphereJsonData
	{
		FPropertyID propertyID;
		FName Name;
		FTransform Transform;
		UUELightData::SkyAtmosphereParameters SkyAtmosphereParams;
	};

	struct PostProcessJsonData
	{
		FPropertyID propertyID;
		FName Name;
		FTransform Transform;
		UUELightData::PostProcessParameters PostProcessParams;
	};

	DirectionalLightJsonData ConvertDirectionalLightDatatoJsonData(AActor* actor);
};

class FSceneInstanceJsonData
{

};
