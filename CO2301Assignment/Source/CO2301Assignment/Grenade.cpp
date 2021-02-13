// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "Grenade.h"

// Sets default values
AGrenade::AGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setup static mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	//Setup projectile movement
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
	//When grenade leaves player's hand set (triggered in blueprint)
	Mesh->SetSimulatePhysics(true);
	ProjectileMovement->bSimulationEnabled = true;
	Mesh->SetNotifyRigidBodyCollision(true);

	//Stop grenade colliding with player & gun
	ABaseCharacter* PlayerCharacter = Cast<ABaseCharacter>(GetOwner());
	if (PlayerCharacter)
	{
		Mesh->IgnoreActorWhenMoving(PlayerCharacter, true);
		Mesh->IgnoreActorWhenMoving(PlayerCharacter->Gun, true);
	}
}

void AGrenade::OnHit(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit)
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation(), GetActorRotation());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, Hit.Location);

	//When grenade hits an object, it explodes
	TArray<AActor*> GrenadeActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGrenade::StaticClass(), GrenadeActors);
	GrenadeActors.Add(GetOwner());
	UGameplayStatics::ApplyRadialDamage(this, Damage, GetActorLocation(), DamageRadius, nullptr, GrenadeActors, GetOwner(), GetOwner()->GetInstigatorController(), false, ECollisionChannel::ECC_GameTraceChannel1);

	Destroy();
}

