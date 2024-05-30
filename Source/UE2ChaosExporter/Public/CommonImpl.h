// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"


class FCommonImpl
{
	
public:
	enum class EActorType
	{
		DirectionalLight,
		PointLight,
		SpotLight,
		RectLight,
		SkyLight,
		HeightFog,
		SkyAtmosphere,
		PostPrcess
	};

	TArray<AActor*> GetCurrentLevelAllActor();
	
};
