////////////////////////////////////////////////////////////////////
//DeRap: bwa3_headgear\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Fri Jul 15 14:24:37 2022 : 'file' last modified on Thu Jan 01 03:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BWMOD_Armor_Fix
	{
		author = "Alegro";
		name = "Alegro";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		requiredAddons[] = {"bwa3_common","bwa3_headgear","bwa3_vests"};
	};
};
class CfgVehicles
{
	class Headgear_Base_F;
	class BWA3_Item_OpsCore: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_OpsCoreName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_OpsCore
			{
				name = "BWA3_OpsCore";
				count = 1;
			};
		};
	};
	class BWA3_Item_OpsCore_Camera: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_OpsCoreCameraName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_OpsCore_Camera
			{
				name = "BWA3_OpsCore_Camera";
				count = 1;
			};
		};
	};
	class BWA3_Item_OpsCore_Fleck: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_OpsCoreFleckName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_OpsCore_Fleck
			{
				name = "BWA3_OpsCore_Fleck";
				count = 1;
			};
		};
	};
	class BWA3_Item_OpsCore_Fleck_Patch: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_OpsCoreFleckPatchName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_OpsCore_Fleck_Patch
			{
				name = "BWA3_OpsCore_Fleck_Patch";
				count = 1;
			};
		};
	};
	class BWA3_Item_OpsCore_Fleck_Camera: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_OpsCoreFleckCameraName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_OpsCore_Fleck_Camera
			{
				name = "BWA3_OpsCore_Fleck_Camera";
				count = 1;
			};
		};
	};
	class BWA3_Item_OpsCore_Tropen: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_OpsCoreTropenName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_OpsCore_Tropen
			{
				name = "BWA3_OpsCore_Tropen";
				count = 1;
			};
		};
	};
	class BWA3_Item_OpsCore_Tropen_Patch: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_OpsCoreTropenPatchName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_OpsCore_Tropen_Patch
			{
				name = "BWA3_OpsCore_Tropen_Patch";
				count = 1;
			};
		};
	};
	class BWA3_Item_OpsCore_Tropen_Camera: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_OpsCoreTropenCameraName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_OpsCore_Tropen_Camera
			{
				name = "BWA3_OpsCore_Tropen_Camera";
				count = 1;
			};
		};
	};
	class BWA3_Item_CrewmanKSK: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_CrewmanKSKName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_CrewmanKSK
			{
				name = "BWA3_CrewmanKSK";
				count = 1;
			};
		};
	};
	class BWA3_Item_CrewmanKSK_Headset: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_CrewmanKSKHeadsetName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_CrewmanKSK_Headset
			{
				name = "BWA3_CrewmanKSK_Headset";
				count = 1;
			};
		};
	};
	class BWA3_Item_CrewmanKSK_Fleck: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_CrewmanKSKFleckName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_CrewmanKSK_Fleck
			{
				name = "BWA3_CrewmanKSK_Fleck";
				count = 1;
			};
		};
	};
	class BWA3_Item_CrewmanKSK_Fleck_Headset: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_CrewmanKSKHeadsetFleckName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_CrewmanKSK_Fleck_Headset
			{
				name = "BWA3_CrewmanKSK_Fleck_Headset";
				count = 1;
			};
		};
	};
	class BWA3_Item_CrewmanKSK_Tropen: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_CrewmanKSKTropenName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_CrewmanKSK_Tropen
			{
				name = "BWA3_CrewmanKSK_Tropen";
				count = 1;
			};
		};
	};
	class BWA3_Item_CrewmanKSK_Tropen_Headset: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_CrewmanKSKHeadsetTropenName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_CrewmanKSK_Tropen_Headset
			{
				name = "BWA3_CrewmanKSK_Tropen_Headset";
				count = 1;
			};
		};
	};
	class BWA3_Item_M92_Fleck: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_M92FleckName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_M92_Fleck
			{
				name = "BWA3_M92_Fleck";
				count = 1;
			};
		};
	};
	class BWA3_Item_M92_Tropen: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_M92TropenName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_M92_Tropen
			{
				name = "BWA3_M92_Tropen";
				count = 1;
			};
		};
	};
	class BWA3_Item_M92_Multi: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_M92MultiName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_M92_Multi
			{
				name = "BWA3_M92_Multi";
				count = 1;
			};
		};
	};
	class BWA3_Item_Knighthelm: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_TigerHelmetName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_BWA3_Knighthelm
			{
				name = "BWA3_Knighthelm";
				count = 1;
			};
		};
	};
	class BWA3_Item_Booniehat_Fleck: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BooniehatFleckName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Booniehat_Fleck
			{
				name = "BWA3_Booniehat_Fleck";
				count = 1;
			};
		};
	};
	class BWA3_Item_Booniehat_Tropen: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BooniehatTropenName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Booniehat_Tropen
			{
				name = "BWA3_Booniehat_Tropen";
				count = 1;
			};
		};
	};
	class BWA3_Item_Booniehat_Multi: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BooniehatMultiName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Booniehat_Multi
			{
				name = "BWA3_Booniehat_Multi";
				count = 1;
			};
		};
	};
	class BWA3_Item_Beret_PzGren: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BeretPzGrenName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Beret_PzGren
			{
				name = "BWA3_Beret_PzGren";
				count = 1;
			};
		};
	};
	class BWA3_Item_Beret_Pz: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BeretPzName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Beret_Pz
			{
				name = "BWA3_Beret_Pz";
				count = 1;
			};
		};
	};
	class BWA3_Item_Beret_PzAufkl: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BeretPzAufklName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Beret_PzAufkl
			{
				name = "BWA3_Beret_PzAufkl";
				count = 1;
			};
		};
	};
	class BWA3_Item_Beret_Jaeger: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BeretJaegerName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Beret_Jaeger
			{
				name = "BWA3_Beret_Jaeger";
				count = 1;
			};
		};
	};
	class BWA3_Item_Beret_Falli: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BeretFalliName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Beret_Falli
			{
				name = "BWA3_Beret_Falli";
				count = 1;
			};
		};
	};
	class BWA3_Item_Beret_HFlieger: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BeretHFliegerName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Beret_HFlieger
			{
				name = "BWA3_Beret_HFlieger";
				count = 1;
			};
		};
	};
	class BWA3_Item_Beret_Wach_green: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BeretWachGreenName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Beret_Wach_green
			{
				name = "BWA3_Beret_Wach_green";
				count = 1;
			};
		};
	};
	class BWA3_Item_Beret_Wach_blue: Headgear_Base_F
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BWA3_BeretWachBlueName";
		vehicleClass = "ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_BWA3_Beret_Wach_blue
			{
				name = "BWA3_Beret_Wach_blue";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class BWA3_OpsCore: ItemCore
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_BWA3_OpsCoreName";
		picture = "\bwa3_headgear\ui\bwa3_opscore_schwarz_x_ca.paa";
		model = "\bwa3_headgear\bwa3_opscore.p3d";
		descriptionShort = "$STR_A3_SP_AL_III";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_opscore_schwarz_co.paa","#(argb,8,8,3)color(0,0,0,0,CA)","#(argb,8,8,3)color(0,0,0,0,CA)"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\bwa3_headgear\bwa3_opscore.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class BWA3_OpsCore_Camera: BWA3_OpsCore
	{
		author = "$STR_BWA3_Author";
		BWA3_HelmetCamera = 1;
		displayName = "$STR_BWA3_OpsCoreCameraName";
		picture = "\bwa3_headgear\ui\bwa3_opscore_camera_schwarz_x_ca.paa";
		model = "\bwa3_headgear\bwa3_opscore_camera.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_headgear\bwa3_opscore_camera.p3d";
		};
	};
	class BWA3_OpsCore_Fleck: BWA3_OpsCore
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_OpsCoreFleckName";
		picture = "\bwa3_headgear\ui\bwa3_opscore_fleck_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_opscore_fleck_co.paa","#(argb,8,8,3)color(0,0,0,0,CA)","#(argb,8,8,3)color(0,0,0,0,CA)"};
	};
	class BWA3_OpsCore_Fleck_Patch: BWA3_OpsCore_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_OpsCoreFleckPatchName";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_opscore_fleck_co.paa","\bwa3_headgear\data\bwa3_opscore_patch_shield_co.paa","#(argb,8,8,3)color(0,0,0,0,CA)"};
	};
	class BWA3_OpsCore_Fleck_Camera: BWA3_OpsCore_Fleck
	{
		author = "$STR_BWA3_Author";
		BWA3_HelmetCamera = 1;
		displayName = "$STR_BWA3_OpsCoreFleckCameraName";
		picture = "\bwa3_headgear\ui\bwa3_opscore_camera_fleck_x_ca.paa";
		model = "\bwa3_headgear\bwa3_opscore_camera.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_headgear\bwa3_opscore_camera.p3d";
		};
	};
	class BWA3_OpsCore_Tropen: BWA3_OpsCore
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_OpsCoreTropenName";
		picture = "\bwa3_headgear\ui\bwa3_opscore_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_opscore_tropen_co.paa","#(argb,8,8,3)color(0,0,0,0,CA)","#(argb,8,8,3)color(0,0,0,0,CA)"};
	};
	class BWA3_OpsCore_Tropen_Patch: BWA3_OpsCore_Tropen
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_OpsCoreTropenPatchName";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_opscore_tropen_co.paa","#(argb,8,8,3)color(0,0,0,0,CA)","\bwa3_headgear\data\bwa3_opscore_patch_uvdl_co.paa"};
	};
	class BWA3_OpsCore_Tropen_Camera: BWA3_OpsCore_Tropen
	{
		author = "$STR_BWA3_Author";
		BWA3_HelmetCamera = 1;
		displayName = "$STR_BWA3_OpsCoreTropenCameraName";
		picture = "\bwa3_headgear\ui\bwa3_opscore_camera_tropen_x_ca.paa";
		model = "\bwa3_headgear\bwa3_opscore_camera.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_headgear\bwa3_opscore_camera.p3d";
		};
	};
	class BWA3_CrewmanKSK: ItemCore
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_BWA3_CrewmanKSKName";
		picture = "\bwa3_headgear\ui\bwa3_crewman_schwarz_x_ca.paa";
		model = "\bwa3_headgear\bwa3_crewman.p3d";
		descriptionShort = "$STR_A3_SP_AL_II";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_crewman_schwarz_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\bwa3_headgear\bwa3_crewman.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class BWA3_CrewmanKSK_Fleck: BWA3_CrewmanKSK
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_CrewmanKSKFleckName";
		picture = "\bwa3_headgear\ui\bwa3_crewman_fleck_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_crewman_fleck_co.paa"};
	};
	class BWA3_CrewmanKSK_Tropen: BWA3_CrewmanKSK
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_CrewmanKSKTropenName";
		picture = "\bwa3_headgear\ui\bwa3_crewman_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_crewman_tropen_co.paa"};
	};
	class BWA3_CrewmanKSK_Headset: BWA3_CrewmanKSK
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_CrewmanKSKHeadsetName";
		picture = "\bwa3_headgear\ui\bwa3_crewman_schwarz_headset_x_ca.paa";
		model = "\bwa3_headgear\bwa3_crewman_headset.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_headgear\bwa3_crewman_headset.p3d";
		};
	};
	class BWA3_CrewmanKSK_Fleck_Headset: BWA3_CrewmanKSK_Headset
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_CrewmanKSKHeadsetFleckName";
		picture = "\bwa3_headgear\ui\bwa3_crewman_fleck_headset_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_crewman_fleck_co.paa"};
	};
	class BWA3_CrewmanKSK_Tropen_Headset: BWA3_CrewmanKSK_Headset
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_CrewmanKSKHeadsetTropenName";
		picture = "\bwa3_headgear\ui\bwa3_crewman_tropen_headset_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_crewman_tropen_co.paa"};
	};
	class BWA3_Knighthelm: ItemCore
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_BWA3_TigerHelmetName";
		picture = "\bwa3_headgear\ui\bwa3_tigerhelm_x_ca.paa";
		model = "\bwa3_headgear\bwa3_tigerhelm.p3d";
		descriptionShort = "$STR_A3_SP_AL_II";
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\bwa3_headgear\bwa3_tigerhelm.p3d";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 3;
					passThrough = 0.5;
				};
			};
		};
		subItems[] = {"Integrated_NVG_F"};
	};
	class BWA3_M92_Fleck: ItemCore
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_BWA3_M92FleckName";
		picture = "\bwa3_headgear\ui\bwa3_m92_fleck_x_ca.paa";
		model = "\bwa3_headgear\bwa3_m92.p3d";
		descriptionShort = "$STR_A3_SP_AL_II";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_m92_fleck_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\bwa3_headgear\bwa3_m92.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class BWA3_M92_Tropen: BWA3_M92_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_M92TropenName";
		picture = "\bwa3_headgear\ui\bwa3_m92_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_m92_tropen_co.paa"};
	};
	class BWA3_M92_Multi: BWA3_M92_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_M92MultiName";
		picture = "\bwa3_headgear\ui\bwa3_m92_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_m92_multi_co.paa"};
	};
	class HelmetBase;
	class H_Booniehat_khk: HelmetBase
	{
		class ItemInfo;
	};
	class BWA3_Booniehat_Fleck: H_Booniehat_khk
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BooniehatFleckName";
		picture = "\bwa3_headgear\ui\bwa3_booniehat_fleck_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_booniehat_fleck_co.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] = {3,1};
		};
	};
	class BWA3_Booniehat_Tropen: H_Booniehat_khk
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BooniehatTropenName";
		picture = "\bwa3_headgear\ui\bwa3_booniehat_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_booniehat_tropen_co.paa"};
	};
	class BWA3_Booniehat_Multi: H_Booniehat_khk
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BooniehatMultiName";
		picture = "\bwa3_headgear\ui\bwa3_booniehat_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_booniehat_multi_co.paa"};
	};
	class BWA3_Beret_PzGren: ItemCore
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_BWA3_BeretPzGrenName";
		picture = "\bwa3_headgear\ui\bwa3_beret_gruen_x_ca.paa";
		model = "\bwa3_headgear\bwa3_beret.p3d";
		descriptionShort = "$STR_A3_SP_NoArmor";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_beret_pzgren_co.paa"};
		class ItemInfo: HeadgearItem
		{
			allowedslots[] = {801,901,701,605};
			mass = 6;
			uniformModel = "\bwa3_headgear\bwa3_beret.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class BWA3_Beret_Pz: BWA3_Beret_PzGren
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BeretPzName";
		picture = "\bwa3_headgear\ui\bwa3_beret_schwarz_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_beret_pz_co.paa"};
	};
	class BWA3_Beret_PzAufkl: BWA3_Beret_PzGren
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BeretPzAufklName";
		picture = "\bwa3_headgear\ui\bwa3_beret_schwarz_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_beret_pzaufkl_co.paa"};
	};
	class BWA3_Beret_Jaeger: BWA3_Beret_PzGren
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BeretJaegerName";
		picture = "\bwa3_headgear\ui\bwa3_beret_gruen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_beret_jaeger_co.paa"};
	};
	class BWA3_Beret_Falli: BWA3_Beret_PzGren
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BeretFalliName";
		picture = "\bwa3_headgear\ui\bwa3_beret_rot_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_beret_falli_co.paa"};
	};
	class BWA3_Beret_HFlieger: BWA3_Beret_PzGren
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BeretHFliegerName";
		picture = "\bwa3_headgear\ui\bwa3_beret_rot_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_beret_hflieger_co.paa"};
	};
	class BWA3_Beret_Wach_green: BWA3_Beret_PzGren
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BeretWachGreenName";
		picture = "\bwa3_headgear\ui\bwa3_beret_gruen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_beret_wach_gr_co.paa"};
	};
	class BWA3_Beret_Wach_blue: BWA3_Beret_PzGren
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_BeretWachBlueName";
		picture = "\bwa3_headgear\ui\bwa3_beret_blau_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_headgear\data\bwa3_beret_wach_bl_co.paa"};
	};
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class BWA3_Vest_Fleck: V_PlateCarrier2_rgr
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		displayName = "$STR_BWA3_VestFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_fleck_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest.p3d";
			containerclass = "Supply140";
			mass = 80;
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_Tropen: BWA3_Vest_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_tropen_co.paa"};
	};
	class BWA3_Vest_Multi: BWA3_Vest_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_multi_co.paa"};
	};
	class BWA3_Vest_Rifleman_Fleck: BWA3_Vest_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestRiflemanFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_rifleman1_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_rifleman1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_rifleman1.p3d";
		};
	};
	class BWA3_Vest_Rifleman_Tropen: BWA3_Vest_Rifleman_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestRiflemanTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_rifleman1_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_tropen_co.paa"};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_Rifleman_Multi: BWA3_Vest_Rifleman_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestRiflemanMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_rifleman1_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_multi_co.paa"};
	};
	class BWA3_Vest_MachineGunner_Fleck: BWA3_Vest_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMachineGunnerFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_machinegunner_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_machinegunner.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_machinegunner.p3d";
		};
	};
	class BWA3_Vest_MachineGunner_Tropen: BWA3_Vest_MachineGunner_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMachineGunnerTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_machinegunner_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_tropen_co.paa"};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_MachineGunner_Multi: BWA3_Vest_MachineGunner_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMachineGunnerMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_machinegunner_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_multi_co.paa"};
	};
	class BWA3_Vest_Grenadier_Fleck: BWA3_Vest_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestGrenadierFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_grenadier_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_grenadier.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_grenadier.p3d";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_Grenadier_Tropen: BWA3_Vest_Grenadier_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestGrenadierTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_grenadier_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_tropen_co.paa"};
	};
	class BWA3_Vest_Grenadier_Multi: BWA3_Vest_Grenadier_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestGrenadierMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_grenadier_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_multi_co.paa"};
	};
	class BWA3_Vest_Medic_Fleck: BWA3_Vest_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMedicFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_medic_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_medic.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_medic.p3d";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_Medic_Tropen: BWA3_Vest_Medic_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMedicTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_medic_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_tropen_co.paa"};
	};
	class BWA3_Vest_Medic_Multi: BWA3_Vest_Medic_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMedicMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_medic_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_multi_co.paa"};
	};
	class BWA3_Vest_Marksman_Fleck: BWA3_Vest_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMarksmanFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_marksman_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_marksman.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_marksman.p3d";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_Marksman_Tropen: BWA3_Vest_Marksman_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMarksmanTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_marksman_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_tropen_co.paa"};
	};
	class BWA3_Vest_Marksman_Multi: BWA3_Vest_Marksman_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestMarksmanMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_marksman_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_multi_co.paa"};
	};
	class BWA3_Vest_Leader_Fleck: BWA3_Vest_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestLeaderFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_leader_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_leader.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_leader.p3d";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_Leader_Tropen: BWA3_Vest_Leader_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestLeaderTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_leader_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_tropen_co.paa"};
	};
	class BWA3_Vest_Leader_Multi: BWA3_Vest_Leader_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestLeaderMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_leader_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_multi_co.paa"};
	};
	class BWA3_Vest_JPC_Rifleman_Fleck: V_PlateCarrier2_rgr
	{
		author = "$STR_BWA3_Author";
		scope = 2;
		displayName = "$STR_BWA3_VestJPCRiflemanFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_jpc_rifleman.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"Camo","Camo1","Camo2","Insignia"};
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_jpc_fleck_co.paa","\bwa3_vests\data\bwa3_vest_jpc_pouches_fleck_co.paa","\bwa3_vests\data\bwa3_vest_jpc_ca.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_jpc_rifleman.p3d";
			containerclass = "Supply140";
			mass = 70;
			hiddenSelections[] = {"Camo","Camo1","Camo2","Insignia"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_JPC_Rifleman_Tropen: BWA3_Vest_JPC_Rifleman_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestJPCRiflemanTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_tropen_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_jpc_tropen_co.paa","\bwa3_vests\data\bwa3_vest_jpc_pouches_tropen_co.paa","\bwa3_vests\data\bwa3_vest_jpc_ca.paa"};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_JPC_Rifleman_Multi: BWA3_Vest_JPC_Rifleman_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestJPCRiflemanMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_multi_x_ca.paa";
		hiddenSelectionsTextures[] = {"\bwa3_vests\data\bwa3_vest_jpc_multi_co.paa","\bwa3_vests\data\bwa3_vest_jpc_pouches_fleck_co.paa","\bwa3_vests\data\bwa3_vest_jpc_ca.paa"};
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_JPC_Leader_Fleck: BWA3_Vest_JPC_Rifleman_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestJPCLeaderFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_jpc_leader.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_jpc_leader.p3d";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 4;
					PassThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class BWA3_Vest_JPC_Leader_Tropen: BWA3_Vest_JPC_Rifleman_Tropen
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestJPCLeaderTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_tropen_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_jpc_leader.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_jpc_leader.p3d";
		};
	};
	class BWA3_Vest_JPC_Leader_Multi: BWA3_Vest_JPC_Rifleman_Multi
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestJPCLeaderMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_multi_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_jpc_leader.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_jpc_leader.p3d";
		};
	};
	class BWA3_Vest_JPC_Radioman_Fleck: BWA3_Vest_JPC_Rifleman_Fleck
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestJPCRadiomanFleckName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_fleck_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_jpc_radioman.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_jpc_radioman.p3d";
		};
	};
	class BWA3_Vest_JPC_Radioman_Tropen: BWA3_Vest_JPC_Rifleman_Tropen
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestJPCRadiomanTropenName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_tropen_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_jpc_radioman.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_jpc_radioman.p3d";
		};
	};
	class BWA3_Vest_JPC_Radioman_Multi: BWA3_Vest_JPC_Rifleman_Multi
	{
		author = "$STR_BWA3_Author";
		displayName = "$STR_BWA3_VestJPCRadiomanMultiName";
		picture = "\bwa3_vests\ui\bwa3_vest_jpc_multi_x_ca.paa";
		model = "\bwa3_vests\bwa3_vest_jpc_radioman.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\bwa3_vests\bwa3_vest_jpc_radioman.p3d";
		};
	};
};
