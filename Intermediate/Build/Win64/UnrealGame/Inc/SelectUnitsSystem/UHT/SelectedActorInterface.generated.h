// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectedActorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SELECTUNITSSYSTEM_SelectedActorInterface_generated_h
#error "SelectedActorInterface.generated.h already included, missing '#pragma once' in SelectedActorInterface.h"
#endif
#define SELECTUNITSSYSTEM_SelectedActorInterface_generated_h

#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_SPARSE_DATA
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSelectActor_Implementation(bool InSelect) {}; \
 \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execOnSelectActor);


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_CALLBACK_WRAPPERS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SELECTUNITSSYSTEM_API USelectedActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SELECTUNITSSYSTEM_API USelectedActorInterface(USelectedActorInterface&&); \
	SELECTUNITSSYSTEM_API USelectedActorInterface(const USelectedActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SELECTUNITSSYSTEM_API, USelectedActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectedActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectedActorInterface) \
	SELECTUNITSSYSTEM_API virtual ~USelectedActorInterface();


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSelectedActorInterface(); \
	friend struct Z_Construct_UClass_USelectedActorInterface_Statics; \
public: \
	DECLARE_CLASS(USelectedActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SelectUnitsSystem"), SELECTUNITSSYSTEM_API) \
	DECLARE_SERIALIZER(USelectedActorInterface)


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISelectedActorInterface() {} \
public: \
	typedef USelectedActorInterface UClassType; \
	typedef ISelectedActorInterface ThisClass; \
	static uint8 Execute_GetPriority(UObject* O); \
	static void Execute_OnSelectActor(UObject* O, bool InSelect); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_10_PROLOG
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_SPARSE_DATA \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_CALLBACK_WRAPPERS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SELECTUNITSSYSTEM_API UClass* StaticClass<class USelectedActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectedActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
