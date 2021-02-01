// Copyright Epic Games, Inc. All Rights Reserved.


#include "CO2301AssignmentGameModeBase.h"

void ACO2301AssignmentGameModeBase::StartGame()
{
}

void ACO2301AssignmentGameModeBase::EndGame(APlayerController* PlayerController, bool bHasWon)
{
	UE_LOG(LogTemp, Warning, TEXT("END"));

	for (AController* Controller : TActorRange<AController>(GetWorld())) {
		bool bIsPlayerController = Controller->IsPlayerController();
		if (bIsPlayerController) {
			Controller->GameHasEnded(Controller->GetPawn(), bHasWon);
		}
		else {
			Controller->GameHasEnded(Controller->GetPawn(), !bHasWon);
		}
	}
}
