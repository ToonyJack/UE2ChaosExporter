// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonImpl.h"
#include <Kismet/GameplayStatics.h>
#include <Selection.h>

TArray<AActor*> FCommonImpl::GetCurrentLevelAllActor()
{
	TArray<AActor*> current_level_all_actors;
    bool any_actor_selected = false;
    for (FSelectionIterator It(GEditor->GetSelectedActorIterator()); It; ++It)
    {
        if (AActor* selected_actor = Cast<AActor>(*It))
        {
            any_actor_selected = true;
            current_level_all_actors.Add(selected_actor);
        }
    }
    if (any_actor_selected == false)
    {
        UGameplayStatics::GetAllActorsOfClass(GEditor->GetEditorWorldContext().World(), AActor::StaticClass(), current_level_all_actors);
    }
	
	return current_level_all_actors;
}

FString FCommonImpl::FromInt(int value)
{
    return FString::Printf(TEXT("%d"), value);
}

FString FCommonImpl::FromFloat(float value)
{
    return FString::Printf(TEXT("%s"), value);
}

FString FCommonImpl::FromBool(bool value)
{
    return value ? "True" : "False";
}

FString FCommonImpl::FromInt32(int32 value)
{
    return FString::Printf(TEXT("%d"), value);
}

FString FCommonImpl::FromUInt32(uint32 value)
{
    return FString::Printf(TEXT("%d"), value);
}

FString FCommonImpl::FromColor(FColor value)
{
    return FString::Printf(TEXT("%d,%d,%d,%d"), value.R, value.G, value.B, value.A);
}

FString FCommonImpl::FromLinearColor(FLinearColor value)
{
    return FString::Printf(TEXT("%s,%s,%s,%s"), value.R, value.G, value.B, value.A);
}

FString FCommonImpl::FromVector(FVector value)
{
    return FString::Printf(TEXT("%s,%s,%s"), value.X, value.Y, value.Z);
}

FString FCommonImpl::FromStruct(FLightingChannels value)
{
    if (value.bChannel0)
    {
        return "0";
    }
    else if (value.bChannel1)
    {
        return "1";
    }
    else
    {
        return "2";
    }
}

FString FCommonImpl::FromLightUnits(ELightUnits value)
{
    if (value == ELightUnits::Unitless)
    {
        return "Unitless";
    }
    else if (value == ELightUnits::Candelas)
    {
        return "Candelas";
    }
    else if (value == ELightUnits::Lumens)
    {
        return "Lumens";
    }
    else
    {
        return "EV";
    }
}


