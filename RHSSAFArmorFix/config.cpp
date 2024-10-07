
class CfgPatches
{
	class rhssaf_c_gear
	{
		units[] = {};
		weapons[] = {};
		name = "RHSSAFArmorFix";
		requiredAddons[] = {"rhssaf_main","rhssaf_c_gear"};
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadGearItem;
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class rhssaf_helmet_base: H_HelmetB
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_base_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 0;
		scopeCurator = 0;
		displayName = "$STR_RHSSAF_HELMET_BASE_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m59\rhssaf_m59_nocamo";
		allowedFacewear[] = {"rhs_scarf","G_Aviator"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m59\data\rhssaf_m59_nocamo_co.paa"};
		descriptionShort = "$STR_RHSSAF_HELMET_BASE_DESCRIPTIONSHORT";
		class ItemInfo: HeadGearItem
		{
			mass = 42;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m59\rhssaf_m59_nocamo";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m59_85_nocamo: rhssaf_helmet_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m59_85_nocamo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M59_85_NOCAMO_DISPLAYNAME";
	};
	class rhssaf_helmet_m59_85_oakleaf: rhssaf_helmet_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m59_85_oakleaf_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M59_85_OAKLEAF_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m59\rhssaf_m59_camo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m59\data\rhssaf_m59_camo_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 42;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m59\rhssaf_m59_camo";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_olive_nocamo: rhssaf_helmet_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_olive_nocamo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_co.paa"};
		descriptionShort = "$STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_DESCRIPTIONSHORT";
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_olive_nocamo_black_ess: rhssaf_helmet_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_olive_nocamo_black_ess_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_BLACK_ESS_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo_ess";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
		descriptionShort = "$STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_BLACK_ESS_DESCRIPTIONSHORT";
		class ItemInfo: HeadGearItem
		{
			mass = 42;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo_ess";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_olive_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_olive_nocamo_black_ess_bare_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_BLACK_ESS_BARE_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo_ess_bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 42;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_nocamo_ess_bare";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_black_nocamo: rhssaf_helmet_m97_olive_nocamo
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_black_nocamo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_BLACK_NOCAMO_DISPLAYNAME";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_black_co.paa"};
	};
	class rhssaf_helmet_m97_black_nocamo_black_ess: rhssaf_helmet_m97_olive_nocamo_black_ess
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_black_nocamo_black_ess_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_BLACK_NOCAMO_BLACK_ESS_DISPLAYNAME";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_black_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	class rhssaf_helmet_m97_black_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess_bare
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_black_nocamo_black_ess_bare_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_BLACK_NOCAMO_BLACK_ESS_BARE_DISPLAYNAME";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_nocamo_black_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	class rhssaf_helmet_m97_woodland: rhssaf_helmet_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_woodland_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_WOODLAND_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa"};
		descriptionShort = "$STR_RHSSAF_HELMET_M97_WOODLAND_DESCRIPTIONSHORT";
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_digital: rhssaf_helmet_m97_woodland
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_digital_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_DIGITAL_DISPLAYNAME";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_digital_co.paa"};
	};
	class rhssaf_helmet_m97_md2camo: rhssaf_helmet_m97_woodland
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_md2camo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_MD2CAMO_DISPLAYNAME";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_md2camo_co.paa"};
	};
	class rhssaf_helmet_m97_oakleaf: rhssaf_helmet_m97_woodland
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_oakleaf_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_OAKLEAF_DISPLAYNAME";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_oakleaf_co.paa"};
	};
	class rhssaf_helmet_m97_nostrap_blue: rhssaf_helmet_m97_woodland
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_nostrap_blue_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_NOSTRAP_BLUE_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_blue_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_nostrap_blue_tan_ess: rhssaf_helmet_m97_woodland
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_nostrap_blue_tan_ess_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_NOSTRAP_BLUE_TAN_ESS_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_blue_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_nostrap_blue_tan_ess_bare: rhssaf_helmet_m97_woodland
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_nostrap_blue_tan_ess_bare_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_NOSTRAP_BLUE_TAN_ESS_BARE_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess_bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_blue_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_tan_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 40;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess_bare";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_woodland_black_ess: rhssaf_helmet_m97_olive_nocamo_black_ess
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_woodland_black_ess_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_WOODLAND_BLACK_ESS_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
		descriptionShort = "$STR_RHSSAF_HELMET_M97_WOODLAND_BLACK_ESS_DESCRIPTIONSHORT";
		class ItemInfo: HeadGearItem
		{
			mass = 42;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_digital_black_ess: rhssaf_helmet_m97_woodland_black_ess
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_digital_black_ess_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_DIGITAL_BLACK_ESS_DISPLAYNAME";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_digital_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	class rhssaf_helmet_m97_md2camo_black_ess: rhssaf_helmet_m97_woodland_black_ess
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_md2camo_black_ess_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_MD2CAMO_BLACK_ESS_DISPLAYNAME";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_md2camo_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	class rhssaf_helmet_m97_oakleaf_black_ess: rhssaf_helmet_m97_woodland_black_ess
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_oakleaf_black_ess_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_OAKLEAF_BLACK_ESS_DISPLAYNAME";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_oakleaf_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	class rhssaf_helmet_m97_woodland_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_woodland_black_ess_bare_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_WOODLAND_BLACK_ESS_BARE_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess_bare";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 42;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess_bare";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.2;
				};
			};
		};
	};
	class rhssaf_helmet_m97_digital_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_digital_black_ess_bare_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_DIGITAL_BLACK_ESS_BARE_DISPLAYNAME";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_digital_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	class rhssaf_helmet_m97_md2camo_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_md2camo_black_ess_bare_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_MD2CAMO_BLACK_ESS_BARE_DISPLAYNAME";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_md2camo_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	class rhssaf_helmet_m97_oakleaf_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_oakleaf_black_ess_bare_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_OAKLEAF_BLACK_ESS_BARE_DISPLAYNAME";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_oakleaf_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"};
	};
	class rhssaf_helmet_m97_veil_Base: rhssaf_helmet_m97_woodland
	{
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
		hiddenSelections[] = {"camo","camo2","camo_veil"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa","\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_veil\rhssaf_m97_veil";
			hiddenSelections[] = {"camo","camo2","camo_veil"};
		};
	};
	class rhssaf_helmet_m97_veil_woodland: rhssaf_helmet_m97_veil_Base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_veil_woodland_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_VEIL_WOODLAND_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_woodland_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa","\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"};
	};
	class rhssaf_helmet_m97_veil_digital: rhssaf_helmet_m97_veil_Base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_veil_digital_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_VEIL_DIGITAL_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_digital_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa","\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"};
	};
	class rhssaf_helmet_m97_veil_md2camo: rhssaf_helmet_m97_veil_Base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_veil_md2camo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_VEIL_MD2CAMO_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_md2camo_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa","\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"};
	};
	class rhssaf_helmet_m97_veil_oakleaf: rhssaf_helmet_m97_veil_Base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_helmet_m97_veil_oakleaf_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_HELMET_M97_VEIL_OAKLEAF_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_oakleaf_co.paa","\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa","\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"};
	};
	class rhssaf_beret_green: rhssaf_helmet_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_green_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BERET_GREEN_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_green_co.paa"};
		model = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret";
		class ItemInfo: HeadGearItem
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret";
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
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
	class H_PilotHelmetHeli_B: H_HelmetB{};
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
	{
		class ItemInfo;
	};
	class rhssaf_beret_red: rhssaf_beret_green
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_red_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BERET_RED_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_red_co.paa"};
	};
	class rhssaf_beret_para: rhssaf_beret_green
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_para_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BERET_PARA_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_red_para_co.paa"};
	};
	class rhssaf_beret_black: rhssaf_beret_green
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_black_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BERET_BLACK_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_black_co.paa"};
	};
	class rhssaf_beret_blue_un: rhssaf_helmet_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_beret_blue_un_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BERET_BLUE_UN_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_beret\data\rhssaf_beret_blue_un_co.paa"};
		model = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret_un";
		class ItemInfo: HeadGearItem
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret_un";
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
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
	class rhs_booniehat2_marpatd;
	class rhssaf_booniehat_digital: rhs_booniehat2_marpatd
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_booniehat_digital_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BOONIEHAT_DIGITAL_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_digital_co.paa"};
	};
	class rhssaf_booniehat_md2camo: rhs_booniehat2_marpatd
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_booniehat_md2camo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BOONIEHAT_MD2CAMO_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_md2camo_co.paa"};
	};
	class rhssaf_booniehat_woodland: rhs_booniehat2_marpatd
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_booniehat_woodland_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BOONIEHAT_WOODLAND_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_ret\data\rhssaf_boonie_woodland_co.paa"};
	};
	class H_Bandanna_khk;
	class rhssaf_bandana_digital: H_Bandanna_khk
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_digital_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BANDANA_DIGITAL_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_digital.paa"};
	};
	class rhssaf_bandana_digital_desert: rhssaf_bandana_digital
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_digital_desert_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BANDANA_DIGITAL_DESERT_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_digital_desert.paa"};
	};
	class rhssaf_bandana_oakleaf: rhssaf_bandana_digital
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_oakleaf_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BANDANA_OAKLEAF_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_oakleaf.paa"};
	};
	class rhssaf_bandana_smb: rhssaf_bandana_digital
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_smb_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BANDANA_SMB_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_smb.paa"};
	};
	class rhssaf_bandana_md2camo: rhssaf_bandana_digital
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\headgear\rhssaf_bandana_md2camo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_BANDANA_MD2CAMO_DISPLAYNAME";
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\rhssaf_bandana_md2camo.paa"};
	};
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class rhssaf_balistic_vest_base: Vest_Camo_Base
	{
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 0;
		scopeCurator = 0;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "$STR_RHSSAF_BALISTIC_VEST_BASE_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_woodland_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"MD98"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
			containerClass = "Supply120";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 12;
					passThrough = 0.5;
				};
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
	class rhssaf_tactical_vest_base: Vest_Camo_Base
	{
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 0;
		scopeCurator = 0;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "$STR_RHSSAF_TACTICAL_VEST_BASE_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
		descriptionShort = "$STR_RHSSAF_TACTICAL_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
			containerClass = "Supply120";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 1;
					passThrough = 0.5;
				};
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
	class rhssaf_vest_md98_woodland: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md98_woodland_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD98_WOODLAND_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_woodland_co.paa"};
		descriptionShort = "$STR_RHSSAF_VEST_MD98_WOODLAND_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"MD98"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
			containerClass = "Supply120";
			mass = 60;
		};
	};
	class rhssaf_vest_md98_md2camo: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md98_md2camo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD98_MD2CAMO_DISPLAYNAME";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_md2camo_co.paa"};
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
		descriptionShort = "$STR_RHSSAF_VEST_MD98_MD2CAMO_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"MD98"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
			containerClass = "Supply120";
			mass = 60;
		};
	};
	class rhssaf_vest_md98_digital: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md98_digital_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD98_DIGITAL_DISPLAYNAME";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_digital_co.paa"};
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
		descriptionShort = "$STR_RHSSAF_VEST_MD98_DIGITAL_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"MD98"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
			containerClass = "Supply120";
			mass = 60;
		};
	};
	class rhssaf_vest_md98_officer: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md98_officer_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_RHSSAF_VEST_MD98_OFFICER_DISPLAYNAME";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_digital_co.paa"};
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
		descriptionShort = "$STR_RHSSAF_VEST_MD98_OFFICER_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"MD98"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
			containerClass = "Supply120";
			mass = 60;
		};
	};
	class rhssaf_vest_md98_rifleman: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md98_rifleman_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD98_RIFLEMAN_DISPLAYNAME";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_woodland_co.paa"};
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_rifleman";
		descriptionShort = "$STR_RHSSAF_VEST_MD98_RIFLEMAN_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"MD98"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_rifleman";
			containerClass = "Supply120";
			mass = 80;
		};
	};
	class rhssaf_vest_otv_md2camo: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_otv_md2camo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_OTV_MD2CAMO_DISPLAYNAME";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_gear_a3\data\vest_rhssaf_otv_md2camo_co.paa"};
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			mass = 70;
			hiddenSelections[] = {"camo"};
			descriptionShort = "$STR_ITEMINFO_DESCRIPTIONSHORT";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 1;
					passThrough = 0.5;
				};
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
	class rhssaf_vest_md99_md2camo_rifleman: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_md2camo_rifleman_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_MD2CAMO_RIFLEMAN_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
			containerClass = "Supply120";
			mass = 70;
		};
	};
	class rhssaf_vest_md99_md2camo_rifleman_radio: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_md2camo_rifleman_radio_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_MD2CAMO_RIFLEMAN_RADIO_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
			containerClass = "Supply120";
			mass = 75;
		};
	};
	class rhssaf_vest_md99_digital_rifleman: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_digital_rifleman_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_DIGITAL_RIFLEMAN_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		hiddenSelections[] = {"camo","pouches"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_digital_co.paa","\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_digital_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","pouches"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
			containerClass = "Supply120";
			mass = 70;
		};
	};
	class rhssaf_vest_md99_digital_rifleman_radio: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_digital_rifleman_radio_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_DIGITAL_RIFLEMAN_RADIO_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
		hiddenSelections[] = {"camo","pouches"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_digital_co.paa","\rhssaf\addons\rhssaf_t_vest_m98\data\rhssaf_md98_digital_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","pouches"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
			containerClass = "Supply120";
			mass = 75;
		};
	};
	class rhssaf_vest_md99_woodland_rifleman: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_woodland_rifleman_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_WOODLAND_RIFLEMAN_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		hiddenSelections[] = {"camo","pouches"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_woodland_co.paa","\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_md99_woodland_pouches_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","pouches"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
			containerClass = "Supply120";
			mass = 70;
		};
	};
	class rhssaf_vest_md99_woodland_rifleman_radio: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_woodland_rifleman_radio_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_WOODLAND_RIFLEMAN_RADIO_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
		hiddenSelections[] = {"camo","pouches"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_woodland_co.paa","\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_md99_woodland_pouches_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","pouches"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman_radio";
			containerClass = "Supply120";
			mass = 75;
		};
	};
	class rhssaf_vest_md99_md2camo: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_md2camo_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_MD2CAMO_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
			containerClass = "Supply120";
			mass = 60;
		};
	};
	class rhssaf_vest_md99_md2camo_radio: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_md2camo_radio_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_MD2CAMO_RADIO_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
			containerClass = "Supply120";
			mass = 65;
		};
	};
	class rhssaf_vest_md99_digital: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_digital_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_DIGITAL_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_digital_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
			containerClass = "Supply120";
			mass = 60;
		};
	};
	class rhssaf_vest_md99_digital_radio: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_digital_radio_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_DIGITAL_RADIO_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_digital_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
			containerClass = "Supply120";
			mass = 65;
		};
	};
	class rhssaf_vest_md99_woodland: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_woodland_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_WOODLAND_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_woodland_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99";
			containerClass = "Supply120";
			mass = 60;
		};
	};
	class rhssaf_vest_md99_woodland_radio: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md99_woodland_radio_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD99_WOODLAND_RADIO_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_woodland_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_radio";
			containerClass = "Supply120";
			mass = 65;
		};
	};
	class rhssaf_vest_md12_digital: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md12_digital_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD12_DIGITAL_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m12\data\rhssaf_md12_digital_co.paa"};
		descriptionShort = "$STR_RHSSAF_VEST_MD12_DIGITAL_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
			containerClass = "Supply120";
			mass = 70;
		};
	};
	class rhssaf_vest_md12_m70_rifleman: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md12_m70_rifleman_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD12_M70_RIFLEMAN_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12_m70_rifleman";
		hiddenSelections[] = {"camo","pouches"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m12\data\rhssaf_md12_digital_co.paa","\rhssaf\addons\rhssaf_t_vest_m12\data\rhssaf_md12_ak_pouches_co.paa"};
		descriptionShort = "$STR_RHSSAF_VEST_MD12_DIGITAL_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","pouches"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12_m70_rifleman";
			containerClass = "Supply120";
			mass = 90;
		};
	};
	class rhssaf_vest_md12_digital_desert: rhssaf_balistic_vest_base
	{
		picture = "\rhssaf\addons\rhssaf_inventoryicons\data\vests\rhssaf_vest_md12_digital_desert_ca.paa";
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_RHSSAF_VEST_MD12_DIGITAL_DESERT_DISPLAYNAME";
		model = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m12\data\rhssaf_md12_digital_desert_co.paa"};
		descriptionShort = "$$STR_RHSSAF_VEST_MD12_DIGITAL_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
			containerClass = "Supply120";
			mass = 70;
		};
	};
	class rhssaf_vest_md99a5_md2camo_rifleman: rhssaf_balistic_vest_base
	{
		dlc = "RHS_SAF";
		author = "$STR_RHSSAF_AUTHOR_FULL";
		scope = 1;
		scopeCurator = 0;
		displayName = "PBB M-99A5 w/M-98";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_vest_m99\data\rhssaf_vest_m99_co.paa"};
		descriptionShort = "$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
			containerClass = "Supply120";
			mass = 120;
		};
	};
};
