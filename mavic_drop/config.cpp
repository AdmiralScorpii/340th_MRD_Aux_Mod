class CfgPatches
{
	class DB_D37_scripts_Mavick_vogs
	{
		name = "Mavic 3 (Improved) - Grenade Drop";
		author = "Mavic 3 MOD";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3401580668";
		requiredVersion = 2.18;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder","mavik_Data"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class mavic_drop //mavic_drop_fnc_scriptsClass
	{
		file = "mavic_drop\functions";
		class functions
		{
			class initDrone{};
			class makeGrenadeDrone{};
			class dropGrenade{};
			class dynamicBlurToggle{};
			class uiGrenadeSelector{};
			class detach_uiGrenadeSelector{};
		};
	};
};

class CfgAmmo
{
	class Grenade;
	class GrenadeHand: Grenade {};
	class mini_Grenade: GrenadeHand {};
	class Mavick_Impact_M67: GrenadeHand
	{
		explosionTime = -1;
		timeToLive = 1e+10;
		mavic_weight = 400;
	};
	class Mavick_Impact_V40: mini_Grenade
	{
		explosionTime = -1;
		timeToLive = 1e+10;
		mavic_weight = 140;
	};
	class Mavick_Impact_F1: GrenadeHand
	{
		model = "\mavic_drop\f1.p3d";
		hit = 10;
		indirectHit = 6;
		indirectHitRange = 10;
		typicalspeed = 16;
		explosionEffectsRadius = 7.5;
		explosionTime = -1;
		timeToLive = 1e+10;
		mavic_weight = 600;
	};
	class Mavick_Impact_VOG25: GrenadeHand
	{
		model = "\mavic_drop\vog25.p3d";
		hit = 80;
		typicalspeed = 76;
		deflecting = 5;
		explosionTime = -1;
		timeToLive = 1e+10;
		mavic_weight = 275;
	};
	class Mavick_Impact_TBG: GrenadeHand
	{
		model = "\mavic_drop\tbg.p3d";
		hit = 40;
		indirectHit = 25;
		indirectHitRange = 4;
		typicalspeed = 70;
		deflecting = 5;
		explosionTime = -1;
		timeToLive = 1e+10;
		fuseDistance = 0;
		mavic_weight = 300;
	};
	class Mavick_Impact_M433: GrenadeHand
	{
		model = "\mavic_drop\m433.p3d";
		hit = 100;
		indirectHit = 6;
		indirectHitRange = 4;
		caliber = 3;
		
		warheadName = "HEAT";
		submunitionAmmo = "Mavick_Impact_M433_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1053;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		
		typicalSpeed = 185;
		
		deflecting = 5;
		explosionTime = -1;
		timeToLive = 1e+10;
		fuseDistance = 2;
		mavic_weight = 230;
	};
	class ammo_Penetrator_Base;
	class Mavick_Impact_M433_Penetrator: ammo_Penetrator_Base
	{
		caliber = 3.3333;
		hit = 90;
	};
};
class CfgMagazines
{
	class HandGrenade;
	class Mavick_base: HandGrenade
	{
		author = "Mavic 3 MOD";
		scope = 1;
		mass = 10;
	};
	class Mavick_M67: Mavick_base
	{
		scope = 2;
		displayName = "M67 Hand Grenade (Impact fuse)";
		displayNameShort = "M67 (Impact)";
		descriptionShort = "M67 Hand Grenade (RGO)<br/>Fuse is changed to impact for dropping from Mavic 3 Drone.";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		model = "\A3\Weapons_f\ammo\Handgrenade";
		ammo = "Mavick_Impact_M67";
	};
	class Mavick_V40: Mavick_base
	{
		scope = 2;
		displayName = "V40 Mini Grenade (Impact fuse)";
		displayNameShort = "V40 (Impact)";
		descriptionShort = "V40 Mini Grenade (RGN)<br/>Fuse is changed to impact for dropping from Mavic 3 Drone.";
		picture = "\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		model = "\A3\Weapons_f\ammo\mini_frag";
		ammo = "Mavick_Impact_V40";
		initSpeed = 26;
		mass = 6;
	};
	class Mavic_F1: Mavick_base
	{
		scope = 2;
		displayName = "F1 Hand Grenade (Impact fuse)";
		displayNameShort = "F1 (Impact)";
		descriptionShort = "F1 Hand Grenade<br/>Fuse is changed to impact for dropping from Mavic 3 Drone.";
		picture = "\mavic_drop\pictures\f1.paa";
		model = "\mavic_drop\f1.p3d";
		ammo = "Mavick_Impact_F1";
	};
	class Mavic_VOG25: Mavick_base
	{
		scope = 2;
		displayName = "VOG-25 40mm HE";
		displayNameShort = "VOG-25";
		descriptionShort = "VOG-25 40mm Grenade<br/>Modified to be mounted on a Mavic Drone.";
		picture = "\mavic_drop\pictures\vog25.paa";
		model = "\mavic_drop\vog25.p3d";
		ammo = "Mavick_Impact_VOG25";
		initSpeed = 26;
		mass = 4;
	};
	class Mavic_TBG: Mavick_base
	{
		scope = 2;
		displayName = "VG-40TB 40mm Thermobaric";
		displayNameShort = "VG-40TB";
		descriptionShort = "VG-40TB 40mm Thermobaric Grenade<br/>Modified to be mounted on a Mavic Drone.";
		picture = "\mavic_drop\pictures\tbg.paa";
		model = "\mavic_drop\tbg.p3d";
		ammo = "Mavick_Impact_TBG";
		initSpeed = 26;
		mass = 4;
	};
	class Mavic_M433: Mavick_base
	{
		scope = 2;
		displayName = "M433 40mm HEDP";
		displayNameShort = "M433 HEDP";
		descriptionShort = "M433 40mm HEDP Grenade<br/>Modified to be mounted on a Mavic Drone.";
		picture = "\mavic_drop\pictures\m433.paa";
		model = "\mavic_drop\m433.p3d";
		ammo = "Mavick_Impact_M433";
		initSpeed = 26;
		mass = 4;
	};
};

class CfgWeapons
{
	class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		Muzzles[] += {"Mavick_M67_Muzzle","Mavick_V40_Muzzle","Mavic_F1_Muzzle","Mavic_VOG25_Muzzle","Mavic_TBG_Muzzle","Mavic_M433_Muzzle"};
		class ThrowMuzzle: GrenadeLauncher {};
		class Mavick_M67_Muzzle: ThrowMuzzle
		{
			magazines[] = {"Mavick_M67"};
		};
		class Mavick_V40_Muzzle: ThrowMuzzle
		{
			magazines[] = {"Mavick_V40"};
		};
		class Mavic_F1_Muzzle: ThrowMuzzle
		{
			magazines[] = {"Mavic_F1"};
		};
		class Mavic_VOG25_Muzzle: ThrowMuzzle
		{
			magazines[] = {"Mavic_VOG25"};
		};
		class Mavic_TBG_Muzzle: ThrowMuzzle
		{
			magazines[] = {"Mavic_TBG"};
		};
		class Mavic_M433_Muzzle: ThrowMuzzle
		{
			magazines[] = {"Mavic_M433"};
		};
	};
};
