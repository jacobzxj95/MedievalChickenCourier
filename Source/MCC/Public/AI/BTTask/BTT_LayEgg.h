// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_LayEgg.generated.h"

/**
 * BTTask for laying an egg
 */
UCLASS(Blueprintable)
class MCC_API UBTT_LayEgg : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UBTT_LayEgg();
	
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void SpawnEgg(TSubclassOf<class AActor> ActorClass, const FTransform SpawnTransform, APawn* ControlledPawn);
	
private:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;


	UPROPERTY(EditAnywhere, Category = "Spawn", meta = (AllowPrivateAccess = true))
	TSubclassOf<class AActor> EggSpawnClass;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn", meta = (AllowPrivateAccess = true))
	AActor* EggSpawnedActor;
};
