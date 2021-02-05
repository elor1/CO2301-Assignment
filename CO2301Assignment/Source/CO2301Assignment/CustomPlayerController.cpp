// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerController.h"

void ACustomPlayerController::BeginPlay()
{
	Super::BeginPlay();

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
	UE_LOG(LogTemp, Warning, TEXT("Finished"));

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
	UUserWidget* EndScreen = CreateWidget(this, EndScreenClass);
	if (EndScreen) {
		EndScreen->AddToViewport();
		bShowMouseCursor = true;
		bEnableClickEvents = true;
		bEnableMouseOverEvents = true;
	}
}