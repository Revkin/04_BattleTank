// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"

void ATankAIController::BeginPlay() {

	Super::BeginPlay();

	auto PlayedTank = GetPlayerTank();

	if (!PlayedTank) {
		UE_LOG(LogTemp, Warning, TEXT("AIController can't find the PlayerTank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AIController found the PlayerTank: %s"), *(PlayedTank->GetName()));
	}

}

ATank* ATankAIController::GetControlledTank() const{

	return Cast<ATank>(GetPawn());

}

ATank * ATankAIController::GetPlayerTank() const {
	
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	if (!PlayerPawn) { return nullptr; }

	return Cast<ATank>(PlayerPawn);
}
