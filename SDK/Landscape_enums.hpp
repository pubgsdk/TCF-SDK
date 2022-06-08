#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2
};


// Enum Landscape.EWeightmapRTType
enum class EWeightmapRTType : uint8_t
{
	EWeightmapRTType__WeightmapRT_Scratch_RGBA = 0,
	EWeightmapRTType__WeightmapRT_Scratch1 = 1,
	EWeightmapRTType__WeightmapRT_Scratch2 = 2,
	EWeightmapRTType__WeightmapRT_Scratch3 = 3,
	EWeightmapRTType__WeightmapRT_Mip0 = 4,
	EWeightmapRTType__WeightmapRT_Mip1 = 5,
	EWeightmapRTType__WeightmapRT_Mip2 = 6,
	EWeightmapRTType__WeightmapRT_Mip3 = 7,
	EWeightmapRTType__WeightmapRT_Mip4 = 8,
	EWeightmapRTType__WeightmapRT_Mip5 = 9,
	EWeightmapRTType__WeightmapRT_Mip6 = 10,
	EWeightmapRTType__WeightmapRT_Mip7 = 11,
	EWeightmapRTType__WeightmapRT_Count = 12,
	EWeightmapRTType__WeightmapRT_MAX = 13
};


// Enum Landscape.EHeightmapRTType
enum class EHeightmapRTType : uint8_t
{
	EHeightmapRTType__HeightmapRT_CombinedAtlas = 0,
	EHeightmapRTType__HeightmapRT_CombinedNonAtlas = 1,
	EHeightmapRTType__HeightmapRT_Scratch1 = 2,
	EHeightmapRTType__HeightmapRT_Scratch2 = 3,
	EHeightmapRTType__HeightmapRT_Scratch3 = 4,
	EHeightmapRTType__HeightmapRT_Mip1 = 5,
	EHeightmapRTType__HeightmapRT_Mip2 = 6,
	EHeightmapRTType__HeightmapRT_Mip3 = 7,
	EHeightmapRTType__HeightmapRT_Mip4 = 8,
	EHeightmapRTType__HeightmapRT_Mip5 = 9,
	EHeightmapRTType__HeightmapRT_Mip6 = 10,
	EHeightmapRTType__HeightmapRT_Mip7 = 11,
	EHeightmapRTType__HeightmapRT_Count = 12,
	EHeightmapRTType__HeightmapRT_MAX = 13
};


// Enum Landscape.ERTDrawingType
enum class ERTDrawingType : uint8_t
{
	ERTDrawingType__RTAtlas        = 0,
	ERTDrawingType__RTAtlasToNonAtlas = 1,
	ERTDrawingType__RTNonAtlasToAtlas = 2,
	ERTDrawingType__RTNonAtlas     = 3,
	ERTDrawingType__RTMips         = 4,
	ERTDrawingType__ERTDrawingType_MAX = 5
};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                = 0,
	Clear_Heightmap                = 1,
	Clear_All                      = 2,
	Clear_MAX                      = 3
};


// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};


// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red = 0,
	ESplineModulationColorMask__Green = 1,
	ESplineModulationColorMask__Blue = 2,
	ESplineModulationColorMask__Alpha = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX = 4
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
