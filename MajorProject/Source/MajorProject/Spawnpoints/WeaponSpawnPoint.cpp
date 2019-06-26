// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSpawnPoint.h"
#include "Components/SphereComponent.h"


//forward declaration
class USphereComponent;

// Sets default values
AWeaponSpawnPoint::AWeaponSpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Create Sphere <component as Root and Add Tag to Actor
	USphereComponent* pRoot = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	RootComponent = pRoot;

	Tags.Add("WeaponSpawnPoint");

}

// Called when the game starts or when spawned
void AWeaponSpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

