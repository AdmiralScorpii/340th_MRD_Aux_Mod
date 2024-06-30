class CfgPatches
{
	class RHS_T80_Rebalance
	{
			units[]=
		{
			"rhs_t80",
			"rhs_t80b",
			"rhs_t80bk",
			"rhs_t80bv",
			"rhs_t80bvk",
			"rhs_t80a",
			"rhs_t80u",
			"rhs_t80uk",
			"rhs_t80ue1",
			"rhs_t80um",
			"rhs_t80u45m"
		};
		weapons[]={};
		requiredVersion=1.64;
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_decals",
			"rhs_c_heavyweapons",
			"rhs_c_troops",
			"rhs_c_tanks"
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
		class EventHandlers;
		class Components;
	};
	class rhs_tank_base: Tank_F	
	{
		armorStructural=5;
	};
	class rhs_t80b: rhs_tank_base {};	
	class rhs_t80bk: rhs_t80b {};	
	class rhs_t80bv: rhs_t80b {};	
	class rhs_t80bvk: rhs_t80bv	{};	
	class rhs_t80: rhs_t80b {};		
	class rhs_t80a: rhs_t80bv {};	
	class rhs_t80u: rhs_t80a {};			
	class rhs_t80uk: rhs_t80u {};		
	class rhs_t80u45m: rhs_t80u	{};		
	class rhs_t80ue1: rhs_t80a {};	
	class rhs_t80um: rhs_t80u {};	
};	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	