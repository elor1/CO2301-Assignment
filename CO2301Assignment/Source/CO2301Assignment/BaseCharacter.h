// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Gun.h"
#include "Grenade.h"
#include "BaseCharacter.generated.h"

UCLASS()
class CO2301ASSIGNMENT_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, FDamageEvent const &DamageEvent, class AController *EventInstigator, AActor *DamageCauser) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCurrentlyThrowing;

	UFUNCTION(BlueprintCallable)
		void ThrowGrenade();
	UFUNCTION(BlueprintCallable)
		void SpawnGrenade();
private:
	/*UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* CharacterMesh;*/
	UPROPERTY(EditAnywhere)
		USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AGun> GunClass;
	UPROPERTY()
		AGun* Gun;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AGrenade> GrenadeClass;
	UPROPERTY()
		AGrenade* Grenade;
	UPROPERTY()
		bool bCurrentlyShooting;
	UPROPERTY(EditDefaultsOnly)
		float MaxHealth = 100.0f;
	UPROPERTY(VisibleAnywhere)
		float Health;

	void MoveForwards(float AxisValue);
	void Strafe(float AxisValue);
	void LookUp(float AxisValue);
	void Turn(float AxisValue);
	void Shoot();
	void StopShoot();
	
};
