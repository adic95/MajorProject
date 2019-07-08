// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h" 
#include "Engine/World.h"
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

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Camera);
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
	FVector move = FVector::ZeroVector;
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
	Shoot(Mesh);
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
	//creat hit result variable
	FHitResult hit;
	//creating collision params and ignoring the player
	FCollisionQueryParams params = FCollisionQueryParams(FName(TEXT("")),false,this);
	//Draw ray for debug purposes
	DrawDebugLine(GetWorld(), Start->GetComponentLocation(), Start->GetComponentLocation() + (1000.f * Start->GetForwardVector()), FColor::Green, false, 1, 0, 1);
	//acutual line trace code and store in bool
	bool isHit= GetWorld()->LineTraceSingleByChannel(hit, Start->GetComponentLocation(), Start->GetComponentLocation() + (1000.0f * Start->GetForwardVector()), ECC_Visibility, params);

	//if ray was sucessfully shot
	if (isHit)
	{
		//if ray hit object with a collision component
		if (hit.Actor->ActorHasTag("Enemy"))
		{
			//log this message
			GEngine->AddOnScreenDebugMessage(100, 3, FColor::Emerald,FString::Printf(TEXT("Hit!")));
		}
	}
}

void AFPSPlayerPawn::GrabFromDistance(USceneComponent* Origin)
{
	//creat hit result variable
	FHitResult hit;
	//creating collision params and ignoring the player
	FCollisionQueryParams params = FCollisionQueryParams(FName(TEXT("")), false, this);
	//Draw ray for debug purposes
	//DrawDebugLine(GetWorld(), Origin->GetComponentLocation(), Origin->GetComponentLocation() + (1000.f * Origin->GetForwardVector()), FColor::Green, false, 1, 0, 1);
	//acutual line trace code and store in bool
	bool isHit = GetWorld()->LineTraceSingleByChannel(hit, Origin->GetComponentLocation(), Origin->GetComponentLocation() + (1000.0f * Origin->GetForwardVector()), ECC_Visibility, params);
	FVector WeaponLocation;
	FVector Flydir;
	if (isHit)
	{
		if (hit.Actor->ActorHasTag("Weapon"))
		{

		

			WeaponLocation = hit.Actor->GetActorLocation();
			Flydir = Origin->GetComponentLocation()- WeaponLocation;
			Flydir.Normalize();

		}
		
			
			


	}
}

// Called to bind functionality to input
/*void AFPSPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}*/



