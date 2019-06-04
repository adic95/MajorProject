// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Helper\Structs.h"
#include "MPGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MAJORPROJECT_API AMPGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
#pragma region constructor
	/// <summary>
	/// constructor
	/// </summary>
	AMPGameModeBase();
#pragma endregion

#pragma region public override function
	/// <summary>
	/// update every frame
	/// </summary>
	/// <param name="DeltaTime">time since last frame</param>
	virtual void Tick(float DeltaTime) override;
#pragma endregion

#pragma region UPROPERTY
	UPROPERTY(EditAnywhere, Category = "Enemy Rounds")
		/// <summary>
		/// all enemy rounds
		/// </summary>
		TArray<FEnemyRound> Rounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Device Check")
		/// <summary>
		/// Bool for checking if rift is active
		/// </summary>

		bool RiftActive;
#pragma endregion

protected:
#pragma region protected override function
	/// <summary>
	/// called at begin play
	/// </summary>
	virtual void BeginPlay() override;
#pragma endregion

private:
#pragma region private primitive variable
	/// <summary>
	/// current enemy round
	/// </summary>
	int m_currentRound = 1;

	/// <summary>
	/// current enemy wave
	/// </summary>
	int m_currentWave = 1;

	/// <summary>
	/// timer to spawn enemy
	/// </summary>
	float m_enemyTimer;
#pragma endregion

#pragma region private variable
	/// <summary>
	/// all enemy spawn positions
	/// </summary>
	TArray<FVector> m_spawnPos;
#pragma endregion
};
	

