// Fill out your copyright notice in the Description page of Project Settings.


#include "SceneDataContextProxy.h"

void USceneDataContextProxy::WriteLightDatatoJsonData(UUELightData* light_data, TArray<AActor*> actor_array)
{
	TArray<ULightComponent*> light_array = light_data->GetCurrentLevelAllLight(actor_array);

	WriteDirectionalLightDatatoJsonData(light_data, light_array);
}

void USceneDataContextProxy::WriteDirectionalLightDatatoJsonData(UUELightData* light_data, TArray<ULightComponent*> light_array)
{
	TArray<UDirectionalLightComponent*> directional_light_array = light_data->GetCurrentLevelDirectionalLight(light_array);
	for (UDirectionalLightComponent* directional_light : directional_light_array)
	{
		UUELightData::DirectionalLightParameters directional_light_params = light_data->GetDirectionalLightParameters(directional_light);
	}
}
