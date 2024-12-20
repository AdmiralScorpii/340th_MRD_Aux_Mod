#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Tactec
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class cfgVehicles
{
	class Vest_Base_F;
	class Vest_V_PlateCarrier_Kerry;
	class tactecBase_V: Vest_V_PlateCarrier_Kerry
	{
		author = "Sc0t29 & chazbotic";
		displayName = "Tactec 5.45 [MC]";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		scope = 0;
		scopeCurator = 0;
		class TransportItems
		{
			class tactec
			{
				count = 1;
				name = "tactec";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactec_V: tactecBase_V
	{
		displayName = "Tactec 5.45 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec
			{
				count = 1;
				name = "tactec";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecFG_V: tactecBase_V
	{
		displayName = "Tactec 5.45 [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecFG
			{
				count = 1;
				name = "tactecFG";
			};
		};
	};
	class tactecAU_V: tactecBase_V
	{
		displayName = "Tactec 5.45 [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecAU
			{
				count = 1;
				name = "tactecAU";
			};
		};
	};
	class tactecBlack_V: tactecBase_V
	{
		displayName = "Tactec 5.45 [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecBlack
			{
				count = 1;
				name = "tactecBlack";
			};
		};
	};
	class tactecgp_V: tactecBase_V
	{
		displayName = "Tactec 5.45|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecgp
			{
				count = 1;
				name = "tactecgp";
			};
		};
	};
	class tactecgpFG_V: tactecBase_V
	{
		displayName = "Tactec 5.45|VOG-25 [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecgpFG
			{
				count = 1;
				name = "tactecgpFG";
			};
		};
	};
	class tactecgpAU_V: tactecBase_V
	{
		displayName = "Tactec 5.45|VOG-25 [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecgpAU
			{
				count = 1;
				name = "tactecgpAU";
			};
		};
	};
	class tactecgpBlack_V: tactecBase_V
	{
		displayName = "Tactec 5.45|VOG-25 [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecgpBlack
			{
				count = 1;
				name = "tactecgpBlack";
			};
		};
	};
	class tactec762_V: tactecBase_V
	{
		displayName = "Tactec 7.62 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec762
			{
				count = 1;
				name = "tactec762";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactec762FG_V: tactecBase_V
	{
		displayName = "Tactec 7.62 [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec762FG
			{
				count = 1;
				name = "tactec762FG";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactec762AU_V: tactecBase_V
	{
		displayName = "Tactec 7.62 [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec762AU
			{
				count = 1;
				name = "tactec762AU";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactec762Black_V: tactecBase_V
	{
		displayName = "Tactec 7.62 [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec762Black
			{
				count = 1;
				name = "tactec762Black";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactec762gp_V: tactecBase_V
	{
		displayName = "Tactec 7.62|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec762gp
			{
				count = 1;
				name = "tactec762gp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactec762gpFG_V: tactecBase_V
	{
		displayName = "Tactec 7.62|VOG-25 [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec762gpFG
			{
				count = 1;
				name = "tactec762gpFG";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactec762gpAU_V: tactecBase_V
	{
		displayName = "Tactec 7.62|VOG-25 [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec762gpAU
			{
				count = 1;
				name = "tactec762gpAU";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactec762gpBlack_V: tactecBase_V
	{
		displayName = "Tactec 7.62|VOG-25 [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactec762gpBlack
			{
				count = 1;
				name = "tactec762gpBlack";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecSVD_V: tactecBase_V
	{
		displayName = "Tactec SVD [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecSVD
			{
				count = 1;
				name = "tactecSVD";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecSVDFG_V: tactecBase_V
	{
		displayName = "Tactec SVD [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecSVDFG
			{
				count = 1;
				name = "tactecSVDFG";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecSVDAU_V: tactecBase_V
	{
		displayName = "Tactec SVD [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecSVDAU
			{
				count = 1;
				name = "tactecSVDAU";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecSVDBlack_V: tactecBase_V
	{
		displayName = "Tactec SVD [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecSVDBlack
			{
				count = 1;
				name = "tactecSVDBlack";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecpkp_V: tactecBase_V
	{
		displayName = "Tactec PKP [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecpkp
			{
				count = 1;
				name = "tactecpkp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecpkpFG_V: tactecBase_V
	{
		displayName = "Tactec PKP [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecpkpFG
			{
				count = 1;
				name = "tactecpkpFG";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecpkpAU_V: tactecBase_V
	{
		displayName = "Tactec PKP [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecpkpAU
			{
				count = 1;
				name = "tactecpkpAU";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecpkpBlack_V: tactecBase_V
	{
		displayName = "Tactec PKP [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecpkpBlack
			{
				count = 1;
				name = "tactecpkpBlack";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfull_V: tactecBase_V
	{
		displayName = "Tactec Heavy 5.45 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull
			{
				count = 1;
				name = "tactecfull";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullFG_V: tactecBase_V
	{
		displayName = "Tactec Heavy 5.45 [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullFG
			{
				count = 1;
				name = "tactecfullFG";
			};
		};
	};
	class tactecfullAU_V: tactecBase_V
	{
		displayName = "Tactec Heavy 5.45 [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullAU
			{
				count = 1;
				name = "tactecfullAU";
			};
		};
	};
	class tactecfullBlack_V: tactecBase_V
	{
		displayName = "Tactec Heavy 5.45 [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullBlack
			{
				count = 1;
				name = "tactecfullBlack";
			};
		};
	};
	class tactecfullgp_V: tactecBase_V
	{
		displayName = "Tactec Heavy 5.45|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullgp
			{
				count = 1;
				name = "tactecfullgp";
			};
		};
	};
	class tactecfullgpFG_V: tactecBase_V
	{
		displayName = "Tactec Heavy 5.45|VOG-25 [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullgpFG
			{
				count = 1;
				name = "tactecfullgpFG";
			};
		};
	};
	class tactecfullgpAU_V: tactecBase_V
	{
		displayName = "Tactec Heavy 5.45|VOG-25 [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullgpAU
			{
				count = 1;
				name = "tactecfullgpAU";
			};
		};
	};
	class tactecfullgpBlack_V: tactecBase_V
	{
		displayName = "Tactec Heavy 5.45|VOG-25 [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullgpBlack
			{
				count = 1;
				name = "tactecfullgpBlack";
			};
		};
	};
	class tactecfull762_V: tactecBase_V
	{
		displayName = "Tactec Heavy 7.62 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull762
			{
				count = 1;
				name = "tactecfull762";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfull762FG_V: tactecBase_V
	{
		displayName = "Tactec Heavy 7.62 [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull762FG
			{
				count = 1;
				name = "tactecfull762FG";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfull762AU_V: tactecBase_V
	{
		displayName = "Tactec Heavy 7.62 [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull762AU
			{
				count = 1;
				name = "tactecfull762AU";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfull762Black_V: tactecBase_V
	{
		displayName = "Tactec Heavy 7.62 [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull762Black
			{
				count = 1;
				name = "tactecfull762Black";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfull762gp_V: tactecBase_V
	{
		displayName = "Tactec Heavy 7.62|VOG-25 [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull762gp
			{
				count = 1;
				name = "tactecfull762gp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfull762gpFG_V: tactecBase_V
	{
		displayName = "Tactec Heavy 7.62|VOG-25 [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull762gpFG
			{
				count = 1;
				name = "tactecfull762gpFG";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfull762gpAU_V: tactecBase_V
	{
		displayName = "Tactec Heavy 7.62|VOG-25 [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull762gpAU
			{
				count = 1;
				name = "tactecfull762gpAU";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfull762gpBlack_V: tactecBase_V
	{
		displayName = "Tactec Heavy 7.62|VOG-25 [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfull762gpBlack
			{
				count = 1;
				name = "tactecfull762gpBlack";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullSVD_V: tactecBase_V
	{
		displayName = "Tactec Heavy SVD [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullSVD
			{
				count = 1;
				name = "tactecfullSVD";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullSVDFG_V: tactecBase_V
	{
		displayName = "Tactec Heavy SVD [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullSVDFG
			{
				count = 1;
				name = "tactecfullSVDFG";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullSVDAU_V: tactecBase_V
	{
		displayName = "Tactec Heavy SVD [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullSVDAU
			{
				count = 1;
				name = "tactecfullSVDAU";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullSVDBlack_V: tactecBase_V
	{
		displayName = "Tactec Heavy SVD [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullSVDBlack
			{
				count = 1;
				name = "tactecfullSVDBlack";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullpkp_V: tactecBase_V
	{
		displayName = "Tactec Heavy PKP [MC]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullpkp
			{
				count = 1;
				name = "tactecfullpkp";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullpkpFG_V: tactecBase_V
	{
		displayName = "Tactec Heavy PKP [FG]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullpkpFG
			{
				count = 1;
				name = "tactecfullpkpFG";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullpkpAU_V: tactecBase_V
	{
		displayName = "Tactec Heavy PKP [AU]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullpkpAU
			{
				count = 1;
				name = "tactecfullpkpAU";
			};
		};
		vehicleClass = "ItemsVests";
	};
	class tactecfullpkpBlack_V: tactecBase_V
	{
		displayName = "Tactec Heavy PKP [Black]";
		scope = 2;
		scopeCurator = 2;
		class TransportItems
		{
			class tactecfullpkpBlack
			{
				count = 1;
				name = "tactecfullpkpBlack";
			};
		};
		vehicleClass = "ItemsVests";
	};
};

class cfgWeapons
{
	class Default;
	class ItemCore: Default{};
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class tactec: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 5.45 [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactec.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactec.p3d";
			containerClass = "Supply120";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 5.45 [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactec.p3d";
		hiddenSelections[] = {"camo","camo6","nade"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactec.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","nade"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 5.45 [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactec.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactec.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 5.45 [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactec.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_mc.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactec.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecgp: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 5.45|VOG-25 [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecgp.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecgp.p3d";
			containerClass = "Supply130";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecgpFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 5.45|VOG-25 [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecgp.p3d";
		hiddenSelections[] = {"camo","camo6","nade"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecgp.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","nade"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecgpAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 5.45|VOG-25 [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecgp.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecgp.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecgpBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 5.45|VOG-25 [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecgp.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_mc.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecgp.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactec762: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 7.62 [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactec762.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactec762.p3d";
			containerClass = "Supply130";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactec762FG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 7.62 [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactec762.p3d";
		hiddenSelections[] = {"camo","camo6","nade"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactec762.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","nade"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactec762AU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 7.62 [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactec762.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactec762.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactec762Black: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 7.62 [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactec762.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_mc.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactec762.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactec762gp: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 7.62|VOG-25 [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecgp762.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecgp762.p3d";
			containerClass = "Supply130";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactec762gpFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 7.62|VOG-25 [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecgp762.p3d";
		hiddenSelections[] = {"camo","camo6","nade"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecgp762.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","nade"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactec762gpAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 7.62|VOG-25 [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecgp762.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecgp762.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactec762gpBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec 7.62|VOG-25 [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecgp762.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_mc.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecgp762.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecSVD: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec SVD [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecsvd.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecsvd.p3d";
			containerClass = "Supply130";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecSVDFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec SVD [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecsvd.p3d";
		hiddenSelections[] = {"camo","camo6","_1961apouches","nade","fastmag762"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\VSM_LBT_1961a_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fastmag_olive_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecsvd.p3d";
			containerClass = "Supply150";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","_1961apouches","nade","fastmag762"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\VSM_LBT_1961a_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fastmag_olive_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecSVDAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec SVD [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecsvd.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecsvd.p3d";
			containerClass = "Supply150";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecSVDBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec SVD [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecsvd.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","fastmag762"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fastmag_black_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecsvd.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","fastmag762"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fastmag_black_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecpkp: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec PKP [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecpkp.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecpkp.p3d";
			containerClass = "Supply150";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecpkpFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec PKP [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecpkp.p3d";
		hiddenSelections[] = {"camo","camo6","_1961apouches","nade","korob"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\VSM_LBT_1961a_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\vest1_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecpkp.p3d";
			containerClass = "Supply150";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","_1961apouches","nade","korob"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecFG_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\VSM_LBT_1961a_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\vest1_olive.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecpkpAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec PKP [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecpkp.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecpkp.p3d";
			containerClass = "Supply150";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecpkpBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec PKP [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecpkp.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","korob"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\vest1_black.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecpkp.p3d";
			containerClass = "Supply130";
			mass = 80;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","korob"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\vest1_black.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 5.45 [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfull.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfull.p3d";
			containerClass = "Supply150";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 5.45 [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfull.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfull.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","camo6","nade","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 5.45 [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfull.p3d";
		hiddenSelections[] = {"camo","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfull.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 5.45 [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfull.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_mc.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfull.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullgp: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 5.45|VOG-25 [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullgp.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullgp.p3d";
			containerClass = "Supply150";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullgpFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 5.45|VOG-25 [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullgp.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullgp.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","camo6","nade","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullgpAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 5.45|VOG-25 [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullgp.p3d";
		hiddenSelections[] = {"camo","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullgp.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullgpBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 5.45|VOG-25 [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullgp.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_mc.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullgp.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull762: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 7.62 [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfull762.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfull762.p3d";
			containerClass = "Supply150";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull762FG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 7.62 [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfull762.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfull762.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","camo6","nade","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull762AU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 7.62 [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfull762.p3d";
		hiddenSelections[] = {"camo","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfull762.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull762Black: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 7.62 [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfull762.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_mc.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfull762.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull762gp: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 7.62|VOG-25 [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullgp762.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullgp762.p3d";
			containerClass = "Supply150";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull762gpFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 7.62|VOG-25 [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullgp762.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","nade","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullgp762.p3d";
			containerClass = "Supply150";
			mass = 80;
			hiddenSelections[] = {"camo","camo2","camo6","nade","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull762gpAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 7.62|VOG-25 [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullgp762.p3d";
		hiddenSelections[] = {"camo","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullgp762.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfull762gpBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy 7.62|VOG-25 [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullgp762.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_mc.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullgp762.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullsvd: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy SVD [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullsvd.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullsvd.p3d";
			containerClass = "Supply150";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullsvdFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy SVD [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullsvd.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","_1961apouches","nade","fartuk","fastmag762"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\VSM_LBT_1961a_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa","tactecSSO\tex\fastmag_olive_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullsvd.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","camo6","_1961apouches","nade","fartuk","fastmag762"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\VSM_LBT_1961a_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa","tactecSSO\tex\fastmag_olive_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullsvdAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy SVD [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullsvd.p3d";
		hiddenSelections[] = {"camo","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullsvd.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullsvdBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy SVD [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullsvd.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk","fastmag762"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa","tactecSSO\tex\fastmag_black_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullsvd.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk","fastmag762"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa","tactecSSO\tex\fastmag_black_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullpkp: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy PKP [MC]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullpkp.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullpkp.p3d";
			containerClass = "Supply150";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullpkpFG: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy PKP [FG]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullpkp.p3d";
		hiddenSelections[] = {"camo","camo2","camo6","_1961apouches","nade","fartuk","korob"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\VSM_LBT_1961a_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa","tactecSSO\tex\vest1_olive.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullpkp.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","camo6","_1961apouches","nade","fartuk","korob"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecfg_co.paa","tactecSSO\tex\armorfg_co.paa","tactecSSO\tex\gear_olive.paa","tactecSSO\tex\VSM_LBT_1961a_olive.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\fartukfg_co.paa","tactecSSO\tex\vest1_olive.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullpkpAU: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy PKP [AU]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullpkp.p3d";
		hiddenSelections[] = {"camo","camo2","fartuk"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullpkp.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo2","fartuk"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecau_co.paa","tactecSSO\tex\armorau_co.paa","tactecSSO\tex\fartukau_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
	class tactecfullpkpBlack: Vest_Camo_Base
	{
		author = "Sc0t29 & chazbotic";
		scope = 2;
		displayName = "Tactec Heavy PKP [Black]";
		picture = "\tactecSSO\logo.paa";
		logo = "\tactecSSO\logo.paa";
		model = "\tactecSSO\tactecfullpkp.p3d";
		hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk","korob"};
		hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa","tactecSSO\tex\vest1_black.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "tactecSSO\tactecfullpkp.p3d";
			containerClass = "Supply150";
			mass = 100;
			hiddenSelections[] = {"camo","camo6","_gen2bb","_1961apouches","nade","camo2","fartuk","korob"};
			hiddenSelectionsTextures[] = {"tactecSSO\tex\tactecBlack_co.paa","tactecSSO\tex\gear_fde.paa","tactecSSO\tex\VSM_Gen2_BattleBelt_black.paa","tactecSSO\tex\VSM_LBT_1961a_Black.paa","tactecSSO\tex\grenade_fde.paa","tactecSSO\tex\armorBlack_co.paa","tactecSSO\tex\fartukBlack_co.paa","tactecSSO\tex\vest1_black.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 15;
					passThrough = 0.5;
					explosionShielding = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					passThrough = 0.2;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 25;
					passThrough = 0.2;
				};
			};
		};
	};
};

class cfgMods
{
	author = "Sc0t29 & chazbotic";
	timepacked = "1591028033";
};
