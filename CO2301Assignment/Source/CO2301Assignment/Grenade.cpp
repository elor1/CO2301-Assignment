// Fill out your copyright notice in the Description page of Project Settings.


#include "Grenade.h"

// Sets default values
AGrenade::AGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	ProjectileMovement->MaxSpeed = MovementSpeed;
	ProjectileMovement->InitialSpeed = MovementSpeed;
	InitialLifeSpan = ExplodeTime;
	ProjectileMovement->bSimulationEnabled = false;
}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrenade::LaunchGrenade()
{
	Mesh->SetSimulatePhysics(true);
	ProjectileMovement->bSimulationEnabled = true;

	GetWorld()->GetTimerManager().SetTimer(GrenadeTimer, this, &AGrenade::Explode, ExplodeTime, false);
}

void AGrenade::Explode()
{
	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), )
	TArray<AActor*> GrenadeActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGrenade::StaticClass(), GrenadeActors);
	UGameplayStatics::ApplyRadialDamage(this, Damage, GetActorLocation(), DamageRadius, nullptr, GrenadeActors, GetOwner(), GetOwner()->GetInstigatorController(), false, ECollisionChannel::ECC_GameTraceChannel1);
}

