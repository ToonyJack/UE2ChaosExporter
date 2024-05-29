// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <algorithm>
#include <iostream>
#include "UObject/NoExportTypes.h"
#include "PropertyID.generated.h"

/**
 * 
 */

UCLASS()
class UE2CHAOSEXPORTER_API FPropertyID
{

public:

	FPropertyID(uint32 value) : value_(value) {};

	operator uint32() const { return value_; }

	static TArray<FPropertyID> PropertyID_array;

	static bool IsArrayEmpty(TArray<FPropertyID>& array) { return array.Num() == 0; }

	static bool IsExist(TArray<FPropertyID>& array, FPropertyID propertyID) { return std::find(array.begin(), array.end(), propertyID) != array.end(); }

	const static FPropertyID GeneratePropertyID(uint32 min, uint32 max);
private:

	uint32 value_;
};
