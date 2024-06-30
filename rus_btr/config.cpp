class CfgPatches
{
	class RHS_BTR_Rebalance
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
			"rhs_btr80a_vmf"
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
			"RHS_BTR_82_Config"
		};
		name="340th MRD RHSUSAF Vehicle Armor Rebalanced";
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
	class rhs_btr_base: Wheeled_APC_F
	{
		armor=75;
		armorStructural=0.2;
		TFAR_AdditionalLR_Turret[] = {{1},{11}};
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	