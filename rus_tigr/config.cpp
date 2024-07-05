class CfgPatches
{
	class 340th_Tigr_Modifications
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.78;
		requiredAddons[]=
		{
			"rhs_c_cars"
		};
		name="340th MRD RHSAFRF Tigr Modifications";
		author="Scorpii";
	};
};

class CfgVehicles 
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class EventHandlers;
		class AnimationSources;
	};	
	class MRAP_02_base_F: Car_F
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitBody;
			class HitFuel;
			class HitEngine;
		};
		class EventHandlers;
	};
	class rhs_tigr_base: MRAP_02_base_F
	{
		armor=100;
		minTotalDamageThreshold=0.4;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
			};
			class HitLF2Wheel: HitLF2Wheel
			{
			};
			class HitRFWheel: HitRFWheel
			{
			};
			class HitRF2Wheel: HitRF2Wheel
			{
			};
			class HitSpare: HitRF2Wheel
			{
			};
			class UseSpare: HitSpare
			{
			};
			class HitHull
			{
				armor=-150;
				minimalHit=-0.5;
				passThrough=0.01;
			};
			class HitBody: HitBody
			{
				minimalHit=0.05;
				passThrough=0;
			};
			class HitFuel: HitFuel
			{
				armor=0.95;
				passThrough=0.1;
			};
			class HitEngine: HitEngine
			{
				minimalHit=0.33;
				passThrough=0;
				class DestructionEffects
				{
					class RHS_Engine_Smoke
					{
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
					};
				};
			};
			class HitGlass1: HitGlass1
			{
			};
			class HitGlass2: HitGlass1
			{
			};
			class HitGlass3: HitGlass1
			{
			};
			class HitGlass4: HitGlass1
			{
			};
			class HitGlass5: HitGlass1
			{
			};
			class HitGlass6: HitGlass1
			{
			};
			class HitGlass7: HitGlass1
			{
			};
			class HitGlass8: HitGlass1
			{
			};
			class HitGlass9: HitGlass1
			{
			};
			class HitGlass10: HitGlass1
			{
			};
		};
	};	
	class rhs_tigr_vdv: rhs_tigr_base {};
	class rhs_tigr_vmf: rhs_tigr_vdv {};
	class rhs_tigr_msv: rhs_tigr_vdv {};
	class rhs_tigr_vv: rhs_tigr_vdv {};
	class rhs_tigr_3camo_vdv: rhs_tigr_base {};
	class rhs_tigr_3camo_vmf: rhs_tigr_3camo_vdv {};
	class rhs_tigr_3camo_msv: rhs_tigr_3camo_vdv {};
	class rhs_tigr_3camo_vv: rhs_tigr_3camo_vdv {};
	class rhs_tigr_ffv_vdv: rhs_tigr_vdv {};
	class rhs_tigr_ffv_vmf: rhs_tigr_ffv_vdv {};
	class rhs_tigr_ffv_msv: rhs_tigr_ffv_vdv {};
	class rhs_tigr_ffv_vv: rhs_tigr_ffv_vdv {};
	class rhs_tigr_ffv_3camo_vdv: rhs_tigr_ffv_vdv {};
	class rhs_tigr_ffv_3camo_vmf: rhs_tigr_ffv_3camo_vdv {};
	class rhs_tigr_ffv_3camo_msv: rhs_tigr_ffv_3camo_vdv {};
	class rhs_tigr_ffv_3camo_vv: rhs_tigr_ffv_3camo_vdv {};
	class rhs_tigr_sts_vdv: rhs_tigr_vdv {};
	class rhs_tigr_sts_vmf: rhs_tigr_sts_vdv {};
	class rhs_tigr_sts_msv: rhs_tigr_sts_vdv {};
	class rhs_tigr_sts_vv: rhs_tigr_sts_vdv {};
	class rhs_tigr_sts_3camo_vdv: rhs_tigr_sts_vdv {};
	class rhs_tigr_sts_3camo_vmf: rhs_tigr_sts_3camo_vdv {};
	class rhs_tigr_sts_3camo_msv: rhs_tigr_sts_3camo_vdv {};
	class rhs_tigr_sts_3camo_vv: rhs_tigr_sts_3camo_vdv {};
	class rhs_tigr_m_vdv: rhs_tigr_vdv {};
	class rhs_tigr_m_vmf: rhs_tigr_m_vdv {};
	class rhs_tigr_m_msv: rhs_tigr_m_vdv {};
	class rhs_tigr_m_vv: rhs_tigr_m_vdv {};
	class rhs_tigr_m_3camo_vdv: rhs_tigr_m_vdv {};
	class rhs_tigr_m_3camo_vmf: rhs_tigr_m_3camo_vdv {};
	class rhs_tigr_m_3camo_msv: rhs_tigr_m_3camo_vdv {};
	class rhs_tigr_m_3camo_vv: rhs_tigr_m_3camo_vdv {};
};































































