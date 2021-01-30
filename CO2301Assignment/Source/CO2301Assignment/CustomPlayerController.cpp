// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerController.h"

void ACustomPlayerController::GameHasEnded(class AActor *EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);
	UE_LOG(LogTemp, Warning, TEXT("Finished"));

	UUserWidget* LoseScreen = CreateWidget(this, LoseScreenClass);
	if (LoseScreen) {
		LoseScreen->AddToViewport();
		bShowMouseCursor = true;
		bEnableClickEvents = true;
		bEnableMouseOverEvents = true;
	}
}