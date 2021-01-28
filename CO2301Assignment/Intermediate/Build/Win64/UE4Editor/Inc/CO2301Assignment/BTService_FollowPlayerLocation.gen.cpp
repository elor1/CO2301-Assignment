// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CO2301Assignment/BTService_FollowPlayerLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_FollowPlayerLocation() {}
// Cross Module References
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_UBTService_FollowPlayerLocation_NoRegister();
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_UBTService_FollowPlayerLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_CO2301Assignment();
// End Cross Module References
	void UBTService_FollowPlayerLocation::StaticRegisterNativesUBTService_FollowPlayerLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTService_FollowPlayerLocation_NoRegister()
	{
		return UBTService_FollowPlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_FollowPlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_FollowPlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CO2301Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_FollowPlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_FollowPlayerLocation.h" },
		{ "ModuleRelativePath", "BTService_FollowPlayerLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_FollowPlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_FollowPlayerLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_FollowPlayerLocation_Statics::ClassParams = {
		&UBTService_FollowPlayerLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_FollowPlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FollowPlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_FollowPlayerLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_FollowPlayerLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_FollowPlayerLocation, 2965120339);
	template<> CO2301ASSIGNMENT_API UClass* StaticClass<UBTService_FollowPlayerLocation>()
	{
		return UBTService_FollowPlayerLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_FollowPlayerLocation(Z_Construct_UClass_UBTService_FollowPlayerLocation, &UBTService_FollowPlayerLocation::StaticClass, TEXT("/Script/CO2301Assignment"), TEXT("UBTService_FollowPlayerLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_FollowPlayerLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
