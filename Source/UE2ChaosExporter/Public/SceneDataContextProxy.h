// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <UELightExporter.h>
#include "SceneDataContextProxy.generated.h"

/**
 * 
 */
UCLASS()
class UE2CHAOSEXPORTER_API USceneDataContextProxy : public UObject
{
	GENERATED_BODY()
	
	void WriteLightDatatoJsonData(UUELightData* light_data, TArray<AActor*> actor_array);
};
