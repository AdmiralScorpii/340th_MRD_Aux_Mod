class CfgPatches
{
	class RHS_T72_and_T90_Rebalance
	{
			units[]=
		{
			"rhs_t72ba_tv",
			"rhs_t72bb_tv",
			"rhs_t72bc_tv",
			"rhs_t72bd_tv",
			"rhs_t72be_tv",
			"rhs_t90_tv",
			"rhs_t90a_tv",
			"rhs_t90saa_tv",
			"rhs_t90sab_tv",
			"rhs_t90am_tv",
			"rhs_t90sm_tv",
			"rhs_a3t72tank_base"
		};
		weapons[]={};
		requiredVersion=1.64;
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_c_heavyweapons",
			"rhs_decals",
			"rhs_optics",
			"rhs_c_troops",
			"rhs_aps",
			"rhs_c_t72"
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
	class rhs_a3t72tank_base: Tank_F	
	{
		armorStructural=5;
	};
	class rhs_t72ba_tv: rhs_a3t72tank_base {};		
	class rhs_t72bb_tv: rhs_a3t72tank_base {};		
	class rhs_t72bc_tv: rhs_a3t72tank_base {};	
	class rhs_t72bd_tv: rhs_a3t72tank_base {};	
	class rhs_t72be_tv: rhs_t72bd_tv {};			
	class rhs_t90_tv: rhs_t72bd_tv {};		
	class rhs_t90a_tv: rhs_t90_tv {};			
	class rhs_t90saa_tv: rhs_t90a_tv {};		
	class rhs_t90sab_tv: rhs_t90a_tv {};			
	class rhs_t90am_tv: rhs_t90_tv {};		
	class rhs_t90sm_tv: rhs_t90am_tv {};		
};	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	