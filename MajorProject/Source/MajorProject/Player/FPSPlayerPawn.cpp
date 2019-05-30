// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h" 

#pragma region helper include for line tracing
#include "DrawDebugHelpers.h"
#pragma endregion


// Sets default values
AFPSPlayerPawn::AFPSPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create Root Component out of Scene Component
	USceneComponent* pRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = pRoot;

	//Create Camera Object and attach to Root
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(pRoot);

	//Create Capsule Collision and attach to Camera
	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collsion"));
	Collision->SetupAttachment(Camera);

	//add tags
	Tags.Add("Player");


}

// Called when the game starts or when spawned
void AFPSPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSPlayerPawn::Move(FVector2D Movement)
{
	// Calculate Player Movement by Vector Parameter and movement Speed
	FVector move;
	move += Camera->GetForwardVector() * Movement.Y * UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * MovementSpeed;
	move += Camera->GetRightVector() * Movement.X * UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * MovementSpeed;

	//Set movement on Z axis to 0
	move.Z = 0.0f;

	//move Player
	AddActorWorldOffset(move);

	//Set the camera to player location and set camera z offset
	Camera->SetWorldLocation(GetActorLocation());
	Camera->AddWorldOffset(FVector(0.0f, 0.0f, 160.f));
}


void AFPSPlayerPawn::ShootCamera()
{
	//Call here to shoot form Camera location
	Shoot(Camera);

}


void AFPSPlayerPawn::ShootWeapon()
{

}

//rotate Camera
void AFPSPlayerPawn::RotateCamera(FVector2D Rotate)
{
	//rotate player along z axis by the x value of the Rotate Vector
	AddActorWorldRotation(FRotator(0.f,
		Rotate.X * UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * CameraRotationSpeed, 0.f));

	//calc pitch rotation by rotating y value of Rotate parameter
	float pitch = Camera->GetComponentRotation().Pitch;
	pitch += Rotate.Y * UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * CameraRotationSpeed;

	//set camera rotation
	Camera->SetWorldRotation(FRotator(pitch, GetActorRotation().Yaw, 0.0f));

	// reset rotation on Capsule Component
	Collision->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
}

void AFPSPlayerPawn::Shoot(USceneComponent* Start)
{
	FHitResult hit;
	FCollisionQueryParams params;
	DrawDebugLine(GetWorld(), Start->GetComponentLocation(), Start->GetComponentLocation() + (1000.f * Start->GetForwardVector()), FColor::Green, false, 1, 0, 1);
	//GetWorld()->LineTraceSingleByChannel(hit, Start->GetComponentLocation(), Start->GetComponentLocation() + (1000.0f * Start->GetForwardVector()), ECC_Visibility, params);
}

// Called to bind functionality to input
/*void AFPSPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}*/



