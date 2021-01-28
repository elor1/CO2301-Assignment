// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"

void AEnemyAIController::BeginPlay() {
	Super::BeginPlay();

	/*APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	SetFocus(PlayerPawn);

	MoveToActor(PlayerPawn, 200.0f);*/

	if (AIBehaviour) {
		RunBehaviorTree(AIBehaviour);

		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
		GetBlackboardComponent()->SetValueAsVector(TEXT("PatrolLocation"), GetPawn()->GetActorLocation() + FVector(0.0f, 500.0f, 0.0f));
		GetBlackboardComponent()->SetValueAsObject(TEXT("PlayerPawn"), PlayerPawn);
	}
}

void AEnemyAIController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

