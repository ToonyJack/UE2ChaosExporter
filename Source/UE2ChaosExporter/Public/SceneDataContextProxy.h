// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <UELightExporter.h>

class USceneDataContextProxy
{
public:
	TMap<FString, FString> SceneDataMap;

	FString StaticMeshDataString;
	FString SkeletalMeshDataString;
	FString LightDataString;
	FString HeightFogDataString;
	FString SkyAtmosphereDataString;
	FString PostProcessDataString;
	FString DecalDataString;

	void WriteSceneDatatoJsonFile();
};
