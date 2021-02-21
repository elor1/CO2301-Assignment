// Fill out your copyright notice in the Description page of Project Settings.


#include "Minimap.h"

// Sets default values
AMinimap::AMinimap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set up scene capture
	MapCamera = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Map Camera"));
	MapCamera->SetupAttachment(RootComponent);

	//Setup plane
	Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
	Plane->SetupAttachment(MapCamera);
	Plane->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	Plane->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f));
	Plane->SetRelativeScale3D(FVector(20.48f, 20.48f, 20.48f));
}

// Called when the game starts or when spawned
void AMinimap::BeginPlay()
{
	Super::BeginPlay();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn)
	{
		//Attach minimap to player
		FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true);
		AttachToComponent(PlayerPawn->GetRootComponent(), Rules);
		SetActorRelativeLocation(FVector(0.0f, 0.0f, 1000.0f));
		SetActorRelativeRotation(FRotator(-90.0f, 0.0f, 0.0f));
	}
	
}

// Called every frame
void AMinimap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

