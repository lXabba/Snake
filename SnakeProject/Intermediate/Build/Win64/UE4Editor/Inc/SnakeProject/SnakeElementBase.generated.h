// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SNAKEPROJECT_SnakeElementBase_generated_h
#error "SnakeElementBase.generated.h already included, missing '#pragma once' in SnakeElementBase.h"
#endif
#define SNAKEPROJECT_SnakeElementBase_generated_h

#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_SPARSE_DATA
#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_RPC_WRAPPERS \
	virtual void SetFirstElementType_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleCollision); \
	DECLARE_FUNCTION(execHandleBeginOverlap); \
	DECLARE_FUNCTION(execSetFirstElementType);


#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleCollision); \
	DECLARE_FUNCTION(execHandleBeginOverlap); \
	DECLARE_FUNCTION(execSetFirstElementType);


#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_EVENT_PARMS
#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_CALLBACK_WRAPPERS
#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeElementBase(); \
	friend struct Z_Construct_UClass_ASnakeElementBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeElementBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeProject"), NO_API) \
	DECLARE_SERIALIZER(ASnakeElementBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakeElementBase*>(this); }


#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASnakeElementBase(); \
	friend struct Z_Construct_UClass_ASnakeElementBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeElementBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeProject"), NO_API) \
	DECLARE_SERIALIZER(ASnakeElementBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakeElementBase*>(this); }


#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeElementBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeElementBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeElementBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeElementBase(ASnakeElementBase&&); \
	NO_API ASnakeElementBase(const ASnakeElementBase&); \
public:


#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeElementBase(ASnakeElementBase&&); \
	NO_API ASnakeElementBase(const ASnakeElementBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeElementBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeElementBase)


#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET
#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_13_PROLOG \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_EVENT_PARMS


#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_SPARSE_DATA \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_RPC_WRAPPERS \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_CALLBACK_WRAPPERS \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_INCLASS \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_SPARSE_DATA \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_CALLBACK_WRAPPERS \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_INCLASS_NO_PURE_DECLS \
	SnakeProject_Source_SnakeProject_SnakeElementBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEPROJECT_API UClass* StaticClass<class ASnakeElementBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeProject_Source_SnakeProject_SnakeElementBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
