// Fill out your copyright notice in the Description page of Project Settings.



#include "PropertyID.h"
#include <iostream>
#include <random>

bool FPropertyID::IsExist(TArray<uint32>& array, uint32 propertyID)
{
    for (int i = 0; i < array.Num(); i++)
    {
        if (array[i] == propertyID)
        {
            return true;
        }
    }
    return false;
}

uint32 FPropertyID::GeneratePropertyID(const uint32 min, const uint32 max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32> dist(min, max);

    return dist(gen);
}

uint32 FPropertyID::SpawnActorPropertyID()
{
	if (IsArrayEmpty(propertyID_array))
	{
		uint32 outPropertyID = GeneratePropertyID(LightMinPropertyID, LightMaxPropertyID);
		propertyID_array.Add(outPropertyID);
		return outPropertyID;
	}
	else
	{
		while (true)
		{
			uint32 outPropertyID = GeneratePropertyID(LightMinPropertyID, LightMaxPropertyID);
			if (IsExist(propertyID_array, outPropertyID))
			{
				propertyID_array.Add(outPropertyID);
				return outPropertyID;
			}
		}
	}
}
