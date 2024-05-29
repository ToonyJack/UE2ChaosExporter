// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE2ChaosExporter.h"
#include "UE2ChaosExporterStyle.h"
#include "UE2ChaosExporterCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

static const FName UE2ChaosExporterTabName("UE2ChaosExporter");

#define LOCTEXT_NAMESPACE "FUE2ChaosExporterModule"

void FUE2ChaosExporterModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FUE2ChaosExporterStyle::Initialize();
	FUE2ChaosExporterStyle::ReloadTextures();

	FUE2ChaosExporterCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FUE2ChaosExporterCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FUE2ChaosExporterModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FUE2ChaosExporterModule::RegisterMenus));
}

void FUE2ChaosExporterModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FUE2ChaosExporterStyle::Shutdown();

	FUE2ChaosExporterCommands::Unregister();
}

void FUE2ChaosExporterModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here


	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FUE2ChaosExporterModule::PluginButtonClicked()")),
							FText::FromString(TEXT("UE2ChaosExporter.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FUE2ChaosExporterModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FUE2ChaosExporterCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FUE2ChaosExporterCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUE2ChaosExporterModule, UE2ChaosExporter)