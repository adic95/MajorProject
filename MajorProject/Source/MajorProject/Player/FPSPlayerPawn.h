// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FPSPlayerPawn.generated.h"


#pragma region forward decleration
class UCameraComponent;
class UCapsuleComponent;
class AWeapon;
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

	UPROPERTY(EditAnywhere, Category = "Player")
		/// <summary>
		/// collision capsule component
		/// </summary>
		UCapsuleComponent* Collision;
	
	UPROPERTY(EditAnywhere, Category = "Player")
		/// <summary>
		/// skeletal mesh component
		/// </summary>
		USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, Category = "Player")
		/// <summary>
		/// 
		/// </summary>
		float MaxGrabDistance;

	UPROPERTY(EditAnywhere, Category = "Player")
		/// <summary>
		/// 
		/// </summary>
		float GrabSpeed;



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
#pragma endregion
private:
#pragma region private function
	/// <summary>
	/// spawn bullet
	/// </summary>
	/// <param name="Start">start scene component reference</param>
	void Shoot(USceneComponent* Start);
	void UpdateGrab(float DeltaTime);
	AWeapon* pcurrentWeapon;
	bool bisGrabbing;
	
#pragma endregion

};
