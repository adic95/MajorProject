// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// create default scene component and make it root
	USceneComponent* pRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = pRoot;

	
	// create default skeletal mesh component and attach to camera
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(pRoot);
	
	//BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	//BoxCollision->SetupAttachment(Mesh);

	// add tag
	Tags.Add("Weapon");


	
}


// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_lastfired > 0)
		m_lastfired -= DeltaTime;
}

void AWeapon::Collide(UActorComponent* OtherComp)
{
	if (OtherComp->ComponentHasTag("Destroy"))
		OtherComp->GetOwner()->Destroy();
}

