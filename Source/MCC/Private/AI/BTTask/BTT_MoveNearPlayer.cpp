// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask/BTT_MoveNearPlayer.h"

#include "AIController.h"

UBTT_MoveNearPlayer::UBTT_MoveNearPlayer()
	:RadiusFromActor(45)
{
	NodeName = TEXT("Move Near Player");
}

EBTNodeResult::Type UBTT_MoveNearPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//get ai pawn
	AAIController* OwnerController = OwnerComp.GetAIOwner();
	
	//Get player actor
	const AActor* PlayerActor = GetWorld()->GetFirstPlayerController()->GetPawn();
	
	//set random reachable point
	FVector RandomLocation;
	const bool bResult = GetRandomReachablePointInRadiusFromActor(PlayerActor,RandomLocation, RadiusFromActor);

	//move to new location if successful
	if (bResult)
	{
		OwnerController->MoveToLocation(RandomLocation);
	}
	
	return bResult ? EBTNodeResult::Succeeded : EBTNodeResult::Failed;
}

FString UBTT_MoveNearPlayer::GetStaticDescription() const
{
	return FString::Printf(TEXT("Selected Blackboard Key: %s"), *BlackboardKey.SelectedKeyName.ToString());
}
