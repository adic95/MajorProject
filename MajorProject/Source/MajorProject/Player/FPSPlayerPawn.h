// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
//#include "EngineKismetLibraryClasses.h"
#include "ParticleDefinitions.h"
#include "FPSPlayerPawn.generated.h"

#pragma region forward decleration
class UCameraComponent;
class UCapsuleComponent;
class AWeapon;
class UMotionControllerComponent;
class UParticleSystemComponent;
//class USkeletalMeshSocket
#pragma endregion


UCLASS()
class MAJORPROJECT_API AFPSPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFPSPlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma region UPROPERTY
	UPROPERTY(EditAnywhere, Category = "Player Movement")
		/// <summary>
		/// movement speed in cm/s
		/// </summary>
		float MovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Player Movement")
		/// <summary>
		/// camera rotation speed in angle/s
		/// </summary>
		float CameraRotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		/// <summary>
		/// gravity value in m/s^2
		/// </summary>
		float Gravity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
		/// <summary>
		/// camera component
		/// </summary>
		UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Player")
		/// <summary>
		/// collision capsule component
		/// </summary>
		UCapsuleComponent* Collision;
	
	UPROPERTY(EditAnywhere, Category = "Player")
		/// <summary>
		/// skeletal mesh component
		/// </summary>
		USkeletalMeshComponent* Mesh;


	UPROPERTY(EditAnywhere, Category = "VR_Player")
		/// <summary>
		/// Left skeletal Hand mesh component
		/// </summary>
		USkeletalMeshComponent* LeftHandMesh;
	
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VR_Player")
		/// <summary>
		/// Right skeletal Hand mesh component
		/// </summary>
		USkeletalMeshComponent* RightHandMesh;
	
	UPROPERTY(EditAnywhere, Category = "VR_Player")
		/// <summary>
		/// Left Motion Controller  component
		/// </summary>
		UMotionControllerComponent* LeftController;
	
	UPROPERTY(EditAnywhere, Category = "VR_Player")
		/// <summary>
		/// Right Motion Controller component
		/// </summary>
		UMotionControllerComponent* RightController;

	UPROPERTY(EditAnywhere, Category = "VR_Player_Particles")
		/// <summary>
		/// Particle System
		/// </summary>
		UParticleSystem* ParticleSys;


	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Player")
		/// <summary>
		/// 
		/// </summary>
		float MaxGrabDistance;

	UPROPERTY(EditAnywhere, Category = "Player")
		/// <summary>
		/// 
		/// </summary>
		float GrabSpeed;

	UPROPERTY(EditAnywhere, Category = "Player")
		/// <summary>
		/// 
		/// </summary>
		float ThrowForce;

	UPROPERTY(EditAnywhere, Category = "Player")
		/// <summary>
		/// 
		/// </summary>
		float ShootRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Player")
		/// <summary>
		/// 
		/// </summary>
		int PlayerHitPoints;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
		bool bGrabbed;

	
private:
	bool bisGrabbing;
	
	TArray<FVector> m_handPositions;
	FVector  m_tmpPos;
	FVector m_throwDir;
	//AGameModeBase* gm;

	protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Player")
	AWeapon* pcurrentWeapon;
#pragma endregion

#pragma region UFUNCTION
	UFUNCTION(BlueprintCallable, Category = "Player")
		/// <summary>
		/// move player
		/// </summary>
		/// <param name="Movement">movement value (x = left / right)</param>
		void Move(FVector2D Movement);

	UFUNCTION(BlueprintCallable, Category = "Player")
		/// <summary>
		/// shoot in camera direction
		/// </summary>
		void ShootCamera();

	UFUNCTION(BlueprintCallable, Category = "Player")
		/// <summary>
		/// shoot bullet in weapon direction
		/// </summary>
		void ShootWeapon();

	UFUNCTION(BlueprintCallable, Category = "Player")
		/// <summary>
		/// rotate camera
		/// </summary>
		/// <param name="Rotate">rotation value (x = yaw, y = pitch)</param>
		void RotateCamera(FVector2D Rotate);
		
	UFUNCTION(BlueprintCallable, Category = "Player")
		void GrabFromDistance(USceneComponent* Origin);

	UFUNCTION(BlueprintCallable, Category = "Player")
		void ThrowWeapon();
	
	UFUNCTION(BlueprintCallable, Category = "Player")
		void RecordPositions();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		/// <summary>
		/// collide with other component
		/// </summary>
		void Collide(UActorComponent* OtherComp);

	UFUNCTION(BlueprintCallable)
	void ChangeLevelOnPress();
#pragma endregion
private:
#pragma region private function
	/// <summary>
	/// spawn bullet
	/// </summary>
	/// <param name="Start">start scene component reference</param>
	void Shoot(USceneComponent* Start);
	void Shoot(FVector Startpos, FVector Direction);
	void UpdateGrab(float DeltaTime);
	
#pragma endregion


private:

	float m_timebetweenhit;
};
