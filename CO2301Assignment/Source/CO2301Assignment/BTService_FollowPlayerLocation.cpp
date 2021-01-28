// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_FollowPlayerLocation.h"

UBTService_FollowPlayerLocation::UBTService_FollowPlayerLocation()
{
	NodeName = TEXT("Update Follow Player Location");
}

void UBTService_FollowPlayerLocation::TickNode(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (!PlayerPawn) {
		return;
	}

	if (!OwnerComp.GetAIOwner()) {
		return;
	}

	if (OwnerComp.GetAIOwner()->LineOfSightTo(PlayerPawn)) {
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerPawn->GetActorLocation());
	}
	else {
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
	
}