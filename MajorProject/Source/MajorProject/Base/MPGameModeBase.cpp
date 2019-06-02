// Fill out your copyright notice in the Description page of Project Settings.


#include "MPGameModeBase.h"
#include "\Projekte\MajorProject_3.0\MajorProject\Source\MajorProject\Enemy\Enemy.h"
#include "\Projekte\MajorProject_3.0\MajorProject\Source\MajorProject\Spawnpoints\EnemySpawnPoint.h"

#include "Engine.h"
#include "EngineUtils.h" 

AMPGameModeBase::AMPGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMPGameModeBase::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	//Gamemode logic

	// if current higher than total rounds return
	if (m_currentRound > Rounds.Num())
		return;

	//if start time of wave is down
	if (Rounds[m_currentRound - 1].Waves[m_currentWave - 1].StartTime <= 0.0f)
	{
		//decrease timer 
		m_enemyTimer -= DeltaTime;

		// log enemy round
		FString text = "ENEMY ROUND: " + FString::FromInt(m_currentRound);
		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, text);

		// log enemy wave
		text = "ENEMY WAVE: " + FString::FromInt(m_currentWave);
		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, text);

		// log enemy count
		text = "ENEMY COUNT: " + FString::FromInt(Rounds[m_currentRound - 1].Waves[m_currentWave - 1].EnemyCount);
		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, text);

		// if enemy timer higher than zero return
		if (m_enemyTimer > 0.0f)
			return;
		
		//reset enemy timer to default spawn time
		m_enemyTimer = Rounds[m_currentRound - 1].Waves[m_currentWave - 1].SpawnTimer;

		// get random spawn points out of array and spawn enemys in a random radius around them
		FVector spawnpos = m_spawnPos[FMath::RandRange(0, m_spawnPos.Num() - 1)];
		spawnpos += FVector(FMath::RandRange(-500.f, +500.f), FMath::RandRange(-500.f, +500.f), 0.0f);

		//spawn enemy

		AEnemy* pEnemy = GetWorld()->SpawnActor<AEnemy>(Rounds[m_currentRound - 1].Waves[m_currentWave - 1].EnemyClass,
			spawnpos, FRotator(0.0f,0.0f,0.0f));

		//decrease Enemy Count of wave
		Rounds[m_currentRound - 1].Waves[m_currentWave - 1].EnemyCount--;

		// if enemy count higher than zero return
		if (Rounds[m_currentRound - 1].Waves[m_currentWave - 1].EnemyCount > 0)
			return;

		//increase Wave count
		m_currentWave++;

		//if current wave is higher than current wave number in current round
		if (m_currentWave > Rounds[m_currentRound - 1].Waves.Num())
		{
			//increase current round number and reset to wave 1
			m_currentRound++;
			m_currentWave = 1;
		}

		
	}
	//if start timer is not down
	else
	{
		//decrease start timer
		Rounds[m_currentRound - 1].Waves[m_currentWave - 1].StartTime -= DeltaTime;
	}
	
}

void AMPGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	//check all spoint points
	for (TActorIterator<AEnemySpawnPoint> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		//add position to Vector array
		m_spawnPos.Add(ActorItr->GetActorLocation());
	}
}
