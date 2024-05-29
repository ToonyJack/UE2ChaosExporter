// Fill out your copyright notice in the Description page of Project Settings.



#include "PropertyID.h"
#include <iostream>
#include <random>

UPropertyID::UPropertyID()
{
    m_value = 0;
}

const uint32 UPropertyID::GeneratePropertyID(uint32 min, uint32 max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32> dist(min, max);
    m_value = dist(gen);

    return m_value;
}