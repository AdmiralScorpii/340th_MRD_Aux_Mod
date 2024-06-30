class CfgPatches
{
	class RHS_M1A1_Rebalance
	{
			units[]=
		{
			"rhsusf_m1a1tank_base",
			"rhsusf_m1a1aimwd_usarmy",
			"rhsusf_m1a1aimd_usarmy",
			"rhsusf_m1a1aim_tuski_wd",
			"rhsusf_m1a1aim_tuski_d",
			"rhsusf_m1a1hc_wd",
			"rhsusf_m1a1fep_wd",
			"rhsusf_m1a1fep_d",
			"rhsusf_m1a1fep_od"
		};
		weapons[]={};
		requiredVersion=1.64;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_troops",
			"rhsusf_c_heavyweapons",
			"rhsusf_c_m1a1"
		};
		name="340th MRD RHSUSAF Vehicle Armor Rebalanced";
		author="Scorpii";		
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class MBT_01_base_F: Tank_F
	{
		class EventHandlers;
	};
	
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		armorStructural=6;
	};
	
	class rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1tank_base {};
	class rhsusf_m1a1aimd_usarmy: rhsusf_m1a1tank_base {};
	class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base	{};
	class rhsusf_m1a1aim_tuski_d: rhsusf_m1a1aim_tuski_wd {};	
	class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base {};	
	class rhsusf_m1a1fep_wd: rhsusf_m1a1tank_base {};	
	class rhsusf_m1a1fep_od: rhsusf_m1a1tank_base {};
	class rhsusf_m1a1hc_wd: rhsusf_m1a1tank_base {};
};