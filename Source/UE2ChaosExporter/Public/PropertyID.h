// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <algorithm>
#include <iostream>
#include "UObject/NoExportTypes.h"

class FPropertyID
{

public:
	uint32 LightMinPropertyID = 1000000000;
	uint32 LightMaxPropertyID = 1999999999;

	FPropertyID() {}

	FPropertyID(uint32 value) : value_(value) {};

	operator uint32() const { return value_; }

	static TArray<uint32> propertyID_array;

	bool IsArrayEmpty(TArray<uint32>& array) { return array.Num() == 0; }

	bool IsExist(TArray<uint32>& array, uint32 propertyID);

	uint32 GeneratePropertyID(const uint32 min, const uint32 max);
private:

	uint32 value_;
};
