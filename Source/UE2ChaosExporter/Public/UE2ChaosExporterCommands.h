// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "UE2ChaosExporterStyle.h"

class FUE2ChaosExporterCommands : public TCommands<FUE2ChaosExporterCommands>
{
public:

	FUE2ChaosExporterCommands()
		: TCommands<FUE2ChaosExporterCommands>(TEXT("UE2ChaosExporter"), NSLOCTEXT("Contexts", "UE2ChaosExporter", "UE2ChaosExporter Plugin"), NAME_None, FUE2ChaosExporterStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
