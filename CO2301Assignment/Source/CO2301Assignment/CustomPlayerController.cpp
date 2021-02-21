// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerController.h"

void ACustomPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//Create in game HUD
	HUD = CreateWidget(this, HUDClass);
	if (HUD) {
		HUD->AddToViewport();
		bShowMouseCursor = false;
		bEnableClickEvents = false;
		bEnableMouseOverEvents = false;
	}
}

void ACustomPlayerController::GameHasEnded(class AActor *EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	//Remove in game HUD and select which widget to display depending on whether player has won
	HUD->RemoveFromViewport();
	if (!bIsWinner) {
		DisplayEndScreen(LoseScreenClass);
	}
	else {
		DisplayEndScreen(WinScreenClass);
	}
}

void ACustomPlayerController::DisplayEndScreen(TSubclassOf<UUserWidget> EndScreenClass)
{
	//Displays given widget
	UUserWidget* EndScreen = CreateWidget(this, EndScreenClass);
	if (EndScreen) {
		EndScreen->AddToViewport();
		bShowMouseCursor = true;
		bEnableClickEvents = true;
		bEnableMouseOverEvents = true;
	}
}