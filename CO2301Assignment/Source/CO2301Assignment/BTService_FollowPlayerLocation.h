// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BaseCharacter.h"
#include "AIController.h"
#include "BTService_FollowPlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class CO2301ASSIGNMENT_API UBTService_FollowPlayerLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UBTService_FollowPlayerLocation();

protected:
	virtual void TickNode(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory, float DeltaSeconds) override;

private:
	bool IsLookingAt(AActor* AIActor, APawn* PlayerPawn);
};
