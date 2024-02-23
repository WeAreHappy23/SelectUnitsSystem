// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectUnitsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class USelectRuleSet;
#ifdef SELECTUNITSSYSTEM_SelectUnitsSubsystem_generated_h
#error "SelectUnitsSubsystem.generated.h already included, missing '#pragma once' in SelectUnitsSubsystem.h"
#endif
#define SELECTUNITSSYSTEM_SelectUnitsSubsystem_generated_h

#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_10_DELEGATE \
SELECTUNITSSYSTEM_API void FSelectActors_DelegateWrapper(const FMulticastScriptDelegate& SelectActors, TArray<AActor*> const& AddList);


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_SPARSE_DATA
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRemoveSelectingActor); \
	DECLARE_FUNCTION(execAppendList); \
	DECLARE_FUNCTION(execGetFocusingActor); \
	DECLARE_FUNCTION(execGetPriorityOfSelectGroup); \
	DECLARE_FUNCTION(execIsSelectingActor); \
	DECLARE_FUNCTION(execIsContatinsFocusActor); \
	DECLARE_FUNCTION(execGetNoneIntersectActorList); \
	DECLARE_FUNCTION(execRequestSelect); \
	DECLARE_FUNCTION(execRegister);


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectUnitsSubsystem(); \
	friend struct Z_Construct_UClass_USelectUnitsSubsystem_Statics; \
public: \
	DECLARE_CLASS(USelectUnitsSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SelectUnitsSystem"), NO_API) \
	DECLARE_SERIALIZER(USelectUnitsSubsystem)


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectUnitsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectUnitsSubsystem(USelectUnitsSubsystem&&); \
	NO_API USelectUnitsSubsystem(const USelectUnitsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectUnitsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectUnitsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USelectUnitsSubsystem) \
	NO_API virtual ~USelectUnitsSubsystem();


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_13_PROLOG
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_SPARSE_DATA \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SELECTUNITSSYSTEM_API UClass* StaticClass<class USelectUnitsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectUnitsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
