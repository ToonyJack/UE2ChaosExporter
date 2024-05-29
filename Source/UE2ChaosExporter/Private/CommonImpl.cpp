// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonImpl.h"
#include <Kismet/GameplayStatics.h>
#include <Selection.h>

TArray<AActor*> UCommonImpl::GetCurrentLevelAllActor()
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
