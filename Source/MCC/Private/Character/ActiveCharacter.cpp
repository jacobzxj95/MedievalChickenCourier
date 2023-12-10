// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ActiveCharacter.h"

// Sets default values
AActiveCharacter::AActiveCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActiveCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActiveCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AActiveCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

