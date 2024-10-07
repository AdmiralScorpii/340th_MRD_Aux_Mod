
class CfgPatches
{
	class BRDMfix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rhsgref_c_a2port_armor"};
		name = "BrdmFix";
		author = "Artem Alegro";
	};
};
class CfgVehicles
{
	class Wheeled_APC_F;
	class rhsgref_BRDM2: Wheeled_APC_F
	{
		class EventHandlers;
	};
	class rhsgref_BRDM2_ATGM:rhsgref_BRDM2
	{
		class EventHandlers:EventHandlers
		{
			class RHS_BRDM2_ATGM_EventHandlers
			{
				fired = "_this call rhs_fnc_brdm2_atgmFire;";
				reloaded = "_this spawn rhs_fnc_brdm2_atgmReload;";
				engine = "";
			};
		};
	};
};
