// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PropertyID.generated.h"

/**
 * 
 */
UCLASS()
class UE2CHAOSEXPORTER_API UPropertyID : public UObject
{
	GENERATED_BODY()

protected:

	uint32 m_value;

public:

	UPropertyID();

	const uint32 GeneratePropertyID(uint32 min, uint32 max);
};
