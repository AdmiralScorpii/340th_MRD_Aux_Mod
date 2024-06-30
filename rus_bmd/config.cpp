class CfgPatches
{
	class RHS_BMD_Rebalance
	{
			units[]=
		{
			"rhs_bmd1",
			"rhs_bmd1k",
			"rhs_bmd1p",
			"rhs_bmd1pk",
			"rhs_bmd1r",
			"rhs_bmd2",
			"rhs_bmd2k",
			"rhs_bmd2m",
			"rhs_bmd_base",
			"rhs_sprut_vdv",
			"rhs_bmd4_vdv",
			"rhs_bmd4m_vdv",
			"rhs_bmd4ma_vdv",
			"rhs_a3spruttank_base"
		};
		weapons[]={};
		requiredVersion=1.42;
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_c_heavyweapons",
			"rhs_decals",
			"rhs_optics",
			"rhs_c_troops",
			"rhs_c_bmd",
			"rhs_c_sprut"
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
	class rhs_bmd_base: Tank_F
	{
		armorStructural=0.35;
		TFAR_AdditionalLR_Turret[] = {{1}};
	};		
	class rhs_bmd2_base: rhs_bmd_base {};			
	class rhs_bmd1_base: rhs_bmd_base {};		
	class rhs_bmd1: rhs_bmd1_base {};		
	class rhs_bmd1k: rhs_bmd1_base {};			
	class rhs_bmd1p: rhs_bmd1_base {};		
	class rhs_bmd1pk: rhs_bmd1_base	{};
	class rhs_bmd1r: rhs_bmd1_base {};		
	class rhs_bmd2: rhs_bmd2_base {};	
	class rhs_bmd2m: rhs_bmd2 {};	
	class rhs_bmd2k: rhs_bmd2 {};		
	class rhs_a3spruttank_base: Tank_F	
	{
		armorStructural=0.35;
	};
	class rhs_sprut_vdv: rhs_a3spruttank_base {};	
	class rhs_bmd4_vdv: rhs_a3spruttank_base 
	{
		TFAR_AdditionalLR_Turret[] = {{0,0}};		
	};	
	class rhs_bmd4m_vdv: rhs_bmd4_vdv {};			
	class rhs_bmd4ma_vdv: rhs_bmd4m_vdv	{};
};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	