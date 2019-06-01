// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawnPoint.h"

#include "Components\SphereComponent.h"

// Sets default values
AEnemySpawnPoint::AEnemySpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USphereComponent* pRoot = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	RootComponent = pRoot;

	Tags.Add("EnemySpawnPoint");
}



