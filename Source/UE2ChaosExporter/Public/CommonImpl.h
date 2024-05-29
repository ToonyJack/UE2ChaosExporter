// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CommonImpl.generated.h"

/**
 * 
 */
UCLASS()
class UE2CHAOSEXPORTER_API UCommonImpl : public UObject
{
	GENERATED_BODY()

public:
	TArray<AActor*> GetCurrentLevelAllActor();
	
};
