// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

class FActorData //: public UObject
{

public:
	FActorData(){}

	FName Name;
	uint32 PropertyID;
	FTransform Transform;
	
};
