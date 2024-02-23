// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SelectRule.generated.h"

USTRUCT(BlueprintType, meta=(HiddenByDefault))
struct SELECTUNITSSYSTEM_API FSelectRule
{
	GENERATED_BODY()

public:
	uint8 GetMaxSelectNumber() const { return MaxSelectNumber; }
	float GetDoubleClickInterval() const { return DoubleClickInterval; }

	bool IsDrawRect() const { return bDrawRect; }
	bool IsDrawLine() const { return bDrawLine; }

	const FLinearColor& GetRectColor() const { return RectColor; }
	const FLinearColor& GetLineColor() const { return LineColor; }

private:
	UPROPERTY(EditAnywhere, Category = Number, meta = (AllowPrivateAccess))
	uint8 MaxSelectNumber;

	UPROPERTY(EditAnywhere, Category = Number, meta = (AllowPrivateAccess))
	float DoubleClickInterval;

	UPROPERTY(EditAnywhere, Category = Draw, meta = (InlineEditConditionToggle, AllowPrivateAccess))
	bool bDrawRect;
	UPROPERTY(EditAnywhere, Category = Draw, meta = (Editcondition = bDrawRect, AllowPrivateAccess))
	FLinearColor RectColor;

	UPROPERTY(EditAnywhere, Category = Draw, meta = (InlineEditConditionToggle, AllowPrivateAccess))
	bool bDrawLine;
	UPROPERTY(EditAnywhere, Category = Draw, meta = (Editcondition = bDrawLine, AllowPrivateAccess))
	FLinearColor LineColor;
};

UCLASS(BlueprintType, const, Blueprintable, BlueprintType)
class SELECTUNITSSYSTEM_API USelectRuleSet : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Rule)
	FSelectRule SelectRule;
};