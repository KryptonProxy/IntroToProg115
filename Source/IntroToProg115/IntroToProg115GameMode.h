// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UserProfile.h"
#include "IntroToProg115GameMode.generated.h"

UCLASS(minimalapi)
class AIntroToProg115GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AIntroToProg115GameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UClassNames)
		TSubclassOf<UUserProfile> UPBlueprintClassName;


};