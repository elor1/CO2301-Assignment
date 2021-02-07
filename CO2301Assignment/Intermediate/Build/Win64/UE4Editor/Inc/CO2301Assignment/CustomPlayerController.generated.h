// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CO2301ASSIGNMENT_CustomPlayerController_generated_h
#error "CustomPlayerController.generated.h already included, missing '#pragma once' in CustomPlayerController.h"
#endif
#define CO2301ASSIGNMENT_CustomPlayerController_generated_h

#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_SPARSE_DATA
#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_RPC_WRAPPERS
#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomPlayerController(); \
	friend struct Z_Construct_UClass_ACustomPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACustomPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CO2301Assignment"), NO_API) \
	DECLARE_SERIALIZER(ACustomPlayerController)


#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACustomPlayerController(); \
	friend struct Z_Construct_UClass_ACustomPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACustomPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CO2301Assignment"), NO_API) \
	DECLARE_SERIALIZER(ACustomPlayerController)


#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPlayerController(ACustomPlayerController&&); \
	NO_API ACustomPlayerController(const ACustomPlayerController&); \
public:


#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPlayerController(ACustomPlayerController&&); \
	NO_API ACustomPlayerController(const ACustomPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPlayerController)


#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(ACustomPlayerController, HUDClass); } \
	FORCEINLINE static uint32 __PPO__LoseScreenClass() { return STRUCT_OFFSET(ACustomPlayerController, LoseScreenClass); } \
	FORCEINLINE static uint32 __PPO__WinScreenClass() { return STRUCT_OFFSET(ACustomPlayerController, WinScreenClass); }


#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_13_PROLOG
#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_SPARSE_DATA \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_RPC_WRAPPERS \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_INCLASS \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_SPARSE_DATA \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CO2301ASSIGNMENT_API UClass* StaticClass<class ACustomPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CO2301Assignment_Source_CO2301Assignment_CustomPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
