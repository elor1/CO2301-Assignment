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

	//Setup map icon
	MapIcon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Map Icon"));
	MapIcon->SetupAttachment(GetCapsuleComponent());
	MapIcon->SetRelativeLocation(FVector(0.0f, 0.0f, 130.0f));
	MapIcon->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("weapon_l"));
	Gun->SetOwner(this);
	bCurrentlyShooting = false;
	bCurrentlyThrowing = false;

	Health = MaxHealth;
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Gun) {
		if (bCurrentlyShooting && !IsDead()) {
			Gun->Shoot();
		}
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
	//PlayerInputComponent->BindAction(TEXT("ThrowGrenade"), IE_Pressed, this, &ABaseCharacter::SpawnGrenade);
}

float ABaseCharacter::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	float DamageApplied = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	DamageApplied = FMath::Min(Health, DamageApplied);
	Health -= DamageApplied;
	UE_LOG(LogTemp, Warning, TEXT("Health left %f"), Health);

	if (IsDead()) {
		//Check if player is dead
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		if (PlayerController) {
			ACO2301AssignmentGameModeBase* GameMode = GetWorld()->GetAuthGameMode<ACO2301AssignmentGameModeBase>();
			if (GameMode) {
				GameMode->EndGame(PlayerController, false);
			}
		}

		DetachFromControllerPendingDestroy();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		
	}

	return DamageApplied;
}

void ABaseCharacter::MoveForwards(float AxisValue)
{
	if (!bCurrentlyThrowing) {
		AddMovementInput(GetActorForwardVector() * AxisValue);
	}
}

void ABaseCharacter::Strafe(float AxisValue)
{
	if (!bCurrentlyThrowing) {
		AddMovementInput(GetActorRightVector() * AxisValue);
	}
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

void ABaseCharacter::SpawnGrenade()
{
	Grenade = GetWorld()->SpawnActor<AGrenade>(GrenadeClass);
	Grenade->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("weapon_r"));
	Grenade->SetOwner(this);
}

void ABaseCharacter::ThrowGrenade()
{
	if (Grenade) {
		Grenade->LaunchGrenade();
	}
}

bool ABaseCharacter::IsDead() const
{
	return Health <= 0;
}

float ABaseCharacter::GetHealthPercent() const
{
	return Health / MaxHealth;
}