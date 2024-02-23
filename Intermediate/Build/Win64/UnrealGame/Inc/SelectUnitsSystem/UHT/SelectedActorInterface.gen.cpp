// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectUnitsSystem/Public/SelectedActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectedActorInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SELECTUNITSSYSTEM_API UClass* Z_Construct_UClass_USelectedActorInterface();
	SELECTUNITSSYSTEM_API UClass* Z_Construct_UClass_USelectedActorInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SelectUnitsSystem();
// End Cross Module References
	DEFINE_FUNCTION(ISelectedActorInterface::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetPriority_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISelectedActorInterface::execOnSelectActor)
	{
		P_GET_UBOOL(Z_Param_InSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectActor_Implementation(Z_Param_InSelect);
		P_NATIVE_END;
	}
	struct SelectedActorInterface_eventGetPriority_Parms
	{
		uint8 ReturnValue;

		/** Constructor, initializes return property only **/
		SelectedActorInterface_eventGetPriority_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct SelectedActorInterface_eventOnSelectActor_Parms
	{
		bool InSelect;
	};
	uint8 ISelectedActorInterface::GetPriority()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPriority instead.");
		SelectedActorInterface_eventGetPriority_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISelectedActorInterface::OnSelectActor(bool InSelect)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSelectActor instead.");
	}
	void USelectedActorInterface::StaticRegisterNativesUSelectedActorInterface()
	{
		UClass* Class = USelectedActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriority", &ISelectedActorInterface::execGetPriority },
			{ "OnSelectActor", &ISelectedActorInterface::execOnSelectActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectedActorInterface_eventGetPriority_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Priority" },
		{ "ModuleRelativePath", "Public/SelectedActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectedActorInterface, nullptr, "GetPriority", nullptr, nullptr, Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::PropPointers), sizeof(SelectedActorInterface_eventGetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::PropPointers) < 2048);
	static_assert(sizeof(SelectedActorInterface_eventGetPriority_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectedActorInterface_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectedActorInterface_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics
	{
		static void NewProp_InSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InSelect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::NewProp_InSelect_SetBit(void* Obj)
	{
		((SelectedActorInterface_eventOnSelectActor_Parms*)Obj)->InSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::NewProp_InSelect = { "InSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectedActorInterface_eventOnSelectActor_Parms), &Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::NewProp_InSelect_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::NewProp_InSelect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OnSelect" },
		{ "ModuleRelativePath", "Public/SelectedActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectedActorInterface, nullptr, "OnSelectActor", nullptr, nullptr, Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::PropPointers), sizeof(SelectedActorInterface_eventOnSelectActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(SelectedActorInterface_eventOnSelectActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectedActorInterface_OnSelectActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectedActorInterface_OnSelectActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectedActorInterface);
	UClass* Z_Construct_UClass_USelectedActorInterface_NoRegister()
	{
		return USelectedActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USelectedActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectedActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SelectUnitsSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectedActorInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectedActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectedActorInterface_GetPriority, "GetPriority" }, // 4087987610
		{ &Z_Construct_UFunction_USelectedActorInterface_OnSelectActor, "OnSelectActor" }, // 2918801536
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectedActorInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectedActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SelectedActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectedActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISelectedActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectedActorInterface_Statics::ClassParams = {
		&USelectedActorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectedActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectedActorInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USelectedActorInterface()
	{
		if (!Z_Registration_Info_UClass_USelectedActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectedActorInterface.OuterSingleton, Z_Construct_UClass_USelectedActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectedActorInterface.OuterSingleton;
	}
	template<> SELECTUNITSSYSTEM_API UClass* StaticClass<USelectedActorInterface>()
	{
		return USelectedActorInterface::StaticClass();
	}
	USelectedActorInterface::USelectedActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectedActorInterface);
	USelectedActorInterface::~USelectedActorInterface() {}
	static FName NAME_USelectedActorInterface_GetPriority = FName(TEXT("GetPriority"));
	uint8 ISelectedActorInterface::Execute_GetPriority(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USelectedActorInterface::StaticClass()));
		SelectedActorInterface_eventGetPriority_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USelectedActorInterface_GetPriority);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISelectedActorInterface*)(O->GetNativeInterfaceAddress(USelectedActorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPriority_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USelectedActorInterface_OnSelectActor = FName(TEXT("OnSelectActor"));
	void ISelectedActorInterface::Execute_OnSelectActor(UObject* O, bool InSelect)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USelectedActorInterface::StaticClass()));
		SelectedActorInterface_eventOnSelectActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USelectedActorInterface_OnSelectActor);
		if (Func)
		{
			Parms.InSelect=InSelect;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISelectedActorInterface*)(O->GetNativeInterfaceAddress(USelectedActorInterface::StaticClass())))
		{
			I->OnSelectActor_Implementation(InSelect);
		}
	}
	struct Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelectedActorInterface, USelectedActorInterface::StaticClass, TEXT("USelectedActorInterface"), &Z_Registration_Info_UClass_USelectedActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectedActorInterface), 4174750128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_254492253(TEXT("/Script/SelectUnitsSystem"),
		Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
