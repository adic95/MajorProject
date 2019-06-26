// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

#pragma region forward decleration

class UCapsuleComponent;
#pragma endregion

UCLASS()
class MAJORPROJECT_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

#pragma region UPROPERTIES
	UPROPERTY(EditAnywhere, Category = "Enemy")
	/// <summary>
	/// movement Speed (cm/s) 
	/// </summary>
	float MovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Enemy")
		/// <summary>
		/// movement Speed (cm/s) 
		/// </summary>
		float MoveDistance;
	
	UPROPERTY(EditAnywhere, Category = "Enemy")
	/// <summary>
	/// movement speed in cm/s
	/// </summary>
	float ShootDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
		/// <summary>
		/// Rays per second
		/// </summary>
		float ShootSpeed;

	UPROPERTY(VisibleAnywhere, Category = "Enemy")
		/// <summary>
		/// skeletal mesh component
		/// </summary>
		USkeletalMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, Category = "Enemy")
		/// <summary>
		/// collision capsule component
		/// </summary>
		UCapsuleComponent* Collision;
	
	UPROPERTY(EditAnywhere, Category = "Enemy")
	float m_firerate;



	float m_lastfired;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

#pragma region UFUNCTIONS
	UFUNCTION(BlueprintCallable, Category = "Enemy")
		void ShootFromMesh();
private:
#pragma region private variables
	/// <summary>
	/// Shoot/ Strike timer in seconds
	/// </summary>
	float m_shootTimer = 0.0f;

	/// <summary>
	/// Move direction
	/// </summary>
	
	FVector m_dir;
#pragma endregion

#pragma region private pointer
	APawn* pPlayer;
#pragma endregion

#pragma region private function
	/// <summary>
	/// Shoot ray
	/// </summary>
	/// <param name="Start">start scene component reference</param>
	void Shoot(USceneComponent* Start);



};
