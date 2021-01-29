// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "BaseCharacter.h"
#include "BTTask_Shoot.generated.h"

/**
 * 
 */
UCLASS()
class CO2301ASSIGNMENT_API UBTTask_Shoot : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTask_Shoot();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory) override;
};
