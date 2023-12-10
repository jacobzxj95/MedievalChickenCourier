// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTT_Roaming.generated.h"

/**
 * BTTask to enable AI to roam
 */
UCLASS(Blueprintable)
class MCC_API UBTT_Roaming : public UBTTask_MoveTo
{
	GENERATED_BODY()

public:
	UBTT_Roaming();

	UFUNCTION()
	bool GetRandomReachablePointInRadiusFromActor(const AActor* Actor, FVector& RandomLocation, float Radius) const;
	
private:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	float RoamRadius;
};
