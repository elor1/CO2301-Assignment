// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CO2301Assignment/BTTask_ClearBlackboardValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ClearBlackboardValue() {}
// Cross Module References
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue_NoRegister();
	CO2301ASSIGNMENT_API UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_CO2301Assignment();
// End Cross Module References
	void UBTTask_ClearBlackboardValue::StaticRegisterNativesUBTTask_ClearBlackboardValue()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue_NoRegister()
	{
		return UBTTask_ClearBlackboardValue::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CO2301Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_ClearBlackboardValue.h" },
		{ "ModuleRelativePath", "BTTask_ClearBlackboardValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ClearBlackboardValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::ClassParams = {
		&UBTTask_ClearBlackboardValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_ClearBlackboardValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_ClearBlackboardValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_ClearBlackboardValue, 2805350421);
	template<> CO2301ASSIGNMENT_API UClass* StaticClass<UBTTask_ClearBlackboardValue>()
	{
		return UBTTask_ClearBlackboardValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_ClearBlackboardValue(Z_Construct_UClass_UBTTask_ClearBlackboardValue, &UBTTask_ClearBlackboardValue::StaticClass, TEXT("/Script/CO2301Assignment"), TEXT("UBTTask_ClearBlackboardValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ClearBlackboardValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
