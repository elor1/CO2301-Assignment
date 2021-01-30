// Fill out your copyright notice in the Description page of Project Settings.


#include "EndZone.h"

// Sets default values
AEndZone::AEndZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
	RootComponent = CollisionBox;
	CollisionBox->SetBoxExtent(FVector(50.0f, 150.0f, 200.0f));
	CollisionBox->SetCollisionProfileName("Trigger");
}

// Called when the game starts or when spawned
void AEndZone::BeginPlay()
{
	Super::BeginPlay();
	
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AEndZone::OnOverLapBegin);
	GameModeRef = Cast<ACO2301AssignmentGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void AEndZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEndZone::OnOverLapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//GameModeRef->EndGame();
}

