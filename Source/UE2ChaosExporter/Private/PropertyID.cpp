// Fill out your copyright notice in the Description page of Project Settings.



#include "PropertyID.h"
#include <iostream>
#include <random>

bool FPropertyID::IsExist(TArray<FPropertyID>& array, FPropertyID propertyID)
{
    return std::find(array.begin(), array.end(), propertyID) == array.end();
}

const FPropertyID FPropertyID::GeneratePropertyID(uint32 min, uint32 max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<FPropertyID> dist(min, max);

    return dist(gen);
}
