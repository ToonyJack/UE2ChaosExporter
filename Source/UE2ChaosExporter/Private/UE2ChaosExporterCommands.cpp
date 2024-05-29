// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE2ChaosExporterCommands.h"

#define LOCTEXT_NAMESPACE "FUE2ChaosExporterModule"

void FUE2ChaosExporterCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "UE2ChaosExporter", "Execute UE2ChaosExporter action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
