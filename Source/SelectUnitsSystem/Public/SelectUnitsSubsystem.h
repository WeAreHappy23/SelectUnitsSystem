// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "SelectRule.h"
#include "SelectUnitsSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectActors, const TArray<AActor*>&, AddList);


UCLASS()
class SELECTUNITSSYSTEM_API USelectUnitsSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:	// Event
	/*
	* 겹치지 않은 새로운 액터 리스트 전달
	*/
	UPROPERTY(BlueprintAssignable, Category = Event)
	FSelectActors OnAdd;

	/*
	* 겹치지 않은 이전 액터 리스트 전달
	*/
	UPROPERTY(BlueprintAssignable, Category = Event)
	FSelectActors OnRemove;

public:	// Subsystem
	UFUNCTION(BlueprintCallable, Category = Subsystem)
	void Register(const class APlayerController* InController, const TSubclassOf<class USelectRuleSet> InRuleSet);

	UFUNCTION(BlueprintCallable, Category = Subsystem)
	void RequestSelect(const TArray<AActor*>& InNewList, bool InAbortIfListEmpty = false);

public:	// Actor
	/*
	* 해당 리스트와 현재 선택된 리스트 간 겹치지 않는 액터 리스트 리턴
	*/
	UFUNCTION(BlueprintPure, Category = Actor)
	void GetNoneIntersectActorList(const TArray<AActor*>& InList, TArray<AActor*>& OutNewList) const;

	/*
	* 포커싱된 액터가 해당 리스트에 포함되는지 검사
	*/
	UFUNCTION(BlueprintPure, Category = Actor)
	bool IsContatinsFocusActor(const TArray<AActor*>& InList) const;

	/*
	* 현재 선택된 리스트 중에 해당 액터가 포함되어있는지 검사
	*/
	UFUNCTION(BlueprintPure, Category = Actor)
	bool IsSelectingActor(const AActor* InActor) const;

	/*
	* 현재 선택된 리스트의 우선순위 반환
	*/
	UFUNCTION(BlueprintPure, Category = Actor)
	uint8 GetPriorityOfSelectGroup() const;

	UFUNCTION(BlueprintPure, Category = Actor)
	const AActor* GetFocusingActor() const { return (!FocusActor.IsValid() || FocusActor.IsStale()) ? nullptr : FocusActor.Get(); }

public:	// Function
	/*
	* 현재 선택된 리스트 뒤에 새로운 리스트를 연결한 값을 반환
	*/
	UFUNCTION(BlueprintCallable, Category = Function)
	void AppendList(const TArray<AActor*>& InNewList, TArray<AActor*>& OutAppendedList);

private:
	class APlayerController* GetOwningPlayerController() const;

	void GetNewAndOldList(const TArray<AActor*>& InNewList, TArray<AActor*>& OutNewList, TArray<AActor*>& OutOldList);

	UFUNCTION()
	void OnRemoveSelectingActor(AActor* InRemoveActor);

private:
	UPROPERTY(Transient)
	TSet<TWeakObjectPtr<AActor>> SelectedSet;

	UPROPERTY(Transient)
	TWeakObjectPtr<class AActor> FocusActor;

	UPROPERTY(Transient)
	FSelectRule SelectRule;
};
