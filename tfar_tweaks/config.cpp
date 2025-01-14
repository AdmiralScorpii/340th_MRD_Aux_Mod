class CfgPatches
{
	class RHS_Add_TFAR_to_BTR
	{
			units[]=
		{
			"rhs_btr70_vmf",
			"rhs_btr70_vdv",
			"rhs_btr70_vv",
			"rhs_btr70_msv",
			"rhs_btr80_msv",
			"rhs_btr80_vdv",
			"rhs_btr80_vv",
			"rhs_btr80_vmf",
			"rhs_btr80a_msv",
			"rhs_btr80a_vdv",
			"rhs_btr80a_vv",
			"rhs_btr80a_vmf",
			"rhs_bmp1_vdv",
			"rhs_bmp1p_vdv",
			"rhs_bmp1k_vdv",
			"rhs_bmp1d_vdv",
			"rhs_bmp1_msv",
			"rhs_bmp1p_msv",
			"rhs_bmp1k_msv",
			"rhs_bmp1d_msv",
			"rhs_bmp1_tv",
			"rhs_bmp1p_tv",
			"rhs_bmp1k_tv",
			"rhs_bmp1d_tv",
			"rhs_bmp1_vv",
			"rhs_bmp1p_vv",
			"rhs_bmp1k_vv",
			"rhs_bmp1d_vv",
			"rhs_bmp1_vmf",
			"rhs_bmp1p_vmf",
			"rhs_bmp1k_vmf",
			"rhs_bmp1d_vmf",
			"rhs_brm1k_vdv",
			"rhs_brm1k_msv",
			"rhs_brm1k_tv",
			"rhs_brm1k_vv",
			"rhs_prp3_msv",
			"rhs_prp3_vdv",
			"rhs_prp3_tv",
			"rhs_prp3_vv",
			"rhs_bmp2_vmf",
			"rhs_bmp2e_vmf",
			"rhs_bmp2k_vmf",
			"rhs_bmp2d_vmf",
			"rhs_bmp2_msv",
			"rhs_bmp2e_msv",
			"rhs_bmp2k_msv",
			"rhs_bmp2d_msv",
			"rhs_bmp2_tv",
			"rhs_bmp2e_tv",
			"rhs_bmp2k_tv",
			"rhs_bmp2d_tv",
			"rhs_bmp2_vdv",
			"rhs_bmp2e_vdv",
			"rhs_bmp2k_vdv",
			"rhs_bmp2d_vdv",
			"rhs_bmp2_vv",
			"rhs_bmp2e_vv",
			"rhs_bmp2k_vv",
			"rhs_bmp2d_vv",
			"rhs_Ob_681_2",
			"rhs_bmp1tank_base"
		};
		weapons[]={};
		requiredVersion=1.3200001;
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_c_heavyweapons",
			"rhs_decals",
			"rhs_optics",
			"rhs_c_troops",
			"rhs_c_btr",
			"rhs_c_bmp",
			"mkk_BMP_2M"
		};
		name="340th MRD RHSAFRF BTR TFAR";
		author="Scorpii";		
	};
};

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class ViewPilot;
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CommanderOptics;
		class Components;
	};
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
				class ViewGunner;
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
	
	class rhs_btr_base: Wheeled_APC_F
	{
		TFAR_AdditionalLR_Turret[] = {{1},{11}};
	};
	
	class rhs_bmp1tank_base: Tank_F	
	{
		TFAR_AdditionalLR_Turret[] = {{0,0}};
	};	
	
	class rhs_bmp_base: rhs_bmp1tank_base {};		
	class rhs_bmp1_vdv: rhs_bmp_base {};		
	class rhs_bmp1_tv: rhs_bmp1_vdv	{};	
	class rhs_bmp1_msv: rhs_bmp1_vdv {};	
	class rhs_bmp1_vmf: rhs_bmp1_vdv {};		
	class rhs_bmp1_vv: rhs_bmp1_vdv	{};		
	class rhs_bmp1p_vdv: rhs_bmp1_vdv {};		
	class rhs_bmp1p_tv: rhs_bmp1p_vdv {};		
	class rhs_bmp1p_msv: rhs_bmp1p_vdv {};	
	class rhs_bmp1p_vmf: rhs_bmp1p_vdv {};		
	class rhs_bmp1p_vv: rhs_bmp1p_vdv {};	
	class rhs_bmp1k_vdv: rhs_bmp1_vdv {};		
	class rhs_bmp1k_tv: rhs_bmp1k_vdv {};		
	class rhs_bmp1k_msv: rhs_bmp1k_vdv {};		
	class rhs_bmp1k_vmf: rhs_bmp1k_vdv {};		
	class rhs_bmp1k_vv: rhs_bmp1k_vdv {};		
	class rhs_bmp1d_vdv: rhs_bmp1_vdv {};		
	class rhs_bmp1d_tv: rhs_bmp1d_vdv {};			
	class rhs_bmp1d_msv: rhs_bmp1d_vdv {};		
	class rhs_bmp1d_vmf: rhs_bmp1d_vdv {};		
	class rhs_bmp1d_vv: rhs_bmp1d_vdv {};	
	class rhs_prp3_vdv: rhs_bmp1_vdv {};	
	class rhs_prp3_tv: rhs_prp3_vdv	{};		
	class rhs_prp3_msv: rhs_prp3_vdv {};		
	class rhs_prp3_vmf: rhs_prp3_vdv {};	
	class rhs_prp3_vv: rhs_prp3_vdv	{};	
	class rhs_bmp2e_vdv: rhs_bmp1_vdv {};		
	class rhs_bmp2e_tv: rhs_bmp2e_vdv {};		
	class rhs_bmp2e_msv: rhs_bmp2e_vdv {};		
	class rhs_bmp2e_vmf: rhs_bmp2e_vdv {};		
	class rhs_bmp2e_vv: rhs_bmp2e_vdv {};	
	class rhs_bmp2_vdv: rhs_bmp2e_vdv {};		
	class rhs_bmp2_tv: rhs_bmp2_vdv	{};			
	class rhs_bmp2_msv: rhs_bmp2_vdv {};		
	class rhs_bmp2_vmf: rhs_bmp2_vdv {};		
	class rhs_bmp2_vv: rhs_bmp2_vdv	{};		
	class rhs_bmp2k_vdv: rhs_bmp2_vdv {};		
	class rhs_bmp2k_tv: rhs_bmp2k_vdv {};			
	class rhs_bmp2k_msv: rhs_bmp2k_vdv {};			
	class rhs_bmp2k_vmf: rhs_bmp2k_vdv {};		
	class rhs_bmp2k_vv: rhs_bmp2k_vdv {};		
	class rhs_bmp2d_vdv: rhs_bmp2_vdv {};		
	class rhs_bmp2d_tv: rhs_bmp2d_vdv {};	
	class rhs_bmp2d_msv: rhs_bmp2d_vdv	{};	
	class rhs_bmp2d_vmf: rhs_bmp2d_vdv {};	
	class rhs_bmp2d_vv: rhs_bmp2d_vdv {};	
	class rhs_Ob_681_2: rhs_bmp2e_msv	{};	
	class rhs_brm1k_base: rhs_bmp2e_vdv	{};	
	class rhs_brm1k_vdv: rhs_brm1k_base	{};	
	class rhs_brm1k_tv: rhs_brm1k_vdv {};		
	class rhs_brm1k_msv: rhs_brm1k_vdv {};		
	class rhs_brm1k_vmf: rhs_brm1k_vdv {};		
	class rhs_brm1k_vv: rhs_brm1k_vdv {};	
	class BMP_2M_base_Tank_F: Tank_F 
	{
		TFAR_AdditionalLR_Turret[] = {{0,0}};	
	};
	
	class rhs_btr70_vmf: rhs_btr_base {};
	class rhs_btr70_vdv: rhs_btr70_vmf {};
	class rhs_btr70_vv: rhs_btr70_vmf {};
	class rhs_btr70_msv: rhs_btr70_vmf {};
	class rhs_btr80_msv: rhs_btr70_msv {};
	class rhs_btr80_vdv: rhs_btr80_msv {};
	class rhs_btr80_vv: rhs_btr80_msv {};
	class rhs_btr80_vmf: rhs_btr80_msv {};
	class rhs_btr80a_msv: rhs_btr80_msv {};
	class rhs_btr80a_vmf: rhs_btr80a_msv {};
	class rhs_btr80a_vdv: rhs_btr80a_msv {};
	class rhs_btr80a_vv: rhs_btr80a_msv {};
	class rhs_btr82_msv: rhs_btr80_msv {};
	class rhs_btr82_vdv: rhs_btr82_msv {};
	class rhs_btr82_vv: rhs_btr82_msv {};
	class rhs_btr82_vmf: rhs_btr82_msv {};
	class rhs_btr82a_msv: rhs_btr80a_msv {};
	class rhs_btr82a_vdv: rhs_btr82a_msv {};
	class rhs_btr82a_vv: rhs_btr82a_msv {};
	class rhs_btr82a_vmf: rhs_btr82a_msv {};
};

