// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	//Setup static mesh
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
}

void AGun::Shoot()
{
	if (bCanShoot) {
		DisableShoot();
		//Set timer so that gun isn't continuously fired
		GetWorld()->GetTimerManager().SetTimer(ShootTimer, this, &AGun::EnableShoot, RateOfFire, false);

		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("Muzzle"));
		UGameplayStatics::SpawnSoundAttached(ShootSound, Mesh, TEXT("Muzzle"));

		//Check if shot hit
		FHitResult Hit;
		FVector ShotDirection;
		bool bHitObject = GunTrace(Hit, ShotDirection);
		if (bHitObject) {
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);

			//If shot hits, damage the hit actor
			AActor* ActorHit = Hit.GetActor();
			if (ActorHit) {
				FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
				AController* OwnerController = GetOwnerController();
				if (OwnerController) {
					ActorHit->TakeDamage(Damage, DamageEvent, OwnerController, this);
				}
			}
		}

	}
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
	bCanShoot = true;
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::EnableShoot()
{
	bCanShoot = true;
}

void AGun::DisableShoot()
{
	bCanShoot = false;
}

bool AGun::GunTrace(FHitResult & Hit, FVector & ShotDirection)
{
	//Linetrace to see if shot hit something
	AController* OwnerController = GetOwnerController();
	if (OwnerController) {
		FVector Location;
		FRotator Rotation;
		OwnerController->GetPlayerViewPoint(Location, Rotation);
		ShotDirection = -Rotation.Vector();

		FVector EndPoint = MaxRange * Rotation.Vector() + Location;

		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);
		Params.AddIgnoredActor(GetOwner());
		return GetWorld()->LineTraceSingleByChannel(Hit, Location, EndPoint, ECollisionChannel::ECC_GameTraceChannel1, Params);
	}

	return false;
}

AController * AGun::GetOwnerController() const
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn) {
		return OwnerPawn->GetController();
	}
	return nullptr;
}

