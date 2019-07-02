// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/FPSPlayerPawn.h"
#include "VRPlayerPawn.generated.h"

/**
 * 
 */
UCLASS()
class MAJORPROJECT_API AVRPlayerPawn : public AFPSPlayerPawn
{
	GENERATED_BODY()
	
public:
	AVRPlayerPawn();

	UFUNCTION(BlueprintCallable, Category = "VR Player")
		void SetWeaponTransform(FTransform Transform);

	UFUNCTION(BlueprintCallable, Category = "VR Player")
		void ParentWeapon(USceneComponent* Parent);


	


	virtual void Tick(float DeltaTime) override;


protected:
	virtual void BeginPlay() override;

};
