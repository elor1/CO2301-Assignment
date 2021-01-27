// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

UENUM(BlueprintType)
enum EAIState {
	Follow,
	Investigate,
	Patrol
};

/**
 * 
 */
UCLASS()
class CO2301ASSIGNMENT_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
		UBehaviorTree* AIBehaviour;


	

	UPROPERTY(EditDefaultsOnly)
		TEnumAsByte<EAIState> State = Patrol;

	UPROPERTY()
		FTimerHandle InvestigateTimer;
	UPROPERTY(EditAnywhere)
		float InvestigateTime = 3.0f; //Time before enemy will return to patrol

	UFUNCTION()
		void SetToPatrol();
};
