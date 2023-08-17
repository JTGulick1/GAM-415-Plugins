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
struct FVector;
struct FHitResult;
#ifdef MYPROJECT_MyProjectProjectile_generated_h
#error "MyProjectProjectile.generated.h already included, missing '#pragma once' in MyProjectProjectile.h"
#endif
#define MYPROJECT_MyProjectProjectile_generated_h

#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_SPARSE_DATA
#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectProjectile(AMyProjectProjectile&&); \
	NO_API AMyProjectProjectile(const AMyProjectProjectile&); \
public:


#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectProjectile(AMyProjectProjectile&&); \
	NO_API AMyProjectProjectile(const AMyProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectProjectile)


#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMyProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyProjectProjectile, ProjectileMovement); }


#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_13_PROLOG
#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_SPARSE_DATA \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_RPC_WRAPPERS \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_INCLASS \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_SPARSE_DATA \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_INCLASS_NO_PURE_DECLS \
	SplatterBallGulick_Source_MyProject_MyProjectProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SplatterBallGulick_Source_MyProject_MyProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
