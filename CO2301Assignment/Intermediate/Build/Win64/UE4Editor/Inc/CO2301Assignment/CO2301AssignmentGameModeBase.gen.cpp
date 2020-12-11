// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CO2301Assignment/CO2301AssignmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCO2301AssignmentGameModeBase() {}
// Cross Module References
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_ACO2301AssignmentGameModeBase_NoRegister();
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_ACO2301AssignmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CO2301Assignment();
// End Cross Module References
	void ACO2301AssignmentGameModeBase::StaticRegisterNativesACO2301AssignmentGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACO2301AssignmentGameModeBase_NoRegister()
	{
		return ACO2301AssignmentGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CO2301Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CO2301AssignmentGameModeBase.h" },
		{ "ModuleRelativePath", "CO2301AssignmentGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACO2301AssignmentGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::ClassParams = {
		&ACO2301AssignmentGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACO2301AssignmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACO2301AssignmentGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACO2301AssignmentGameModeBase, 2806991540);
	template<> CO2301ASSIGNMENT_API UClass* StaticClass<ACO2301AssignmentGameModeBase>()
	{
		return ACO2301AssignmentGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACO2301AssignmentGameModeBase(Z_Construct_UClass_ACO2301AssignmentGameModeBase, &ACO2301AssignmentGameModeBase::StaticClass, TEXT("/Script/CO2301Assignment"), TEXT("ACO2301AssignmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACO2301AssignmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
