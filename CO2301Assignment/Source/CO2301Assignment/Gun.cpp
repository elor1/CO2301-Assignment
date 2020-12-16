// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "DrawDebugHelpers.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
	//Mesh->SetRelativeRotation(FRotator(-250.0f, -30.0f, 150.0f));
}

void AGun::Shoot()
{
	if (bCanShoot) {
		DisableShoot();
		GetWorld()->GetTimerManager().SetTimer(ShootTimer, this, &AGun::EnableShoot, RateOfFire, false);
		UE_LOG(LogTemp, Warning, TEXT("Shoot"));

		APawn* OwnerPawn = Cast<APawn>(GetOwner());
		if (OwnerPawn) {
			AController* OwnerController = OwnerPawn->GetController();
			if (OwnerController) {
				FVector Location;
				FRotator Rotation;
				OwnerController->GetPlayerViewPoint(Location, Rotation);

				FVector EndPoint = MaxRange * Rotation.Vector() + Location;

				FHitResult Hit;
				bool bHitObject = GetWorld()->LineTraceSingleByChannel(Hit, Location, EndPoint, ECollisionChannel::ECC_GameTraceChannel1);

				if (bHitObject) {
					FVector ShotDirection = -Rotation.Vector();
					DrawDebugPoint(GetWorld(), Hit.Location, 20.0f, FColor::Red, true);

					AActor* ActorHit = Hit.GetActor();
					if (ActorHit) {
						FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
						ActorHit->TakeDamage(Damage, DamageEvent, OwnerController, this);
					}
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

