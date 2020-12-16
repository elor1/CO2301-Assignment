// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CO2301ASSIGNMENT_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define CO2301ASSIGNMENT_BaseCharacter_generated_h

#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_SPARSE_DATA
#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_RPC_WRAPPERS
#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CO2301Assignment"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CO2301Assignment"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABaseCharacter, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABaseCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(ABaseCharacter, GunClass); } \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(ABaseCharacter, Gun); } \
	FORCEINLINE static uint32 __PPO__bCurrentlyShooting() { return STRUCT_OFFSET(ABaseCharacter, bCurrentlyShooting); }


#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_12_PROLOG
#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_SPARSE_DATA \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_RPC_WRAPPERS \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_INCLASS \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_SPARSE_DATA \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CO2301ASSIGNMENT_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CO2301Assignment_Source_CO2301Assignment_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
