// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"
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
		float Damage = 90.0f;
	UPROPERTY(EditAnywhere)
		float DamageRadius = 500.0f;

	UPROPERTY(EditAnywhere)
		UParticleSystem* ExplosionEffect;
	UPROPERTY(EditAnywhere)
		USoundBase* PinSound;
	UPROPERTY(EditAnywhere)
		USoundBase* ExplosionSound;

	UFUNCTION()
		void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

	void Explode();
};
