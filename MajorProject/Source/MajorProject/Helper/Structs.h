// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Structs.generated.h"

/**
 * 
 */

USTRUCT()
/// <summary>
/// single enemy wave struct
/// </summary>
struct FEnemyWave
{
	GENERATED_BODY()

#pragma region UPROPERTY
		UPROPERTY(EditAnywhere, Category = "Enemy Wave")
		/// <summary>
		/// time to start the wave in seconds
		/// </summary>
		float StartTime;

	UPROPERTY(EditAnywhere, Category = "Enemy Wave")
		/// <summary>
		/// time until one enemy spawns in seconds
		/// </summary>
		float SpawnTimer;

	UPROPERTY(EditAnywhere, Category = "Weapon Spawn")
		/// <summary>
		/// time until one enemy spawns in seconds
		/// </summary>
		float WeaponTimer;


	UPROPERTY(EditAnywhere, Category = "Enemy Wave")
		/// <summary>
		/// enemy count
		/// </summary>
		int EnemyCount;

	UPROPERTY(EditAnywhere, Category = "Enemy Wave Required")
		/// <summary>
		/// enemy class to spawn
		/// </summary>
		TSubclassOf<AActor> EnemyClass;
#pragma endregion
};

USTRUCT()
/// <summary>
/// single round struct
/// </summary>
struct FEnemyRound
{
	GENERATED_BODY()

#pragma region UPROPERTY
		UPROPERTY(EditAnywhere, Category = "Enemy Round")
		/// <summary>
		/// array of enemy waves
		/// </summary>
		TArray<FEnemyWave> Waves;
#pragma endregion
};