// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectableHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EMouseState : uint8;
#ifdef SELECTUNITSSYSTEM_SelectableHUD_generated_h
#error "SelectableHUD.generated.h already included, missing '#pragma once' in SelectableHUD.h"
#endif
#define SELECTUNITSSYSTEM_SelectableHUD_generated_h

#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_SPARSE_DATA
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClickEnd); \
	DECLARE_FUNCTION(execOnClickDown); \
	DECLARE_FUNCTION(execOnClickStart); \
	DECLARE_FUNCTION(execGetHighPriorityActorsInViewport); \
	DECLARE_FUNCTION(execGetPriorityActorsInRectangle); \
	DECLARE_FUNCTION(execIsDoubleClick); \
	DECLARE_FUNCTION(execGetMouseState); \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execIsEqualPoint);


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_ACCESSORS
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASelectableHUD(); \
	friend struct Z_Construct_UClass_ASelectableHUD_Statics; \
public: \
	DECLARE_CLASS(ASelectableHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SelectUnitsSystem"), NO_API) \
	DECLARE_SERIALIZER(ASelectableHUD)


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASelectableHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASelectableHUD(ASelectableHUD&&); \
	NO_API ASelectableHUD(const ASelectableHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASelectableHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASelectableHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASelectableHUD) \
	NO_API virtual ~ASelectableHUD();


#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_16_PROLOG
#define FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_SPARSE_DATA \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_ACCESSORS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_INCLASS_NO_PURE_DECLS \
	FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SELECTUNITSSYSTEM_API UClass* StaticClass<class ASelectableHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugin_SelectUnitsSystem_HostProject_Plugins_SelectUnitsSystem_Source_SelectUnitsSystem_Public_SelectableHUD_h


#define FOREACH_ENUM_EMOUSESTATE(op) \
	op(EMouseState::None) \
	op(EMouseState::Start) \
	op(EMouseState::Down) \
	op(EMouseState::End) 

enum class EMouseState : uint8;
template<> struct TIsUEnumClass<EMouseState> { enum { Value = true }; };
template<> SELECTUNITSSYSTEM_API UEnum* StaticEnum<EMouseState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
