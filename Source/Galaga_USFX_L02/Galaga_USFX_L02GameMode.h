// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L02GameMode.generated.h"

class ANaveEnemiga;
class ANaveAlienigena;

UCLASS(MinimalAPI)
class AGalaga_USFX_L02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L02GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ANaveEnemiga* NaveEnemiga01;
	ANaveAlienigena* NaveAlienigena01;

};


