// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5/FloatingActor2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingActor2() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_AFloatingActor2_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AFloatingActor2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void AFloatingActor2::StaticRegisterNativesAFloatingActor2()
	{
	}
	UClass* Z_Construct_UClass_AFloatingActor2_NoRegister()
	{
		return AFloatingActor2::StaticClass();
	}
	struct Z_Construct_UClass_AFloatingActor2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloatingActor2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloatingActor2.h" },
		{ "ModuleRelativePath", "FloatingActor2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloatingActor2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingActor2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloatingActor2_Statics::ClassParams = {
		&AFloatingActor2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloatingActor2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingActor2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloatingActor2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloatingActor2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloatingActor2, 2623190844);
	template<> MYPROJECT5_API UClass* StaticClass<AFloatingActor2>()
	{
		return AFloatingActor2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloatingActor2(Z_Construct_UClass_AFloatingActor2, &AFloatingActor2::StaticClass, TEXT("/Script/MyProject5"), TEXT("AFloatingActor2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingActor2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
