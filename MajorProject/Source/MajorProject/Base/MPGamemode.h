// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "/Projekte/MajorProject_3.0/MajorProject/Source/MajorProject/Helper/Structs.h"
#include "MPGamemode.generated.h"

/**
 * 
 */
UCLASS()
class MAJORPROJECT_API AMPGamemode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	/// <summary>
	/// Constructor
	/// </summary>
	AMPGamemode();

	/// <summary>
	/// update every frame
	/// </summary>

	/// <param name="DeltaTime">time since last frame</param>
	virtual void Tick(float DeltaSeconds) override;

	/// <summary>
	/// called at begin play
	/// </summary>

	virtual void BeginPlay() override;

#pragma region UPROPERTIES
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Device Check")
		bool Rift_Active;

	UPROPERTY(EditAnywhere, Category = "Enemy Rounds")
		/// <summary>
		/// All Rounds
		/// </summary>
		TArray<FEnemyRound> Rounds;
#pragma endregion

private:
#pragma region private virables for the round
	/// <summary>
	/// current round
	/// </summary>

	int m_currentRound = 1;

	/// <summary>
	/// current Wave
	/// </summary>

	int m_currentWave = 1;

	/// <summary>
	/// timer to spawn an Enemy
	/// </summary>

	float m_enemyTimer;
#pragma endregion

#pragma region private spawn point variable
	/// <summary>
	/// all spawn points for the Enemies
	/// </summary>

	TArray<FVector> m_spawnPos;
#pragma endregion

};
