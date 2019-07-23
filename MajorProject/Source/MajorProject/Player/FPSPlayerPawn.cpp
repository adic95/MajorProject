// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h" 
#include "Engine/World.h"
#include "Weapon\Weapon.h"
#include "HeadMountedDisplay/Public/MotionControllerComponent.h"
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
	
	
	// Create Components for the vr Variante
	LeftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left Motion Controller"));
	LeftController->SetupAttachment(pRoot);
	
	RightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right Motion Controller"));
	RightController->SetupAttachment(pRoot);
	
	LeftHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand Mesh"));
	LeftHandMesh->SetupAttachment(LeftController);
	
	RightHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand Mesh"));
	RightHandMesh->SetupAttachment(RightController);

	//MeshSocket = CreateDefaultSubobject<USkeletalMeshSocket>(TEXT("Socket"));
	
	
	//add tags
	Tags.Add("Player");

	MaxGrabDistance = 1000.0f;
	GrabSpeed = 0.5f;
	bGrabbed = false;

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

	if (bisGrabbing)
	{
		UpdateGrab(DeltaTime);
	}

	
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
	AddActorWorldOffset(move, true);

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
	if (!pcurrentWeapon || pcurrentWeapon->ActorHasTag("Melee") || pcurrentWeapon->m_lastfired > 0)
		return;
	Shoot(pcurrentWeapon->Mesh->GetSocketLocation(FName("GunMuzzle")),pcurrentWeapon->Mesh->GetForwardVector());
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
	Shoot(Start->GetComponentLocation(), Start->GetForwardVector());
}

void AFPSPlayerPawn::Shoot(FVector Startpos, FVector Direction)
{
	if (pcurrentWeapon->AmmoAmount <= 0)
		return;
	
	FTransform ParticleSocketTransform = FTransform(FRotator::ZeroRotator,pcurrentWeapon
	->Mesh->GetSocketLocation(FName("GunMuzzle")),FVector(0.25f,0.25f,0.25f));

	//create hit result variable
	FHitResult hit;
	//creating collision params and ignoring the player
	FCollisionQueryParams params = FCollisionQueryParams(FName(TEXT("")), false, this);
	//Draw ray for debug purposes
	//DrawDebugLine(GetWorld(), Startpos, Startpos + (1000.f * Direction.Normalize()), FColor::Green, false, 1, 0, 1);
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleSys, ParticleSocketTransform);
	//acutual line trace code and store in bool
	bool isHit = GetWorld()->LineTraceSingleByChannel(hit, Startpos, Startpos + (pcurrentWeapon->MaxRange * Direction.Normalize()), ECC_Visibility, params);
	pcurrentWeapon->m_lastfired = pcurrentWeapon->firerate;
	pcurrentWeapon->AmmoAmount--;

	//if ray was sucessfully shot
	if (isHit)
	{
		//if ray hit object with a collision component
		if (hit.Actor->ActorHasTag("Enemy"))
		{
			//log this message
			GEngine->AddOnScreenDebugMessage(100, 3, FColor::Emerald, FString::Printf(TEXT("Hit!")));
			hit.Actor->Destroy();
		}
	}
}

void AFPSPlayerPawn::GrabFromDistance(USceneComponent* Origin)
{
	if (pcurrentWeapon)
	{
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Emerald, FString::Printf(TEXT("Process!")));
		return;
	}
	//creat hit result variable
	FHitResult hit;
	//creating collision params and ignoring the player
	FCollisionQueryParams params = FCollisionQueryParams(FName(TEXT("")), false, this);
	//Draw ray for debug purposes
	DrawDebugLine(GetWorld(), Origin->GetComponentLocation(), Origin->GetComponentLocation() + (MaxGrabDistance * Origin->GetForwardVector()), FColor::Red, false, 1, 0, 1);
	//acutual line trace code and store in bool
	//bool isHit = GetWorld()->LineTraceSingleByChannel(hit, Origin->GetComponentLocation(), Origin->GetComponentLocation() + (MaxGrabDistance * Origin->GetForwardVector()), ECC_Visibility, params);
	bool isHit = GetWorld()->SweepSingleByChannel(hit, Origin->GetComponentLocation(), Origin->GetComponentLocation() + (MaxGrabDistance * Origin->GetForwardVector()), FQuat::FQuat(LeftHandMesh->GetSocketRotation(FName ("WeaponSocket"))), ECC_Visibility,FCollisionShape::MakeSphere(32.f), params);
	FVector WeaponLocation;
	FVector Flydir;
	//FName WeaponSocket = TEXT("WeaponSocket");
	if (isHit)
	{
		GEngine->AddOnScreenDebugMessage(2, 5, FColor::Emerald, FString::Printf(TEXT("Hit!")));

		if (hit.Actor->ActorHasTag("Weapon"))
		{
			GEngine->AddOnScreenDebugMessage(3, 5, FColor::Emerald, FString::Printf(TEXT("Weapon!")));

			pcurrentWeapon = Cast<AWeapon>(hit.Actor);
			//bisGrabbing = true;
			FAttachmentTransformRules rules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;
			rules.bWeldSimulatedBodies = true;

			//pcurrentWeapon->SetActorEnableCollision(false);

			bGrabbed = true;
			pcurrentWeapon->SetActorLocation(RightHandMesh->GetSocketLocation(FName("WeaponSocket")));
			pcurrentWeapon->Mesh->SetRelativeLocation(FVector::ZeroVector);
			pcurrentWeapon->Mesh->AttachToComponent(Origin, rules, FName("WeaponSocket"));

			pcurrentWeapon->Mesh->SetSimulatePhysics(false);
			pcurrentWeapon->SetActorEnableCollision(true);
		}
	}
}

void AFPSPlayerPawn::ThrowWeapon()
{
	if (nullptr == pcurrentWeapon)
		return;
	FDetachmentTransformRules detachRules = FDetachmentTransformRules::KeepWorldTransform;
	pcurrentWeapon->DetachFromActor(detachRules);
	bGrabbed = false;
	pcurrentWeapon->AddActorWorldOffset(m_throwDir *UGameplayStatics::GetWorldDeltaSeconds(GetWorld()) * ThrowForce);
	pcurrentWeapon->Mesh->SetSimulatePhysics(true);
	pcurrentWeapon->SetActorEnableCollision(true);
	pcurrentWeapon = nullptr;
}

void AFPSPlayerPawn::RecordPositions()
{

	m_tmpPos = LeftController->GetComponentLocation();

	m_handPositions.Add(m_tmpPos);

	if (m_handPositions.Num() >= 60)
	{
		m_handPositions.RemoveAt(0);
	}
	m_throwDir = m_handPositions[0] - m_handPositions.Num() - 1;

}

void AFPSPlayerPawn::Collide(UActorComponent * OtherComp)
{
	if (OtherComp->ComponentHasTag("Damage"))
		GEngine->AddOnScreenDebugMessage(16, 5, FColor::Emerald, FString::Printf(TEXT("DAMAGE!")));
	
}

void AFPSPlayerPawn::UpdateGrab(float DeltaTime)
{
	return;
	if (!pcurrentWeapon || !bisGrabbing)
		return;

	float dist = FVector::Distance(pcurrentWeapon->GetActorLocation(), GetActorLocation());
	float perc = dist / MaxGrabDistance;
	perc = FMath::Clamp(perc - DeltaTime * GrabSpeed,0.0f,1.0f);
	FVector dir = pcurrentWeapon->GetActorLocation() - GetActorLocation();
	FVector point2 = GetActorLocation() + dir * MaxGrabDistance;
	pcurrentWeapon->SetActorLocation(FMath::Lerp(GetActorLocation(), point2, perc));
	
	//GEngine->AddOnScreenDebugMessage(4, 5, FColor::Emerald, FString::Printf(TEXT(FString::SanitizeFloat(perc))));
	if (perc == 0)
	{
		bisGrabbing = false;
		pcurrentWeapon->GetRootComponent()->AttachTo((USceneComponent*)GetOwner());
		GEngine->AddOnScreenDebugMessage(5, 5, FColor::Emerald, FString::Printf(TEXT("Done!")));
	}
}

// Called to bind functionality to input
/*void AFPSPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}*/



