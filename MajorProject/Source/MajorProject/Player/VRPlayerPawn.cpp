// Fill out your copyright notice in the Description page of Project Settings.


#include "VRPlayerPawn.h"
#include "Components/SkeletalMeshComponent.h"

AVRPlayerPawn::AVRPlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;
	
	//attach Mesh to root
	Mesh->SetupAttachment(RootComponent);
}

void AVRPlayerPawn::SetWeaponTransform(FTransform Transform)
{
	//Set local Transform of weapon
	 Mesh->SetRelativeTransform(Transform);
}
//parent weapon to component
void AVRPlayerPawn::ParentWeapon(USceneComponent* Parent)
{
	//Attach weapon to component
	 Mesh->SetupAttachment(Parent);
}

void AVRPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AVRPlayerPawn::BeginPlay()
{
	Super::BeginPlay();
}
