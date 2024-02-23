// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SelectRule.h"
#include "SelectableHUD.generated.h"

UENUM(BlueprintType)
enum class EMouseState : uint8
{
	None, Start, Down, End
};

UCLASS()
class SELECTUNITSSYSTEM_API ASelectableHUD : public AHUD
{
	GENERATED_BODY()

public:	// Mouse
	/*
	* ���콺 Ŭ�� ���� ��ġ�� ���� ���콺 ��ġ�� �������� �˻�
	*/
	UFUNCTION(BlueprintPure, Category = Mouse)
	bool IsEqualPoint() const { return StartPoint == CurrentPoint; }

	/*
	* ���콺 Ŭ�� ���� ��ġ�� ���� ���콺 ��ġ ȹ��
	*/
	UFUNCTION(BlueprintPure, Category = Mouse)
	void GetPoints(FVector2D& First, FVector2D& Current) { First = StartPoint; Current = CurrentPoint; }

	UFUNCTION(BlueprintPure, Category = Mouse)
	EMouseState GetMouseState() const { return MouseState; }

	UFUNCTION(BlueprintCallable, Category = Mouse)
	bool IsDoubleClick() const {return bDoubleInput;}

public:	// Actor
	/*
	* InFirstPoint / InSecondPoint ���� ���� ���͵��� ȹ��. (ReceiveDrawmHUD ȣ�� �ÿ� ���)
	* InIncludeNonCollidingComponents : �˻� ����� ��踦 ������ �� ����� �浹���� �ʴ� ���� ��ҵ� �������� ����
	* InActorMustBeFullyEnclosed : True�� �巡�׵� ���� ���� �˻� ����� ��谡 ��� ���ԵǾ� ��� ȹ��
	*/
	UFUNCTION(BlueprintCallable, Category = Actor)
	void GetPriorityActorsInRectangle(const FVector2D& InFirstPoint, const FVector2D& InSecondPoint, TArray<AActor*>& OutNewActors, bool InIncludeNonCollidingComponents = true, bool InActorMustBeFullyEnclosed = false) const;

	/*
	* Ŀ���� ������ ��� ���Ϳ� ������ �켱������ ������ ����Ʈ ���� ���� ��� ���� ����Ʈ ȹ�� (ReceiveDrawmHUD ȣ�� �ÿ� ���)
	* InIncludeNonCollidingComponents : �˻� ����� ��踦 ������ �� ����� �浹���� �ʴ� ���� ��ҵ� �������� ����
	* InActorMustBeFullyEnclosed : True�� �巡�׵� ���� ���� �˻� ����� ��谡 ��� ���ԵǾ� ��� ȹ��
	*/
	UFUNCTION(BlueprintCallable, Category = Actor)
	void GetHighPriorityActorsInViewport(TArray<AActor*>& OutNewActors, bool InIncludeNonCollidingComponents = true, bool InActorMustBeFullyEnclosed = false) const;

	/*
	* �־��� ���Ͱ� Box���� ���� ���ԵǴ��� �˻�
	* OutOnCursor : ����� Ŀ�� ��ġ�� �������ִٸ� true ��ȯ
	* InIncludeNonCollidingComponents : �˻� ����� ��踦 ������ �� ����� �浹���� �ʴ� ���� ��ҵ� �������� ����
	* InActorMustBeFullyEnclosed : True�� �巡�׵� ���� ���� �˻� ����� ��谡 ��� ���ԵǾ� ��� ȹ��
	*/
	bool IsContainedActor(const AActor* InActor, const FBox2D& InBox, bool& OutOnCursor, bool InIncludeNonCollidingComponents = true, bool InActorMustBeFullyEnclosed = false) const;

public:	// Click Message
	/*
	* ���콺 ���¿� Ŀ�� ��ġ�� ������Ʈ (ȣ���� ����Ǹ� OnClickDown ���� ���� ȣ��)
	*/
	UFUNCTION(BlueprintCallable, Category = ClickMessage)
	void OnClickStart(float InMouseX, float InMouseY);

	/*
	* ������ ���� ���콺 ���¿� Ŀ�� ��ġ�� ������Ʈ
	*/
	UFUNCTION(BlueprintCallable, Category = ClickMessage)
	void OnClickDown(float InMouseX, float InMouseY);

	/*
	* ���콺 Release�ÿ� ȣ�� ���콺 ���¸� ������Ʈ. ���� Ŭ�� ���� �˻� (ȣ���� ����Ǹ� OnClickDown���� ȣ��)
	*/
	UFUNCTION(BlueprintCallable, Category = ClickMessage)
	void OnClickEnd(float InMouseX, float InMouseY);

public:	// Rule
	void SetRule(const FSelectRule& InRule) { SelectRule = InRule; }

protected:
	virtual void DrawHUD() override;

	virtual void ClearStartState();
	virtual void ClearDownState();
	virtual void ClearEndState();

private:
	bool ShouldDraw() const { return MouseState != EMouseState::None; }
	void GetAllPriorityActors(TMap<uint8, TArray<AActor*>>& OutActorMap, uint8& OutHighPriority, uint8& OutLowPriority) const;

	void CheckIfDoubleClick();
	void SetPoint(FVector2D& Outer, float InMouseX, float InMouseY) { Outer.X = InMouseX; Outer.Y = InMouseY; }

	// Draw Rect
	void DrawDragRect();

private:
	UPROPERTY(Transient)
	FSelectRule SelectRule;

	UPROPERTY(Transient)
	FVector2D StartPoint;

	UPROPERTY(Transient)
	FVector2D CurrentPoint;

	UPROPERTY(Transient)
	FVector2D LastPoint;

	UPROPERTY(Transient)
	EMouseState MouseState;

	UPROPERTY(Transient)
	double MouseEndTime;
	
	UPROPERTY(Transient)
	bool bDoubleInput;

	UPROPERTY(Transient)
	FTimerHandle DoubleCheckerHandle;
};
