// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "CustomPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CO2301ASSIGNMENT_API ACustomPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void GameHasEnded(class AActor *EndGameFocus = nullptr, bool bIsWinner = false) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
private:
	UPROPERTY(EditAnywhere)
		TSubclassOf <class UUserWidget> HUDClass;
	UPROPERTY(EditAnywhere)
		TSubclassOf <class UUserWidget> LoseScreenClass;
	UPROPERTY(EditAnywhere)
		TSubclassOf <class UUserWidget> WinScreenClass;

	UPROPERTY()
	UUserWidget* HUD;

	void DisplayEndScreen(TSubclassOf<UUserWidget> EndScreenClass);
};
