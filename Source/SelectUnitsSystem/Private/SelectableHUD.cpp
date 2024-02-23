// Fill out your copyright notice in the Description page of Project Settings.

#include "SelectableHUD.h"
#include "SelectedActorInterface.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "EngineUtils.h"

void ASelectableHUD::DrawHUD()
{
	Super::DrawHUD();

	// Call Blueprint ReceiveDrawHUD

	if (ShouldDraw())
	{
		DrawDragRect();

		// Start -> Down -> End ¼ø º¸Àå
		switch (MouseState)
		{
		case EMouseState::Start:
			ClearStartState();
			break;
		case EMouseState::Down:
			ClearDownState();
			break;
		case EMouseState::End:
			ClearEndState();
			break;
		}
	}
}

void ASelectableHUD::ClearStartState()
{
	MouseState = EMouseState::Down;
}

void ASelectableHUD::ClearDownState()
{
}

void ASelectableHUD::ClearEndState()
{
	MouseState = EMouseState::None;
	LastPoint = CurrentPoint;
	bDoubleInput = false;

	SetPoint(StartPoint, -1.f, -1.f);
	SetPoint(CurrentPoint, -1.f, -1.f);
}

void ASelectableHUD::CheckIfDoubleClick()
{
	float AllowDoubleClickInterval = SelectRule.GetDoubleClickInterval();
	double CallInterval = GetWorld()->TimeSince(MouseEndTime);

	if (MouseEndTime <= 0.f || CallInterval > AllowDoubleClickInterval)
	{
		MouseEndTime = GetWorld()->GetTimeSeconds();
	}
	else
	{
		if (CallInterval < AllowDoubleClickInterval && StartPoint == LastPoint)
		{
			bDoubleInput = true;
		}

		MouseEndTime = -1.f;
	}
}


void ASelectableHUD::DrawDragRect()
{
	if (SelectRule.IsDrawRect())
	{
		DrawRect(SelectRule.GetRectColor(), StartPoint.X, StartPoint.Y, CurrentPoint.X - StartPoint.X, CurrentPoint.Y - StartPoint.Y);
	}

	if (SelectRule.IsDrawLine())
	{
		FLinearColor LineColor = SelectRule.GetLineColor();
		DrawLine(StartPoint.X, StartPoint.Y, CurrentPoint.X, StartPoint.Y, LineColor);
		DrawLine(StartPoint.X, StartPoint.Y, StartPoint.X, CurrentPoint.Y, LineColor);
		DrawLine(CurrentPoint.X, CurrentPoint.Y, StartPoint.X, CurrentPoint.Y, LineColor);
		DrawLine(CurrentPoint.X, CurrentPoint.Y, CurrentPoint.X, StartPoint.Y, LineColor);
	}
}

void ASelectableHUD::GetPriorityActorsInRectangle(const FVector2D& InFirstPoint, const FVector2D& InSecondPoint, TArray<AActor*>& OutNewActors, 
	bool InIncludeNonCollidingComponents, bool InActorMustBeFullyEnclosed) const
{
	FBox2D SelectionRectangle(ForceInit);
	SelectionRectangle += InFirstPoint;
	SelectionRectangle += InSecondPoint;

	uint8 HighPriority = 0;
	uint8 LowPriority = 0;
	TMap<uint8, TArray<AActor*>> InterfaceActorMap;
	GetAllPriorityActors(InterfaceActorMap, HighPriority, LowPriority);

	for (uint8 i = HighPriority; i <= LowPriority; ++i)
	{
		if (TArray<AActor*>* List = InterfaceActorMap.Find(i))
		{
			bool bFindOnCursor = false;
			for (AActor* Actor : *List)
			{
				if (IsContainedActor(Actor, SelectionRectangle, bFindOnCursor, InIncludeNonCollidingComponents, InActorMustBeFullyEnclosed))
				{
					OutNewActors.Add(Actor);
				}
			}

			if (!OutNewActors.IsEmpty())
			{
				break;
			}
		}
	}
}

void ASelectableHUD::GetHighPriorityActorsInViewport(TArray<AActor*>& OutNewActors, bool InIncludeNonCollidingComponents, bool InActorMustBeFullyEnclosed) const
{
	int32 ViewportX, ViewportY;
	GetOwningPlayerController()->GetViewportSize(ViewportX, ViewportY);

	FBox2D SelectionRectangle(ForceInit);
	SelectionRectangle += FVector2D::ZeroVector;
	SelectionRectangle += FVector2D(ViewportX, ViewportY);

	uint8 HighPriority = 0;
	uint8 LowPriority = 0;
	TMap<uint8, TArray<AActor*>> InterfaceActorMap;
	GetAllPriorityActors(InterfaceActorMap, HighPriority, LowPriority);

	for (uint8 i = HighPriority; i <= LowPriority; ++i)
	{
		if (TArray<AActor*>* List = InterfaceActorMap.Find(i))
		{
			bool bFindOnCursor = false;
			AActor* ActorOnCursor = nullptr;
			for (AActor* Actor : *List)
			{
				if (IsContainedActor(Actor, SelectionRectangle, bFindOnCursor, InIncludeNonCollidingComponents, InActorMustBeFullyEnclosed))
				{
					if (bFindOnCursor)
					{
						ActorOnCursor = Actor;
					}
					else
					{
						OutNewActors.Add(Actor);
					}
				}
			}

			if (!OutNewActors.IsEmpty())
			{
				if (ActorOnCursor)
				{
					OutNewActors.Insert(ActorOnCursor, 0);
					break;
				}
				else
				{
					OutNewActors.Empty();
				}
			}
		}
	}
}

bool ASelectableHUD::IsContainedActor(const AActor* InActor, const FBox2D& InBox, bool& OutOnCursor,  bool InIncludeNonCollidingComponents, bool InActorMustBeFullyEnclosed) const
{
	const FVector BoundsPointMapping[8] =
	{
		FVector(1.f, 1.f, 1.f),
		FVector(1.f, 1.f, -1.f),
		FVector(1.f, -1.f, 1.f),
		FVector(1.f, -1.f, -1.f),
		FVector(-1.f, 1.f, 1.f),
		FVector(-1.f, 1.f, -1.f),
		FVector(-1.f, -1.f, 1.f),
		FVector(-1.f, -1.f, -1.f)
	};

	const FBox ActorBounds = InActor->GetComponentsBoundingBox(InIncludeNonCollidingComponents); /* All Components? */
	const FVector BoxCenter = ActorBounds.GetCenter();
	const FVector BoxExtents = ActorBounds.GetExtent();

	FVector2D MousePosition;
	GetOwningPlayerController()->GetMousePosition(MousePosition.X, MousePosition.Y);

	FBox2D CursorRectangle(ForceInit);
	CursorRectangle += FVector2D(MousePosition.X, MousePosition.Y);

	FBox2D ActorBox2D(ForceInit);
	for (uint8 BoundsPointerIndex = 0; BoundsPointerIndex < 8; BoundsPointerIndex++)
	{
		const FVector ProjectedWorldLocation = Project(BoxCenter + (BoundsPointMapping[BoundsPointerIndex] * BoxExtents), true);
		if (ProjectedWorldLocation.Z > 0.f)
		{
			ActorBox2D += FVector2D(ProjectedWorldLocation.X, ProjectedWorldLocation.Y);
		}
	}

	if (ActorBox2D.bIsValid)
	{
		if (InActorMustBeFullyEnclosed && InBox.IsInside(ActorBox2D) || InBox.Intersect(ActorBox2D))
		{
			OutOnCursor = CursorRectangle.Intersect(ActorBox2D);
			
			return true;
		}
	}

	return false;
}

void ASelectableHUD::OnClickStart(float InMouseX, float InMouseY)
{
	if (MouseState == EMouseState::None)
	{
		MouseState = EMouseState::Start;

		SetPoint(StartPoint, InMouseX, InMouseY);
		SetPoint(CurrentPoint, InMouseX, InMouseY);

		CheckIfDoubleClick();
	}
}

void ASelectableHUD::OnClickDown(float InMouseX, float InMouseY)
{
	if (MouseState == EMouseState::Down || MouseState == EMouseState::Start)
	{
		MouseState = EMouseState::Down;

		SetPoint(CurrentPoint, InMouseX, InMouseY);
	}
}

void ASelectableHUD::OnClickEnd(float InMouseX, float InMouseY)
{
	if (MouseState == EMouseState::Down)
	{
		MouseState = EMouseState::End;

		// Late SetPoint in DrawHUD function
	}
}

void ASelectableHUD::GetAllPriorityActors(TMap<uint8, TArray<AActor*>>& OutActorMap, uint8& OutHighPriority, uint8& OutLowPriority) const
{
	OutActorMap.Reset();

	if (UWorld* World = GetWorld())
	{
		for (FActorIterator It(World); It; ++It)
		{
			AActor* Actor = *It;
			if (Actor->GetClass()->ImplementsInterface(USelectedActorInterface::StaticClass()))
			{
				uint8 Priority = ISelectedActorInterface::Execute_GetPriority(Actor);

				OutHighPriority = (OutHighPriority > Priority) ? Priority : OutHighPriority;
				OutLowPriority = (OutLowPriority < Priority) ? Priority : OutLowPriority;

				TArray<AActor*>& ActorList = OutActorMap.FindOrAdd(Priority);
				ActorList.Add(Actor);
			}
		}
	}
}
