// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask/BTT_LayEgg.h"

#include "AIController.h"

UBTT_LayEgg::UBTT_LayEgg()
{
	NodeName = TEXT("Lay An Egg");
}

void UBTT_LayEgg::SpawnEgg_Implementation(TSubclassOf<class AActor> ActorClass, const FTransform SpawnTransform, APawn* ControlledPawn)
{
	FActorSpawnParameters SpawnParameters = FActorSpawnParameters();
	SpawnParameters.Instigator = ControlledPawn;
	
	//actor class error check for spawn
	if (ActorClass.Get())
	{
		EggSpawnedActor = GetWorld()->SpawnActor(ActorClass,&SpawnTransform,SpawnParameters);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Invalid Actor Class for Spawn!"));
	}
}


EBTNodeResult::Type UBTT_LayEgg::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//get ai pawn
	const AAIController* OwnerController = OwnerComp.GetAIOwner();
	APawn* ControlledPawn{OwnerController->GetPawn()};

	//spawn egg
	const FTransform SpawnTransform = ControlledPawn->GetActorTransform();
	SpawnEgg(EggSpawnClass,SpawnTransform,ControlledPawn);

	return EBTNodeResult::Succeeded;
}

FString UBTT_LayEgg::GetStaticDescription() const
{
	return FString::Printf(TEXT("Spawned Egg: %s"), *EggSpawnClass->GetName());
}

