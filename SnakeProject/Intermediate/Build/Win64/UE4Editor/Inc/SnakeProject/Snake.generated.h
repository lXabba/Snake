// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASnakeElementBase;
class AActor;
#ifdef SNAKEPROJECT_Snake_generated_h
#error "Snake.generated.h already included, missing '#pragma once' in Snake.h"
#endif
#define SNAKEPROJECT_Snake_generated_h

#define SnakeProject_Source_SnakeProject_Snake_h_23_SPARSE_DATA
#define SnakeProject_Source_SnakeProject_Snake_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execAddSnakeElement);


#define SnakeProject_Source_SnakeProject_Snake_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execAddSnakeElement);


#define SnakeProject_Source_SnakeProject_Snake_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnake(); \
	friend struct Z_Construct_UClass_ASnake_Statics; \
public: \
	DECLARE_CLASS(ASnake, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeProject"), NO_API) \
	DECLARE_SERIALIZER(ASnake)


#define SnakeProject_Source_SnakeProject_Snake_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASnake(); \
	friend struct Z_Construct_UClass_ASnake_Statics; \
public: \
	DECLARE_CLASS(ASnake, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeProject"), NO_API) \
	DECLARE_SERIALIZER(ASnake)


#define SnakeProject_Source_SnakeProject_Snake_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnake(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnake(ASnake&&); \
	NO_API ASnake(const ASnake&); \
public:


#define SnakeProject_Source_SnakeProject_Snake_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnake(ASnake&&); \
	NO_API ASnake(const ASnake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnake); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnake)


#define SnakeProject_Source_SnakeProject_Snake_h_23_PRIVATE_PROPERTY_OFFSET
#define SnakeProject_Source_SnakeProject_Snake_h_20_PROLOG
#define SnakeProject_Source_SnakeProject_Snake_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeProject_Source_SnakeProject_Snake_h_23_PRIVATE_PROPERTY_OFFSET \
	SnakeProject_Source_SnakeProject_Snake_h_23_SPARSE_DATA \
	SnakeProject_Source_SnakeProject_Snake_h_23_RPC_WRAPPERS \
	SnakeProject_Source_SnakeProject_Snake_h_23_INCLASS \
	SnakeProject_Source_SnakeProject_Snake_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeProject_Source_SnakeProject_Snake_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeProject_Source_SnakeProject_Snake_h_23_PRIVATE_PROPERTY_OFFSET \
	SnakeProject_Source_SnakeProject_Snake_h_23_SPARSE_DATA \
	SnakeProject_Source_SnakeProject_Snake_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeProject_Source_SnakeProject_Snake_h_23_INCLASS_NO_PURE_DECLS \
	SnakeProject_Source_SnakeProject_Snake_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEPROJECT_API UClass* StaticClass<class ASnake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeProject_Source_SnakeProject_Snake_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::UP) \
	op(EMovementDirection::DOWN) \
	op(EMovementDirection::LEFT) \
	op(EMovementDirection::RIGHT) 

enum class EMovementDirection;
template<> SNAKEPROJECT_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
