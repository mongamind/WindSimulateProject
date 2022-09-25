// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GraphicLearningHUD.generated.h"

UCLASS()
class AGraphicLearningHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGraphicLearningHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

