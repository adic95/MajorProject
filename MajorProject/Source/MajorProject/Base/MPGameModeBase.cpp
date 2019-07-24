// Fill out your copyright notice in the Description page of Project Settings.


#include "MPGameModeBase.h"
#include "Enemy\Enemy.h"
#include "Spawnpoints\EnemySpawnPoint.h"
#include "Spawnpoints\WeaponSpawnPoint.h"
#include "Weapon\Weapon.h"

//#include "Engine.h"
#include "EngineUtils.h" 
#include "Engine/Engine.h"

int AMPGameModeBase::m_killedEnemies = 0;
int AMPGameModeBase::PlayerScore = 0;

AMPGameModeBase::AMPGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMPGameModeBase::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);


	for (TActorIterator<AEnemy> EnemyItr(GetWorld()); EnemyItr; ++EnemyItr)
	{
		for (TActorIterator<AEnemy> InnerItr = EnemyItr; InnerItr; ++InnerItr)
		{
			m_EnemyPos = EnemyItr->GetActorLocation();
			FVector dir = EnemyItr->GetActorLocation() - InnerItr->GetActorLocation();
			if (dir.SizeSquared() <= 100.f * 100.0f)
			{
				EnemyItr->AddActorWorldOffset(dir.GetSafeNormal() * DeltaTime * EnemyItr->MovementSpeed);
			}

		}
	}
	GEngine->AddOnScreenDebugMessage(5555, DeltaTime, FColor::Red, FString::Printf(TEXT("RoundNumber %i"), m_currentRound));
	//Gamemode logic

	// if current higher than total rounds return
	if (m_currentRound > Rounds.Num())
		return;




	//if start time of wave is down
	if (Rounds[m_currentRound - 1].Waves[m_currentWave - 1].StartTime <= 0.0f)
	{
		//decrease timer 
		m_enemyTimer -= DeltaTime;
		m_WeaponTimer -=  DeltaTime;

		// log enemy round
		FString text = "ENEMY ROUND: " + FString::FromInt(m_currentRound);
		GEngine->AddOnScreenDebugMessage(100, DeltaTime, FColor::Red, text);

		// log enemy wave
		text = "ENEMY WAVE: " + FString::FromInt(m_currentWave);
		GEngine->AddOnScreenDebugMessage(101, DeltaTime, FColor::Red, text);

		// log enemy count
		text = "ENEMY COUNT: " + FString::FromInt(Rounds[m_currentRound - 1].Waves[m_currentWave - 1].EnemyCount);
		GEngine->AddOnScreenDebugMessage(102, DeltaTime, FColor::Red, text);

		GEngine->AddOnScreenDebugMessage(103, 2, FColor::Orange, FString::FromInt(m_WeaponTimer));

		if (m_WeaponTimer <= 0)
		{
			pWeapon = GetWorld()->SpawnActor<AWeapon>(WeaponClass[FMath::RandRange(0, WeaponClass.Num() - 1)], m_weaponSpawnpos, FRotator::ZeroRotator);
			pWeapon->Mesh->SetSimulatePhysics(false);
			m_WeaponTimer = 10.0f;


		}
		//---------------------------DEBUG-------------------------------------------------
		/*if (pWeapon != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, TEXT(" Weapon Spawned"));
		}

		else
		{
			GEngine->AddOnScreenDebugMessage(50, 2, FColor::Blue, TEXT(" Weapon not Spawned"));

		}*/
		// if enemy timer higher than zero return
		if (m_enemyTimer > 0.0f)
			return;





		//reset enemy timer to default spawn time
		m_enemyTimer = Rounds[m_currentRound - 1].Waves[m_currentWave - 1].SpawnTimer;

		// get random spawn points out of array and spawn enemys in a random radius around them
		FVector spawnpos = m_spawnPos[FMath::RandRange(0, m_spawnPos.Num() - 1)];
		spawnpos += FVector(FMath::RandRange(-50.f, +50.f), FMath::RandRange(-50.f, +50.f), 0.0f);

		//spawn enemy
		AMPGameModeBase::m_killedEnemies--;
		AEnemy* pEnemy = GetWorld()->SpawnActor<AEnemy>(Rounds[m_currentRound - 1].Waves[m_currentWave - 1].EnemyClass,
			spawnpos, FRotator(0.0f, 0.0f, 0.0f));

		//decrease Enemy Count of wave
		Rounds[m_currentRound - 1].Waves[m_currentWave - 1].EnemyCount--;

		m_weaponSpawnpos = m_WpnsSpawnPos[FMath::RandRange(0, m_WpnsSpawnPos.Num() - 1)];
		m_weaponSpawnpos += FVector(FMath::RandRange(-200.0f, +200.0f), FMath::RandRange(-200.0f, +200.0f), 50.0f);


		//Spawn random element of weapons array at Spawnpoint position



		//---------------------------------DEBUG-----------------------------------------------


		// if enemy count higher than zero return
		if (Rounds[m_currentRound - 1].Waves[m_currentWave - 1].EnemyCount > 0)
			return;

		if(m_killedEnemies != 0)
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


		if (m_currentRound <= Rounds.Num())
			m_WeaponTimer = Rounds[m_currentRound - 1].Waves[m_currentWave - 1].WeaponTimer;







	}
	//if start timer is not down
	else
	{
		//decrease start timer
		Rounds[m_currentRound - 1].Waves[m_currentWave - 1].StartTime -= DeltaTime;
	}

}


int AMPGameModeBase::GetPlayerScore()
{
	return PlayerScore;
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

	// get position of all weapon Spawnpoints in scene and store in variable
	for (TActorIterator<AWeaponSpawnPoint> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		m_WpnsSpawnPos.Add(ActorItr->GetActorLocation());

	}


}
