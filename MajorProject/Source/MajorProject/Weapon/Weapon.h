// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

#pragma region forward decleration

class UCapsuleComponent;
class UStaticMeshComponent;
class USkeletalMeshComponent;
#pragma endregion


UCLASS()
class MAJORPROJECT_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon")
		/// <summary>
		/// static mesh component
		/// </summary>
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Weapon")
		float firerate;

	UPROPERTY(EditAnywhere, Category = "Weapon")
		int AmmoAmount;





	float m_lastfired;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
