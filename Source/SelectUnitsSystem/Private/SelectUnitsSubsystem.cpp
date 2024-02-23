// Fill out your copyright notice in the Description page of Project Settings.

#include "SelectUnitsSubsystem.h"
#include "SelectedActorInterface.h"
#include "SelectableHUD.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"

void USelectUnitsSubsystem::Register(const APlayerController* InController, const TSubclassOf<class USelectRuleSet> InRuleSet)
{
	FSelectRule NewSelectRule;

	ensureMsgf(InRuleSet, TEXT("Ther is not SelectRule."));
	if (InRuleSet != nullptr)
	{
		if (auto* RuleSetCDO = InRuleSet->GetDefaultObject<USelectRuleSet>())
		{
			SelectRule = RuleSetCDO->SelectRule;
		}
	}

	if (APlayerController* Controller = GetOwningPlayerController())
	{
		ASelectableHUD* HUD = Controller->GetHUD<ASelectableHUD>();
		if (ensureMsgf(HUD != nullptr, TEXT("This system needs SelectableHUD.")))
		{
			HUD->SetRule(SelectRule);
		}
	}
}

void USelectUnitsSubsystem::RequestSelect(const TArray<AActor*>& InNewList, bool InAbortIfListEmpty)
{
	if (InAbortIfListEmpty && InNewList.IsEmpty())
	{
		return;
	}

	TArray<AActor*> NewList;
	TArray<AActor*> OldList;
	GetNewAndOldList(InNewList, NewList, OldList);

	// ���õ��� ���� ���� ���� ����
	for (AActor* OldActor : OldList)
	{
		ISelectedActorInterface::Execute_OnSelectActor(OldActor, false);
		OldActor->OnDestroyed.RemoveDynamic(this, &USelectUnitsSubsystem::OnRemoveSelectingActor);
		SelectedSet.Remove(OldActor);
	}

	// ���ο� ���� ����
	for (AActor* NewActor : NewList)
	{
		ISelectedActorInterface::Execute_OnSelectActor(NewActor, true);
		NewActor->OnDestroyed.AddUniqueDynamic(this, &USelectUnitsSubsystem::OnRemoveSelectingActor);
		SelectedSet.Emplace(MakeWeakObjectPtr(NewActor));
	}

	if (SelectedSet.Num() == 1)
	{
		FocusActor = (*SelectedSet.begin());
	}
	else
	{
		FocusActor.Reset();
	}

	OnAdd.Broadcast(NewList);
	OnRemove.Broadcast(OldList);
}

void USelectUnitsSubsystem::GetNoneIntersectActorList(const TArray<AActor*>& InList, TArray<AActor*>& OutNewList) const
{
	for (AActor* SelectActor : InList)
	{
		if (!SelectedSet.Contains(SelectActor))
		{
			OutNewList.Add(SelectActor);
		}
	}
}

bool USelectUnitsSubsystem::IsContatinsFocusActor(const TArray<AActor*>& InNewList) const
{
	return FocusActor.IsValid() && InNewList.Contains(FocusActor.Get());
}

bool USelectUnitsSubsystem::IsSelectingActor(const AActor* InActor) const
{
	return SelectedSet.Contains(InActor);
}

uint8 USelectUnitsSubsystem::GetPriorityOfSelectGroup() const
{
	return (SelectedSet.IsEmpty() == false) ? ISelectedActorInterface::Execute_GetPriority((*SelectedSet.begin()).Get()) : MAX_uint8;
}

void USelectUnitsSubsystem::AppendList(const TArray<AActor*>& InNewList, TArray<AActor*>& OutAppendedList)
{
	TArray<TWeakObjectPtr<AActor>> SelectedList = SelectedSet.Array();

	for (auto SelectedActor : SelectedList)
	{
		OutAppendedList.Emplace(SelectedActor.Get());
	}

	OutAppendedList.Append(InNewList);
}

APlayerController* USelectUnitsSubsystem::GetOwningPlayerController() const
{
	if (ULocalPlayer* OwningPlayer = GetLocalPlayer())
	{
		return OwningPlayer->GetPlayerController(OwningPlayer->GetWorld());
	}
	return nullptr;
}

void USelectUnitsSubsystem::GetNewAndOldList(const TArray<AActor*>& InNewList, TArray<AActor*>& OutNewList, TArray<AActor*>& OutOldList)
{
	// ���� ���õ� ����Ʈ�� ���� ����Ʈ�� ȹ���Ͽ�
	// ���� ��� ���� �� �߰� �۾� ����

	uint8 MaxNumber = SelectRule.GetMaxSelectNumber();
	TSet<AActor*> NewSet;

	// �ִ� ���� ������ �Ѿ�� �ʴ� ���ο� ���� ����Ʈ ȹ��
	for (uint8 i = 0 ; i < MaxNumber && i < InNewList.Num(); ++i)
	{
		NewSet.Emplace(InNewList[i]);
	}

	TSet<AActor*> SelectingSet;
	for (auto SelectingActor : SelectedSet)
	{
		if (SelectingActor.IsValid())
		{
			SelectingSet.Emplace(SelectingActor.Get());
		}
	}

	// ���� ����Ʈ�� ���� ���õ� ���� ����Ʈ�� ������ ȹ��
	TSet<AActor*> IntersectSet = SelectingSet.Intersect(NewSet);

	// ���� ����Ʈ�� ���� ���õ� ���� ����Ʈ�� ������ ȹ��
	TSet<AActor*> OldSet = SelectingSet.Difference(NewSet);

	// ���� ���õ� ����Ʈ�� ������ ����Ʈ�� ������ ȹ��
	NewSet = NewSet.Difference(IntersectSet);

	OutNewList = NewSet.Array();
	OutOldList = OldSet.Array();
}


void USelectUnitsSubsystem::OnRemoveSelectingActor(AActor* InRemoveActor)
{
	if (InRemoveActor)
	{
		SelectedSet.Remove(InRemoveActor);
	}
}
