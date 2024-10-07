////////////////////////////////////////////////////////////////////
//DeRap: bwa3_headgear\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Fri Jul 15 14:24:37 2022 : 'file' last modified on Thu Jan 01 03:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class BAFMOD_Armor_Fix
	{
		author = "Alegro";
		name = "Alegro";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		skipWhenMissingDependencies = 1;
		requiredAddons[] = {"UK3CB_BAF_Equipment"};
	};
};
class CfgWeapons
{
	class ItemCore;
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo: ItemInfo{};
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		class ItemInfo: ItemInfo{};
	};
	class UK3CB_BAF_V_Osprey_Base: V_PlateCarrier2_rgr
	{
		scope = 0;
		author = "www.3commandobrigade.com";
		DLC = "UK3CB_BAF_Equipment";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply140";
			mass = 80;
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
	class UK3CB_BAF_V_Osprey_Heavy_Base: UK3CB_BAF_V_Osprey_Base
	{
		scope = 0;
		author = "www.3commandobrigade.com";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply180";
		};
	};
	class UK3CB_BAF_V_Osprey_Light_Base: V_PlateCarrier1_rgr
	{
		scope = 0;
		author = "www.3commandobrigade.com";
		DLC = "UK3CB_BAF_Equipment";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply120";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					passThrough = 0.5;
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
	class UK3CB_BAF_V_Osprey: UK3CB_BAF_V_Osprey_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Belt_A: UK3CB_BAF_V_Osprey_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Belt [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_belt_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_Belt.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_Belt.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Holster: UK3CB_BAF_V_Osprey_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Holster [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_holster_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_Holster.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_Holster.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Grenadier_A: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Grenadier (A) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_G_01_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_G.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_G.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Grenadier_B: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Grenadier (B) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_G_02_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_G2.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_G2.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Marksman_A: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Marksman [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_MM_01_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_Marksman.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_Marksman.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Medic_A: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Medic (A) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_M_01_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_Med.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_Med.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Medic_B: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Medic (B) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_M_02_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_Med2.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_Med2.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Medic_C: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Medic (C) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_M_03_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_Med3.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_Med3.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Medic_D: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Medic (D) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_M_04_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_Med4.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_Med4.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_MG_A: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP MG (A) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_MG_01_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_MG.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_MG.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_MG_B: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP MG (B) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_MG_02_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_MG2.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_MG2.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Rifleman_A: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Rifleman (A) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_R_01_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_R.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_R.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Rifleman_B: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Rifleman (B) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_R_02_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_R2.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_R2.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Rifleman_C: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Rifleman (C) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_R_03_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_R3.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_R3.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Rifleman_D: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Rifleman (D) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_R_04_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_R4.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_R4.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Rifleman_E: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Rifleman (E) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_R_05_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_R5.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_R5.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Rifleman_F: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP Rifleman (F) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_R_06_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_R6.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_R6.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_SL_A: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP SL (A) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_SL_01_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_SL.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_SL.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_SL_B: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP SL (B) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_SL_02_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_SL2.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_SL2.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_SL_C: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP SL (C) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_SL_03_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_SL3.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_SL3.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_SL_D: UK3CB_BAF_V_Osprey_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4 MTP SL (D) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_SL_04_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_SL4.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_SL4.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Lite: UK3CB_BAF_V_Osprey_Light_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk4-L MTP [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_osprey_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Osprey_lite.p3d";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\equip_co.paa","uk3cb_baf_equipment\data\gear_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Osprey_lite.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_Mk2_Base: V_PlateCarrier1_rgr
	{
		scope = 0;
		author = "www.3commandobrigade.com";
		DLC = "UK3CB_BAF_Equipment";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_ddpm_co.paa","uk3cb_baf_equipment\vests\data\armour_ddpm_co.paa","uk3cb_baf_equipment\data\equip_d_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3"};
			containerClass = "Supply140";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					passThrough = 0.5;
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
	class UK3CB_BAF_V_Osprey_Mk2_Heavy_Base: UK3CB_BAF_V_Osprey_Mk2_Base
	{
		scope = 0;
		author = "www.3commandobrigade.com";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply180";
			mass = 100;
		};
	};
	class UK3CB_BAF_V_Pilot_A: UK3CB_BAF_V_Osprey_Mk2_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Pilot Vest MTP [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\gear_pilot_vest_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Vest_Pilot_01.p3d";
		hiddenSelectionsTextures[] = {"","uk3cb_baf_equipment\vests\data\armour_mtp_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Vest_Pilot_01.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM1: UK3CB_BAF_V_Osprey_Mk2_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (A) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest1_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey1.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey1.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM2: UK3CB_BAF_V_Osprey_Mk2_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (B) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest2_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey2.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey2.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM3: UK3CB_BAF_V_Osprey_Mk2_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (C) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest3_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey3.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey3.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM4: UK3CB_BAF_V_Osprey_Mk2_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (D) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest4_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey4.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey4.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM5: UK3CB_BAF_V_Osprey_Mk2_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (E) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest5_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey5.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey5.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM6: UK3CB_BAF_V_Osprey_Mk2_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (F) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest6_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey6.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey6.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM7: UK3CB_BAF_V_Osprey_Mk2_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (G) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest7_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey7.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey7.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM8: UK3CB_BAF_V_Osprey_Mk2_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (H) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest8_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey8.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey8.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DDPM9: UK3CB_BAF_V_Osprey_Mk2_Heavy_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DDPM (I) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest9_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Mk2_Osprey9.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Mk2_Osprey9.p3d";
		};
	};
	class UK3CB_BAF_V_Pilot_DDPM: UK3CB_BAF_V_Osprey_Mk2_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Pilot Vest DDPM [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\pilotvest_ddpm_ca.paa";
		model = "uk3cb_baf_equipment\vests\Vest_Pilot_01.p3d";
		hiddenSelectionsTextures[] = {"","uk3cb_baf_equipment\vests\data\armour_ddpm_co.paa","uk3cb_baf_equipment\data\equip_d_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Vest_Pilot_01.p3d";
		};
	};
	class UK3CB_BAF_V_Osprey_DPMW1: UK3CB_BAF_V_Osprey_DDPM1
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (A) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest1_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMW2: UK3CB_BAF_V_Osprey_DDPM2
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (B) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest2_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMW3: UK3CB_BAF_V_Osprey_DDPM3
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (C) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest3_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMW4: UK3CB_BAF_V_Osprey_DDPM4
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (D) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest4_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMW5: UK3CB_BAF_V_Osprey_DDPM5
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (E) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest5_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMW6: UK3CB_BAF_V_Osprey_DDPM6
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (F) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest6_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMW7: UK3CB_BAF_V_Osprey_DDPM7
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (G) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest7_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMW8: UK3CB_BAF_V_Osprey_DDPM8
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (H) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest8_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMW9: UK3CB_BAF_V_Osprey_DDPM9
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Wdl (I) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest9_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Pilot_DPMW: UK3CB_BAF_V_Pilot_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Pilot Vest DPM Wdl [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\pilotvest_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"","uk3cb_baf_equipment\vests\data\armour_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT1: UK3CB_BAF_V_Osprey_DDPM1
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (A) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest1_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT2: UK3CB_BAF_V_Osprey_DDPM2
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (B) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest2_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT3: UK3CB_BAF_V_Osprey_DDPM3
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (C) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest3_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT4: UK3CB_BAF_V_Osprey_DDPM4
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (D) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest4_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT5: UK3CB_BAF_V_Osprey_DDPM5
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (E) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest5_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT6: UK3CB_BAF_V_Osprey_DDPM6
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (F) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest6_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT7: UK3CB_BAF_V_Osprey_DDPM7
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (G) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest7_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT8: UK3CB_BAF_V_Osprey_DDPM8
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (H) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest8_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_DPMT9: UK3CB_BAF_V_Osprey_DDPM9
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 DPM Tmp (I) [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest9_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\data\camo_cs95_dpm_co.paa","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Pilot_DPMT: UK3CB_BAF_V_Pilot_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Pilot Vest DPM Tmp [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\pilotvest_dpm_ca.paa";
		hiddenSelectionsTextures[] = {"","uk3cb_baf_equipment\vests\data\armour_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_Osprey_HiVis: UK3CB_BAF_V_Osprey_Mk2_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 Hi-Vis [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest_hivis_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Mk2_Osprey_HiVis.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\uk3cb_baf_equipment\vests\data\armour_hivis_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\uk3cb_baf_equipment\vests\Mk2_Osprey_HiVis.p3d";
			hiddenSelections[] = {"camo2"};
		};
	};
	class UK3CB_BAF_V_Osprey_Winter: UK3CB_BAF_V_Osprey_HiVis
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Osprey Mk2 Arctic [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\vest_win_ca.paa";
		hiddenSelectionsTextures[] = {"\uk3cb_baf_equipment\vests\data\armour_win_co.paa"};
	};
	class UK3CB_BAF_V_HiVis: Vest_NoCamo_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		DLC = "UK3CB_BAF_Equipment";
		displayName = "Hi-Vis Jacket [BAF]";
		picture = "\UK3CB_BAF_Equipment\vests\data\ui\jacket_hivis_ca.paa";
		model = "\uk3cb_baf_equipment\vests\Vest_HiVis.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\vests\data\hivis_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "uk3cb_baf_equipment\vests\Vest_HiVis.p3d";
			hiddenSelections[] = {"Camo"};
			containerClass = "Supply10";
			mass = 6;
		};
	};
	class UK3CB_BAF_Webbing_Base: Vest_NoCamo_Base
	{
		scope = 0;
		author = "www.3commandobrigade.com";
		DLC = "UK3CB_BAF_Equipment";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply180";
			mass = 10;
		};
	};
	class UK3CB_BAF_V_PLCE_Webbing_DDPM: UK3CB_BAF_Webbing_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing DDPM [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		model = "\UK3CB_BAF_Equipment\webbing\Plce_webbing.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_ddpm_co.paa","uk3cb_baf_equipment\data\gear_ddpm_co.paa","uk3cb_baf_equipment\data\equip_d_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3"};
			uniformModel = "UK3CB_BAF_Equipment\webbing\Plce_webbing.p3d";
		};
		uk3cb_plate_version = "UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM";
	};
	class UK3CB_BAF_V_PLCE_Webbing_MTP: UK3CB_BAF_V_PLCE_Webbing_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing MTP [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
		uk3cb_plate_version = "UK3CB_BAF_V_PLCE_Webbing_Plate_MTP";
	};
	class UK3CB_BAF_V_PLCE_Webbing_DPMW: UK3CB_BAF_V_PLCE_Webbing_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing DPM Wdl [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_dpm_co.paa","uk3cb_baf_equipment\data\gear_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
		uk3cb_plate_version = "UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW";
	};
	class UK3CB_BAF_V_PLCE_Webbing_OLI: UK3CB_BAF_V_PLCE_Webbing_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing Olive [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_co.paa","uk3cb_baf_equipment\data\gear_oli_co.paa","uk3cb_baf_equipment\data\equip_oli_co.paa"};
		uk3cb_plate_version = "UK3CB_BAF_V_PLCE_Webbing_Plate_OLI";
	};
	class UK3CB_BAF_V_PLCE_Webbing_DPMT: UK3CB_BAF_V_PLCE_Webbing_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing DPM Tmp [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_cs95_dpm_co.paa","uk3cb_baf_equipment\data\gear_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
		uk3cb_plate_version = "UK3CB_BAF_V_PLCE_Webbing_Plate_DPMT";
	};
	class UK3CB_BAF_V_PLCE_Webbing_Winter: UK3CB_BAF_V_PLCE_Webbing_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing Arctic [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_win_co.paa","uk3cb_baf_equipment\data\gear_win_co.paa","uk3cb_baf_equipment\data\equip_win_co.paa"};
		uk3cb_plate_version = "UK3CB_BAF_V_PLCE_Webbing_Plate_Winter";
	};
	class UK3CB_BAF_Webbing_Plate_Base: V_PlateCarrier1_rgr
	{
		scope = 0;
		author = "www.3commandobrigade.com";
		DLC = "UK3CB_BAF_Equipment";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply180";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					passThrough = 0.5;
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
	class UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM: UK3CB_BAF_Webbing_Plate_Base
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing (Plate) DDPM [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		model = "\UK3CB_BAF_Equipment\webbing\Plce_webbing.p3d";
		hiddenSelections[] = {"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_ddpm_co.paa","uk3cb_baf_equipment\data\gear_ddpm_co.paa","uk3cb_baf_equipment\data\equip_d_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2","camo3"};
			uniformModel = "UK3CB_BAF_Equipment\webbing\Plce_webbing.p3d";
		};
	};
	class UK3CB_BAF_V_PLCE_Webbing_Plate_MTP: UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing (Plate) MTP [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_co.paa","uk3cb_baf_equipment\data\gear_co.paa","uk3cb_baf_equipment\data\equip_mtp_co.paa"};
	};
	class UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW: UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing (Plate) DPM Wdl [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_dpm_co.paa","uk3cb_baf_equipment\data\gear_dpm_co.paa","uk3cb_baf_equipment\data\equip_dpm_co.paa"};
	};
	class UK3CB_BAF_V_PLCE_Webbing_Plate_OLI: UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing (Plate) Olive [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_co.paa","uk3cb_baf_equipment\data\gear_oli_co.paa","uk3cb_baf_equipment\data\equip_oli_co.paa"};
	};
	class UK3CB_BAF_V_PLCE_Webbing_Plate_DPMT: UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing (Plate) DPM Tmp [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_cs95_dpm_co.paa","uk3cb_baf_equipment\data\gear_cs95_dpm_co.paa","uk3cb_baf_equipment\data\equip_cs95_dpm_co.paa"};
	};
	class UK3CB_BAF_V_PLCE_Webbing_Plate_Winter: UK3CB_BAF_V_PLCE_Webbing_Plate_DDPM
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "PLCE Webbing (Plate) Arctic [BAF]";
		picture = "\UK3CB_BAF_Equipment\webbing\data\ui\plce_webbing_ca.paa";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\webbing\data\soldier_win_co.paa","uk3cb_baf_equipment\data\gear_win_co.paa","uk3cb_baf_equipment\data\equip_win_co.paa"};
	};
	class Vest_Camo_Base;
	class V_RebreatherB: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class UK3CB_BAF_V_RebreatherB: V_RebreatherB
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		DLC = "UK3CB_BAF_Equipment";
		displayName = "Rebreather [BAF]";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply40";
		};
	};
	class UK3CB_BAF_V_Rebreather_PlateB: UK3CB_BAF_V_RebreatherB
	{
		scope = 2;
		author = "www.3commandobrigade.com";
		displayName = "Rebreather (Plate) [BAF]";
		class ItemInfo: ItemInfo
		{
			mass = 120;
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
};