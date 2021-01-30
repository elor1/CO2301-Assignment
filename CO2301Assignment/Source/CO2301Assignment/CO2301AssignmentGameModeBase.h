// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CO2301AssignmentGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CO2301ASSIGNMENT_API ACO2301AssignmentGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	

	UFUNCTION()
		void StartGame();

public:
	UFUNCTION()
		void EndGame(APlayerController* PlayerController, bool bHasWon);
};
