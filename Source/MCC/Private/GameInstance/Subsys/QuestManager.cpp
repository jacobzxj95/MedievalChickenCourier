// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance/Subsys/QuestManager.h"

bool UQuestManager::ShouldCreateSubsystem(UObject* Outer) const
{
	if (this->GetClass()->IsInBlueprint())
	{
		return false;
	} 

	return true;
}

void UQuestManager::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UQuestManager::Deinitialize()
{
	Super::Deinitialize();
}
