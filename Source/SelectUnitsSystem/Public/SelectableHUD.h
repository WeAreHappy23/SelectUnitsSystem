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
	* 마우스 클릭 시작 위치와 현재 마우스 위치가 동일한지 검사
	*/
	UFUNCTION(BlueprintPure, Category = Mouse)
	bool IsEqualPoint() const { return StartPoint == CurrentPoint; }

	/*
	* 마우스 클릭 시작 위치와 현재 마우스 위치 획득
	*/
	UFUNCTION(BlueprintPure, Category = Mouse)
	void GetPoints(FVector2D& First, FVector2D& Current) { First = StartPoint; Current = CurrentPoint; }

	UFUNCTION(BlueprintPure, Category = Mouse)
	EMouseState GetMouseState() const { return MouseState; }

	UFUNCTION(BlueprintCallable, Category = Mouse)
	bool IsDoubleClick() const {return bDoubleInput;}

public:	// Actor
	/*
	* InFirstPoint / InSecondPoint 범위 안의 액터들을 획득. (ReceiveDrawmHUD 호출 시에 사용)
	* InIncludeNonCollidingComponents : 검사 대상의 경계를 결정할 때 대상의 충돌하지 않는 구성 요소도 포함할지 여부
	* InActorMustBeFullyEnclosed : True면 드래그된 범위 내에 검사 대상의 경계가 모두 포함되야 대상 획득
	*/
	UFUNCTION(BlueprintCallable, Category = Actor)
	void GetPriorityActorsInRectangle(const FVector2D& InFirstPoint, const FVector2D& InSecondPoint, TArray<AActor*>& OutNewActors, bool InIncludeNonCollidingComponents = true, bool InActorMustBeFullyEnclosed = false) const;

	/*
	* 커서에 놓여진 대상 액터와 동일한 우선순위를 가지는 뷰포트 범위 안의 모든 액터 리스트 획득 (ReceiveDrawmHUD 호출 시에 사용)
	* InIncludeNonCollidingComponents : 검사 대상의 경계를 결정할 때 대상의 충돌하지 않는 구성 요소도 포함할지 여부
	* InActorMustBeFullyEnclosed : True면 드래그된 범위 내에 검사 대상의 경계가 모두 포함되야 대상 획득
	*/
	UFUNCTION(BlueprintCallable, Category = Actor)
	void GetHighPriorityActorsInViewport(TArray<AActor*>& OutNewActors, bool InIncludeNonCollidingComponents = true, bool InActorMustBeFullyEnclosed = false) const;

	/*
	* 주어진 액터가 Box범위 내에 포함되는지 검사
	* OutOnCursor : 대상이 커서 위치에 놓여져있다면 true 반환
	* InIncludeNonCollidingComponents : 검사 대상의 경계를 결정할 때 대상의 충돌하지 않는 구성 요소도 포함할지 여부
	* InActorMustBeFullyEnclosed : True면 드래그된 범위 내에 검사 대상의 경계가 모두 포함되야 대상 획득
	*/
	bool IsContainedActor(const AActor* InActor, const FBox2D& InBox, bool& OutOnCursor, bool InIncludeNonCollidingComponents = true, bool InActorMustBeFullyEnclosed = false) const;

public:	// Click Message
	/*
	* 마우스 상태와 커서 위치를 업데이트 (호출이 보장되며 OnClickDown 보다 먼저 호출)
	*/
	UFUNCTION(BlueprintCallable, Category = ClickMessage)
	void OnClickStart(float InMouseX, float InMouseY);

	/*
	* 누르는 동안 마우스 상태와 커서 위치를 업데이트
	*/
	UFUNCTION(BlueprintCallable, Category = ClickMessage)
	void OnClickDown(float InMouseX, float InMouseY);

	/*
	* 마우스 Release시에 호출 마우스 상태를 업데이트. 더블 클릭 여부 검사 (호출이 보장되며 OnClickDown이후 호출)
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
