// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeProject/EnemyWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyWall() {}
// Cross Module References
	SNAKEPROJECT_API UClass* Z_Construct_UClass_AEnemyWall_NoRegister();
	SNAKEPROJECT_API UClass* Z_Construct_UClass_AEnemyWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeProject();
	SNAKEPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void AEnemyWall::StaticRegisterNativesAEnemyWall()
	{
	}
	UClass* Z_Construct_UClass_AEnemyWall_NoRegister()
	{
		return AEnemyWall::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyWall.h" },
		{ "ModuleRelativePath", "EnemyWall.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyWall_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AEnemyWall, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyWall_Statics::ClassParams = {
		&AEnemyWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyWall, 1354567352);
	template<> SNAKEPROJECT_API UClass* StaticClass<AEnemyWall>()
	{
		return AEnemyWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyWall(Z_Construct_UClass_AEnemyWall, &AEnemyWall::StaticClass, TEXT("/Script/SnakeProject"), TEXT("AEnemyWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
