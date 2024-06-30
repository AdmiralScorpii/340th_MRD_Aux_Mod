class CfgPatches
{
	class 340th_USAF_Body_Armor_Modifications
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.78;
		requiredAddons[]=
		{
			"rhsusf_c_troops"
		};
		name="340th MRD RHSAFRF Body Armor Modifications";
		author="Scorpii";
	};
};

#define ARMOR_NIJ_1	8
#define ARMOR_NIJ_2	10
#define ARMOR_NIJ_3	14
#define ARMOR_NIJ_4	16

#define PASS_NIJ_1 	0.4
#define PASS_NIJ_2 	0.3
#define PASS_NIJ_3 	0.2
#define PASS_NIJ_4 	0.1

#define ARMOR_EQUIP		3
#define PASS_EQUIP		0.6

class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class rhsusf_iotv_ocp_base: Vest_Camo_Base
	{
		dlc="RHS_USAF";
		scope=0;
		hiddenSelections[]=
		{
			"camo",
			"camob",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_iotv_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv1_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa"
		};
		descriptionShort="Armor Level IV";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camob",
				"camo1",
				"camo2"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv";
			containerClass="Supply20";
			mass=100;
			armor=20;
			descriptionShort="Armor Level IV";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_3;
					passThrough= PASS_NIJ_3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ocp: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ocp_ca.paa";
		scope=2;
		displayName="IOTV (OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv";
		hiddenSelections[]=
		{
			"camo",
			"camob",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_iotv_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv1_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa"
		};
	};
	class rhsusf_iotv_ocp_Grenadier: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ocp_Grenadier_ca.paa";
		scope=2;
		displayName="IOTV (Grenadier/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Grenadier";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Grenadier";
			containerClass="Supply140";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ocp_Medic: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ocp_Medic_ca.paa";
		scope=2;
		displayName="IOTV (Medic/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Medic";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Medic";
			containerClass="Supply120";
			mass=120;
		};
	};
	class rhsusf_iotv_ocp_Repair: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ocp_Repair_ca.paa";
		scope=2;
		displayName="IOTV (Repair/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Repair";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Repair";
			containerClass="Supply120";
			mass=120;
		};
	};
	class rhsusf_iotv_ocp_Rifleman: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ocp_Rifleman_ca.paa";
		scope=2;
		displayName="IOTV (Rifleman/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman";
			containerClass="Supply140";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ocp_SAW: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ocp_SAW_ca.paa";
		scope=2;
		displayName="IOTV (SAW/OCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_SAW";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_SAW";
			containerClass="Supply160";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ocp_Squadleader: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ocp_Squadleader_ca.paa";
		scope=2;
		displayName="IOTV (Squadleader/OCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Squadleader";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Squadleader";
			containerClass="Supply160";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ocp_Teamleader: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ocp_Teamleader_ca.paa";
		scope=2;
		displayName="IOTV (Teamleader/OCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Teamleader";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Teamleader";
			containerClass="Supply160";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ucp_base: rhsusf_iotv_ocp_base
	{
		scope=0;
		displayName="IOTV (UCP)";
		author="$STR_RHSUSF_AUTHOR_FULL";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_iotv_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv1_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa"
		};
	};
	class rhsusf_iotv_ucp: rhsusf_iotv_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ucp_ca.paa";
		displayName="IOTV (UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_iotv_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv1_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa"
		};
	};
	class rhsusf_iotv_ucp_Grenadier: rhsusf_iotv_ucp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ucp_Grenadier_ca.paa";
		scope=2;
		displayName="IOTV (Grenadier/UCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Grenadier";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Grenadier";
			containerClass="Supply140";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ucp_Medic: rhsusf_iotv_ucp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ucp_Medic_ca.paa";
		scope=2;
		displayName="IOTV (Medic/UCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Medic";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Medic";
			containerClass="Supply120";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ucp_Repair: rhsusf_iotv_ucp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ucp_Repair_ca.paa";
		scope=2;
		displayName="IOTV (Repair/UCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Repair";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Repair";
			containerClass="Supply120";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ucp_Rifleman: rhsusf_iotv_ucp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ucp_Rifleman_ca.paa";
		scope=2;
		displayName="IOTV (Rifleman/UCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman";
			containerClass="Supply140";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ucp_SAW: rhsusf_iotv_ucp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ucp_SAW_ca.paa";
		scope=2;
		displayName="IOTV (SAW/UCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_SAW";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_SAW";
			containerClass="Supply160";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ucp_Squadleader: rhsusf_iotv_ucp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ucp_Squadleader_ca.paa";
		scope=2;
		displayName="IOTV (Squadleader/UCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Squadleader";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Squadleader";
			containerClass="Supply160";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_iotv_ucp_Teamleader: rhsusf_iotv_ucp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_iotv_ucp_Teamleader_ca.paa";
		scope=2;
		displayName="IOTV (Teamleader/UCP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Teamleader";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_Teamleader";
			containerClass="Supply160";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_4;
				};
			};
		};
	};
	class rhsusf_spc: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_ca.paa";
		scope=2;
		displayName="SPC";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spc01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak_co.paa"
		};
		descriptionShort="Armor Level IV";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc";
			containerClass="Supply20";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_rifleman: rhsusf_spc
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_rifleman_ca.paa";
		displayName="SPC (Rifleman)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_rifleman";
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_iar: rhsusf_spc_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_iar_ca.paa";
		displayName="SPC (IAR)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_iar";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_iar";
			containerClass="Supply160";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_corpsman: rhsusf_spc_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_corpsman_ca.paa";
		displayName="SPC (Corpsman)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_corpsman";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_corpsman";
			containerClass="Supply120";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_crewman: rhsusf_spc_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_crewman_ca.paa";
		displayName="SPC (Crewman)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_crewman";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_crewman";
			containerClass="Supply80";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_light: rhsusf_spc_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_light_ca.paa";
		displayName="SPC (Light)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_light";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_light";
			containerClass="Supply100";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_marksman: rhsusf_spc_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_marksman_ca.paa";
		displayName="SPC (Marksman)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_marksman";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_marksman";
			containerClass="Supply80";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_mg: rhsusf_spc_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_mg_ca.paa";
		displayName="SPC (Machinegunner)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_mg";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_mg";
			containerClass="Supply120";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_sniper: rhsusf_spc_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_sniper_ca.paa";
		displayName="SPC (Scout Sniper)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_scoutsniper";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_scoutsniper";
			containerClass="Supply80";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spc_squadleader: rhsusf_spc_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spc_squadleader_ca.paa";
		displayName="SPC (Squadleader)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spcs_ocp: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_ca.paa";
		scope=2;
		displayName="SPCS (OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_camelback_ocp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_gear1_iotv_oCP_co.paa"
		};
		descriptionShort="Armor Level IV";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_camelback_ocp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_gear1_iotv_oCP_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs";
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor= ARMOR_NIJ_2;
					passThrough= PASS_NIJ_2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_spcs_ocp_squadleader: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_squadleader_ca.paa";
		displayName="SPCS (Squad leader/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_squadleader";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_squadleader";
		};
	};
	class rhsusf_spcs_ocp_teamleader: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_teamleader_ca.paa";
		displayName="SPCS (Team Leader/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_teamleader";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_teamleader";
		};
	};
	class rhsusf_spcs_ocp_teamleader_alt: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_teamleader_alt_ca.paa";
		displayName="SPCS (Team Leader Alt/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_teamleader_alt";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_teamleader_alt";
		};
	};
	class rhsusf_spcs_ocp_saw: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_saw_ca.paa";
		displayName="SPCS (SAW/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_saw";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_saw";
		};
	};
	class rhsusf_spcs_ocp_grenadier: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_grenadier_ca.paa";
		displayName="SPCS (Grenadier/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_grenadier";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_grenadier";
		};
	};
	class rhsusf_spcs_ocp_rifleman: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_rifleman_ca.paa";
		displayName="SPCS (Rifleman/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman";
		};
	};
	class rhsusf_spcs_ocp_rifleman_alt: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_rifleman_alt_ca.paa";
		displayName="SPCS (Rifleman Alt/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman_alt";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_rifleman_alt";
		};
	};
	class rhsusf_spcs_ocp_medic: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_medic_ca.paa";
		displayName="SPCS (Medic/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_medic";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_medic";
		};
	};
	class rhsusf_spcs_ocp_crewman: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_crewman_ca.paa";
		displayName="SPCS (Crewman/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_crewman";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_crewman";
		};
	};
	class rhsusf_spcs_ocp_machinegunner: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_machinegunner_ca.paa";
		displayName="SPCS (Machinegunner/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_machinegunner";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_machinegunner";
		};
	};
	class rhsusf_spcs_ocp_sniper: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ocp_sniper_ca.paa";
		displayName="SPCS (Sniper/OEF-CP)";
		model="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_sniper";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
			"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5"
			};
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ocp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
				"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spcs_sniper";
		};
	};
	class rhsusf_spcs_ucp: rhsusf_spcs_ocp
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_ca.paa";
		displayName="SPCS (UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_camelback_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_gear1_iotv_UCP_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_camelback_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_gear1_iotv_UCP_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_squadleader: rhsusf_spcs_ocp_squadleader
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_squadleader_ca.paa";
		displayName="SPCS (Squad Leader/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_teamleader: rhsusf_spcs_ocp_teamleader
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_teamleader_ca.paa";
		displayName="SPCS (Team Leader/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_teamleader_alt: rhsusf_spcs_ocp_teamleader_alt
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_teamleader_alt_ca.paa";
		displayName="SPCS (Team Leader Alt/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_saw: rhsusf_spcs_ocp_saw
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_saw_ca.paa";
		displayName="SPCS (SAW/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_grenadier: rhsusf_spcs_ocp_grenadier
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_grenadier_ca.paa";
		displayName="SPCS (Grenadier/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_rifleman: rhsusf_spcs_ocp_rifleman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_rifleman_ca.paa";
		displayName="SPCS (Rifleman/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_rifleman_alt: rhsusf_spcs_ocp_rifleman_alt
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_rifleman_alt_ca.paa";
		displayName="SPCS (Rifleman Alt/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_medic: rhsusf_spcs_ocp_medic
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_medic_ca.paa";
		displayName="SPCS (Medic/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_crewman: rhsusf_spcs_ocp_crewman
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_crewman_ca.paa";
		displayName="SPCS (Crewman/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_machinegunner: rhsusf_spcs_ocp_machinegunner
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_machinegunner_ca.paa";
		displayName="SPCS (Machinegunner/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_sniper: rhsusf_spcs_ocp_sniper
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_spcs_ucp_sniper_ca.paa";
		displayName="SPCS (Sniper/UCP)";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
			"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"rhsusf\addons\rhsusf_infantry\data\rhs_spcs_ucp_01_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa",
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
				"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
			};
		};
	};
	class rhsusf_mbav: rhsusf_iotv_ocp_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_mbav_ca.paa";
		scope=2;
		displayName="MBAV";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_clean";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_tan_co.paa"
		};
		descriptionShort="Armor Level IV";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_clean";
			containerClass="Supply20";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_mbav_light: rhsusf_mbav
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_mbav_light_ca.paa";
		displayName="MBAV (Light)";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_light";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_tan_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_light";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough= PASS_NIJ_2;
				};
			};
		};
	};
	class rhsusf_mbav_rifleman: rhsusf_mbav_light
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_mbav_rifleman_ca.paa";
		displayName="MBAV (Rifleman)";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_rifleman";
			containerClass="Supply140";
		};
	};
	class rhsusf_mbav_mg: rhsusf_mbav_light
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_mbav_mg_ca.paa";
		displayName="MBAV (Machinegunner)";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_mgunner";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_mgunner";
			containerClass="Supply160";
		};
	};
	class rhsusf_mbav_grenadier: rhsusf_mbav_light
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_mbav_grenadier_ca.paa";
		displayName="MBAV (Grenadier)";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_grenadier";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_grenadier";
			containerClass="Supply160";
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor= ARMOR_NIJ_4;
					passThrough= PASS_NIJ_4;
				};
				class Diaphragm: Diaphragm
				{
				};
				class Body: Body
				{
				};
			};
		};
	};
	class rhsusf_mbav_medic: rhsusf_mbav_light
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_mbav_medic_ca.paa";
		displayName="MBAV (Medic)";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_medic";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\mbav_medic";
			containerClass="Supply160";
		};
	};
	class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_plateframe_sapi_ca.paa";
		scope=2;
		displayName="Plateframe";
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\data\rhs_plateframe_sapi_tan_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear1_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_spc_gear2_co.paa",
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa",
			"rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"Camo",
				"Camo1",
				"Camo2",
				"Camo3",
				"Camo4",
				"Camo5",
				"Camo6",
				"Camo7"
			};
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi";
			containerClass="Supply20";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=14;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=14;
					PassThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class rhsusf_plateframe_light: rhsusf_plateframe_sapi
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_plateframe_light_ca.paa";
		displayName="Plateframe (Light)";
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_light";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_light";
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=14;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="13 +                        3";
					PassThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
	class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi
	{
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\vests\rhsusf_plateframe_rifleman_ca.paa";
		displayName="Plateframe (Rifleman)";
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_rifleman";
		class ItemInfo: ItemInfo
		{
			uniformModel="rhsusf\addons\rhsusf_infantry2\gear\vests\plateframe\rhs_plateframe_sapi_rifleman";
			containerClass="Supply160";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=14;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="13 +                        3";
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
					passThrough=0.60000002;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
};

















