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
	* ��ġ�� ���� ���ο� ���� ����Ʈ ����
	*/
	UPROPERTY(BlueprintAssignable, Category = Event)
	FSelectActors OnAdd;

	/*
	* ��ġ�� ���� ���� ���� ����Ʈ ����
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
	* �ش� ����Ʈ�� ���� ���õ� ����Ʈ �� ��ġ�� �ʴ� ���� ����Ʈ ����
	*/
	UFUNCTION(BlueprintPure, Category = Actor)
	void GetNoneIntersectActorList(const TArray<AActor*>& InList, TArray<AActor*>& OutNewList) const;

	/*
	* ��Ŀ�̵� ���Ͱ� �ش� ����Ʈ�� ���ԵǴ��� �˻�
	*/
	UFUNCTION(BlueprintPure, Category = Actor)
	bool IsContatinsFocusActor(const TArray<AActor*>& InList) const;

	/*
	* ���� ���õ� ����Ʈ �߿� �ش� ���Ͱ� ���ԵǾ��ִ��� �˻�
	*/
	UFUNCTION(BlueprintPure, Category = Actor)
	bool IsSelectingActor(const AActor* InActor) const;

	/*
	* ���� ���õ� ����Ʈ�� �켱���� ��ȯ
	*/
	UFUNCTION(BlueprintPure, Category = Actor)
	uint8 GetPriorityOfSelectGroup() const;

	UFUNCTION(BlueprintPure, Category = Actor)
	const AActor* GetFocusingActor() const { return (!FocusActor.IsValid() || FocusActor.IsStale()) ? nullptr : FocusActor.Get(); }

public:	// Function
	/*
	* ���� ���õ� ����Ʈ �ڿ� ���ο� ����Ʈ�� ������ ���� ��ȯ
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
