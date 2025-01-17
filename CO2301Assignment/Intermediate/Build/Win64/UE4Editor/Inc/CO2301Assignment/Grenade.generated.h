// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef CO2301ASSIGNMENT_Grenade_generated_h
#error "Grenade.generated.h already included, missing '#pragma once' in Grenade.h"
#endif
#define CO2301ASSIGNMENT_Grenade_generated_h

#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_SPARSE_DATA
#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CO2301Assignment"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CO2301Assignment"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrenade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public:


#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrenade)


#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AGrenade, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AGrenade, Mesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGrenade, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AGrenade, Damage); } \
	FORCEINLINE static uint32 __PPO__DamageRadius() { return STRUCT_OFFSET(AGrenade, DamageRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(AGrenade, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__PinSound() { return STRUCT_OFFSET(AGrenade, PinSound); } \
	FORCEINLINE static uint32 __PPO__ExplosionSound() { return STRUCT_OFFSET(AGrenade, ExplosionSound); }


#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_13_PROLOG
#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_PRIVATE_PROPERTY_OFFSET \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_SPARSE_DATA \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_RPC_WRAPPERS \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_INCLASS \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_PRIVATE_PROPERTY_OFFSET \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_SPARSE_DATA \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_INCLASS_NO_PURE_DECLS \
	CO2301Assignment_Source_CO2301Assignment_Grenade_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CO2301ASSIGNMENT_API UClass* StaticClass<class AGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CO2301Assignment_Source_CO2301Assignment_Grenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
