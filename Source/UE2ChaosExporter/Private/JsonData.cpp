// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonData.h"

FLightJsonData::DirectionalLightJsonData FLightJsonData::ConvertDirectionalLightDatatoJsonData(AActor* actor)
{
	DirectionalLightJsonData directional_light_json_data;

	UDirectionalLightComponent* directional_light = actor->FindComponentByClass<UDirectionalLightComponent>();
	if (directional_light)
	{
		directional_light_json_data.Name = (FName)actor->GetActorLabel();
		directional_light_json_data.Transform.SetLocation(actor->GetActorLocation());
		directional_light_json_data.Transform.SetRotation(actor->GetActorQuat());
		directional_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

		if (FPropertyID::IsArrayEmpty(FPropertyID::PropertyID_array))
		{
			FPropertyID propertyID = FPropertyID::GeneratePropertyID(1000000000, 199999999);
			directional_light_json_data.propertyID = propertyID;
			FPropertyID::PropertyID_array.Add(propertyID);
		}
		else
		{
			while (true)
			{
				FPropertyID propertyID = FPropertyID::GeneratePropertyID(1000000000, 199999999);
				if (FPropertyID::IsExist(FPropertyID::PropertyID_array, propertyID))
				{
					FPropertyID::PropertyID_array.Add(propertyID);
					break;
				}
			}
		}
	}
}
