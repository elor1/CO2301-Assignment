// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"

UBTTask_Shoot::UBTTask_Shoot()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (!OwnerComp.GetAIOwner()) {
		return EBTNodeResult::Failed;
	}

	ABaseCharacter* Character = Cast<ABaseCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	if (!Character) {
		return EBTNodeResult::Failed;
	}

	//If player is found, shoot at player
	Character->Shoot();
	return EBTNodeResult::Succeeded;
}