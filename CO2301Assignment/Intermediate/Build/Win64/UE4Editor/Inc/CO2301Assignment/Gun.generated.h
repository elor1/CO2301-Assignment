// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CO2301ASSIGNMENT_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define CO2301ASSIGNMENT_Gun_generated_h

#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_SPARSE_DATA
#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_RPC_WRAPPERS
#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CO2301Assignment"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGun(); \
	friend struct Z_Construct_UClass_AGun_Statics; \
public: \
	DECLARE_CLASS(AGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CO2301Assignment"), NO_API) \
	DECLARE_SERIALIZER(AGun)


#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public:


#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGun(AGun&&); \
	NO_API AGun(const AGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGun)


#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(AGun, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AGun, Mesh); } \
	FORCEINLINE static uint32 __PPO__MaxRange() { return STRUCT_OFFSET(AGun, MaxRange); }


#define CO2301Assignment_Source_CO2301Assignment_Gun_h_10_PROLOG
#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_PRIVATE_PROPERTY_OFFSET \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_SPARSE_DATA \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_RPC_WRAPPERS \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_INCLASS \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CO2301Assignment_Source_CO2301Assignment_Gun_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_PRIVATE_PROPERTY_OFFSET \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_SPARSE_DATA \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_INCLASS_NO_PURE_DECLS \
	CO2301Assignment_Source_CO2301Assignment_Gun_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CO2301ASSIGNMENT_API UClass* StaticClass<class AGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CO2301Assignment_Source_CO2301Assignment_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
