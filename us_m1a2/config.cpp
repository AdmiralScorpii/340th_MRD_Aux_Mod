class CfgPatches
{
	class RHS_M1A2_Rebalance
	{
			units[]=
		{
			"rhsusf_m1a2sep1d_usarmy",
			"rhsusf_m1a2sep1wd_usarmy",
			"rhsusf_m1a2sep1tuskid_usarmy",
			"rhsusf_m1a2sep1tuskiwd_usarmy",
			"rhsusf_m1a2sep1tuskiid_usarmy",
			"rhsusf_m1a2sep1tuskiiwd_usarmy",
			"rhsusf_m1a2sep2d_usarmy",
			"rhsusf_m1a2sep2wd_usarmy"
		};
		weapons[]={};
		requiredVersion=1.64;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_m1a1",
			"RHS_M1A1_Rebalance",
			"rhsusf_c_m1a2"
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
		armorStructural=7;
	};
	
	class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base {};
	class rhsusf_m1a2sep1d_usarmy: rhsusf_m1a2tank_base {};
	class rhsusf_m1a2sep1wd_usarmy: rhsusf_m1a2tank_base {};
	class rhsusf_m1a2sep2_base: rhsusf_m1a2tank_base {};
	class rhsusf_m1a2sep2d_usarmy: rhsusf_m1a2sep2_base	{};
	class rhsusf_m1a2sep2wd_usarmy: rhsusf_m1a2sep2_base {};
	class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base {};
	class rhsusf_m1a2sep1tuskiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy {};	 
	class rhsusf_m1a2sep1tuskiiwd_usarmy: rhsusf_m1a2sep1tuskid_usarmy {};
	class rhsusf_m1a2sep1tuskiid_usarmy: rhsusf_m1a2sep1tuskiiwd_usarmy	{};	
};