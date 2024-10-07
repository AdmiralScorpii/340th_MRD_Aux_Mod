
class CfgPatches
{
	class t15fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhs_c_t15"};
		name = "T-15fix";
		author = "Artem Alegro";
	};
};
class CfgVehicles
{
	class Tank_F;
	class rhs_t15_base: Tank_F
	{
		class EventHandlers;
	};
	class rhs_t15_tv:rhs_t15_base
	{
		class EventHandlers:EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "";
				postInit = "_this call rhs_fnc_reapplyTextures";
				deleted = "";
				killed = "";
				engine = "_this call rhs_fnc_engineCheckDamage";
			};
		};
	};
};
