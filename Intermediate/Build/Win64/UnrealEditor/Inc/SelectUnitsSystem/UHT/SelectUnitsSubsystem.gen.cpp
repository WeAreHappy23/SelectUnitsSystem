// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectUnitsSystem/Public/SelectUnitsSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "SelectUnitsSystem/Public/SelectRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectUnitsSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	SELECTUNITSSYSTEM_API UClass* Z_Construct_UClass_USelectRuleSet_NoRegister();
	SELECTUNITSSYSTEM_API UClass* Z_Construct_UClass_USelectUnitsSubsystem();
	SELECTUNITSSYSTEM_API UClass* Z_Construct_UClass_USelectUnitsSubsystem_NoRegister();
	SELECTUNITSSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature();
	SELECTUNITSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSelectRule();
	UPackage* Z_Construct_UPackage__Script_SelectUnitsSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics
	{
		struct _Script_SelectUnitsSystem_eventSelectActors_Parms
		{
			TArray<AActor*> AddList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AddList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::NewProp_AddList_Inner = { "AddList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::NewProp_AddList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::NewProp_AddList = { "AddList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SelectUnitsSystem_eventSelectActors_Parms, AddList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::NewProp_AddList_MetaData), Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::NewProp_AddList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::NewProp_AddList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::NewProp_AddList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SelectUnitsSystem, nullptr, "SelectActors__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::_Script_SelectUnitsSystem_eventSelectActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::_Script_SelectUnitsSystem_eventSelectActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSelectActors_DelegateWrapper(const FMulticastScriptDelegate& SelectActors, TArray<AActor*> const& AddList)
{
	struct _Script_SelectUnitsSystem_eventSelectActors_Parms
	{
		TArray<AActor*> AddList;
	};
	_Script_SelectUnitsSystem_eventSelectActors_Parms Parms;
	Parms.AddList=AddList;
	SelectActors.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execOnRemoveSelectingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InRemoveActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveSelectingActor(Z_Param_InRemoveActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execAppendList)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InNewList);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutAppendedList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendList(Z_Param_Out_InNewList,Z_Param_Out_OutAppendedList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execGetFocusingActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const AActor**)Z_Param__Result=P_THIS->GetFocusingActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execGetPriorityOfSelectGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetPriorityOfSelectGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execIsSelectingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelectingActor(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execIsContatinsFocusActor)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContatinsFocusActor(Z_Param_Out_InList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execGetNoneIntersectActorList)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InList);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutNewList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNoneIntersectActorList(Z_Param_Out_InList,Z_Param_Out_OutNewList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execRequestSelect)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InNewList);
		P_GET_UBOOL(Z_Param_InAbortIfListEmpty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSelect(Z_Param_Out_InNewList,Z_Param_InAbortIfListEmpty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USelectUnitsSubsystem::execRegister)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InController);
		P_GET_OBJECT(UClass,Z_Param_InRuleSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Register(Z_Param_InController,Z_Param_InRuleSet);
		P_NATIVE_END;
	}
	void USelectUnitsSubsystem::StaticRegisterNativesUSelectUnitsSubsystem()
	{
		UClass* Class = USelectUnitsSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendList", &USelectUnitsSubsystem::execAppendList },
			{ "GetFocusingActor", &USelectUnitsSubsystem::execGetFocusingActor },
			{ "GetNoneIntersectActorList", &USelectUnitsSubsystem::execGetNoneIntersectActorList },
			{ "GetPriorityOfSelectGroup", &USelectUnitsSubsystem::execGetPriorityOfSelectGroup },
			{ "IsContatinsFocusActor", &USelectUnitsSubsystem::execIsContatinsFocusActor },
			{ "IsSelectingActor", &USelectUnitsSubsystem::execIsSelectingActor },
			{ "OnRemoveSelectingActor", &USelectUnitsSubsystem::execOnRemoveSelectingActor },
			{ "Register", &USelectUnitsSubsystem::execRegister },
			{ "RequestSelect", &USelectUnitsSubsystem::execRequestSelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics
	{
		struct SelectUnitsSubsystem_eventAppendList_Parms
		{
			TArray<AActor*> InNewList;
			TArray<AActor*> OutAppendedList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNewList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAppendedList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAppendedList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_InNewList_Inner = { "InNewList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_InNewList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_InNewList = { "InNewList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventAppendList_Parms, InNewList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_InNewList_MetaData), Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_InNewList_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_OutAppendedList_Inner = { "OutAppendedList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_OutAppendedList = { "OutAppendedList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventAppendList_Parms, OutAppendedList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_InNewList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_InNewList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_OutAppendedList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::NewProp_OutAppendedList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Function" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xda\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xda\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "AppendList", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::SelectUnitsSubsystem_eventAppendList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::SelectUnitsSubsystem_eventAppendList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_AppendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_AppendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics
	{
		struct SelectUnitsSubsystem_eventGetFocusingActor_Parms
		{
			const AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventGetFocusingActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "GetFocusingActor", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::SelectUnitsSubsystem_eventGetFocusingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::SelectUnitsSubsystem_eventGetFocusingActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics
	{
		struct SelectUnitsSubsystem_eventGetNoneIntersectActorList_Parms
		{
			TArray<AActor*> InList;
			TArray<AActor*> OutNewList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutNewList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNewList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_InList_Inner = { "InList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_InList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_InList = { "InList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventGetNoneIntersectActorList_Parms, InList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_InList_MetaData), Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_InList_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_OutNewList_Inner = { "OutNewList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_OutNewList = { "OutNewList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventGetNoneIntersectActorList_Parms, OutNewList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_InList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_InList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_OutNewList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::NewProp_OutNewList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "GetNoneIntersectActorList", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::SelectUnitsSubsystem_eventGetNoneIntersectActorList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::SelectUnitsSubsystem_eventGetNoneIntersectActorList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics
	{
		struct SelectUnitsSubsystem_eventGetPriorityOfSelectGroup_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventGetPriorityOfSelectGroup_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xec\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xec\xbc\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "GetPriorityOfSelectGroup", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::SelectUnitsSubsystem_eventGetPriorityOfSelectGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::SelectUnitsSubsystem_eventGetPriorityOfSelectGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics
	{
		struct SelectUnitsSubsystem_eventIsContatinsFocusActor_Parms
		{
			TArray<AActor*> InList;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_InList_Inner = { "InList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_InList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_InList = { "InList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventIsContatinsFocusActor_Parms, InList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_InList_MetaData), Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_InList_MetaData) };
	void Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SelectUnitsSubsystem_eventIsContatinsFocusActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectUnitsSubsystem_eventIsContatinsFocusActor_Parms), &Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_InList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_InList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xc4\xbf\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "IsContatinsFocusActor", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::SelectUnitsSubsystem_eventIsContatinsFocusActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::SelectUnitsSubsystem_eventIsContatinsFocusActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics
	{
		struct SelectUnitsSubsystem_eventIsSelectingActor_Parms
		{
			const AActor* InActor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_InActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventIsSelectingActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_InActor_MetaData), Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_InActor_MetaData) };
	void Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SelectUnitsSubsystem_eventIsSelectingActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectUnitsSubsystem_eventIsSelectingActor_Parms), &Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdf\xbf\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdf\xbf\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "IsSelectingActor", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::SelectUnitsSubsystem_eventIsSelectingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::SelectUnitsSubsystem_eventIsSelectingActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics
	{
		struct SelectUnitsSubsystem_eventOnRemoveSelectingActor_Parms
		{
			AActor* InRemoveActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRemoveActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::NewProp_InRemoveActor = { "InRemoveActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventOnRemoveSelectingActor_Parms, InRemoveActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::NewProp_InRemoveActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "OnRemoveSelectingActor", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::SelectUnitsSubsystem_eventOnRemoveSelectingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::SelectUnitsSubsystem_eventOnRemoveSelectingActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics
	{
		struct SelectUnitsSubsystem_eventRegister_Parms
		{
			const APlayerController* InController;
			const TSubclassOf<USelectRuleSet>  InRuleSet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRuleSet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InRuleSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventRegister_Parms, InController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InController_MetaData), Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InRuleSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InRuleSet = { "InRuleSet", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventRegister_Parms, InRuleSet), Z_Construct_UClass_UClass, Z_Construct_UClass_USelectRuleSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InRuleSet_MetaData), Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InRuleSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::NewProp_InRuleSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subsystem" },
		{ "Comment", "// Subsystem\n" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
		{ "ToolTip", "Subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "Register", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::SelectUnitsSubsystem_eventRegister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::SelectUnitsSubsystem_eventRegister_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_Register()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_Register_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics
	{
		struct SelectUnitsSubsystem_eventRequestSelect_Parms
		{
			TArray<AActor*> InNewList;
			bool InAbortIfListEmpty;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNewList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNewList;
		static void NewProp_InAbortIfListEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InAbortIfListEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InNewList_Inner = { "InNewList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InNewList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InNewList = { "InNewList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectUnitsSubsystem_eventRequestSelect_Parms, InNewList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InNewList_MetaData), Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InNewList_MetaData) };
	void Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InAbortIfListEmpty_SetBit(void* Obj)
	{
		((SelectUnitsSubsystem_eventRequestSelect_Parms*)Obj)->InAbortIfListEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InAbortIfListEmpty = { "InAbortIfListEmpty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectUnitsSubsystem_eventRequestSelect_Parms), &Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InAbortIfListEmpty_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InNewList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InNewList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::NewProp_InAbortIfListEmpty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subsystem" },
		{ "CPP_Default_InAbortIfListEmpty", "false" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectUnitsSubsystem, nullptr, "RequestSelect", nullptr, nullptr, Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::SelectUnitsSubsystem_eventRequestSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::SelectUnitsSubsystem_eventRequestSelect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectUnitsSubsystem);
	UClass* Z_Construct_UClass_USelectUnitsSubsystem_NoRegister()
	{
		return USelectUnitsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USelectUnitsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAdd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemove_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemove;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SelectedSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FocusActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectRule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectUnitsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SelectUnitsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectUnitsSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_AppendList, "AppendList" }, // 842521631
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_GetFocusingActor, "GetFocusingActor" }, // 2451804927
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_GetNoneIntersectActorList, "GetNoneIntersectActorList" }, // 15063483
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_GetPriorityOfSelectGroup, "GetPriorityOfSelectGroup" }, // 1491787373
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_IsContatinsFocusActor, "IsContatinsFocusActor" }, // 3105245266
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_IsSelectingActor, "IsSelectingActor" }, // 1063478267
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_OnRemoveSelectingActor, "OnRemoveSelectingActor" }, // 1769876026
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_Register, "Register" }, // 857789970
		{ &Z_Construct_UFunction_USelectUnitsSubsystem_RequestSelect, "RequestSelect" }, // 796173483
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectUnitsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelectUnitsSubsystem.h" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnAdd_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnAdd = { "OnAdd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectUnitsSubsystem, OnAdd), Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnAdd_MetaData), Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnAdd_MetaData) }; // 1392064680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnRemove_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnRemove = { "OnRemove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectUnitsSubsystem, OnRemove), Z_Construct_UDelegateFunction_SelectUnitsSystem_SelectActors__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnRemove_MetaData), Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnRemove_MetaData) }; // 1392064680
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectedSet_ElementProp = { "SelectedSet", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectedSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectedSet = { "SelectedSet", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectUnitsSubsystem, SelectedSet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectedSet_MetaData), Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectedSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_FocusActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_FocusActor = { "FocusActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectUnitsSubsystem, FocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_FocusActor_MetaData), Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_FocusActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectRule_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectUnitsSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectRule = { "SelectRule", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectUnitsSubsystem, SelectRule), Z_Construct_UScriptStruct_FSelectRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectRule_MetaData), Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectRule_MetaData) }; // 3053405083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectUnitsSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_OnRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectedSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectedSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_FocusActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectUnitsSubsystem_Statics::NewProp_SelectRule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectUnitsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectUnitsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectUnitsSubsystem_Statics::ClassParams = {
		&USelectUnitsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USelectUnitsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectUnitsSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectUnitsSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USelectUnitsSubsystem()
	{
		if (!Z_Registration_Info_UClass_USelectUnitsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectUnitsSubsystem.OuterSingleton, Z_Construct_UClass_USelectUnitsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectUnitsSubsystem.OuterSingleton;
	}
	template<> SELECTUNITSSYSTEM_API UClass* StaticClass<USelectUnitsSubsystem>()
	{
		return USelectUnitsSubsystem::StaticClass();
	}
	USelectUnitsSubsystem::USelectUnitsSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectUnitsSubsystem);
	USelectUnitsSubsystem::~USelectUnitsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelectUnitsSubsystem, USelectUnitsSubsystem::StaticClass, TEXT("USelectUnitsSubsystem"), &Z_Registration_Info_UClass_USelectUnitsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectUnitsSubsystem), 1360331713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_169916084(TEXT("/Script/SelectUnitsSystem"),
		Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
