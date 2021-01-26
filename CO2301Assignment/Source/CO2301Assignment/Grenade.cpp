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
	ProjectileMovement->bSimulationEnabled = false;
}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorHit.AddDynamic(this, &AGrenade::OnHit);
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
	Mesh->SetNotifyRigidBodyCollision(true);
}

void AGrenade::OnHit(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation(), GetActorRotation());

	TArray<AActor*> GrenadeActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGrenade::StaticClass(), GrenadeActors);
	UGameplayStatics::ApplyRadialDamage(this, Damage, GetActorLocation(), DamageRadius, nullptr, GrenadeActors, GetOwner(), GetOwner()->GetInstigatorController(), false, ECollisionChannel::ECC_GameTraceChannel1);

	Destroy();
}

//void AGrenade::Explode()
//{
//	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), )
//	TArray<AActor*> GrenadeActors;
//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGrenade::StaticClass(), GrenadeActors);
//	UGameplayStatics::ApplyRadialDamage(this, Damage, GetActorLocation(), DamageRadius, nullptr, GrenadeActors, GetOwner(), GetOwner()->GetInstigatorController(), false, ECollisionChannel::ECC_GameTraceChannel1);
//}

