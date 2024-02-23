// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectUnitsSystem/Public/SelectableHUD.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "SelectUnitsSystem/Public/SelectRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectableHUD() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	SELECTUNITSSYSTEM_API UClass* Z_Construct_UClass_ASelectableHUD();
	SELECTUNITSSYSTEM_API UClass* Z_Construct_UClass_ASelectableHUD_NoRegister();
	SELECTUNITSSYSTEM_API UEnum* Z_Construct_UEnum_SelectUnitsSystem_EMouseState();
	SELECTUNITSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSelectRule();
	UPackage* Z_Construct_UPackage__Script_SelectUnitsSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMouseState;
	static UEnum* EMouseState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMouseState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMouseState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SelectUnitsSystem_EMouseState, (UObject*)Z_Construct_UPackage__Script_SelectUnitsSystem(), TEXT("EMouseState"));
		}
		return Z_Registration_Info_UEnum_EMouseState.OuterSingleton;
	}
	template<> SELECTUNITSSYSTEM_API UEnum* StaticEnum<EMouseState>()
	{
		return EMouseState_StaticEnum();
	}
	struct Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics::Enumerators[] = {
		{ "EMouseState::None", (int64)EMouseState::None },
		{ "EMouseState::Start", (int64)EMouseState::Start },
		{ "EMouseState::Down", (int64)EMouseState::Down },
		{ "EMouseState::End", (int64)EMouseState::End },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.Name", "EMouseState::Down" },
		{ "End.Name", "EMouseState::End" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "None.Name", "EMouseState::None" },
		{ "Start.Name", "EMouseState::Start" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SelectUnitsSystem,
		nullptr,
		"EMouseState",
		"EMouseState",
		Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SelectUnitsSystem_EMouseState()
	{
		if (!Z_Registration_Info_UEnum_EMouseState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMouseState.InnerSingleton, Z_Construct_UEnum_SelectUnitsSystem_EMouseState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMouseState.InnerSingleton;
	}
	DEFINE_FUNCTION(ASelectableHUD::execOnClickEnd)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMouseX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMouseY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickEnd(Z_Param_InMouseX,Z_Param_InMouseY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASelectableHUD::execOnClickDown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMouseX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMouseY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickDown(Z_Param_InMouseX,Z_Param_InMouseY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASelectableHUD::execOnClickStart)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMouseX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMouseY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickStart(Z_Param_InMouseX,Z_Param_InMouseY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASelectableHUD::execGetHighPriorityActorsInViewport)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutNewActors);
		P_GET_UBOOL(Z_Param_InIncludeNonCollidingComponents);
		P_GET_UBOOL(Z_Param_InActorMustBeFullyEnclosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHighPriorityActorsInViewport(Z_Param_Out_OutNewActors,Z_Param_InIncludeNonCollidingComponents,Z_Param_InActorMustBeFullyEnclosed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASelectableHUD::execGetPriorityActorsInRectangle)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InFirstPoint);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InSecondPoint);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutNewActors);
		P_GET_UBOOL(Z_Param_InIncludeNonCollidingComponents);
		P_GET_UBOOL(Z_Param_InActorMustBeFullyEnclosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPriorityActorsInRectangle(Z_Param_Out_InFirstPoint,Z_Param_Out_InSecondPoint,Z_Param_Out_OutNewActors,Z_Param_InIncludeNonCollidingComponents,Z_Param_InActorMustBeFullyEnclosed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASelectableHUD::execIsDoubleClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDoubleClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASelectableHUD::execGetMouseState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMouseState*)Z_Param__Result=P_THIS->GetMouseState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASelectableHUD::execGetPoints)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_First);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Current);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPoints(Z_Param_Out_First,Z_Param_Out_Current);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASelectableHUD::execIsEqualPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEqualPoint();
		P_NATIVE_END;
	}
	void ASelectableHUD::StaticRegisterNativesASelectableHUD()
	{
		UClass* Class = ASelectableHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHighPriorityActorsInViewport", &ASelectableHUD::execGetHighPriorityActorsInViewport },
			{ "GetMouseState", &ASelectableHUD::execGetMouseState },
			{ "GetPoints", &ASelectableHUD::execGetPoints },
			{ "GetPriorityActorsInRectangle", &ASelectableHUD::execGetPriorityActorsInRectangle },
			{ "IsDoubleClick", &ASelectableHUD::execIsDoubleClick },
			{ "IsEqualPoint", &ASelectableHUD::execIsEqualPoint },
			{ "OnClickDown", &ASelectableHUD::execOnClickDown },
			{ "OnClickEnd", &ASelectableHUD::execOnClickEnd },
			{ "OnClickStart", &ASelectableHUD::execOnClickStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics
	{
		struct SelectableHUD_eventGetHighPriorityActorsInViewport_Parms
		{
			TArray<AActor*> OutNewActors;
			bool InIncludeNonCollidingComponents;
			bool InActorMustBeFullyEnclosed;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutNewActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNewActors;
		static void NewProp_InIncludeNonCollidingComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InIncludeNonCollidingComponents;
		static void NewProp_InActorMustBeFullyEnclosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InActorMustBeFullyEnclosed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_OutNewActors_Inner = { "OutNewActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_OutNewActors = { "OutNewActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventGetHighPriorityActorsInViewport_Parms, OutNewActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_InIncludeNonCollidingComponents_SetBit(void* Obj)
	{
		((SelectableHUD_eventGetHighPriorityActorsInViewport_Parms*)Obj)->InIncludeNonCollidingComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_InIncludeNonCollidingComponents = { "InIncludeNonCollidingComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectableHUD_eventGetHighPriorityActorsInViewport_Parms), &Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_InIncludeNonCollidingComponents_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_InActorMustBeFullyEnclosed_SetBit(void* Obj)
	{
		((SelectableHUD_eventGetHighPriorityActorsInViewport_Parms*)Obj)->InActorMustBeFullyEnclosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_InActorMustBeFullyEnclosed = { "InActorMustBeFullyEnclosed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectableHUD_eventGetHighPriorityActorsInViewport_Parms), &Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_InActorMustBeFullyEnclosed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_OutNewActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_OutNewActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_InIncludeNonCollidingComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::NewProp_InActorMustBeFullyEnclosed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/*\n\x09* \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xec\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd (ReceiveDrawmHUD \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n\x09* InIncludeNonCollidingComponents : \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe8\xb8\xa6 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09* InActorMustBeFullyEnclosed : True\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe5\xb7\xa1\xef\xbf\xbd\xd7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe8\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
		{ "CPP_Default_InActorMustBeFullyEnclosed", "false" },
		{ "CPP_Default_InIncludeNonCollidingComponents", "true" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "ToolTip", "* \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xec\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd (ReceiveDrawmHUD \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n* InIncludeNonCollidingComponents : \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe8\xb8\xa6 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n* InActorMustBeFullyEnclosed : True\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe5\xb7\xa1\xef\xbf\xbd\xd7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe8\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "GetHighPriorityActorsInViewport", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::SelectableHUD_eventGetHighPriorityActorsInViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::SelectableHUD_eventGetHighPriorityActorsInViewport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics
	{
		struct SelectableHUD_eventGetMouseState_Parms
		{
			EMouseState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventGetMouseState_Parms, ReturnValue), Z_Construct_UEnum_SelectUnitsSystem_EMouseState, METADATA_PARAMS(0, nullptr) }; // 340584058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "GetMouseState", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::SelectableHUD_eventGetMouseState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::SelectableHUD_eventGetMouseState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_GetMouseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_GetMouseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics
	{
		struct SelectableHUD_eventGetPoints_Parms
		{
			FVector2D First;
			FVector2D Current;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_First;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::NewProp_First = { "First", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventGetPoints_Parms, First), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventGetPoints_Parms, Current), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::NewProp_First,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::NewProp_Current,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "GetPoints", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::SelectableHUD_eventGetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::SelectableHUD_eventGetPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_GetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_GetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics
	{
		struct SelectableHUD_eventGetPriorityActorsInRectangle_Parms
		{
			FVector2D InFirstPoint;
			FVector2D InSecondPoint;
			TArray<AActor*> OutNewActors;
			bool InIncludeNonCollidingComponents;
			bool InActorMustBeFullyEnclosed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFirstPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFirstPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSecondPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSecondPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutNewActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNewActors;
		static void NewProp_InIncludeNonCollidingComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InIncludeNonCollidingComponents;
		static void NewProp_InActorMustBeFullyEnclosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InActorMustBeFullyEnclosed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InFirstPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InFirstPoint = { "InFirstPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventGetPriorityActorsInRectangle_Parms, InFirstPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InFirstPoint_MetaData), Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InFirstPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InSecondPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InSecondPoint = { "InSecondPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventGetPriorityActorsInRectangle_Parms, InSecondPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InSecondPoint_MetaData), Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InSecondPoint_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_OutNewActors_Inner = { "OutNewActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_OutNewActors = { "OutNewActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventGetPriorityActorsInRectangle_Parms, OutNewActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InIncludeNonCollidingComponents_SetBit(void* Obj)
	{
		((SelectableHUD_eventGetPriorityActorsInRectangle_Parms*)Obj)->InIncludeNonCollidingComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InIncludeNonCollidingComponents = { "InIncludeNonCollidingComponents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectableHUD_eventGetPriorityActorsInRectangle_Parms), &Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InIncludeNonCollidingComponents_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InActorMustBeFullyEnclosed_SetBit(void* Obj)
	{
		((SelectableHUD_eventGetPriorityActorsInRectangle_Parms*)Obj)->InActorMustBeFullyEnclosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InActorMustBeFullyEnclosed = { "InActorMustBeFullyEnclosed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectableHUD_eventGetPriorityActorsInRectangle_Parms), &Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InActorMustBeFullyEnclosed_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InFirstPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InSecondPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_OutNewActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_OutNewActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InIncludeNonCollidingComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::NewProp_InActorMustBeFullyEnclosed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/*\n\x09* InFirstPoint / InSecondPoint \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd. (ReceiveDrawmHUD \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n\x09* InIncludeNonCollidingComponents : \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe8\xb8\xa6 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09* InActorMustBeFullyEnclosed : True\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe5\xb7\xa1\xef\xbf\xbd\xd7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe8\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
		{ "CPP_Default_InActorMustBeFullyEnclosed", "false" },
		{ "CPP_Default_InIncludeNonCollidingComponents", "true" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "ToolTip", "* InFirstPoint / InSecondPoint \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd. (ReceiveDrawmHUD \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n* InIncludeNonCollidingComponents : \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe8\xb8\xa6 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n* InActorMustBeFullyEnclosed : True\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe5\xb7\xa1\xef\xbf\xbd\xd7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe8\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb9\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "GetPriorityActorsInRectangle", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::SelectableHUD_eventGetPriorityActorsInRectangle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::SelectableHUD_eventGetPriorityActorsInRectangle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics
	{
		struct SelectableHUD_eventIsDoubleClick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SelectableHUD_eventIsDoubleClick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectableHUD_eventIsDoubleClick_Parms), &Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "IsDoubleClick", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::SelectableHUD_eventIsDoubleClick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::SelectableHUD_eventIsDoubleClick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_IsDoubleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_IsDoubleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics
	{
		struct SelectableHUD_eventIsEqualPoint_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SelectableHUD_eventIsEqualPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectableHUD_eventIsEqualPoint_Parms), &Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "IsEqualPoint", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::SelectableHUD_eventIsEqualPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::SelectableHUD_eventIsEqualPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_IsEqualPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_IsEqualPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics
	{
		struct SelectableHUD_eventOnClickDown_Parms
		{
			float InMouseX;
			float InMouseY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMouseX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMouseY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::NewProp_InMouseX = { "InMouseX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventOnClickDown_Parms, InMouseX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::NewProp_InMouseY = { "InMouseY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventOnClickDown_Parms, InMouseY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::NewProp_InMouseX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::NewProp_InMouseY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClickMessage" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbf\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbf\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "OnClickDown", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::SelectableHUD_eventOnClickDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::SelectableHUD_eventOnClickDown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_OnClickDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_OnClickDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics
	{
		struct SelectableHUD_eventOnClickEnd_Parms
		{
			float InMouseX;
			float InMouseY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMouseX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMouseY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::NewProp_InMouseX = { "InMouseX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventOnClickEnd_Parms, InMouseX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::NewProp_InMouseY = { "InMouseY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventOnClickEnd_Parms, InMouseY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::NewProp_InMouseX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::NewProp_InMouseY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClickMessage" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba Release\xef\xbf\xbd\xc3\xbf\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd (\xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd OnClickDown\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba Release\xef\xbf\xbd\xc3\xbf\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd (\xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd OnClickDown\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "OnClickEnd", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::SelectableHUD_eventOnClickEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::SelectableHUD_eventOnClickEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_OnClickEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_OnClickEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics
	{
		struct SelectableHUD_eventOnClickStart_Parms
		{
			float InMouseX;
			float InMouseY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMouseX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMouseY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::NewProp_InMouseX = { "InMouseX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventOnClickStart_Parms, InMouseX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::NewProp_InMouseY = { "InMouseY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectableHUD_eventOnClickStart_Parms, InMouseY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::NewProp_InMouseX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::NewProp_InMouseY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClickMessage" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbf\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae (\xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd OnClickDown \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbf\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae (\xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd OnClickDown \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectableHUD, nullptr, "OnClickStart", nullptr, nullptr, Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::SelectableHUD_eventOnClickStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::SelectableHUD_eventOnClickStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASelectableHUD_OnClickStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectableHUD_OnClickStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASelectableHUD);
	UClass* Z_Construct_UClass_ASelectableHUD_NoRegister()
	{
		return ASelectableHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASelectableHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectRule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastPoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MouseEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleInput_MetaData[];
#endif
		static void NewProp_bDoubleInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleCheckerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleCheckerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelectableHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SelectUnitsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASelectableHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASelectableHUD_GetHighPriorityActorsInViewport, "GetHighPriorityActorsInViewport" }, // 755813711
		{ &Z_Construct_UFunction_ASelectableHUD_GetMouseState, "GetMouseState" }, // 102135936
		{ &Z_Construct_UFunction_ASelectableHUD_GetPoints, "GetPoints" }, // 1151887323
		{ &Z_Construct_UFunction_ASelectableHUD_GetPriorityActorsInRectangle, "GetPriorityActorsInRectangle" }, // 3047522486
		{ &Z_Construct_UFunction_ASelectableHUD_IsDoubleClick, "IsDoubleClick" }, // 1938050329
		{ &Z_Construct_UFunction_ASelectableHUD_IsEqualPoint, "IsEqualPoint" }, // 2118955056
		{ &Z_Construct_UFunction_ASelectableHUD_OnClickDown, "OnClickDown" }, // 1138945372
		{ &Z_Construct_UFunction_ASelectableHUD_OnClickEnd, "OnClickEnd" }, // 2343721181
		{ &Z_Construct_UFunction_ASelectableHUD_OnClickStart, "OnClickStart" }, // 2233747008
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SelectableHUD.h" },
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::NewProp_SelectRule_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_SelectRule = { "SelectRule", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectableHUD, SelectRule), Z_Construct_UScriptStruct_FSelectRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::NewProp_SelectRule_MetaData), Z_Construct_UClass_ASelectableHUD_Statics::NewProp_SelectRule_MetaData) }; // 3053405083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::NewProp_StartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectableHUD, StartPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::NewProp_StartPoint_MetaData), Z_Construct_UClass_ASelectableHUD_Statics::NewProp_StartPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::NewProp_CurrentPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_CurrentPoint = { "CurrentPoint", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectableHUD, CurrentPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::NewProp_CurrentPoint_MetaData), Z_Construct_UClass_ASelectableHUD_Statics::NewProp_CurrentPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::NewProp_LastPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_LastPoint = { "LastPoint", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectableHUD, LastPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::NewProp_LastPoint_MetaData), Z_Construct_UClass_ASelectableHUD_Statics::NewProp_LastPoint_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseState = { "MouseState", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectableHUD, MouseState), Z_Construct_UEnum_SelectUnitsSystem_EMouseState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseState_MetaData), Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseState_MetaData) }; // 340584058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseEndTime = { "MouseEndTime", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectableHUD, MouseEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseEndTime_MetaData), Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseEndTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::NewProp_bDoubleInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	void Z_Construct_UClass_ASelectableHUD_Statics::NewProp_bDoubleInput_SetBit(void* Obj)
	{
		((ASelectableHUD*)Obj)->bDoubleInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_bDoubleInput = { "bDoubleInput", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASelectableHUD), &Z_Construct_UClass_ASelectableHUD_Statics::NewProp_bDoubleInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::NewProp_bDoubleInput_MetaData), Z_Construct_UClass_ASelectableHUD_Statics::NewProp_bDoubleInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectableHUD_Statics::NewProp_DoubleCheckerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableHUD.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASelectableHUD_Statics::NewProp_DoubleCheckerHandle = { "DoubleCheckerHandle", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectableHUD, DoubleCheckerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::NewProp_DoubleCheckerHandle_MetaData), Z_Construct_UClass_ASelectableHUD_Statics::NewProp_DoubleCheckerHandle_MetaData) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelectableHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_SelectRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_CurrentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_LastPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_MouseEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_bDoubleInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectableHUD_Statics::NewProp_DoubleCheckerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelectableHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelectableHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASelectableHUD_Statics::ClassParams = {
		&ASelectableHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASelectableHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ASelectableHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectableHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASelectableHUD()
	{
		if (!Z_Registration_Info_UClass_ASelectableHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASelectableHUD.OuterSingleton, Z_Construct_UClass_ASelectableHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASelectableHUD.OuterSingleton;
	}
	template<> SELECTUNITSSYSTEM_API UClass* StaticClass<ASelectableHUD>()
	{
		return ASelectableHUD::StaticClass();
	}
	ASelectableHUD::ASelectableHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelectableHUD);
	ASelectableHUD::~ASelectableHUD() {}
	struct Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_Statics::EnumInfo[] = {
		{ EMouseState_StaticEnum, TEXT("EMouseState"), &Z_Registration_Info_UEnum_EMouseState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 340584058U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASelectableHUD, ASelectableHUD::StaticClass, TEXT("ASelectableHUD"), &Z_Registration_Info_UClass_ASelectableHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASelectableHUD), 1778505220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_4161083098(TEXT("/Script/SelectUnitsSystem"),
		Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
