// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#pragma region UE4 include
#include "Engine.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h" 
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Base\MPGameModeBase.h"
#pragma endregion
/// <summary>
/// Define custom macro for debugging 
/// </summary>
#pragma region macro
#define LOG(TEXT, TIME)												\

#pragma endregion

/// <summary>
/// Construct Enemy 
/// </summary>
// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// create default scene component and make it root
	USceneComponent* pRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = pRoot;

	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	Collision->SetupAttachment(pRoot);

	
	// create default skeletal mesh component and attach to camera
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(pRoot);

	// add tag
	Tags.Add("Enemy");

	Idle = false;
	StartRun = false;
	Attack = false;
}



// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	// Check all Pawns at begin Play and look for Player
	for (TActorIterator<APawn> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		if (ActorItr->ActorHasTag("Player"))
		{
			//set reference to player
			pPlayer = *ActorItr;
		}
	}
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Check for player reference if there is none return
	if (!pPlayer)
		return;

	//if player is in Strike Distance
	if ((pPlayer->GetActorLocation() - GetActorLocation()).Size() < StrikeDistance)
	{
		//rotate towards Player
		SetActorRotation(UKismetMathLibrary::MakeRotFromX(pPlayer->GetActorLocation() - GetActorLocation()));

		//reset direction to zero
		m_dir = FVector::ZeroVector;



		//Calc direction to player
		FVector playerdir = (pPlayer->GetActorLocation() - GetActorLocation());
		playerdir.Normalize();
		StartRun = false;
		Idle = false;
		Attack = true;

	}
	//IF player in Move distance
	else if ((pPlayer->GetActorLocation() - GetActorLocation()).Size() < MoveDistance)
	{
		//rotate to player
		SetActorRotation(UKismetMathLibrary::MakeRotFromX(pPlayer->GetActorLocation() - GetActorLocation()));

		//calc move dir
		m_dir = pPlayer->GetActorLocation() - GetActorLocation();
		m_dir.Normalize();
		m_dir.Z = 0.0f;
		Idle = false;
		Attack = false;
		StartRun = true;




		
	}
	// if player is not in distance
	else
	{
		//resetand switch to idle
		m_dir = FVector::ZeroVector;
		StartRun = false;
		Attack = false;
		Idle = true;
	}

	//Move enemy
	AddActorWorldOffset(m_dir * DeltaTime * MovementSpeed,true);

	

}

void AEnemy::Collide(UActorComponent* OtherComp)
{
	if (OtherComp->ComponentHasTag("Weapon"))
		Destroy();
}

