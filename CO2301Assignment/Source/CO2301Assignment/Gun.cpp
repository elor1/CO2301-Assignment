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

		UGameplayStatics::SpawnSoundAttached(ShootSound, Mesh, TEXT("Muzzle"));

		FHitResult Hit;
		FVector ShotDirection;
		bool bHitObject = GunTrace(Hit, ShotDirection);
		if (bHitObject) {
			DrawDebugPoint(GetWorld(), Hit.Location, 20.0f, FColor::Red, true);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);

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

