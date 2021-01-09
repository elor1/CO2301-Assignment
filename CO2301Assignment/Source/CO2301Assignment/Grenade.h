// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Grenade.generated.h"

UCLASS()
class CO2301ASSIGNMENT_API AGrenade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrenade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void LaunchGrenade();

private:
	UPROPERTY(EditAnywhere)
		float MovementSpeed = 600.0f;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Mesh;
	UPROPERTY()
		UProjectileMovementComponent* ProjectileMovement;
	UPROPERTY(EditAnywhere)
		float Damage = 70.0f;
	UPROPERTY(EditAnywhere)
		float DamageRadius = 150.0f;

	UPROPERTY()
		FTimerHandle GrenadeTimer;
	UPROPERTY(EditAnywhere)
		float ExplodeTime = 3.5f; //Seconds from grenade spawn to explosion

	void Explode();
};
