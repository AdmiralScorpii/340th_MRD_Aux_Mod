class CfgPatches
{
	class RHS_Stryker_Rebalance
	{
			units[]=
		{
			"rhsusf_stryker_m1126_m2_wd",
			"rhsusf_stryker_m1126_m2_d",
			"rhsusf_stryker_m1126_mk19_wd",
			"rhsusf_stryker_m1126_mk19_d",
			"rhsusf_stryker_m1127_m2_wd",
			"rhsusf_stryker_m1127_m2_d",
			"rhsusf_stryker_m1132_m2_wd",
			"rhsusf_stryker_m1132_m2_d",
			"rhsusf_stryker_m1132_m2_np_d",
			"rhsusf_stryker_m1132_m2_np_wd",
			"rhsusf_stryker_m1134_wd",
			"rhsusf_stryker_m1134_d",
			"rhsusf_stryker_base"
		};
		weapons[]={};
		requiredVersion=1.83;
		requiredAddons[]=
		{
			"rhsusf_c_stryker",
			"rhsusf_stryker"
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
		class AnimationSources;
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class EventHandlers;
		class Components;
	};
	
	class rhsusf_stryker_base: Wheeled_APC_F
	{
		armorStructural=0.35;
		class HitPoints
		{
			class HitHull
			{
				armor=0.80000001;
				minimalHit=0.44;
				explosionShielding=1;
				passThrough=1;
			};
			class HitEngine
			{
				passThrough=0.3;
			};
			class HitFuel_L;
			class HitFuel_R;
			class HitFuel;
			class Hit_Light_L;
			class Hit_Light_R;
			class Hit_Optic_Driver1;
			class Hit_Optic_Driver2;
			class Hit_Optic_Driver3;
			class Hit_Optic_DVEA;
			class Hit_Optic_Driver_Rear;
			class HitLFWheel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
			};
			class HitLF2Wheel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
			};
			class HitLMWheel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
			};
			class HitLBWheel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
			};
			class HitRFWheel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
			};
			class HitRF2Wheel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
			};
			class HitRMWheel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
			};
			class HitRBWheel
			{
				armor=4;
				passThrough=0.1;
				explosionShielding=0.89999998;
			};
		};
	};		
	class rhsusf_stryker_m1126_base: rhsusf_stryker_base
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1126_mk19_base: rhsusf_stryker_m1126_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1126_m2_wd: rhsusf_stryker_m1126_m2_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1126_m2_d: rhsusf_stryker_m1126_m2_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1126_mk19_wd: rhsusf_stryker_m1126_mk19_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1126_mk19_d: rhsusf_stryker_m1126_mk19_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1127_base: rhsusf_stryker_m1126_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1127_m2_base: rhsusf_stryker_m1127_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1127_m2_wd: rhsusf_stryker_m1127_m2_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1127_m2_d: rhsusf_stryker_m1127_m2_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1132_m2_base: rhsusf_stryker_m1126_m2_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1132_m2_np_base: rhsusf_stryker_m1132_m2_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1132_m2_wd: rhsusf_stryker_m1132_m2_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1132_m2_d: rhsusf_stryker_m1132_m2_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1132_m2_np_wd: rhsusf_stryker_m1132_m2_np_base	
	{
		armorStructural=0.35;
	};		
	class rhsusf_stryker_m1132_m2_np_d: rhsusf_stryker_m1132_m2_np_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1134_base: rhsusf_stryker_m1126_m2_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1134_wd: rhsusf_stryker_m1134_base	
	{
		armorStructural=0.35;
	};	
	class rhsusf_stryker_m1134_d: rhsusf_stryker_m1134_base	
	{
		armorStructural=0.35;
	};		
};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	