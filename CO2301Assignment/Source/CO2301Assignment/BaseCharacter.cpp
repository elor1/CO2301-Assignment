// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setup spring arm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocation(FVector(0.0f, 10.0f, 75.0f));
	SpringArm->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	SpringArm->TargetArmLength = 250.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 5.0f;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraRotationLagSpeed = 5.0f;
	
	//Setup camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("weapon_l"));
	Gun->SetOwner(this);
	bCurrentlyShooting = false;
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bCurrentlyShooting) {
		Gun->Shoot();
	}
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForwards"), this, &ABaseCharacter::MoveForwards);
	PlayerInputComponent->BindAxis(TEXT("Strafe"), this, &ABaseCharacter::Strafe);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ABaseCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ABaseCharacter::Turn);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Shoot"), IE_Pressed, this, &ABaseCharacter::Shoot);
	PlayerInputComponent->BindAction(TEXT("Shoot"), IE_Released, this, &ABaseCharacter::StopShoot);
}

void ABaseCharacter::MoveForwards(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

void ABaseCharacter::Strafe(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

void ABaseCharacter::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void ABaseCharacter::Turn(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void ABaseCharacter::Shoot()
{
	bCurrentlyShooting = true;
}

void ABaseCharacter::StopShoot()
{
	bCurrentlyShooting = false;
}

