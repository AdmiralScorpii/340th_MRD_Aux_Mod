class CfgPatches 
{

	class IRF_RHS {
		units[] ={};
		weapons[] = {};
		requiredAddons[] = {
			"rhs_main",
			"rhs_c_weapons",
			"rhsusf_c_heavyweapons",
			"rhsusf_main"
			};
		author = "Alegro";
		name = "IRF_RHS";
		dlc = "IRF_RHS";
		fileName = "IRF_RHS.pbo";
	};

};
class CfgMods
{
	class Mod_Base;
	class IRF_RHS {
		author = "Alegro";
		dlcColor[] = {0, 0, 0, 1};
		tooltip = "Huh";
		tooltipOwned = "Huh";
		name = "Huh";
		overview = "Huh";
		dir = "IRF_RHS";
	};
};
class CfgAmmo
{
	class Default;
	class RocketBase;
	class rhs_ammo_base_penetrator;
	class R_PG32V_F: RocketBase{};
	class rhs_rpg26_rocket: R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26_projectile";
		warheadName = "HEAT";
		submunitionAmmo = "rhs_rpg26_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 250;
		indirectHit = 10;
		indirectHitRange = 3.5;
		caliber = 0.8;
		cost = 200;
		airFriction = 0.0;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 144;
		initTime = 0.15;
		thrustTime = 0.5;
		thrust = 10;
		fuseDistance = 5;
		explosive = 0.35;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsNLAW";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	};
	class rhs_rpg26_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 45;
	};
	class rhs_rpg18_rocket: rhs_rpg26_rocket
	{
		submunitionAmmo = "rhs_rpg18_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		airFriction = 0.7;
		hit = 200;
		maxSpeed = 115;
		timeToLive = 6;
	};
	class rhs_rpg18_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 38;
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vl";
		submunitionAmmo = "rhs_rpg7v2_pg7vl_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 300;
		indirectHit = 20;
		indirectHitRange = 4;
		cost = 200;
		airfriction = 0.6;
		sideAirFriction = 0.13;
		simulationStep = 0.01;
		maxSpeed = 295;
		initTime = 0.1;
		thrustTime = 0.5;
		thrust = 180;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 6;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		airLock = 1;
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		class EventHandlers;
	};
	class rhs_rpg7v2_pg7vl_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 45;
	};
	class rhs_rpg7v2_pg7v: rhs_rpg7v2_pg7vl
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7v";
		airfriction = 0.82;
		sideAirFriction = 0.2105;
		thrustTime = 0.69;
		thrust = 195;
		submunitionAmmo = "rhs_rpg7v2_pg7v_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7v_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 38;
	};
	class rhs_rpg7v2_pg7vm: rhs_rpg7v2_pg7v
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vm";
		airfriction = 0.87;
		sideAirFriction = 0.175;
		submunitionAmmo = "rhs_rpg7v2_pg7vm_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7vm_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 41;
	};
	class rhs_rpg7v2_pg7vs: rhs_rpg7v2_pg7vm
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vs";
		submunitionAmmo = "rhs_rpg7v2_pg7vm_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_rpg7v2_pg7vs_penetrator: rhs_ammo_base_penetrator
	{
		caliber = 45;
	};
	class rhs_rpg7v2_pg7vr: rhs_rpg7v2_pg7vl
	{
		AIAmmoUsageFlags = "128+512";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7vr";
		warheadName = "TandemHEAT";
		submunitionAmmo = "rhs_rpg7v2_pg7vr_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 700;
		indirectHit = 20;
		indirectHitRange = 3.8;
		cost = 300;
		maxSpeed = 110;
		initTime = 0.15;
		airfriction = 0.9;
		sideAirFriction = 0.1;
		thrust = 120;
		fuseDistance = 5;
		timeToLive = 6;
		airLock = 1;
	};
	class rhs_rpg7v2_pg7vr_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		caliber = 90;
	};
	class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128+256";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\tbg7v";
		hit = 200;
		indirectHit = 65;
		indirectHitRange = 25;
		cost = 100;
		maxSpeed = 110;
		initTime = 0.15;
		airfriction = 0.55;
		sideAirFriction = 0.055;
		thrust = 120;
		explosive = 1;
		allowAgainstInfantry = 1;
		timeToLive = 60;
		CraterEffects = "ArtyShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		explosionEffects = "RHS_FAE_Explosion";
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 227.905;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.23853;
			duration = 2;
			frequency = 20;
			distance = 83.9047;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		submunitionConeAngle[] = {120,220};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone",15};
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = -1;
		triggerOnImpact = 1;
	};
	class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128+256";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\og7v";
		submunitionAmmo = "";
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 15;
		cost = 100;
		initTime = 0.0;
		thrust = 0;
		thrustTime = 0;
		airfriction = 0.25;
		sideAirFriction = 0.009;
		fuseDistance = 5;
		explosive = 1;
		allowAgainstInfantry = 1;
		timeToLive = 60;
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 231.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.5,25};
	};
	class rhs_rpg7v2_type63_airburst: rhs_rpg7v2_og7v
	{
		warheadName = "HE";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\Type69";
		hit = 67;
		indirectHit = 22;
		indirectHitRange = 15;
		cost = 100;
		airfriction = 0.6;
		sideAirFriction = 0.1;
		maxSpeed = 295;
		initTime = 0.1;
		thrustTime = 0.5;
		thrust = 180;
		timeToLive = 8;
		deflecting = 0.999999;
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
		class EventHandlers: EventHandlers
		{
			class RHS_Airburst
			{
				fired = "_this call RHS_fnc_rpg_airburst";
			};
		};
	};
	class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v
	{
		warheadName = "HE";
		AIAmmoUsageFlags = "64+128";
		hit = 85;
		indirectHit = 55;
		indirectHitRange = 12;
		caliber = 1;
		airFriction = 0.75;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		timeToLive = 20;
		effectsMissileInit = "RocketBackEffectsNLAW";
		maxSpeed = 144;
		initTime = 0.01;
		thrustTime = 0.1;
		thrust = 50;
		model = "\rhsafrf\addons\rhs_weapons\rpg26\rshg2_projectile";
		submunitionConeAngle[] = {120,220};
		submunitionConeAngleHorizontal = 720;
		submunitionAutoleveling = 1;
		submunitionConeType[] = {"randomupcone",15};
		submunitionAmmo = "rhs_ammo_thermobaric_wave";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = -1;
		triggerOnImpact = 1;
	};
	class rhsusf_ammo_basic_penetrator;
	class rhs_ammo_M136_rocket: RocketBase
	{
		submunitionAmmo = "rhs_ammo_M136_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model = "\rhsusf\addons\rhsusf_weapons2\M136\at4_rocket";
		hit = 250;
		indirectHit = 11;
		indirectHitRange = 4.1;
		cost = 200;
		explosive = 0.65;
		caliber = 0.8;
		airFriction = 0.0;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 219;
		initTime = 0.1;
		thrustTime = 0.0;
		thrust = 10;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 12;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
	};
	class rhs_ammo_M136_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 45;
	};
	class rhs_ammo_M136_hp_rocket: rhs_ammo_M136_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 250;
	};
	class rhs_ammo_M136_hp_penetrator: rhs_ammo_M136_penetrator
	{
		caliber = 50;
	};
	class rhs_ammo_M136_hedp_rocket: rhs_ammo_M136_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hedp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 250;
		indirectHit = 31;
		indirectHitRange = 6.1;
		cost = 200;
		explosive = 0.65;
	};
	class rhs_ammo_M136_hedp_penetrator: rhs_ammo_M136_penetrator
	{
		hit = 235;
		caliber = 30;
	};
	class rhs_ammo_m72a7_rocket: rhs_ammo_M136_hedp_rocket
	{
		submunitionAmmo = "rhs_ammo_M136_hedp_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 145;
		indirectHit = 19;
	};
	class rhs_ammo_maaws_HEAT: RocketBase
	{
		submunitionAmmo = "rhs_ammo_maaws_HEAT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.65;
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 300;
		indirectHit = 15;
		indirectHitRange = 3.1;
		caliber = 0.8;
		cost = 800;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 290;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
		warheadName = "TandemHEAT";
	};
	class rhs_ammo_maaws_HEAT_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 50;
		warheadName = "TandemHEAT";
	};
	class rhs_ammo_maaws_HEDP: RocketBase
	{
		submunitionAmmo = "rhs_ammo_maaws_HEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		explosive = 0.65;
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 300;
		indirectHit = 45;
		indirectHitRange = 5.1;
		cost = 500;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 230;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_HEDP_penetrator: rhs_ammo_M136_penetrator
	{
		caliber = 35;
	};
	class rhs_ammo_maaws_HE: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 75;
		indirectHit = 65;
		indirectHitRange = 11;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 15;
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_SMOKE: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 2;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExplosionEffects";
		effectsSmoke = "SmokeShellWhite";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_maaws_ILLUM: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.51189,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.51189,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.51189,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,1.1,900};
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 1;
		cost = 300;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 255;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExplosionEffects";
		effectFlare = "FlareShell";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
		visibleFire = 15;
		audibleFire = 20;
	};
	class rhs_ammo_smaw_HEAA: RocketBase
	{
		submunitionAmmo = "rhs_ammo_smaw_HEAA_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		EffectFly = "ArtilleryTrails";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04",10.0,1,1200};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6",5.6234136,1,35};
		model = "rhsusf\addons\rhsusf_weapons2\smaw\rocket_smaw.p3d";
		hit = 450;
		indirectHit = 11;
		indirectHitRange = 3.1;
		explosive = 0.65;
		cost = 800;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 220;
		initTime = 0.01;
		thrustTime = 10;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_backblast";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_smaw_HEAA_penetrator: rhsusf_ammo_basic_penetrator
	{
		caliber = 55;
	};
	class rhs_ammo_smaw_HEDP: RocketBase
	{
		submunitionAmmo = "rhs_ammo_smaw_HEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1700;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		EffectFly = "ArtilleryTrails";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_04",10.0,1,1200};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_6",5.6234136,1,35};
		model = "rhsusf\addons\rhsusf_weapons2\smaw\rocket_smaw.p3d";
		hit = 250;
		indirectHit = 51;
		indirectHitRange = 6.7;
		explosive = 0.65;
		cost = 500;
		airFriction = 0.01;
		sideAirFriction = 0.0;
		maxSpeed = 220;
		initTime = 0.01;
		thrustTime = 10;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_backblast";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
	class rhs_ammo_smaw_HEDP_penetrator: rhs_ammo_M136_penetrator
	{
		hit = 335;
		caliber = 45;
	};
	class rhs_ammo_smaw_SR: RocketBase
	{
		explosive = 0.0;
		soundHit[] = {"\a3\sounds_f\weapons\hits\plastic_4.wss",0.70794576,1,20};
		audibleFire = 3.0;
		caliber = 0.01;
		model = "rhsusf\addons\rhsusf_weapons2\smaw\tracer_smaw.p3d";
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 500;
		airFriction = 0.0;
		sideAirFriction = 0.02;
		maxSpeed = 220;
		initTime = 0.5;
		thrustTime = 0.0;
		thrust = 0;
		fuseDistance = 15;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "RHSUSF_SMAW_cartrige";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(5^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.1;
			duration = 0.2;
			frequency = 8;
			distance = 1;
		};
	};
};
