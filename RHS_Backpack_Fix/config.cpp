////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Sep 17 21:44:38 2023 : 'file' last modified on Sat Sep 10 15:31:11 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class RHS_Backpack_Fix
	{
		units[] = {};
		requiredAddons[] = {"rhs_c_weapons","rhs_c_troops","rhsusf_c_weapons"};
		weapons[] = {};
		requiredVersion = 0.1;
	};
};
class cfgVehicles
{
	class B_AssaultPack_Base;
	class rhs_medic_bag: B_AssaultPack_Base
	{
		maximumLoad = 200;
	};
	class rhs_rpg: B_AssaultPack_Base
	{
		maximumLoad = 280;
	};
	class rhs_sidor: B_AssaultPack_Base
	{
		maximumLoad = 220;
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class rhs_rpg7_PG7VL_mag: CA_LauncherMagazine
	{
		mass = 74.36;
	};
	class rhs_rpg7_PG7V_mag: rhs_rpg7_PG7VL_mag
	{
		mass = 62.92;
	};
	class rhs_rpg7_PG7VM_mag: rhs_rpg7_PG7V_mag
	{
		mass = 62.92;
	};
	class rhs_rpg7_PG7VS_mag: rhs_rpg7_PG7V_mag
	{
		mass = 57.2;
	};
	class rhs_rpg7_PG7VR_mag: rhs_rpg7_PG7VL_mag
	{
		mass = 128.7;
	};
	class rhs_rpg7_TBG7V_mag: rhs_rpg7_PG7VL_mag
	{
		mass = 128.7;
	};
	class rhs_rpg7_OG7V_mag: rhs_rpg7_PG7VL_mag
	{
		mass = 57.2;
	};
	class rhs_rpg7_type69_airburst_mag: rhs_rpg7_PG7VL_mag
	{
		mass = 57.2;
	};
	class CA_Magazine;
	class rhsusf_50Rnd_762x51: CA_Magazine
	{};
	class rhsusf_50Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51
	{
	};
	class rhsusf_50Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51
	{
	};
	class rhsusf_50Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51
	{
	};
	class rhsusf_50Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51
	{
	};
	class rhsusf_100Rnd_762x51:rhsusf_50Rnd_762x51
	{
		mass = 65.45;
	};
	class rhsusf_100Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51_m61_ap
	{
		mass = 65.45;
	};
	class rhsusf_100Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51_m62_tracer
	{
		mass = 65.45;
	};
	class rhsusf_100Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51_m80a1epr
	{
		mass = 65.45;
	};
	class rhsusf_100Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51_m82_blank
	{
		mass = 65.45;
	};
};
