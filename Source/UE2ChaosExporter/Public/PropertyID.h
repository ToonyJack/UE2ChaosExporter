// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <algorithm>
#include <iostream>
#include "UObject/NoExportTypes.h"

class FPropertyID
{

public:
	const static uint32 LightMinPropertyID = 1000000000;
	const static uint32 LightMaxPropertyID = 4000000000;

	FPropertyID() {}

	FPropertyID(uint32 value) : value_(value) {};

	operator uint32() const { return value_; }

	static uint32 SpawnActorPropertyID();

	static TArray<uint32> propertyID_array;

	static bool IsArrayEmpty(TArray<uint32>& array) { return array.Num() == 0; }

	static bool IsExist(TArray<uint32>& array, uint32 propertyID);

	static uint32 GeneratePropertyID(const uint32 min, const uint32 max);

	
private:

	uint32 value_;
};
