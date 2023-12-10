// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTask/BTT_Roaming.h"

#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Tasks/Task.h"

UBTT_Roaming::UBTT_Roaming()
	:RoamRadius(1500)
{
	NodeName = TEXT("AI Random Roaming");
}

bool UBTT_Roaming::GetRandomReachablePointInRadiusFromActor(const AActor* Actor, FVector& RandomLocation, float Radius) const
{
	bool bResult = false;
	const FVector& Origin = Actor->GetActorLocation();
	FNavLocation RandomPoint(Origin);
	
	UWorld* World = GEngine->GetWorldFromContextObject(Actor, EGetWorldErrorMode::LogAndReturnNull);
	if (UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World))
	{
		ANavigationData* NavData = nullptr;
		if (ANavigationData* UseNavData = NavData ? NavData : NavSys->GetDefaultNavDataInstance(FNavigationSystem::DontCreate))
		{
			bResult = NavSys->GetRandomReachablePointInRadius(Origin, Radius, RandomPoint, UseNavData, UNavigationQueryFilter::GetQueryFilter(*UseNavData, Actor, FilterClass));
			RandomLocation = RandomPoint.Location;
		}
	}
	
	return bResult;
}


EBTNodeResult::Type UBTT_Roaming::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	//get ai pawn
	AAIController* OwnerController = {OwnerComp.GetAIOwner()};
	const APawn* ControlledPawn{OwnerController->GetPawn()}; 
	
	//set random reachable point
	FVector RandomLocation;
	const bool bResult = GetRandomReachablePointInRadiusFromActor(ControlledPawn,RandomLocation, RoamRadius);

	//set blackboard value and move to new location if successful
	if (bResult)
	{
		OwnerController->GetBlackboardComponent()->SetValueAsVector(BlackboardKey.SelectedKeyName,RandomLocation);
		FAIMoveRequest MoveRequest;
		MoveRequest.SetGoalLocation(RandomLocation);
		MoveRequest.SetAcceptanceRadius(AcceptableRadius);
		
		// use PerformMoveTask function from UBTTask_MoveTo
		return PerformMoveTask(OwnerComp, NodeMemory);
	}
	
	return EBTNodeResult::Failed;
}


FString UBTT_Roaming::GetStaticDescription() const
{
	return FString::Printf(TEXT("Selected Blackboard Key: %s"), *BlackboardKey.SelectedKeyName.ToString());
}
