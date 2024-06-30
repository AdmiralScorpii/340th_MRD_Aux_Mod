class CfgPatches
{
	class RHS_M2A3_Rebalance
	{
			units[]=
		{
			"RHS_M2A2",
			"RHS_M2A2_BUSKI",
			"RHS_M2A3",
			"RHS_M2A3_BUSKI",
			"RHS_M2A3_BUSKIII",
			"RHS_M6",
			"RHS_M2A2_wd",
			"RHS_M2A2_BUSKI_wd",
			"RHS_M2A3_wd",
			"RHS_M2A3_BUSKI_wd",
			"RHS_M2A3_BUSKIII_wd",
			"RHS_M6_wd"
		};
		weapons[]={};
		requiredVersion=1.83;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_troops",
			"rhsusf_c_heavyweapons"
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
		class CommanderOptics;
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
		class EventHandlers;
	};
	class APC_Tracked_03_base_F: Tank_F
	{
	};
	class RHS_M2A2_Base: APC_Tracked_03_base_F
	{
		armorStructural=5.5;
	};
	class RHS_M2A2: RHS_M2A2_Base {};
	class RHS_M2A2_early: RHS_M2A2 {};
	class RHS_M2A2_BUSKI: RHS_M2A2 {};
	class RHS_M2A3: RHS_M2A2 {};
	class RHS_M2A3_BUSKI: RHS_M2A3 {};	 
	class RHS_M2A3_BUSKIII: RHS_M2A3_BUSKI {};
	class RHS_M2A3_BUSKIII_wd: RHS_M2A3_BUSKIII	{};
	class RHS_M6: RHS_M2A2_Base {};
	class RHS_M2A2_wd: RHS_M2A2	{};	
	class RHS_M2A2_BUSKI_WD: RHS_M2A2_BUSKI {};
	class RHS_M2A3_BUSKI_wd: RHS_M2A3_BUSKI	{};
	class RHS_M2A3_wd: RHS_M2A3 {};
	class RHS_M6_wd: RHS_M6 {};
};
	
	