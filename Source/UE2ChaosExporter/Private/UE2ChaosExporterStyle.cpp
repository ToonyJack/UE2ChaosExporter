// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE2ChaosExporterStyle.h"
#include "UE2ChaosExporter.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FUE2ChaosExporterStyle::StyleInstance = nullptr;

void FUE2ChaosExporterStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FUE2ChaosExporterStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FUE2ChaosExporterStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("UE2ChaosExporterStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FUE2ChaosExporterStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("UE2ChaosExporterStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("UE2ChaosExporter")->GetBaseDir() / TEXT("Resources"));

	Style->Set("UE2ChaosExporter.PluginAction", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));
	return Style;
}

void FUE2ChaosExporterStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FUE2ChaosExporterStyle::Get()
{
	return *StyleInstance;
}
