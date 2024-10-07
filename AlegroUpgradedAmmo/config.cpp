////////////////////////////////////////////////////////////////////
//DeRap: rhs_c_weapons\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Fri Jul 29 22:48:16 2022 : 'file' last modified on Thu Jan 01 03:00:01 1970
////////////////////////////////////////////////////////////////////

class CfgPatches
{
	class rhs_algr_ammo
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"rhs_main","rhs_c_heavyweapons","rhs_c_weapons","rhsusf_c_heavyweapons","rhsusf_main","rhsusf_c_weapons","rhssaf_main","rhssaf_c_weapons"};
		name = "Alegro Upgraded Ammo";
		author = "Alegro";
	};
};
class CfgAmmo
{
	class ShellBase;
	class BulletBase;
	class F_40mm_White;
	class F_40mm_Green;
	class F_40mm_Red;
	class MissileBase;
	class rhs_ammo_base_penetrator;
	class B_556x45_Ball;
	class rhs_B_545x39_Ball: B_556x45_Ball
	{
		cartridge = "RHS_Cartridge_545x39";
		hit = 9; //9
		typicalSpeed = 915;
		airFriction = -0.0016564;
		caliber = 0.21; //0.216216
		deflecting = 18;
		visibleFire = 3;
		audibleFire = 7;
		nvgOnly = 0;
	};
	class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball
	{
		hit = 10; //9.3
		typicalSpeed = 880;
		airFriction = -0.001139;
		caliber = 0.27; //0.231884
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
	};
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
	{
		hit = 11; //9.5
		typicalSpeed = 880;
		airFriction = -0.001139;
		caliber = 0.65; //0.618357
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 6;
		warheadName = "AP_Level_1";
	};
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
	{
		hit = 11.5; //9.8
		typicalSpeed = 890;
		airFriction = -0.001139;
		//airFriction = -0.00085;
		caliber = 1; //0.939794
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
		warheadName = "AP_Level_2";
	};
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
	{
		hit = 12; //8
		typicalSpeed = 890;
		airFriction = -0.001139;
		//airFriction = -0.00085;
		caliber = 1.49; //1.49
		deflecting = 20;
		visibleFire = 3;
		audibleFire = 7;
		warheadName = "AP_Level_3";
	};
	class rhs_B_545x39_7U1_Ball: rhs_B_545x39_Ball
	{
		hit = 9.5;
		airFriction = -0.0006754;
		typicalSpeed = 303;
		visibleFire = 1.5;
		audibleFire = 3;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime = 0.07;
		tracerEndTime = 1;
	};
	class B_762x51_Ball;
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		cartridge = "RHS_Cartridge_762x54r";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		hit = 10.5;
		typicalSpeed = 828;
		airFriction = -0.0010922;
		caliber = 0.75;
		deflecting = 15;
		visibleFire = 4;
		audibleFire = 7;
	};
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime = 0.07;
		tracerEndTime = 3;
		hit = 10.5;
		caliber = 0.63;
	};
	class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
	{
		hit = 12;
		typicalSpeed = 823;
		airFriction = -0.000756;
		caliber = 1;
	};
	class rhs_B_762x54_7N13_Ball: rhs_B_762x54_Ball
	{
		hit = 12;		
		caliber = 1,4;
	};
	class rhs_B_762x54_7N14_Ball: rhs_B_762x54_Ball
	{
		hit = 15;
		typicalSpeed = 823;
		airFriction = -0.000756;
		caliber = 1.3;
	};
	class rhs_B_762x54_7BZ3_Ball: rhs_B_762x54_Ball
	{
		hit = 11.5;
		typicalSpeed = 808;
		caliber = 1.3;
		warheadName = "API_Level_2";
	};
	class rhs_B_762x54_7N26_Ball: rhs_B_762x54_Ball
	{
		hit = 11.5;
		typicalSpeed = 835;
		caliber = 1.55;
		warheadName = "AP_Level_3";
	};
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		cartridge = "RHS_Cartridge_762x39";
		hit = 10; // 10
		typicalSpeed = 718;
		airFriction = -0.0016519;
		caliber = 0.65; //0.55
		deflecting = 15;
		visibleFire = 3;
		audibleFire = 6;
	};
	class rhs_B_762x39_Ball_89: rhs_B_762x39_Ball
	{
		hit = 11; // 10
		caliber = 1; //0.928505
	};
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime = 0.05;
		tracerEndTime = 3;
	};
	class rhs_B_762x39_U_Ball: rhs_B_762x39_Ball
	{
		hit = 10; // 10
		caliber = 0.43; //0.928505
		typicalSpeed = 293;
		airFriction = -0.001152804;
		visibleFire = 1.5;
		audibleFire = 3;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class rhs_B_9x39_SP5: rhs_B_762x39_Ball
	{
		cartridge = "FxCartridge_9mm";
		hit = 10.5; //9.5;
		typicalSpeed = 295;
		airFriction = -0.00052;
		visibleFire = 1.25;
		audibleFire = 2.5;
		suppressionRadiusBulletClose = 3;
		suppressionRadiusHit = 5;
		deflecting = 21;
		caliber = 0.6; //0.222222
	};
	class rhs_B_9x39_SP6: rhs_B_9x39_SP5
	{
		hit = 12; //11.3
		indirectHit = 0;
		indirectHitRange = 0;
		deflecting = 5;
		caliber = 1; //0.952381
	};
	class G_40mm_HE;
	class rhs_g_vog25: G_40mm_HE
	{
	};
	class rhs_g_vog25p_explosion: rhs_g_vog25
	{
		explosionTime = 0.0001;
		fuseDistance = 0;
	};
	class rhs_g_vg40sz: rhs_g_vog25
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;
		fuseDistance = 2;
		explosionTime = 3;
		ExplosionEffects = "RHS_flashbang_10";
	};
	class rhs_g_gdm40: rhs_g_vog25
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
	};
	class B_9x21_Ball;
	class rhs_B_9x19_7N21: B_9x21_Ball
	{
		hit = 7.5;
		typicalSpeed = 393.192;
		airFriction = -0.0017671455;
		caliber = 0.19;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x19_7N31: rhs_B_9x19_7N21
	{
		hit = 8;
		typicalSpeed = 600;
		airFriction = -0.0017671455;
		caliber = 0.35;
		deflecting = 17;
	};
	class rhs_B_9x18_57N181S: B_9x21_Ball
	{
		hit = 7;
		typicalSpeed = 272;
		airFriction = -0.0017671455;
		caliber = 0.15;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x21_7N28: B_9x21_Ball
	{
		hit = 8;
		caliber = 0.2;
		typicalSpeed = 410;
		airFriction = -0.0017671455;
		deflecting = 17;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x21_7N29: B_9x21_Ball
	{
		hit = 8.5;
		caliber = 0.23;
		typicalSpeed = 410;
		airFriction = -0.0017671455;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class rhs_B_9x21_7BT3: B_9x21_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		hit = 8.5;
		caliber = 0.23;
		typicalSpeed = 410;
		airFriction = -0.0017671455;
		deflecting = 37;
		visibleFire = 2.8;
		audibleFire = 5.65;
	};
	class GrenadeHand;
	class rhs_ammo_rgd5: GrenadeHand
	{
	};
	class rhs_ammo_rgn: rhs_ammo_rgd5
	{
		model = "\rhsafrf\addons\rhs_weapons2\rgno\rgn_thrown";
		indirectHitRange = 6;
		timeToLive = 4;
		rhs_submunition = "rhs_ammo_rgn_impact";
		rhs_fuseTime[] = {1,1.3,1.8};
		rhs_selfDestructTime[] = {3.2,3.6,4.2};
	};
	class SmokeShell;
	class rhs_ammo_rdg2_white: SmokeShell
	{
		model = "\rhsafrf\addons\rhs_weapons\grenades\rdg2_white";
		effectsSmoke = "RHS_SmokeShell";
	};
	class rhs_ammo_rdg2_black: rhs_ammo_rdg2_white
	{
		smokeColor[] = {0,0,0,1};
		model = "\rhsafrf\addons\rhs_weapons\grenades\rdg2_black";
		effectsSmoke = "RHS_SmokeShell";
	};
	class rhs_ammo_fakel: GrenadeHand
	{
		hit = 0.1;
		indirectHit = 1;
		indirectHitRange = 8;
		ExplosionEffects = "RHS_flashbang_20";
		craterEffects = "RHS_flashbang_Crater";
		explosionTime = 2.5;
		cost = 10;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_fakel_s";
	};
	class rhs_ammo_fakels: rhs_ammo_fakel
	{
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 10;
		ExplosionEffects = "RHS_flashbang_10";
		explosionTime = 3;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_fakel";
	};
	class rhs_ammo_zarya2: rhs_ammo_fakels
	{
		ExplosionEffects = "RHS_flashbang_15";
		explosionTime = 4;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_zarya";
	};
	class rhs_ammo_plamyam: rhs_ammo_fakels
	{
		ExplosionEffects = "RHS_flashbang_15";
		explosionTime = 1.5;
		model = "\rhsafrf\addons\rhs_weapons\grenades\throw\acc_plamyaM";
	};
	class B_762x54_Ball;
	class rhsusf_B_300winmag: B_762x54_Ball
	{
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		cartridge = "";
		rhs_cartridge = "\A3\Weapons_F_Mark\Ammo\cartridge_338_LM";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		hit = 16;
		typicalSpeed = 890;
		airFriction = -0.00060841;
		caliber = 1.3;
	};
	class B_127x99_Ball;
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		hit = 21;
		indirectHit = 0.0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.000617;
		caliber = 4;
		//tracerScale = 0.4;
		tracerStartTime = 0.05;
		tracerEndTime = 3;
		typicalSpeed = 838.2;
	};
	class rhsusf_ammo_127x99_mk211: rhsusf_ammo_127x99_M33_Ball
	{
		hit = 35;
		indirectHit = 4;
		indirectHitRange = 2;
		explosive = 0.3;//0.3
		caliber = 5;
		craterEffects = "ATMissileCrater";
		explosionEffects = "RHS_ExploSmallAmmoExplosion";
		explosionSoundEffect = "DefaultExplosion";
	};
	class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "RHS_Cartridge_556x45_m855";
		hit = 11; //9
		typicalSpeed = 960;
		airFriction = -0.000772;
		caliber = 0.7; //0.65
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
	};
	class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball
	{
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class rhs_ammo_556x45_M855A1_Ball_Orange: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};
	class rhs_ammo_556x45_M855_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "RHS_Cartridge_556x45_m855";
		hit = 10; //9
		typicalSpeed = 920;
		airFriction = -0.00076;
		caliber = 0.39; //0.44
		deflecting = 21;
		visibleFire = 3;
		audibleFire = 7;
	};
	class rhs_ammo_556x45_M855_Ball_Red: rhs_ammo_556x45_M855_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "RHS_Cartridge_556x45_m855";
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_M855_Ball_Green: rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_556x45_M855_Ball_Yellow: rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class rhs_ammo_556x45_M855_Ball_Orange: rhs_ammo_556x45_M855_Ball_Red
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};
	class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 11.5; //9.55
		typicalSpeed = 950;
		airFriction = -0.00076;
		caliber = 1.1; //0.64
		deflecting = 17;
		visibleFire = 3;
		audibleFire = 5.5;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 12; //10.3
		typicalSpeed = 838.2;
		airFriction = -0.00066;
		caliber = 0.35; //0.677
		deflecting = 15;
		visibleFire = 2.5;
		audibleFire = 5;
		tracerStartTime = 0.073;
		tracerEndTime = 1.15;
	};
	class rhs_ammo_556x45_M193_Ball: B_556x45_Ball
	{
		hit = 9; //8.7
		typicalSpeed = 974;
		airFriction = -0.00077;
		caliber = 0.24; //0.59
		deflecting = 28;
		visibleFire = 3;
		audibleFire = 7;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class rhs_ammo_556x45_M196_Ball_Red: rhs_ammo_556x45_M193_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
	};
	class rhs_ammo_556x45_M995_AP: B_556x45_Ball
	{
		hit = 12.5;
		caliber = 1.58;
		nvgOnly = 0;
		tracerStartTime = 0.073;
		tracerEndTime = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class rhs_ammo_556x45_blank: B_556x45_Ball
	{
		hit = 0;
		cost = 0.1;
		submunitionAmmo = "rhs_ammo_blank";
		submunitionDirectionType = "SubmunitionModelDirection";
		triggerTime = 0.001;
		simulationStep = 0.001;
		soundSetBulletFly[] = {};
		soundSetSonicCrack[] = {};
	};
	class rhs_ammo_blank: B_556x45_Ball
	{
		hit = 0;
		timeToLive = 0.01;
		simulationStep = 0.01;
		model = "\A3\weapons_f\empty";
	};
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		hit = 11; //12
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		caliber = 0.8; //1
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerStartTime = 0.045;
		tracerEndTime = 1.5;
		airFriction = -0.0006814;
		typicalSpeed = 838;
	};
	class rhs_ammo_762x51_M61_AP: rhs_ammo_762x51_M80_Ball
	{
		hit = 13; //12.5
		caliber = 1.2; //1.2
	};
	class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball
	{
		hit = 14; //12
		caliber = 1.25; //1
	};
	class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball
	{
		hit = 11; //12
		caliber = 0.9; //1.2
		airFriction = -0.0007114;
		typicalSpeed = 803;
	};
	class rhs_ammo_762x51_M82_blank: rhs_ammo_556x45_blank
	{
		hit = 0;
	};
	class rhs_ammo_762x51_M118_Special_Ball: rhs_ammo_762x51_M80_Ball
	{
		caliber = 1; //1.3
		hit = 12; //13
		typicalSpeed = 805;
		airFriction = -0.0007474;
		rhs_cartridge = "\A3\weapons_f\ammo\cartridge_762";
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball
	{
		caliber = 1.86; //1.4
		typicalSpeed = 910;
		hit = 15; //15
		rhs_cartridge = "\A3\weapons_f\ammo\cartridge_762";
	};
	class rhs_ammo_762x51_Mk316_Special_Ball: rhs_ammo_762x51_M118_Special_Ball
	{
		visibleFire = 16;
	};
	class B_12Gauge_Pellets;
	class rhs_ammo_m576_buckshot: B_12Gauge_Pellets
	{
		hit = 2.75;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.1;
		typicalSpeed = 403.86;
		airFriction = -0.00634;
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class rhs_ammo_12g_00buckshot: B_12Gauge_Pellets
	{
		hit = 2.75;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.1;
		simulation = "shotSubmunitions";
		simulationStep = 0.0001;
		triggerTime = 0.0001;
		triggerSpeedCoef[] = {0.84,1.0};
		submunitionAmmo = "rhs_ammo_12g_00buckshot_pellet";
		submunitionConeType[] = {"poissondisccenter",9};
		submunitionConeAngle = 0.95;
		cartridge = "";
		model = "\A3\weapons_f\empty";
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_buckshot";
	};
	class rhs_ammo_12g_00buckshot_pellet: BulletBase
	{
		hit = 2.75;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.1;
		typicalSpeed = 403.86;
		airFriction = -0.00634;
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class rhs_ammo_doomsday_buckshot: rhs_ammo_m576_buckshot
	{
		hit = 6;
		indirectHit = 1.143;
		indirectHitRange = 1.972;
		caliber = 0.2;
	};
	class B_12Gauge_Slug;
	class rhs_ammo_12g_slug: B_12Gauge_Slug
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.3048;
		typicalSpeed = 475.49;
		airFriction = -0.002042;
		cartridge = "";
		rhs_cartridge = "\rhsusf\addons\rhsusf_weapons\casings\rhs_casing_12ga_slug";
	};
	class rhs_ammo_12g_FRAG: B_12Gauge_Slug
	{
		hit = 6;
		indirectHit = 1.143;
		indirectHitRange = 1.972;
		caliber = 0.2;
		typicalSpeed = 150;
		airFriction = -0.0069;
		timeToLive = 5;
		deflecting = 0;
		explosive = 1;
		explosionEffects = "RHSUSF_12gExplosion";
		CraterEffects = "";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 14;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1",1.6,1,1200};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3",1.6,1,1200};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4",1.6,1,1200};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6",1.6,1,1200};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit3",0.25,"soundHit4",0.25,"soundHit6",0.25};
		explosionSoundEffect = "DefaultExplosion";
		class CamShakeExplode
		{
			power = "(9*0.2)";
			duration = "((round (9^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((1 + 9^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 9;
			duration = "((round (9^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class rhs_ammo_12g_HE: rhs_ammo_12g_FRAG
	{
		submunitionAmmo = "mkk_12gHEAP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 1.575;
		indirectHit = 1.143;
		indirectHitRange = 0.986;
		caliber = 0.1;
		typicalSpeed = 150;
		airFriction = -0.0074;
		deflecting = 0;
	};
	class rhs_ammo_12gHEAP_penetrator: BulletBase
	{
		hit = 10;
		indirectHit = 0;
		deflecting = 0;
		typicalSpeed = 1000;
		caliber = 0.866667;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsGroundSabot";
		};
	};
	class rhs_ammo_45ACP_MHP: BulletBase
	{
		scope = 2;
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.16;
		deflecting = 30;
		visibleFire = 5;
		audibleFire = 9;
		typicalSpeed = 280;
		airFriction = -0.0018;
	};
	class rhs_ammo_45ACP_MHPT_Orange: rhs_ammo_45ACP_MHP
	{
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
	};
	class rhs_ammo_9x19_FMJ: BulletBase
	{
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.2;
		deflecting = 29;
		visibleFire = 1.5;
		audibleFire = 3;
		typicalSpeed = 390.1;
		airFriction = -0.0027667;
	};
	class rhs_ammo_9x19_JHP: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		caliber = 0.14;
		deflecting = 25;
		visibleFire = 1;
		audibleFire = 2.5;
		cost = 1;
		typicalSpeed = 301.8;
		airFriction = -0.001095;
	};
	class rhs_ammo_46x30_FMJ: rhs_ammo_556x45_M855A1_Ball
	{
		hit = 8.5;
		suppressionRadiusBulletClose = 2;
		cartridge = "FxCartridge_9mm";
		caliber = 0.2;
		visibleFire = 2;
		audibleFire = 5;
		typicalSpeed = 619.9632;
		airFriction = -0.0027667;
		deflecting = 21;
	};
	class rhs_ammo_46x30_JHP: rhs_ammo_46x30_FMJ
	{
		caliber = 0.15;
		typicalSpeed = 699.8208;
		airfriction = -0.0034830077;
		hit = 8;
		deflecting = 25;
	};
	class rhs_ammo_46x30_AP: rhs_ammo_46x30_FMJ
	{	
		caliber = 0.55;
		typicalSpeed = 734.8728;
		airfriction = -0.0026624051;
		hit = 10.5;
	};
	class rhsusf_40mm_HE: G_40mm_HE
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
	};
	class rhsusf_40mm_FLASHBANG: rhsusf_40mm_HE
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;
		fuseDistance = 2;
		explosionTime = 3;
		ExplosionEffects = "RHSUSF_flashbang_10";
	};
	class rhs_ammo_m67: GrenadeHand
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m67\m67_frag";
	};
	class rhs_ammo_m84: GrenadeHand
	{
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m84\m84_flash";
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 8;
		ExplosionEffects = "RHSUSF_flashbang_15";
		craterEffects = "RHSUSF_flashbang_Crater";
		explosionTime = 1.5;
		cost = 10;
	};
	class rhs_ammo_an_m14_th3: SmokeShell
	{
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		cost = 150;
		timeToLive = 25;
		effectsSmoke = "RHS_Incendenary_Grenade";
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\an-m14_th3\an-m14_th3";
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1",0.12589253,1,16.5};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2",0.12589253,1,16.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1",0.5,"SmokeShellSoundLoop2",0.5};
		aiAmmoUsageFlags = "1 + 2 + 64";
	};
	class rhs_ammo_an_m14_th3_droplet: rhs_ammo_12gHEAP_penetrator
	{
	};
	class rhs_ammo_m7a3_cs: GrenadeHand
	{
		hit = 0.1;
		indirectHit = 0.1;
		indirectHitRange = 8;
		ExplosionEffects = "RHSUSF_flashbang_15";
		explosionTime = 1.5;
		cost = 10;
		model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\m7a3_cs\m7a3_cs";
	};
	class rhssaf_ammo_762x39_m82_api: rhs_B_762x39_Ball
	{
		cartridge = "RHS_Cartridge_762x39";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit = 12.5;
		caliber = 1.32; //1.1
		tracerStartTime = 0.151;
		tracerEndTime = 1;
	};
	class rhssaf_ammo_556x45_EPR: rhs_ammo_556x45_M855A1_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class rhssaf_ammo_556x45_EPR_Tracer: rhssaf_ammo_556x45_EPR
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	class rhssaf_ammo_556x45_SOST: rhs_ammo_556x45_M855A1_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class rhssaf_ammo_556x45_SPR: rhs_ammo_556x45_M855A1_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class rhs_ammo_792x57_Ball: BulletBase
	{
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		caliber = 1;
		//tracerScale = 0.3;
		tracerStartTime = 0.045;
		tracerEndTime = 1.5;
		airFriction = -0.000756;
		typicalSpeed = 823;
		model = "\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};
};
class CfgMagazines
{
	class rhs_30Rnd_545x39_7N22_AK;
	class rhs_30Rnd_545x39_7N24_AK: rhs_30Rnd_545x39_7N22_AK
	{
		author = "Alegro";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N22_AK_ca.paa";
		displayName = "30Птр.АК-74 7Н24";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_1";
		displayNameShort = "7N24 - APS";
		ammo = "rhs_B_545x39_7N24_Ball";
		initSpeed = 890;
	};
	class rhs_30Rnd_545x39_7N24_plum_AK: rhs_30Rnd_545x39_7N24_AK
	{
		author = "Alegro";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N22_plum_AK_ca.paa";
		displayName = "30Птр.АК-74 (слива) 7Н24";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
	};
	class rhs_30Rnd_545x39_7N24_desert_AK: rhs_30Rnd_545x39_7N24_AK
	{
		author = "Alegro";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N22_desert_AK_ca.paa";
		displayName = "30Птр.АК-74 (пуст.) 7Н24";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_des";
	};
	class rhs_30Rnd_545x39_7N24_camo_AK: rhs_30Rnd_545x39_7N24_AK
	{
		author = "Alegro";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N22_camo_AK_ca.paa";
		displayName = "30Птр.АК-74 (камуф.) 7Н24";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_camo";
	};
	class rhs_45Rnd_545X39_7N24_AK: rhs_30Rnd_545x39_7N24_AK
	{
		author = "Alegro";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName = "45Птр.РПК-74 7Н24";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_Desc_1";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		mass = 13.64;
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		count = 45;
	};
	class rhs_60Rnd_545X39_7N24_AK: rhs_30Rnd_545x39_7N24_AK
	{
		author = "Alegro";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_60Rnd_545X39_7N10_AK_ca.paa";
		displayName = "60Птр.АК-74 7Н24";
		descriptionShort = "$STR_RHS_CFGMAGAZINES_60RND_545X39_MAG_Desc_1";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l31_60rnd.p3d";
		mass = 19.69;
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_60rnd_mag_black";
		count = 60;
	};
	class rhs_30Rnd_545x39_7N10_AK;
	class rhs_30Rnd_545x39_7T3M_AK:rhs_30Rnd_545x39_7N10_AK
	{
		displayName = "30Птр.АК-74 7Т3М";
		displayNameShort = "7T3M Tracer";
		ammo = "rhs_B_545x39_Ball_Tracer_Green";
		tracersEvery = 1;
	};
};
class CfgMagazineWells
{
	class AK_545x39
	{
		RHS_Magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_AK_no_tracers","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_45Rnd_545x39_AK","rhs_45Rnd_545x39_7N6_AK","rhs_45Rnd_545x39_7N6M_AK","rhs_45Rnd_545x39_7N10_AK","rhs_45Rnd_545x39_7N22_AK","rhs_45Rnd_545x39_AK_green","rhs_45Rnd_545x39_7U1_AK","rhs_60Rnd_545x39_7N10_AK","rhs_60Rnd_545x39_7N22_AK","rhs_60Rnd_545x39_AK_green","rhs_60Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7N24_AK","rhs_30Rnd_545x39_7N24_plum_AK","rhs_30Rnd_545x39_7N24_desert_AK","rhs_30Rnd_545x39_7N24_camo_AK","rhs_45Rnd_545X39_7N24_AK","rhs_60Rnd_545X39_7N24_AK","rhs_30Rnd_545x39_7T3M_AK"};
	};
};
