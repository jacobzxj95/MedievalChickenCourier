// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AI/BTTask/BTT_Roaming.h"
#include "BTT_MoveNearPlayer.generated.h"

/**
 * BTTask for moving to random point near Player
 */
UCLASS()
class MCC_API UBTT_MoveNearPlayer : public UBTT_Roaming
{
	GENERATED_BODY()
	
public:
	UBTT_MoveNearPlayer();

private:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	float RadiusFromActor;
};
