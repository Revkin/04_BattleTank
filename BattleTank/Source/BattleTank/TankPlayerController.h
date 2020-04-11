// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

private:
	
	ATank* GetControlledTank() const;

	//Gets Aimpoint so the barrel can hit there
	void AimTowardsCrosshair();
};
