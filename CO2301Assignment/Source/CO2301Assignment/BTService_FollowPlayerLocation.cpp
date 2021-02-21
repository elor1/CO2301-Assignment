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
	if (!PlayerPawn)
	{
		return;
	}

	ABaseCharacter* PlayerCharacter = Cast<ABaseCharacter>(PlayerPawn);
	if (!PlayerCharacter)
	{
		return;
	}

	if (!OwnerComp.GetAIOwner())
	{
		return;
	}

	//If AI has LOS to player, update player's location
	if (OwnerComp.GetAIOwner()->LineOfSightTo(PlayerPawn))
	{
		if (PlayerCharacter->bIsWalking)
		{
			//If player is walking, they must be in vision cone for AI to start following them
			AActor* AIActor = OwnerComp.GetOwner();
			if (AIActor)
			{
				if (IsLookingAt(AIActor, PlayerPawn))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerPawn->GetActorLocation());
					return;
				}
			}
			
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), PlayerPawn->GetActorLocation());
			return;
		}
	}

	//Update blackboard key
	OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
}

bool UBTService_FollowPlayerLocation::IsLookingAt(AActor* AIActor, APawn* PlayerPawn)
{
	FVector DirectionToPlayer = (PlayerPawn->GetActorLocation() - AIActor->GetActorLocation()).GetSafeNormal();
	return AIActor->GetActorForwardVector().CosineAngle2D(DirectionToPlayer) > FMath::Cos((FMath::DegreesToRadians(60)));
}