////////////////////////////////////////////////////////////////////
//DeRap: RHSAFRF_ArmorNerf\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 20 23:32:13 2022 : 'file' last modified on Thu Jan 01 03:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class RHSAFRF_ArmorNerf
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_troops"};
	};
	author = "aaaaaaaaaaaaa";
};
class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class rhs_6b23: Vest_Camo_Base
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_6B23_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		descriptionShort = "Armor Level 4";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23";
			containerClass = "Supply80";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
	class rhs_6b23_crew: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_crew_ca.paa";
		displayName = "$STR_RHS_6B23CREW_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh46";
			containerClass = "Supply80";
			mass = 70;
		};
	};
	class rhs_6b23_engineer: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_engineer_ca.paa";
		displayName = "$STR_RHS_6B23ENGINEER_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_engineer";
			containerClass = "Supply100";
			mass = 65;
		};
	};
	class rhs_6b23_medic: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_medic_ca.paa";
		displayName = "$STR_RHS_6B23MEDIC_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_medic";
			containerClass = "Supply130";
			mass = 80;
		};
	};
	class rhs_6b23_rifleman: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_rifleman_ca.paa";
		displayName = "$STR_RHS_6B23RIFLEMAN_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_rifleman";
			containerClass = "Supply110";
			mass = 65;
		};
	};
	class rhs_6b23_crewofficer: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_crewofficer_ca.paa";
		displayName = "$STR_RHS_6B23CREWOFFICER_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_crewofficer";
			containerClass = "Supply90";
			mass = 65;
		};
	};
	class rhs_6b23_sniper: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_sniper_ca.paa";
		displayName = "$STR_RHS_6B23SNIPER_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_sniper";
			containerClass = "Supply100";
			mass = 65;
		};
	};
	class rhs_6b23_6sh92: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh92_ca.paa";
		displayName = "$STR_RHS_6B236SH92_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92";
			containerClass = "Supply120";
			mass = 75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
	class rhs_6b23_6sh92_vog: rhs_6b23_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh92_vog_ca.paa";
		displayName = "$STR_RHS_6B236SH92VOG_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog";
			containerClass = "Supply130";
			mass = 80;
		};
	};
	class rhs_6b23_6sh92_vog_headset: rhs_6b23_6sh92_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh92_vog_headset_ca.paa";
		displayName = "$STR_RHS_6B236SH92VOGHEADSET_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_headset";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_headset";
		};
	};
	class rhs_6b23_6sh92_headset: rhs_6b23_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh92_headset_ca.paa";
		displayName = "$STR_RHS_6B236SH92HEADSET_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset";
		};
	};
	class rhs_6b23_6sh92_headset_mapcase: rhs_6b23_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh92_headset_mapcase_ca.paa";
		displayName = "$STR_RHS_6B236SH92HEADSETMAPCASE_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_mapcase";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_mapcase";
			containerClass = "Supply130";
			mass = 80;
		};
	};
	class rhs_6b23_6sh92_radio: rhs_6b23_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh92_radio_ca.paa";
		displayName = "$STR_RHS_6B236SH92RADIO_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio";
		};
	};
	class rhs_6sh46: Vest_Camo_Base
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh46_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_6SH46_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh46";
		hiddenSelectionsTextures[] = {};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh46";
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
			};
		};
	};
	class rhs_vest_commander: Vest_Camo_Base
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_vest_commander_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_MAPCASEANDHOLSTER_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_commander";
		hiddenSelectionsTextures[] = {};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_commander";
			containerClass = "Supply80";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
			};
		};
	};
	class rhs_vest_pistol_holster: rhs_vest_commander
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_vest_pistol_holster_ca.paa";
		displayName = "$STR_RHS_HOLSTER_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_pistol_holster";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_pistol_holster";
			containerClass = "Supply40";
			mass = 5;
		};
	};
	class rhs_6b23_digi: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_crew: rhs_6b23_crew
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_crew_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMERCREW_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_engineer: rhs_6b23_engineer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_engineer_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMERENGINEER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_medic: rhs_6b23_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_medic_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMERMEDIC_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_rifleman: rhs_6b23_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_rifleman_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMERRIFLEMAN_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_crewofficer: rhs_6b23_crewofficer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_crewofficer_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMERCREWOFFICER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_sniper: rhs_6b23_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_sniper_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMERSNIPER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92: rhs_6b23_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER6SH92_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_vog: rhs_6b23_6sh92_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_vog_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER6SH92VOG_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_vog_headset_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER6SH92VOGHEADSET_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_headset: rhs_6b23_6sh92_headset
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_headset_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER6SH92HEADSET_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_headset_mapcase_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER6SH92HEADSETMAPCASE_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_radio: rhs_6b23_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_radio_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER6SH92RADIO_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_Spetsnaz: rhs_6b23_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_Spetsnaz_ca.paa";
		displayName = "$STR_RHS_6B23EMR6SH92RADIOSPNZ_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio_spetsnaz";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_radio_spetsnaz";
			containerClass = "Supply120";
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz: rhs_6b23_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz_ca.paa";
		displayName = "$STR_RHS_6B23EMR6SH92VOGRADIOSPNZ_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_radio_spetsnaz";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_radio_spetsnaz";
			containerClass = "Supply140";
			mass = 75;
		};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_headset_spetsnaz: rhs_6b23_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_headset_spetsnaz_ca.paa";
		displayName = "$STR_RHS_6B23EMR6SH92HEADSETSPNZ_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_spetsnaz";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset_spetsnaz";
		};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_spetsnaz2: rhs_6b23_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_spetsnaz2_ca.paa";
		displayName = "$STR_RHS_6B23EMR6SH92SPNZ_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_spetsnaz";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_spetsnaz";
		};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_digi_6sh92_Vog_Spetsnaz: rhs_6b23_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_6sh92_Vog_Spetsnaz_ca.paa";
		displayName = "$STR_RHS_6B23EMR6SH92VOGSPNZ_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_spetsnaz";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_vog_spetsnaz";
			containerClass = "Supply140";
			mass = 75;
		};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b23_ML: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_ca.paa";
		displayName = "$STR_RHS_6B23ML_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_crew: rhs_6b23_crew
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_crew_ca.paa";
		displayName = "$STR_RHS_6B23MLCREW_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_engineer: rhs_6b23_engineer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_engineer_ca.paa";
		displayName = "$STR_RHS_6B23MLENGINEER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_medic: rhs_6b23_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_medic_ca.paa";
		displayName = "$STR_RHS_6B23MLMEDIC_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_rifleman: rhs_6b23_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_rifleman_ca.paa";
		displayName = "$STR_RHS_6B23MLRIFLEMAN_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_crewofficer: rhs_6b23_crewofficer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_crewofficer_ca.paa";
		displayName = "$STR_RHS_6B23MLCREWOFFICER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_sniper: rhs_6b23_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_sniper_ca.paa";
		displayName = "$STR_RHS_6B23MLSNIPER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_6sh92: rhs_6b23_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_6sh92_ca.paa";
		displayName = "$STR_RHS_6B23ML6SH92_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_6sh92_vog: rhs_6b23_6sh92_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_6sh92_vog_ca.paa";
		displayName = "$STR_RHS_6B23ML6SH92VOG_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_6sh92_vog_headset_ca.paa";
		displayName = "$STR_RHS_6B23ML6SH92VOGHEADSET_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_6sh92_headset: rhs_6b23_6sh92_headset
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_6sh92_headset_ca.paa";
		displayName = "$STR_RHS_6B23ML6SH92HEADSET_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_6sh92_headset_mapcase_ca.paa";
		displayName = "$STR_RHS_6B23ML6SH92HEADSETMAPCASE_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_6b23_ML_6sh92_radio: rhs_6b23_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_6sh92_radio_ca.paa";
		displayName = "$STR_RHS_6B23ML6SH92RADIO_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa"};
	};
	class rhs_vydra_3m: Vest_Camo_Base
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_vydra_3m_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_VYDRA3M_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_vydra_3m";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1"};
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_vydra_3m";
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
			};
		};
	};
	class rhs_6b23_vydra_3m: rhs_6b23_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_vydra_3m_ca.paa";
		displayName = "$STR_RHS_6B23VYDRA3M_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa","rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
			containerClass = "Supply110";
			mass = 75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
	class rhs_6b23_digi_vydra_3m: rhs_6b23_vydra_3m
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_digi_vydra_3m_ca.paa";
		displayName = "$STR_RHS_6B23EMRVYDRA3M_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa","rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"};
	};
	class rhs_6b23_ML_vydra_3m: rhs_6b23_vydra_3m
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_ML_vydra_3m_ca.paa";
		displayName = "$STR_RHS_6B23MLVYDRA3M_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_vydra_3m";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_ML_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_ML_co.paa","rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"};
	};
	class rhs_6b23_6sh116: rhs_6b23_digi
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh116_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER6SH116_NAME";
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116";
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
			containerClass = "Supply140";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_co.paa"};
	};
	class rhs_6b23_6sh116_flora: rhs_6b23_6sh116
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh116_flora_ca.paa";
		displayName = "$STR_RHS_6B23FLORA6SH116_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_flora_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_flora_co.paa"};
	};
	class rhs_6b23_6sh116_od: rhs_6b23_6sh116
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh116_od_ca.paa";
		displayName = "$STR_RHS_6B23OD6SH116_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_od_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_od_co.paa"};
	};
	class rhs_6b23_6sh116_vog: rhs_6b23_6sh116
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh116_vog_ca.paa";
		displayName = "$STR_RHS_6B23EMRSUMMER6SH116VOG_NAME";
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
			mass = 85;
			containerClass = "Supply160";
		};
	};
	class rhs_6b23_6sh116_vog_flora: rhs_6b23_6sh116_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh116_vog_flora_ca.paa";
		displayName = "$STR_RHS_6B23FLORA6SH116VOG_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_flora_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_flora_co.paa"};
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
		};
	};
	class rhs_6b23_6sh116_vog_od: rhs_6b23_6sh116_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b23_6sh116_vog_od_ca.paa";
		displayName = "$STR_RHS_6B23OD6SH116VOG_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_od_co.paa","rhsafrf\addons\rhs_infantry2\data\rhs_6sh116_gear1_od_co.paa"};
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b23_6sh116_vog";
		};
	};
	class rhs_6b13: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_ca.paa";
		displayName = "$STR_RHS_6B13_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_vsr_co.paa","rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"};
		descriptionShort = "Armor Level 6";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";
			containerClass = "Supply80";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
	class rhs_6b13_crewofficer: rhs_6b13
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_crewofficer_ca.paa";
		displayName = "$STR_RHS_6B13CREWOFFICER_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_crewofficer";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_crewofficer";
			containerClass = "Supply90";
			mass = 85;
		};
	};
	class rhs_6b13_6sh92: rhs_6b13
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_6sh92_ca.paa";
		displayName = "$STR_RHS_6B136SH92_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";
		descriptionShort = "Armor Level 6";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";
			containerClass = "Supply110";
			mass = 95;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
	class rhs_6b13_6sh92_vog: rhs_6b13_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_6sh92_vog_ca.paa";
		displayName = "$STR_RHS_6B136SH92VOG_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
			containerClass = "Supply130";
			mass = 100;
		};
	};
	class rhs_6b13_6sh92_headset_mapcase: rhs_6b13_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_6sh92_headset_mapcase_ca.paa";
		displayName = "$STR_RHS_6B136SH92HEADSETMAPCASE_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";
			containerClass = "Supply120";
			mass = 100;
		};
	};
	class rhs_6b13_6sh92_radio: rhs_6b13_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_6sh92_radio_ca.paa";
		displayName = "$STR_RHS_6B136SH92RADIO_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
		};
	};
	class rhs_6b13_EMR: rhs_6b13
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_EMR_ca.paa";
		displayName = "$STR_RHS_6B13EMRSUMMER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b13_EMR_6sh92: rhs_6b13_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_EMR_6sh92_ca.paa";
		displayName = "$STR_RHS_6B13EMR6SH92_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b13_EMR_6sh92_vog: rhs_6b13_6sh92_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_EMR_6sh92_vog_ca.paa";
		displayName = "$STR_RHS_6B13EMR6SH92VOG_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b13_EMR_6sh92_headset_mapcase: rhs_6b13_6sh92_headset_mapcase
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_EMR_6sh92_headset_mapcase_ca.paa";
		displayName = "$STR_RHS_6B13EMR6SH92HEADSETMAPCASE_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b13_EMR_6sh92_radio: rhs_6b13_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_EMR_6sh92_radio_ca.paa";
		displayName = "$STR_RHS_6B13EMR6SH92RADIO_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_emr_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6b13_Flora: rhs_6b13
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_ca.paa";
		displayName = "$STR_RHS_6B13FLORA_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
	};
	class rhs_6b13_Flora_crewofficer: rhs_6b13_crewofficer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_crewofficer_ca.paa";
		displayName = "$STR_RHS_6B13FLORACREWOFFICER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
	};
	class rhs_6b13_Flora_6sh92: rhs_6b13_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_ca.paa";
		displayName = "$STR_RHS_6B13FLORA6SH92_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
	};
	class rhs_6b13_Flora_6sh92_vog: rhs_6b13_6sh92_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_vog_ca.paa";
		displayName = "$STR_RHS_6B13FLORA6SH92VOG_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
	};
	class rhs_6b13_Flora_6sh92_headset_mapcase: rhs_6b13_6sh92_headset_mapcase
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_headset_mapcase_ca.paa";
		displayName = "$STR_RHS_6B13FLORA6SH92HEADSETMAPCASE_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
	};
	class rhs_6b13_Flora_6sh92_radio: rhs_6b13_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_radio_ca.paa";
		displayName = "$STR_RHS_6B13FLORA6SH92RADIO_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
	};
	class rhs_6b43: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b43_ca.paa";
		displayName = "$STR_RHS_6B43_NAME";
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b43_m";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6B43_co.paa"};
		descriptionShort = "Armor Level 6";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b43_m";
			containerClass = "Supply80";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
	class rhs_6sh92: Vest_Camo_Base
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_6SH92_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92";
			containerClass = "Supply100";
			mass = 15;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
			};
		};
	};
	class rhs_6sh92_vog: rhs_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_vog_ca.paa";
		displayName = "$STR_RHS_6SH92VOG_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog";
			containerClass = "Supply120";
			mass = 20;
		};
	};
	class rhs_6sh92_vog_headset: rhs_6sh92_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_vog_headset_ca.paa";
		displayName = "$STR_RHS_6SH92VOGHEADSET_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog_headset";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_vog_headset";
		};
	};
	class rhs_6sh92_headset: rhs_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_headset_ca.paa";
		displayName = "$STR_RHS_6SH92HEADSET_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_headset";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_headset";
		};
	};
	class rhs_6sh92_radio: rhs_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_radio_ca.paa";
		displayName = "$STR_RHS_6SH92RADIO_NAME";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_radio";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6sh92_radio";
		};
	};
	class rhs_6sh92_digi: rhs_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_digi_ca.paa";
		displayName = "$STR_RHS_6SH92EMRSUMMER_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6sh92_digi_vog: rhs_6sh92_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_digi_vog_ca.paa";
		displayName = "$STR_RHS_6SH92EMRSUMMERVOG_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6sh92_digi_vog_headset: rhs_6sh92_vog_headset
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_digi_vog_headset_ca.paa";
		displayName = "$STR_RHS_6SH92EMRSUMMERVOGHEADSET_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6sh92_digi_headset: rhs_6sh92_headset
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_digi_headset_ca.paa";
		displayName = "$STR_RHS_6SH92EMRSUMMERHEADSET_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6sh92_digi_radio: rhs_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_digi_radio_ca.paa";
		displayName = "$STR_RHS_6SH92EMRSUMMERRADIO_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_digi_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_digi_co.paa"};
	};
	class rhs_6sh92_vsr: rhs_6sh92
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_vsr_ca.paa";
		displayName = "$STR_RHS_6SH92VSR_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa","rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"};
	};
	class rhs_6sh92_vsr_vog: rhs_6sh92_vog
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_vsr_vog_ca.paa";
		displayName = "$STR_RHS_6SH92VSRVOG_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa","rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"};
	};
	class rhs_6sh92_vsr_vog_headset: rhs_6sh92_vog_headset
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_vsr_vog_headset_ca.paa";
		displayName = "$STR_RHS_6SH92VSRVOGHEADSET_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa","rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"};
	};
	class rhs_6sh92_vsr_headset: rhs_6sh92_headset
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_vsr_headset_ca.paa";
		displayName = "$STR_RHS_6SH92VSRHEADSET_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa","rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"};
	};
	class rhs_6sh92_vsr_radio: rhs_6sh92_radio
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6sh92_vsr_radio_ca.paa";
		displayName = "$STR_RHS_6SH92VSRRADIO_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b23_olive_co.paa","rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"};
	};
	class rhs_6b5: rhs_6b23
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_ca.paa";
		displayName = "$STR_RHS_6B5_OLIVE_NAME";
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_rifleman";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_co.paa"};
		descriptionShort = "Armor Level 5";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_rifleman";
			containerClass = "Supply90";
			mass = 132;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
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
					armor = 14;
					passThrough = 0.5;
				};
			};
		};
	};
	class rhs_6b5_officer: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_officer_ca.paa";
		displayName = "$STR_RHS_6B5_OFFICER_OLIVE_NAME";
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_officer";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_officer";
			containerClass = "Supply120";
			mass = 142;
		};
	};
	class rhs_6b5_medic: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_medic_ca.paa";
		displayName = "$STR_RHS_6B5_MEDIC_OLIVE_NAME";
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_medic";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_medic";
			containerClass = "Supply140";
			mass = 152;
		};
	};
	class rhs_6b5_sniper: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_sniper_ca.paa";
		displayName = "$STR_RHS_6B5_SNIPER_OLIVE_NAME";
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_sniper";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_sniper";
			containerClass = "Supply110";
			mass = 137;
		};
	};
	class rhs_6b5_rifleman: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_rifleman_ca.paa";
		displayName = "$STR_RHS_6B5_RIFLEMAN_OLIVE_NAME";
		model = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_6sh46_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry2\gear\vests\rhs_6b5_6sh46_rifleman";
			containerClass = "Supply130";
			mass = 147;
		};
	};
	class rhs_6b5_khaki: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_khaki_ca.paa";
		Scope = 2;
		displayName = "$STR_RHS_6B5_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"};
	};
	class rhs_6b5_officer_khaki: rhs_6b5_officer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_officer_khaki_ca.paa";
		displayName = "$STR_RHS_6B5_OFFICER_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"};
	};
	class rhs_6b5_medic_khaki: rhs_6b5_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_medic_khaki_ca.paa";
		displayName = "$STR_RHS_6B5_MEDIC_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"};
	};
	class rhs_6b5_sniper_khaki: rhs_6b5_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_sniper_khaki_ca.paa";
		displayName = "$STR_RHS_6B5_SNIPER_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"};
	};
	class rhs_6b5_rifleman_khaki: rhs_6b5_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_rifleman_khaki_ca.paa";
		displayName = "$STR_RHS_6B5_RIFLEMAN_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_khaki_co.paa"};
	};
	class rhs_6b5_vsr: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_vsr_ca.paa";
		Scope = 2;
		displayName = "$STR_RHS_6B5_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"};
	};
	class rhs_6b5_officer_vsr: rhs_6b5_officer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_officer_vsr_ca.paa";
		displayName = "$STR_RHS_6B5_OFFICER_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"};
	};
	class rhs_6b5_medic_vsr: rhs_6b5_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_medic_vsr_ca.paa";
		displayName = "$STR_RHS_6B5_MEDIC_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"};
	};
	class rhs_6b5_sniper_vsr: rhs_6b5_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_sniper_vsr_ca.paa";
		displayName = "$STR_RHS_6B5_SNIPER_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"};
	};
	class rhs_6b5_rifleman_vsr: rhs_6b5_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_rifleman_vsr_ca.paa";
		displayName = "$STR_RHS_6B5_RIFLEMAN_VSR_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_vsr_co.paa"};
	};
	class rhs_6b5_ttsko: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_ttsko_ca.paa";
		Scope = 2;
		displayName = "$STR_RHS_6B5_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_officer_ttsko: rhs_6b5_officer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_officer_ttsko_ca.paa";
		displayName = "$STR_RHS_6B5_OFFICER_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_medic_ttsko: rhs_6b5_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_medic_ttsko_ca.paa";
		displayName = "$STR_RHS_6B5_MEDIC_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_sniper_ttsko: rhs_6b5_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_sniper_ttsko_ca.paa";
		displayName = "$STR_RHS_6B5_SNIPER_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_rifleman_ttsko: rhs_6b5_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_rifleman_ttsko_ca.paa";
		displayName = "$STR_RHS_6B5_RIFLEMAN_TTsKO_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_ttsko_co.paa"};
	};
	class rhs_6b5_spetsodezhda: rhs_6b5
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_spetsodezhda_ca.paa";
		Scope = 2;
		displayName = "$STR_RHS_6B5_BG_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"};
	};
	class rhs_6b5_officer_spetsodezhda: rhs_6b5_officer
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_officer_spetsodezhda_ca.paa";
		displayName = "$STR_RHS_6B5_OFFICER_BG_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"};
	};
	class rhs_6b5_medic_spetsodezhda: rhs_6b5_medic
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_medic_spetsodezhda_ca.paa";
		displayName = "$STR_RHS_6B5_MEDIC_BG_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"};
	};
	class rhs_6b5_sniper_spetsodezhda: rhs_6b5_sniper
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_sniper_spetsodezhda_ca.paa";
		displayName = "$STR_RHS_6B5_SNIPER_BG_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"};
	};
	class rhs_6b5_rifleman_spetsodezhda: rhs_6b5_rifleman
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b5_rifleman_spetsodezhda_ca.paa";
		displayName = "$STR_RHS_6B5_RIFLEMAN_BG_NAME";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b5_bg_co.paa"};
	};
	class rhs_6b45: rhs_6b43
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_6B45_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_desert_6b45";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa"};
		descriptionShort = "Armor Level 6";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_desert_6b45";
			containerClass = "Supply80";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 11;
					PassThrough = 0.5;
					simulation = "RHS_Gost_3";
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.5;
					simulation = "RHS_Gost_6";
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.5;
					simulation = "RHS_Gost_6";
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.5;
					simulation = "RHS_Gost_6";
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
					simulation = "RHS_Gost_6";
				};
			};
		};
	};
	class rhs_6b45_desert: rhs_6b45
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_desert_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B45_DES_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_desert_6b45";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_desert_co.paa"};
	};
	class rhs_6b45_grn: rhs_6b45
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_grn_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B45_VOG_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_VOG";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_VOG";
			containerClass = "Supply160";
			mass = 95;
		};
	};
	class rhs_6b45_holster: rhs_6b45
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_holster_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B45_HOLSTER_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_holster";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_holster";
			containerClass = "Supply90";
			mass = 85;
		};
	};
	class rhs_6b45_light: rhs_6b45
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_light_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B45_LIGHT_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_low";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_low";
			containerClass = "Supply100";
			mass = 85;
		};
	};
	class rhs_6b45_mg: rhs_6b45
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_mg_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B45_MG_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_PK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_PK";
			containerClass = "Supply160";
			mass = 95;
		};
	};
	class rhs_6b45_off: rhs_6b45
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_off_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B45_OFF_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_off";
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\azart_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_off";
			containerClass = "Supply120";
			mass = 90;
		};
	};
	class rhs_6b45_rifleman: rhs_6b45
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_rifleman_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B45_RIFLE1_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_var";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_light_var";
			containerClass = "Supply120";
			mass = 90;
		};
	};
	class rhs_6b45_rifleman_2: rhs_6b45
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b45_rifleman_2_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B45_RIFLE2_NAME";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_shovel";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b45_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_117_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\pouchs_118_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b45_new_shovel";
			containerClass = "Supply120";
			mass = 90;
		};
	};
	class rhs_chicom: Vest_Camo_Base
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_chicom_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_CHICOM_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_chicom";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\chicom_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_chicom";
			containerClass = "Supply130";
			mass = 10;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 5;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
			};
		};
	};
	class rhs_chicom_khk: rhs_chicom
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_chicom_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_CHICOM_KHK_NAME";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\chicom_tan_co.paa"};
	};
	class rhs_gear_OFF: rhs_chicom
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_gear_OFF_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "Officer Gear";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_gear_OFF";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_gear_OFF";
			containerClass = "Supply90";
			mass = 10;
		};
	};
	class rhs_lifchik: rhs_chicom
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_lifchik_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_LIFCHIK1_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\lichifka_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka";
			containerClass = "Supply130";
			mass = 15;
		};
	};
	class rhs_lifchik_light: rhs_lifchik
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_lifchik_light_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_LIFCHIK2_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_light";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_light";
		};
	};
	class rhs_lifchik_NCO: rhs_lifchik
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_lifchik_NCO_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_LIFCHIK_OFF_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_NCO";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\lichifka_co.paa","rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_NCO";
			containerClass = "Supply130";
		};
	};
	class rhs_lifchik_vog: rhs_lifchik
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_lifchik_vog_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_LIFCHIK_VOG_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_vog";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\lichifka_co.paa","rhsafrf\addons\rhs_infantry3\data\vog_pouchs_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_lichifka_vog";
			containerClass = "Supply160";
		};
	};
	class rhs_belt_sks: rhs_chicom
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_sks_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "Belt Equiment (SKS)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_SKS_pouchs";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_SKS_pouchs";
			containerClass = "Supply100";
			mass = 10;
		};
	};
	class rhs_belt_svd: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_svd_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Belt Equipment (SVD)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_SVD_pouchs";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_SVD_pouchs";
		};
	};
	class rhs_belt_AK: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_AK_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Belt Equipment (Rifleman)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK";
			containerClass = "Supply120";
		};
	};
	class rhs_belt_AK_back: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_AK_back_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Belt Equipment (Rifleman/Alt)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_back";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_back";
			containerClass = "Supply120";
		};
	};
	class rhs_belt_AK_GL: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_AK_GL_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Belt Equipment (Grenadier)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_GL";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa","rhsafrf\addons\rhs_infantry3\data\vog_pouchs_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_GL";
			containerClass = "Supply130";
		};
	};
	class rhs_belt_AK4: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_AK4_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Belt Equipment (6Sh46)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4";
		};
	};
	class rhs_belt_AK4_back: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_AK4_back_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Belt Equipment (6Sh46/Alt)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_back";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_back";
		};
	};
	class rhs_belt_holster: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_holster_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Belt Equipment (Holster)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_holster";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_holster";
			containerClass = "Supply60";
			mass = 5;
		};
	};
	class rhs_belt_RPK: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_RPK_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Belt Equipment (Auto Rifleman)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_RPK";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_RPK";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class rhs_suspender_SKS: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_suspender_SKS_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Suspender Equipment (SKS)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_suspenders_SKS_pouchs";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_suspenders_SKS_pouchs";
			containerClass = "Supply100";
			mass = 10;
		};
	};
	class rhs_suspender_AK: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_suspender_AK_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Suspender Equipment (Rifleman)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_suspenders";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa","rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK_suspenders";
			containerClass = "Supply130";
			mass = 10;
		};
	};
	class rhs_suspender_AK4: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_suspender_AK4_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Suspender Equipment (Rifleman/Light)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_suspenders";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa","rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_suspenders";
			containerClass = "Supply130";
			mass = 10;
		};
	};
	class rhs_suspender_AK8_chestrig: rhs_belt_sks
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_suspender_AK8_chestrig_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "Suspender Equipment (AK Chestrig)";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK8_suspenders";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa","rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK8_suspenders";
			containerClass = "Supply150";
			mass = 20;
		};
	};
	class rhs_6b2: Vest_Camo_Base
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b2_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_6B2_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa"};
		descriptionShort = "Armor Level 1";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2";
			containerClass = "Supply80";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 10;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
					simulation = "RHS_Gost_2";
				};
			};
		};
	};
	class rhs_6b2_AK: rhs_6b2
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b2_AK_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B2_6SH46_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_AK";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa","rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		descriptionShort = "Armor Level 1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_AK";
			containerClass = "Supply110";
			mass = 45;
		};
	};
	class rhs_6b2_chicom: rhs_6b2_AK
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b2_chicom_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B2_CHICOM_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_chicom";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa","rhsafrf\addons\rhs_infantry3\data\chicom_tan_co.paa"};
		descriptionShort = "Armor Level 1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_chicom";
			containerClass = "Supply120";
			mass = 50;
		};
	};
	class rhs_6b2_lifchik: rhs_6b2_AK
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b2_lifchik_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B2_LIFCHIK_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_lichifka";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa","rhsafrf\addons\rhs_infantry3\data\lichifka_co.paa"};
		descriptionShort = "Armor Level 1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_lichifka";
			containerClass = "Supply140";
			mass = 50;
		};
	};
	class rhs_6b2_holster: rhs_6b2_AK
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b2_holster_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B2_HOLSTER_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_holster";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa","rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"};
		descriptionShort = "Armor Level 1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_holster";
			containerClass = "Supply90";
			mass = 42;
		};
	};
	class rhs_6b2_RPK: rhs_6b2_AK
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b2_RPK_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B2_RPK_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_RPK";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa","rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		descriptionShort = "Armor Level 1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_RPK";
			containerClass = "Supply140";
			mass = 50;
		};
	};
	class rhs_6b2_SVD: rhs_6b2_AK
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b2_SVD_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B2_SNIPER_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_SVD";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b2_co.paa","rhsafrf\addons\rhs_infantry3\data\suspenders_co.paa"};
		descriptionShort = "Armor Level 1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b2_SVD";
			containerClass = "Supply110";
			mass = 45;
		};
	};
	class rhs_6b3: rhs_6b2
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_ca.paa";
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_6B3_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa"};
		descriptionShort = "Armor Level 3";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3";
			containerClass = "Supply100";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 12;
					PassThrough = 0.5;
					simulation = "RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 12;
					PassThrough = 0.5;
					simulation = "RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 12;
					PassThrough = 0.5;
					simulation = "RHS_Gost_4";
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.5;
					simulation = "RHS_Gost_4";
				};
			};
		};
	};
	class rhs_6b3_AK: rhs_6b3
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_AK_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B3_RIFLE1_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa","rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK";
			containerClass = "Supply130";
			mass = 65;
		};
	};
	class rhs_6b3_AK_2: rhs_6b3_AK
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_AK_2_ca.paa";
		displayName = "$STR_RHS_6B3_RIFLE2_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK1";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK1";
		};
	};
	class rhs_6b3_AK_3: rhs_6b3_AK
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_AK_3_ca.paa";
		displayName = "$STR_RHS_6B3_RIFLE3_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK2";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_AK2";
		};
	};
	class rhs_6b3_holster: rhs_6b3
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_holster_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B3_HOLSTER_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_holster";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa","rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_holster";
			containerClass = "Supply120";
			mass = 55;
		};
	};
	class rhs_6b3_off: rhs_6b3
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_off_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B3_OFFICER_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_off";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa","rhsafrf\addons\rhs_infantry3\data\off_light_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_off";
			containerClass = "Supply130";
			mass = 55;
		};
	};
	class rhs_6b3_R148: rhs_6b3_AK
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_R148_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B3_R148_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_R_148";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa","rhsafrf\addons\rhs_infantry3\data\r148_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_R_148";
			containerClass = "Supply130";
		};
	};
	class rhs_6b3_RPK: rhs_6b3
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_RPK_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B3_RPK_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_RPK";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa","rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_RPK";
			containerClass = "Supply150";
			mass = 70;
		};
	};
	class rhs_6b3_VOG: rhs_6b3
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_VOG_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B3_VOG1_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_VOG";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\6b3_co.paa","rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa","rhsafrf\addons\rhs_infantry3\data\vog_pouchs_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_VOG";
			containerClass = "Supply150";
			mass = 70;
		};
	};
	class rhs_6b3_VOG_2: rhs_6b3_VOG
	{
		author = "$STR_RHS_AUTHOR_FULL";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b3_VOG_2_ca.paa";
		dlc = "RHS_AFRF";
		displayName = "$STR_RHS_6B3_VOG2_NAME";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_VOG_neck";
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_6b3_VOG_neck";
		};
	};		
};

