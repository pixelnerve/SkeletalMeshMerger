// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSkeletalMeshMergeParams;
class USkeletalMesh;
#ifdef SKELETALMESHMERGER_SkeletalMeshMergerBPLibrary_generated_h
#error "SkeletalMeshMergerBPLibrary.generated.h already included, missing '#pragma once' in SkeletalMeshMergerBPLibrary.h"
#endif
#define SKELETALMESHMERGER_SkeletalMeshMergerBPLibrary_generated_h

#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics; \
	SKELETALMESHMERGER_API static class UScriptStruct* StaticStruct();


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics; \
	SKELETALMESHMERGER_API static class UScriptStruct* StaticStruct();


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics; \
	SKELETALMESHMERGER_API static class UScriptStruct* StaticStruct();


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics; \
	SKELETALMESHMERGER_API static class UScriptStruct* StaticStruct();


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMergeMeshes) \
	{ \
		P_GET_STRUCT_REF(FSkeletalMeshMergeParams,Z_Param_Out_Params); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMeshMergeFunctionLibrary::MergeMeshes(Z_Param_Out_Params); \
		P_NATIVE_END; \
	}


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMergeMeshes) \
	{ \
		P_GET_STRUCT_REF(FSkeletalMeshMergeParams,Z_Param_Out_Params); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UMeshMergeFunctionLibrary::MergeMeshes(Z_Param_Out_Params); \
		P_NATIVE_END; \
	}


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshMergeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMeshMergeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshMerger"), NO_API) \
	DECLARE_SERIALIZER(UMeshMergeFunctionLibrary)


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUMeshMergeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMeshMergeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMeshMerger"), NO_API) \
	DECLARE_SERIALIZER(UMeshMergeFunctionLibrary)


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshMergeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshMergeFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshMergeFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshMergeFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshMergeFunctionLibrary(UMeshMergeFunctionLibrary&&); \
	NO_API UMeshMergeFunctionLibrary(const UMeshMergeFunctionLibrary&); \
public:


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshMergeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshMergeFunctionLibrary(UMeshMergeFunctionLibrary&&); \
	NO_API UMeshMergeFunctionLibrary(const UMeshMergeFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshMergeFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshMergeFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshMergeFunctionLibrary)


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_PRIVATE_PROPERTY_OFFSET
#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_95_PROLOG
#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_PRIVATE_PROPERTY_OFFSET \
	GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_RPC_WRAPPERS \
	GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_INCLASS \
	GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_PRIVATE_PROPERTY_OFFSET \
	GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_INCLASS_NO_PURE_DECLS \
	GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GetAllMapNames_Plugins_SkeletalMeshMerger_Source_SkeletalMeshMerger_Public_SkeletalMeshMergerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
