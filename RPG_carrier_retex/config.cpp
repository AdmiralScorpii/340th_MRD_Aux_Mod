#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class RPG_Carrier_Retex
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_main","rhs_c_weapons","rhs_c_radio","rhs_c_troops"};
		name = "RPG Carrier Retex";
		author = "YRUSoPractised";
	};
};
class CfgVehicles
{
	class rhs_rpg;
	class rhs_rpg_black: rhs_rpg
	{
		scope = 2;
		displayName = "RPG Carrier (Black)"
		hiddenSelectionsTextures[] = {"\RPG_Carrier_Retex\data\GearPack2_RPG_Black_co.paa"};
		class TransportMagazines{};
	};
	class rhs_rpg_cbr: rhs_rpg
	{
		scope = 2;
		displayName = "RPG Carrier (Coyote)"
		hiddenSelectionsTextures[] = {"RPG_Carrier_Retex\data\GearPack2_RPG_cbr_co.paa"};
		class TransportMagazines{};
	};
	class rhs_rpg_khk: rhs_rpg
	{
		scope = 2;
		displayName = "RPG Carrier (Khaki)"
		hiddenSelectionsTextures[] = {"RPG_Carrier_Retex\data\GearPack2_RPG_khk_co.paa"};
		class TransportMagazines{};
	};
	class rhs_rpg_rgr: rhs_rpg
	{
		scope = 2;
		displayName = "RPG Carrier (Ranger Green)"
		hiddenSelectionsTextures[] = {"RPG_Carrier_Retex\data\GearPack2_RPG_rgr_co.paa"};
		class TransportMagazines{};
	};
	class rhs_rpg_tan: rhs_rpg
	{
		scope = 2;
		displayName = "RPG Carrier (Tan)"
		hiddenSelectionsTextures[] = {"RPG_Carrier_Retex\data\GearPack2_RPG_tan_co.paa"};
		class TransportMagazines{};
	};
	class rhs_rpg_oil: rhs_rpg
	{
		scope = 2;
		displayName = "RPG Carrier (Olive Green)"
		hiddenSelectionsTextures[] = {"RPG_Carrier_Retex\data\GearPack2_RPG_oil_co.paa"};
		class TransportMagazines{};
	};
	class rhs_rpg_gry: rhs_rpg
	{
		scope = 2;
		displayName = "RPG Carrier (Grey)"
		hiddenSelectionsTextures[] = {"RPG_Carrier_Retex\data\GearPack2_RPG_gry_co.paa"};
		class TransportMagazines{};
	};
	class rhs_rpg_whi: rhs_rpg
	{
		scope = 2;
		displayName = "RPG Carrier (White)"
		hiddenSelectionsTextures[] = {"RPG_Carrier_Retex\data\GearPack2_RPG_whi_co.paa"};
		class TransportMagazines{};
	};
};