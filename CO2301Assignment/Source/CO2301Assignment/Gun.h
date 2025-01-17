// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class CO2301ASSIGNMENT_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	void Shoot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
		USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* Mesh;
	UPROPERTY(EditAnywhere)
		float MaxRange = 3000.0f;
	UPROPERTY(EditAnywhere)
		float Damage = 10.0f;
	UPROPERTY()
		FTimerHandle ShootTimer;
	UPROPERTY(EditAnywhere)
		float RateOfFire = 0.15f; //Time between each bullet fired
	UPROPERTY()
		bool bCanShoot;
	UPROPERTY(EditAnywhere)
		USoundBase* ShootSound;
	UPROPERTY(EditAnywhere)
		USoundBase* ImpactSound;
	UPROPERTY(EditAnywhere)
		UParticleSystem* MuzzleFlash;
	UPROPERTY(EditAnywhere)
		UParticleSystem* ImpactEffect;

	void EnableShoot();
	void DisableShoot();
	bool GunTrace(FHitResult& Hit, FVector& ShotDirection);
	AController* GetOwnerController() const;
};
