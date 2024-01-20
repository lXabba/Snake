// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEPROJECT_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define SNAKEPROJECT_Interactable_generated_h

#define SnakeProject_Source_SnakeProject_Interactable_h_13_SPARSE_DATA
#define SnakeProject_Source_SnakeProject_Interactable_h_13_RPC_WRAPPERS
#define SnakeProject_Source_SnakeProject_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeProject_Source_SnakeProject_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEPROJECT_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEPROJECT_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEPROJECT_API UInteractable(UInteractable&&); \
	SNAKEPROJECT_API UInteractable(const UInteractable&); \
public:


#define SnakeProject_Source_SnakeProject_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEPROJECT_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEPROJECT_API UInteractable(UInteractable&&); \
	SNAKEPROJECT_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEPROJECT_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define SnakeProject_Source_SnakeProject_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SnakeProject"), SNAKEPROJECT_API) \
	DECLARE_SERIALIZER(UInteractable)


#define SnakeProject_Source_SnakeProject_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SnakeProject_Source_SnakeProject_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	SnakeProject_Source_SnakeProject_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeProject_Source_SnakeProject_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SnakeProject_Source_SnakeProject_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	SnakeProject_Source_SnakeProject_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeProject_Source_SnakeProject_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SnakeProject_Source_SnakeProject_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SnakeProject_Source_SnakeProject_Interactable_h_10_PROLOG
#define SnakeProject_Source_SnakeProject_Interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeProject_Source_SnakeProject_Interactable_h_13_SPARSE_DATA \
	SnakeProject_Source_SnakeProject_Interactable_h_13_RPC_WRAPPERS \
	SnakeProject_Source_SnakeProject_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeProject_Source_SnakeProject_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeProject_Source_SnakeProject_Interactable_h_13_SPARSE_DATA \
	SnakeProject_Source_SnakeProject_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeProject_Source_SnakeProject_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEPROJECT_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeProject_Source_SnakeProject_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
