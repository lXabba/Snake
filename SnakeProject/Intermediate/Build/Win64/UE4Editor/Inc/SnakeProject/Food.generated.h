// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEPROJECT_Food_generated_h
#error "Food.generated.h already included, missing '#pragma once' in Food.h"
#endif
#define SNAKEPROJECT_Food_generated_h

#define SnakeProject_Source_SnakeProject_Food_h_14_SPARSE_DATA
#define SnakeProject_Source_SnakeProject_Food_h_14_RPC_WRAPPERS
#define SnakeProject_Source_SnakeProject_Food_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeProject_Source_SnakeProject_Food_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFood(); \
	friend struct Z_Construct_UClass_AFood_Statics; \
public: \
	DECLARE_CLASS(AFood, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeProject"), NO_API) \
	DECLARE_SERIALIZER(AFood) \
	virtual UObject* _getUObject() const override { return const_cast<AFood*>(this); }


#define SnakeProject_Source_SnakeProject_Food_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFood(); \
	friend struct Z_Construct_UClass_AFood_Statics; \
public: \
	DECLARE_CLASS(AFood, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeProject"), NO_API) \
	DECLARE_SERIALIZER(AFood) \
	virtual UObject* _getUObject() const override { return const_cast<AFood*>(this); }


#define SnakeProject_Source_SnakeProject_Food_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFood(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFood) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood(AFood&&); \
	NO_API AFood(const AFood&); \
public:


#define SnakeProject_Source_SnakeProject_Food_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood(AFood&&); \
	NO_API AFood(const AFood&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFood)


#define SnakeProject_Source_SnakeProject_Food_h_14_PRIVATE_PROPERTY_OFFSET
#define SnakeProject_Source_SnakeProject_Food_h_11_PROLOG
#define SnakeProject_Source_SnakeProject_Food_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeProject_Source_SnakeProject_Food_h_14_PRIVATE_PROPERTY_OFFSET \
	SnakeProject_Source_SnakeProject_Food_h_14_SPARSE_DATA \
	SnakeProject_Source_SnakeProject_Food_h_14_RPC_WRAPPERS \
	SnakeProject_Source_SnakeProject_Food_h_14_INCLASS \
	SnakeProject_Source_SnakeProject_Food_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeProject_Source_SnakeProject_Food_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeProject_Source_SnakeProject_Food_h_14_PRIVATE_PROPERTY_OFFSET \
	SnakeProject_Source_SnakeProject_Food_h_14_SPARSE_DATA \
	SnakeProject_Source_SnakeProject_Food_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeProject_Source_SnakeProject_Food_h_14_INCLASS_NO_PURE_DECLS \
	SnakeProject_Source_SnakeProject_Food_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEPROJECT_API UClass* StaticClass<class AFood>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeProject_Source_SnakeProject_Food_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
