// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMeshMerger/Public/SkeletalMeshMergerBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshMergerBPLibrary() {}
// Cross Module References
	SKELETALMESHMERGER_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams();
	UPackage* Z_Construct_UPackage__Script_SkeletalMeshMerger();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	SKELETALMESHMERGER_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping();
	SKELETALMESHMERGER_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP();
	SKELETALMESHMERGER_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	SKELETALMESHMERGER_API UClass* Z_Construct_UClass_UMeshMergeFunctionLibrary_NoRegister();
	SKELETALMESHMERGER_API UClass* Z_Construct_UClass_UMeshMergeFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SKELETALMESHMERGER_API UFunction* Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes();
// End Cross Module References
class UScriptStruct* FSkeletalMeshMergeParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKELETALMESHMERGER_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, Z_Construct_UPackage__Script_SkeletalMeshMerger(), TEXT("SkeletalMeshMergeParams"), sizeof(FSkeletalMeshMergeParams), Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshMergeParams(FSkeletalMeshMergeParams::StaticStruct, TEXT("/Script/SkeletalMeshMerger"), TEXT("SkeletalMeshMergeParams"), false, nullptr, nullptr);
static struct FScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkeletalMeshMergeParams
{
	FScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkeletalMeshMergeParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshMergeParams")),new UScriptStruct::TCppStructOps<FSkeletalMeshMergeParams>);
	}
} ScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkeletalMeshMergeParams;
	struct Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkeletonBefore_MetaData[];
#endif
		static void NewProp_bSkeletonBefore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkeletonBefore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsCpuAccess_MetaData[];
#endif
		static void NewProp_bNeedsCpuAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsCpuAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StripTopLODS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StripTopLODS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshesToMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshesToMerge;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshesToMerge_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVTransformsPerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVTransformsPerMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVTransformsPerMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSectionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshSectionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshSectionMappings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Struct containing all parameters used to perform a Skeletal Mesh merge." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshMergeParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Skeleton that will be used for the merged mesh.\nLeave empty if the generated skeleton is OK." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Object, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData[] = {
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Update skeleton before merge. Otherwise, update after.\nSkeleton must also be provided." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_SetBit(void* Obj)
	{
		((FSkeletalMeshMergeParams*)Obj)->bSkeletonBefore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkeletonBefore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshMergeParams), &Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData[] = {
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Whether or not the resulting mesh needs to be accessed by the CPU for any reason (e.g. for spawning particle effects)." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_SetBit(void* Obj)
	{
		((FSkeletalMeshMergeParams*)Obj)->bNeedsCpuAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bNeedsCpuAccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshMergeParams), &Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData[] = {
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "The number of high LODs to remove from input meshes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS = { UE4CodeGen_Private::EPropertyClass::Int, "StripTopLODS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, StripTopLODS), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData[] = {
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "The list of skeletal meshes to merge." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge = { UE4CodeGen_Private::EPropertyClass::Array, "MeshesToMerge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, MeshesToMerge), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MeshesToMerge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData[] = {
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "An optional array to transform the UVs in each mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh = { UE4CodeGen_Private::EPropertyClass::Array, "UVTransformsPerMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, UVTransformsPerMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVTransformsPerMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData[] = {
		{ "Category", "SkeletalMeshMergeParams" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "An optional array to map sections from the source meshes to merged section entries" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings = { UE4CodeGen_Private::EPropertyClass::Array, "MeshSectionMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, MeshSectionMappings), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshSectionMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
		nullptr,
		&NewStructOps,
		"SkeletalMeshMergeParams",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSkeletalMeshMergeParams),
		alignof(FSkeletalMeshMergeParams),
		Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SkeletalMeshMerger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshMergeParams"), sizeof(FSkeletalMeshMergeParams), Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_CRC() { return 524881003U; }
class UScriptStruct* FSkelMeshMergeUVTransformMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKELETALMESHMERGER_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping, Z_Construct_UPackage__Script_SkeletalMeshMerger(), TEXT("SkelMeshMergeUVTransformMapping"), sizeof(FSkelMeshMergeUVTransformMapping), Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshMergeUVTransformMapping(FSkelMeshMergeUVTransformMapping::StaticStruct, TEXT("/Script/SkeletalMeshMerger"), TEXT("SkelMeshMergeUVTransformMapping"), false, nullptr, nullptr);
static struct FScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeUVTransformMapping
{
	FScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeUVTransformMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshMergeUVTransformMapping")),new UScriptStruct::TCppStructOps<FSkelMeshMergeUVTransformMapping>);
	}
} ScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeUVTransformMapping;
	struct Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVTransformsPerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVTransformsPerMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVTransformsPerMesh_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Blueprint equivalent of FSkelMeshMergeUVTransforms\nInfo to map all the sections about how to transform their UVs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshMergeUVTransformMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_MetaData[] = {
		{ "Category", "Mesh Merge Params" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "For each UV channel on each mesh, how the UVS should be transformed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh = { UE4CodeGen_Private::EPropertyClass::Array, "UVTransformsPerMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkelMeshMergeUVTransformMapping, UVTransformsPerMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVTransformsPerMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::NewProp_UVTransformsPerMesh_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
		nullptr,
		&NewStructOps,
		"SkelMeshMergeUVTransformMapping",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSkelMeshMergeUVTransformMapping),
		alignof(FSkelMeshMergeUVTransformMapping),
		Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SkeletalMeshMerger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshMergeUVTransformMapping"), sizeof(FSkelMeshMergeUVTransformMapping), Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping_CRC() { return 4163551777U; }
class UScriptStruct* FSkelMeshMergeUVTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKELETALMESHMERGER_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform, Z_Construct_UPackage__Script_SkeletalMeshMerger(), TEXT("SkelMeshMergeUVTransform"), sizeof(FSkelMeshMergeUVTransform), Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshMergeUVTransform(FSkelMeshMergeUVTransform::StaticStruct, TEXT("/Script/SkeletalMeshMerger"), TEXT("SkelMeshMergeUVTransform"), false, nullptr, nullptr);
static struct FScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeUVTransform
{
	FScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeUVTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshMergeUVTransform")),new UScriptStruct::TCppStructOps<FSkelMeshMergeUVTransform>);
	}
} ScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeUVTransform;
	struct Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVTransforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Used to wrap a set of UV Transforms for one mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshMergeUVTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_MetaData[] = {
		{ "Category", "Mesh Merge Params" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "A list of how UVs should be transformed on a given mesh, where index represents a specific UV channel." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "UVTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkelMeshMergeUVTransform, UVTransforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::NewProp_UVTransforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
		nullptr,
		&NewStructOps,
		"SkelMeshMergeUVTransform",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSkelMeshMergeUVTransform),
		alignof(FSkelMeshMergeUVTransform),
		Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SkeletalMeshMerger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshMergeUVTransform"), sizeof(FSkelMeshMergeUVTransform), Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeUVTransform_CRC() { return 2308238658U; }
class UScriptStruct* FSkelMeshMergeSectionMapping_BP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SKELETALMESHMERGER_API uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP, Z_Construct_UPackage__Script_SkeletalMeshMerger(), TEXT("SkelMeshMergeSectionMapping_BP"), sizeof(FSkelMeshMergeSectionMapping_BP), Get_Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkelMeshMergeSectionMapping_BP(FSkelMeshMergeSectionMapping_BP::StaticStruct, TEXT("/Script/SkeletalMeshMerger"), TEXT("SkelMeshMergeSectionMapping_BP"), false, nullptr, nullptr);
static struct FScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeSectionMapping_BP
{
	FScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeSectionMapping_BP()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkelMeshMergeSectionMapping_BP")),new UScriptStruct::TCppStructOps<FSkelMeshMergeSectionMapping_BP>);
	}
} ScriptStruct_SkeletalMeshMerger_StaticRegisterNativesFSkelMeshMergeSectionMapping_BP;
	struct Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Blueprint equivalent of FSkeleMeshMergeSectionMapping\nInfo to map all the sections from a single source skeletal mesh to\na final section entry in the merged skeletal mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshMergeSectionMapping_BP>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::NewProp_SectionIDs_MetaData[] = {
		{ "Category", "Mesh Merge Params" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Indices to final section entries of the merged skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::NewProp_SectionIDs = { UE4CodeGen_Private::EPropertyClass::Array, "SectionIDs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSkelMeshMergeSectionMapping_BP, SectionIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::NewProp_SectionIDs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::NewProp_SectionIDs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::NewProp_SectionIDs_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIDs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::NewProp_SectionIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::NewProp_SectionIDs_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
		nullptr,
		&NewStructOps,
		"SkelMeshMergeSectionMapping_BP",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSkelMeshMergeSectionMapping_BP),
		alignof(FSkelMeshMergeSectionMapping_BP),
		Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SkeletalMeshMerger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkelMeshMergeSectionMapping_BP"), sizeof(FSkelMeshMergeSectionMapping_BP), Get_Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping_BP_CRC() { return 860065607U; }
	void UMeshMergeFunctionLibrary::StaticRegisterNativesUMeshMergeFunctionLibrary()
	{
		UClass* Class = UMeshMergeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MergeMeshes", &UMeshMergeFunctionLibrary::execMergeMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics
	{
		struct MeshMergeFunctionLibrary_eventMergeMeshes_Parms
		{
			FSkeletalMeshMergeParams Params;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshMergeFunctionLibrary_eventMergeMeshes_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::NewProp_Params = { UE4CodeGen_Private::EPropertyClass::Struct, "Params", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MeshMergeFunctionLibrary_eventMergeMeshes_Parms, Params), Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, METADATA_PARAMS(Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::NewProp_Params_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Merge" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
		{ "ToolTip", "Merges the given meshes into a single mesh.\n@return The merged mesh (will be invalid if the merge failed)." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshMergeFunctionLibrary, "MergeMeshes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MeshMergeFunctionLibrary_eventMergeMeshes_Parms), Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshMergeFunctionLibrary_NoRegister()
	{
		return UMeshMergeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshMerger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshMergeFunctionLibrary_MergeMeshes, "MergeMeshes" }, // 1958303798
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkeletalMeshMergerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SkeletalMeshMergerBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshMergeFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics::ClassParams = {
		&UMeshMergeFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshMergeFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshMergeFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshMergeFunctionLibrary, 4043657386);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshMergeFunctionLibrary(Z_Construct_UClass_UMeshMergeFunctionLibrary, &UMeshMergeFunctionLibrary::StaticClass, TEXT("/Script/SkeletalMeshMerger"), TEXT("UMeshMergeFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshMergeFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
