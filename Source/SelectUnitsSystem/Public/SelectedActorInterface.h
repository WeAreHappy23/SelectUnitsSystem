// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SelectedActorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class USelectedActorInterface : public UInterface
{
	GENERATED_BODY()
};

class SELECTUNITSSYSTEM_API ISelectedActorInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = OnSelect)
	void OnSelectActor(bool InSelect);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Priority)
	uint8 GetPriority();

	virtual uint8 GetPriority_Implementation() = 0;
};
