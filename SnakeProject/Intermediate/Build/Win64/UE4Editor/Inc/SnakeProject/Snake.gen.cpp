// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeProject/Snake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnake() {}
// Cross Module References
	SNAKEPROJECT_API UClass* Z_Construct_UClass_ASnake_NoRegister();
	SNAKEPROJECT_API UClass* Z_Construct_UClass_ASnake();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEPROJECT_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
// End Cross Module References
	void ASnake::StaticRegisterNativesASnake()
	{
	}
	UClass* Z_Construct_UClass_ASnake_NoRegister()
	{
		return ASnake::StaticClass();
	}
	struct Z_Construct_UClass_ASnake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Snake.h" },
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "Snake" },
		{ "ModuleRelativePath", "Snake.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnake, SnakeElementClass), Z_Construct_UClass_ASnakeElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnake_Statics::NewProp_SnakeElementClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnake_Statics::ClassParams = {
		&ASnake::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnake, 4194643991);
	template<> SNAKEPROJECT_API UClass* StaticClass<ASnake>()
	{
		return ASnake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnake(Z_Construct_UClass_ASnake, &ASnake::StaticClass, TEXT("/Script/SnakeProject"), TEXT("ASnake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
