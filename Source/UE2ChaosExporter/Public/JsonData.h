// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <UELightExporter.h>
#include <PropertyID.h>
#include "CommonImpl.h"

class FLightJsonData
{
public:

	TMap<FString, FString> ConvertLightBaseDatatoJsonData(ULightComponent* light);
	TMap<FString, FString> ConvertLightDatatoJsonData(ULightComponent* light);
	TMap<FString, FString> ConvertLocalLightDatatoJsonData(ULocalLightComponent* light);

	FString ConvertDirectionalLightDatatoJsonData(UDirectionalLightComponent* light);

};

class FSceneActorJsonData
{

public:
	FString ConvertlLightDatatoJsonString(TArray<AActor*> actor_array);
	FString WriteLightDatatoJsonFile(TArray<AActor*> actor_array, FLightJsonData light_json_data, uint32 outPropertyID);

};
