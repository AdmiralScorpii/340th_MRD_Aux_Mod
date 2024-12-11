class CfgPatches
{
	class M10_booker_c_lk
	{
		requiredAddons[]=
		{
			"M10_booker_lk",
			"M10_booker_c_lk"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_LT_M10",
			"usarmy_LT_M10",
			"usarmy_LT_M10_WD"
		};
		weapons[]=
		{
			"lk_weap_xm35"
		};
	};
};

class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
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
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner;
					};
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
			class HitFuel;
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
	
	class LT_M10_base: Tank_F 
	{
		armor=300;
		armorStructural=3.33;	
		class HitPoints: HitPoints	
		{
			class HitAmmoHull
			{
				name="Hit_AmmoHull";
				armorComponent="Hit_AmmoHull";
				armor=-50;
				material=-1;
				passThrough=0;
				minimalHit=0.08;
				explosionShielding=0;
				radius=0.50000001;
			};
			class HitAmmo
			{
				name="Hit_Ammo";
				armorComponent="Hit_AmmoTurret";
				armor=-50;
				material=-1;
				passThrough=0;
				minimalHit=0.08;
				explosionShielding=0;
				radius=0.50000001;
			};
			class HitArmor
			{
				armor=3;
				material=-1;
				armorComponent="hit_Armor";
				name="hit_Armor_points";
				visual="Armor";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=2;
				radius=0.1;
				isTurret=0;
			};	
			class HitHull: HitHull
			{
				armor=0.80000001;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
				depends="(HitAmmo factor [0.9,1])+(HitAmmoHull factor [0.9,1])";
			};			
		};

	};
	
	class B_LT_M10: LT_M10_base {};
	class usarmy_LT_M10: B_LT_M10 {};
	class usarmy_LT_M10_WD: B_LT_M10 {};
};