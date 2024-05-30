// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonData.h"
#include <PropertyID.h>
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonReader.h"

TArray<uint32> FPropertyID::propertyID_array;

void FLightJsonData::WriteDirectionalLightJsonData(TArray<AActor*> actor_array, UUELightData* light_data, FPropertyID* propertyID, FString json_file_path, TSharedRef<FJsonObject> JsonObject)
{
	TMap<uint32, DirectionalLightJsonData> directional_light_map = ConvertDirectionalLightDatatoJsonData(actor_array, light_data, propertyID);
	for (const TPair<uint32, DirectionalLightJsonData>& Pair : directional_light_map)
	{
		//JsonObject->SetNumberField(Pair.Key, Pair.Value);
	}
}

TMap<uint32, FLightJsonData::DirectionalLightJsonData> FLightJsonData::ConvertDirectionalLightDatatoJsonData(TArray<AActor*> actor_array, UUELightData* light_data, FPropertyID* propertyID)
{
	TMap<uint32, DirectionalLightJsonData> directional_light_map;
	for (AActor* actor : actor_array)
	{
		DirectionalLightJsonData directional_light_json_data;

		UDirectionalLightComponent* directional_light = actor->FindComponentByClass<UDirectionalLightComponent>();
		if (directional_light)
		{
			directional_light_json_data.Name = (FName)actor->GetActorLabel();
			directional_light_json_data.Transform.SetLocation(actor->GetActorLocation());
			directional_light_json_data.Transform.SetRotation(actor->GetActorQuat());
			directional_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

			if (propertyID->IsArrayEmpty(FPropertyID::propertyID_array))
			{
				uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
				directional_light_json_data.propertyID = local_propertyID;
				FPropertyID::propertyID_array.Add(local_propertyID);
			}
			else
			{
				while (true)
				{
					uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
					if (propertyID->IsExist(FPropertyID::propertyID_array, local_propertyID))
					{
						directional_light_json_data.propertyID = local_propertyID;
						FPropertyID::propertyID_array.Add(local_propertyID);
						break;
					}
				}
			}

			FLightBaseParameters light_params = light_data->GetLightBaseParameters(directional_light);
			//UUELightData::LightParameters light_params = light_data->GetLightParameters(directional_light);
			//UUELightData::DirectionalLightParameters light_params = light_data->GetDirectionalLightParameters(directional_light);

			UStruct* testClass = FLightBaseParameters::StaticStruct();
			
		}
		directional_light_map.Add(directional_light_json_data.propertyID, directional_light_json_data);
	}

	return directional_light_map;
}



FLightJsonData::PointLightJsonData FLightJsonData::ConvertPointLightDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID)
{
	PointLightJsonData point_light_json_data;

	UPointLightComponent* point_light = actor->FindComponentByClass<UPointLightComponent>();
	if (point_light)
	{
		point_light_json_data.Name = (FName)actor->GetActorLabel();
		point_light_json_data.Transform.SetLocation(actor->GetActorLocation());
		point_light_json_data.Transform.SetRotation(actor->GetActorQuat());
		point_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

		if (propertyID->IsArrayEmpty(FPropertyID::propertyID_array))
		{
			FPropertyID local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
			point_light_json_data.propertyID = local_propertyID;
			FPropertyID::propertyID_array.Add(local_propertyID);
		}
		else
		{
			while (true)
			{
				FPropertyID local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
				if (propertyID->IsExist(FPropertyID::propertyID_array, local_propertyID))
				{
					point_light_json_data.propertyID = local_propertyID;
					FPropertyID::propertyID_array.Add(local_propertyID);
					break;
				}
			}
		}

		point_light_json_data.LightBaseParams = light_data->GetLightBaseParameters(point_light);
		point_light_json_data.LightParams = light_data->GetLightParameters(point_light);
		point_light_json_data.LocalLightParams = light_data->GetLocalLightParameters(point_light);
		point_light_json_data.PointLightParams = light_data->GetPointLightParameters(point_light);
	}

	return point_light_json_data;
}

/*
FLightJsonData::SpotLightJsonData FLightJsonData::ConvertSpotLightDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID)
{
	DirectionalLightJsonData directional_light_json_data;

	UDirectionalLightComponent* directional_light = actor->FindComponentByClass<UDirectionalLightComponent>();
	if (directional_light)
	{
		directional_light_json_data.Name = (FName)actor->GetActorLabel();
		directional_light_json_data.Transform.SetLocation(actor->GetActorLocation());
		directional_light_json_data.Transform.SetRotation(actor->GetActorQuat());
		directional_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

		if (propertyID->IsArrayEmpty(FPropertyID::propertyID_array))
		{
			uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
			directional_light_json_data.propertyID = local_propertyID;
			FPropertyID::propertyID_array.Add(local_propertyID);
		}
		else
		{
			while (true)
			{
				uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
				if (propertyID->IsExist(FPropertyID::propertyID_array, local_propertyID))
				{
					directional_light_json_data.propertyID = local_propertyID;
					FPropertyID::propertyID_array.Add(local_propertyID);
					break;
				}
			}
		}

		directional_light_json_data.LightBaseParams = light_data->GetLightBaseParameters(directional_light);
		directional_light_json_data.LightParams = light_data->GetLightParameters(directional_light);
		directional_light_json_data.DirectionalLightParams = light_data->GetDirectionalLightParameters(directional_light);
	}

	return directional_light_json_data;
}

FLightJsonData::RectLightJsonData FLightJsonData::ConvertRectLightDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID)
{
	DirectionalLightJsonData directional_light_json_data;

	UDirectionalLightComponent* directional_light = actor->FindComponentByClass<UDirectionalLightComponent>();
	if (directional_light)
	{
		directional_light_json_data.Name = (FName)actor->GetActorLabel();
		directional_light_json_data.Transform.SetLocation(actor->GetActorLocation());
		directional_light_json_data.Transform.SetRotation(actor->GetActorQuat());
		directional_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

		if (propertyID->IsArrayEmpty(FPropertyID::propertyID_array))
		{
			uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
			directional_light_json_data.propertyID = local_propertyID;
			FPropertyID::propertyID_array.Add(local_propertyID);
		}
		else
		{
			while (true)
			{
				uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
				if (propertyID->IsExist(FPropertyID::propertyID_array, local_propertyID))
				{
					directional_light_json_data.propertyID = local_propertyID;
					FPropertyID::propertyID_array.Add(local_propertyID);
					break;
				}
			}
		}

		directional_light_json_data.LightBaseParams = light_data->GetLightBaseParameters(directional_light);
		directional_light_json_data.LightParams = light_data->GetLightParameters(directional_light);
		directional_light_json_data.DirectionalLightParams = light_data->GetDirectionalLightParameters(directional_light);
	}

	return directional_light_json_data;
}

FLightJsonData::SkyLightJsonData FLightJsonData::ConvertSkyLightDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID)
{
	DirectionalLightJsonData directional_light_json_data;

	UDirectionalLightComponent* directional_light = actor->FindComponentByClass<UDirectionalLightComponent>();
	if (directional_light)
	{
		directional_light_json_data.Name = (FName)actor->GetActorLabel();
		directional_light_json_data.Transform.SetLocation(actor->GetActorLocation());
		directional_light_json_data.Transform.SetRotation(actor->GetActorQuat());
		directional_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

		if (propertyID->IsArrayEmpty(FPropertyID::propertyID_array))
		{
			uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
			directional_light_json_data.propertyID = local_propertyID;
			FPropertyID::propertyID_array.Add(local_propertyID);
		}
		else
		{
			while (true)
			{
				uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
				if (propertyID->IsExist(FPropertyID::propertyID_array, local_propertyID))
				{
					directional_light_json_data.propertyID = local_propertyID;
					FPropertyID::propertyID_array.Add(local_propertyID);
					break;
				}
			}
		}

		directional_light_json_data.LightBaseParams = light_data->GetLightBaseParameters(directional_light);
		directional_light_json_data.LightParams = light_data->GetLightParameters(directional_light);
		directional_light_json_data.DirectionalLightParams = light_data->GetDirectionalLightParameters(directional_light);
	}

	return directional_light_json_data;
}

FLightJsonData::HeightFogJsonData FLightJsonData::ConvertHeightFogDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID)
{
	DirectionalLightJsonData directional_light_json_data;

	UDirectionalLightComponent* directional_light = actor->FindComponentByClass<UDirectionalLightComponent>();
	if (directional_light)
	{
		directional_light_json_data.Name = (FName)actor->GetActorLabel();
		directional_light_json_data.Transform.SetLocation(actor->GetActorLocation());
		directional_light_json_data.Transform.SetRotation(actor->GetActorQuat());
		directional_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

		if (propertyID->IsArrayEmpty(FPropertyID::propertyID_array))
		{
			uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
			directional_light_json_data.propertyID = local_propertyID;
			FPropertyID::propertyID_array.Add(local_propertyID);
		}
		else
		{
			while (true)
			{
				uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
				if (propertyID->IsExist(FPropertyID::propertyID_array, local_propertyID))
				{
					directional_light_json_data.propertyID = local_propertyID;
					FPropertyID::propertyID_array.Add(local_propertyID);
					break;
				}
			}
		}

		directional_light_json_data.LightBaseParams = light_data->GetLightBaseParameters(directional_light);
		directional_light_json_data.LightParams = light_data->GetLightParameters(directional_light);
		directional_light_json_data.DirectionalLightParams = light_data->GetDirectionalLightParameters(directional_light);
	}

	return directional_light_json_data;
}

FLightJsonData::SkyAtmosphereJsonData FLightJsonData::ConvertSkyAtmosphereDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID)
{
	DirectionalLightJsonData directional_light_json_data;

	UDirectionalLightComponent* directional_light = actor->FindComponentByClass<UDirectionalLightComponent>();
	if (directional_light)
	{
		directional_light_json_data.Name = (FName)actor->GetActorLabel();
		directional_light_json_data.Transform.SetLocation(actor->GetActorLocation());
		directional_light_json_data.Transform.SetRotation(actor->GetActorQuat());
		directional_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

		if (propertyID->IsArrayEmpty(FPropertyID::propertyID_array))
		{
			uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
			directional_light_json_data.propertyID = local_propertyID;
			FPropertyID::propertyID_array.Add(local_propertyID);
		}
		else
		{
			while (true)
			{
				uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
				if (propertyID->IsExist(FPropertyID::propertyID_array, local_propertyID))
				{
					directional_light_json_data.propertyID = local_propertyID;
					FPropertyID::propertyID_array.Add(local_propertyID);
					break;
				}
			}
		}

		directional_light_json_data.LightBaseParams = light_data->GetLightBaseParameters(directional_light);
		directional_light_json_data.LightParams = light_data->GetLightParameters(directional_light);
		directional_light_json_data.DirectionalLightParams = light_data->GetDirectionalLightParameters(directional_light);
	}

	return directional_light_json_data;
}

FLightJsonData::PostProcessJsonData FLightJsonData::ConvertPostProcessDatatoJsonData(AActor* actor, UUELightData* light_data, FPropertyID* propertyID)
{
	DirectionalLightJsonData directional_light_json_data;

	UDirectionalLightComponent* directional_light = actor->FindComponentByClass<UDirectionalLightComponent>();
	if (directional_light)
	{
		directional_light_json_data.Name = (FName)actor->GetActorLabel();
		directional_light_json_data.Transform.SetLocation(actor->GetActorLocation());
		directional_light_json_data.Transform.SetRotation(actor->GetActorQuat());
		directional_light_json_data.Transform.SetScale3D(actor->GetActorScale3D());

		if (propertyID->IsArrayEmpty(FPropertyID::propertyID_array))
		{
			uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
			directional_light_json_data.propertyID = local_propertyID;
			FPropertyID::propertyID_array.Add(local_propertyID);
		}
		else
		{
			while (true)
			{
				uint32 local_propertyID = propertyID->GeneratePropertyID(propertyID->LightMinPropertyID, propertyID->LightMaxPropertyID);
				if (propertyID->IsExist(FPropertyID::propertyID_array, local_propertyID))
				{
					directional_light_json_data.propertyID = local_propertyID;
					FPropertyID::propertyID_array.Add(local_propertyID);
					break;
				}
			}
		}

		directional_light_json_data.LightBaseParams = light_data->GetLightBaseParameters(directional_light);
		directional_light_json_data.LightParams = light_data->GetLightParameters(directional_light);
		directional_light_json_data.DirectionalLightParams = light_data->GetDirectionalLightParameters(directional_light);
	}

	return directional_light_json_data;
}
*/
