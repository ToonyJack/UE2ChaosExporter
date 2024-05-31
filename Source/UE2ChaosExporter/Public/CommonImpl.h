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

	static FString FromInt(int value);
	static FString FromFloat(float value);
	static FString FromBool(bool value);
	static FString FromInt32(int32 value);
	static FString FromUInt32(uint32 value);
	static FString FromColor(FColor value);
	static FString FromLinearColor(FLinearColor value);
	static FString FromVector(FVector value);
	
	static FString FromStruct(FLightingChannels value);

	static FString FromLightUnits(ELightUnits value);
};
