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
		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
	}
}

void AEnemyAIController::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	
	GetBlackboardComponent()->SetValueAsEnum(TEXT("AIState"), State);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (LineOfSightTo(PlayerPawn)) {
		State = Follow;
		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
		GetBlackboardComponent()->SetValueAsVector(TEXT("LastSeenPlayerLocation"), PlayerPawn->GetActorLocation());
	}
	else {
		State = Investigate;
		//GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
	}

	if (State == Investigate && FVector::Distance(PlayerPawn->GetActorLocation(), GetPawn()->GetActorLocation()) < 1.0f){
		GetWorld()->GetTimerManager().SetTimer(InvestigateTimer, this, &AEnemyAIController::SetToPatrol, InvestigateTime, false);
	}

}

void AEnemyAIController::SetToPatrol()
{
	State = Patrol;
}
