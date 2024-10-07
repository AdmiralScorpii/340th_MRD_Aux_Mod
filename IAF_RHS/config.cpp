class CfgPatches {

	class IAF_RHS {
		units[] = 
		{
			
		};
		weapons[] = {};
		requiredVersion = 1.820000;
		version = 1.000;
		requiredAddons[] = {
			"A3_Data_F",
			"A3Data",
			"A3_Weapons_F",
			"A3_Armor_F_Beta",
			"rhsusf_c_m1a1",
			"rhsusf_c_m1a2",
			"rhs_c_t14",
			"rhs_c_t72",
			"rhs_c_tanks",
			"rhsusf_main",
			"rhs_main",
			"rhs_c_heavyweapons"
			};
		author = "apisorn18,Improved by Alegro";
		name = "IAF_RHS";
		dlc = "IAF_RHS";
		fileName = "IAF_RHS.pbo";
	};

};

class CfgMods{
	class Mod_Base;
	class IAF_RHS {
		author = "apisorn18,Improved by Alegro";
		dlcColor[] = {0, 0, 0, 1};
		tooltip = "Huh";
		tooltipOwned = "Huh";
		name = "Huh";
		overview = "Huh";
		dir = "IAF_RHS";
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
	class Default;
	class Sh_120mm_APFSDS;
	class B_30mm_APFSDS_Tracer_Red;
	class B_30mm_HE;
	class SubmunitionBase;
	class Sh_125mm_APFSDS;
	class MissileCore: Default{};
	class MissileBase: MissileCore
	{
		class EventHandlers;
	};
	class rhsusf_ammo_basic_penetrator: Sh_125mm_APFSDS
	{
		caliber = 6.66667;
		warheadName = "HEAT";
		hit = 290;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		deflecting = 0;
		deflectionDirDistribution = 0;
		penetrationDirDistribution = 0;
		timeToLive = 0.01;
		simulationStep = 0.0005;
		airFriction = -0.5;
		whistleOnFire = 0;
		whistleDist = 0;
		submunitionConeType[] = {"randomcenter",30};
		submunitionAmmo = "rhs_ammo_spall";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.003;
		model = "\A3\Weapons_f\empty";
		SoundSetExplosion[] = {"Silence_SoundSet"};
	};
	class rhs_ammo_cluster_penetrator: Sh_125mm_APFSDS
	{
		caliber = 6.66667;
		warheadName = "HEAT";
		hit = 1.8*150;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		deflecting = 0;
		typicalSpeed = 1000;
		simulationStep = 0.0005;
		airFriction = -0.5;
		whistleOnFire = 0;
		whistleDist = 0;
		submunitionConeType[] = {"randomcenter",4};
		submunitionAmmo = "rhs_ammo_spall";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.003;
		model = "\A3\Weapons_f\empty";
		SoundSetExplosion[] = {"Silence_SoundSet"};
	};
	class rhs_ammo_ap_penetrator: Sh_125mm_APFSDS
	{
		warheadName = "AP";
		model = "\A3\Weapons_f\empty";
		indirectHit = 0;
		indirectHitRange = 0;
		timetolive = 5;
		simulationStep = 0.0005;
		airFriction = -0.08;
		submunitionConeType[] = {"randomcenter",30};
		submunitionAmmo = "rhs_ammo_spall";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.002;
		soundVehiclePlateInt1[] = {"rhsusf\addons\rhsusf_c_heavyweapons\sounds\Inhit.wav",4.23872,1,100};
		hitArmorInt[] = {"soundVehiclePlateInt1",1};
		hitDefaultInt[] = {"soundVehiclePlateInt1",1};
		hitMetalInt[] = {"soundVehiclePlateInt1",1};
		hitMetalPlateInt[] = {"soundVehiclePlateInt1",1};
		multiSoundHitInt[] = {"soundVehiclePlateInt1",1};
		SoundSetExplosion[] = {};
	};
	class rhs_ammo_M829: Sh_120mm_APFSDS
	{
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		deflecting = 6;
		airFriction = -4e-05;
		simulationStep = 0.01;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		effectFly = "RHS_120mm_Sabot_Eject";
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	
	class ShellBase;
	class rhs_ammo_3of_airburst:ShellBase
	{
		hit = 60;
		indirectHit = 15;
		indirectHitRange = 22;
		caliber = 2;
	};
	class rhs_ammo_M829_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 120;
		typicalSpeed = 1700;
		caliber = 19.7;
		deflecting = 6;
	};
	class rhs_ammo_M829A1: rhs_ammo_M829
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829A1_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M829A1_penetrator: rhs_ammo_M829_penetrator
	{
		hit = 125;
		typicalSpeed = 1700;
		caliber = 22.3;
	};
	class rhs_ammo_M829A2: rhs_ammo_M829
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829A2_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M829A2_penetrator: rhs_ammo_M829_penetrator
	{
		hit = 130;
		typicalSpeed = 1700;
		caliber = 27.1;
	};
	class rhs_ammo_M829A3: rhs_ammo_M829
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829A3_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M829A3_penetrator: rhs_ammo_M829_penetrator
	{
		hit = 135;
		typicalSpeed = 1555;
		caliber = 34.76;
	};
	class rhs_ammo_M829A4: rhs_ammo_M829
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_M829A4_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_M829A4_penetrator: rhs_ammo_M829_penetrator
	{
		hit = 140;
		typicalSpeed = 1655;
		caliber = 42.88;
	};
	class rhs_ammo_30x173mm_GAU8_mixed: SubmunitionBase
	{
		hit = 32;
		indirectHit = 4;
		indirectHitRange = 8;
		caliber = 5;
		explosive = 0.4;
		airlock = 1;
		deflecting = 5;
		airFriction = -0.00036;
		typicalSpeed = 960;
		visibleFire = 32;
		audibleFire = 250;
		visibleFireTime = 3;
		fuseDistance = 10;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		cost = 20;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 512";
		weaponType = "cannon";
		simulation = "shotSubmunitions";
		triggerTime = 0.01;
		submunitionAmmo[] = {"rhs_ammo_PGU14B_API",0.8,"rhs_ammo_PGU13B_HE",0.2};
		model = "\A3\Weapons_f\empty";
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 83.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 30;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Gatling_30mm_HE_Plane_CAS_01_F;
	class rhs_ammo_PGU13B_HE: Gatling_30mm_HE_Plane_CAS_01_F
	{
		hit = 20;
		explosive = 0.9;
		timeToLive = 10;
		indirectHit = 15;
		indirectHitRange = 4;
		caliber = 3.6;
	};
	class rhs_ammo_PGU14B_API: B_30mm_APFSDS_Tracer_Red
	{
		hit = 35;
		explosive = 0;
		typicalSpeed = 860;
		airFriction = -0.00036;
		timeToLive = 10;
		caliber = 7;
		tracerEndTime = 10;
	};
	class rhs_ammo_3uor6:B_30mm_HE
	{
		hit = 35;
		explosive = 0.9;
		indirectHit = 15;
		indirectHitRange = 4;
		caliber = 1.39;
	};
	class rhs_ammo_3uof8:rhs_ammo_3uor6
	{
		hit = 48;
		indirectHit = 15;
		indirectHitRange = 4;
	};
	class rhs_ammo_30x113mm_M789_HEDP: B_30mm_HE
	{
		allowagainstinfantry = 1;
		hit = 30;
		indirectHit = 10;
		indirectHitRange = 4;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 4;
		explosive = 0.45;
		caliber = 1;
		airFriction = -0.00078;
		timeToLive = 12;
		submunitionAmmo = "rhs_ammo_30x113mm_M789_HEDP_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_30x113mm_M789_HEDP_laser: rhs_ammo_30x113mm_M789_HEDP
	{
		laserLock = 1;
	};
	class rhs_ammo_30x113mm_M789_HEDP_penetrator: rhsusf_ammo_basic_penetrator
	{
		hit = 35;
		submunitionConeType[] = {"randomcenter",4};
		caliber = 6;
	};
	class rhs_ammo_br_base: Sh_125mm_APFSDS
	{
		hit = 320;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 895;
		cost = 500;
		deflecting = 15;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class rhs_ammo_br412: rhs_ammo_br_base
	{
		caliber = 8.82;
		hit = 320;
	};
	class rhs_ammo_bm_base: Sh_125mm_APFSDS
	{
		cost = 500;
		hit = 250;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 1430;
		explosive = 0;
		deflecting = 10;
		caliber = 33.33;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		muzzleEffect = "";
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};
	class rhs_ammo_3bm_base: rhs_ammo_bm_base
	{
		indirecthit = 11;
		indirectHitRange = 0.1;
		typicalSpeed = 1700;
		simulationStep = 0.01;
		effectFly = "RHS_125mm_Sabot_Eject";
	};
	class rhs_ammo_base_penetrator: rhs_ammo_3bm_base
	{
		caliber = 6.66667;
		warheadName = "HEAT";
		hit = 1.8*290;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		deflecting = 0;
		deflectionDirDistribution = 0;
		penetrationDirDistribution = 0;
		timeToLive = 0.01;
		simulationStep = 0.0005;
		airFriction = -0.5;
		whistleOnFire = 0;
		whistleDist = 0;
		effectFly = "";
		submunitionConeType[] = {"randomcenter",30};
		submunitionAmmo = "rhs_ammo_spall";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.4};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 200;
		deleteParentWhenTriggered = 0;
		triggerTime = 0.003;
		model = "\A3\Weapons_f\empty";
		SoundSetExplosion[] = {"Silence_SoundSet"};
	};
	class rhs_ammo_bm25: rhs_ammo_bm_base
	{
		hit = 550;
		typicalspeed = 1430;
		caliber = 25.29;
	};
	class rhs_ammo_bm8: rhs_ammo_bm_base
	{
		hit = 490;
		typicalspeed = 1430;
		caliber = 17.6;
	};
	class rhs_ammo_bm4: rhs_ammo_bm_base
	{
		hit = 520;
		typicalspeed = 1650;
		caliber = 10.8761;
	};
	class rhs_ammo_bm23: rhs_ammo_bm_base
	{
		hit = 645;
		typicalspeed = 1650;
		caliber = 12.1212;
	};
	class rhs_ammo_3bm9: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm9_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm9_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 100;
		typicalSpeed = 1700;
		caliber = 18.1;
	};
	class rhs_ammo_3bm12: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm12_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm12_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 120;
		typicalSpeed = 1700;
		caliber = 19.7;
	};
	class rhs_ammo_3bm15: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm15_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm15_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 120;
		typicalSpeed = 1780;
		caliber = 21.9;
	};
	class rhs_ammo_3bm17: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm17_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm17_penetrator: rhs_ammo_ap_penetrator
	{
		/*
		hit = 125;
		caliber = 24.4;
		*/
		hit = 125;
		typicalSpeed = 1760;
		caliber = 24.5;
	};
	class rhs_ammo_3bm22: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm22_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm22_penetrator: rhs_ammo_ap_penetrator
	{
		/*caliber = 25.8;*/
		hit = 125;
		typicalSpeed = 1785;
		caliber = 25.9;
	};
	class rhs_ammo_3bm26: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm26_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm26_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 130;
		typicalSpeed = 1720;
		caliber = 27.8;
	};
	class rhs_ammo_3bm29: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm29_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm29_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 130;
		caliber = 28.4;
	};
	class rhs_ammo_3bm32: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm32_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm32_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 130;
		caliber = 29.1;
	};
	class rhs_ammo_3bm42: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm42_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm42_penetrator: rhs_ammo_ap_penetrator
	{
		/*
		hit = 135;
		typicalSpeed = 1700;
		caliber = 29.3;
		*/
		hit = 135;
		caliber = 30.4;
	};
	class rhs_ammo_3bm42m: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm42m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm42m_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 135;
		typicalSpeed = 1750;
		caliber = 32.8;
		airFriction = -2.5e-05;
	};
	class rhs_ammo_3bm46: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm46_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm46_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 135;
		typicalSpeed = 1700;
		caliber = 35.3;
		airFriction = -3.2e-05;
	};
	class rhs_ammo_3bm59: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm59_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm59_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 140;
		typicalSpeed = 1700;
		caliber = 38.1;
		airFriction = -3.2e-05;
	};
	class rhs_ammo_3bm60: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm60_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm60_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 140;
		typicalSpeed = 1700;
		caliber = 42;
		airFriction = -3.2e-05;
	};
	class rhs_ammo_3bm69: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm69_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm69_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 140;
		typicalSpeed = 2050;
		caliber = 48;
		airFriction = -3.2e-05;
	};
	class rhs_ammo_3bm70: rhs_ammo_3bm_base
	{
		caliber = 0.1;
		submunitionAmmo = "rhs_ammo_3bm70_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	
	
	//2333     new ammo mark line
	class rhs_ammo_3bm70_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 145;
		typicalSpeed = 2050;
		caliber = 50;
		airFriction = -3.2e-05;
	};
	class rhs_ammo_3bm114: rhs_ammo_3bm_base
	{	

		submunitionAmmo = "rhs_ammo_3bm114_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 1;
		submunitionInitSpeed = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_3bm114_penetrator: rhs_ammo_ap_penetrator
	{
		hit = 847;
		typicalSpeed = 1700;
		caliber = 53.5;
		airFriction = -3.2e-005;
	};
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	class rhs_ammo_M1147;
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	////
	class M_Titan_AT;
	class rhs_ammo_atgmBase_base;
	class rhs_ammo_atgmCore_base: M_Titan_AT{};
	class rhs_ammo_9m14: rhs_ammo_atgmBase_base{};
	class rhs_ammo_9m14m: rhs_ammo_9m14{};
	class rhs_ammo_9m14m_penetrator: rhs_ammo_base_penetrator
	{
		hit = 350;
		caliber = __EVAL(500/15);
	};
	class rhs_ammo_9m17_penetrator: rhs_ammo_base_penetrator
	{
		hit = 450;
		caliber = __EVAL(600/15);
	};
	class rhs_ammo_9m17p_penetrator: rhs_ammo_base_penetrator
	{
		hit = 450;
		caliber = __EVAL(710/15);
	};
	class rhs_ammo_9m112;
	class rhs_ammo_9m112m: rhs_ammo_9m112
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m112m2: rhs_ammo_9m112m
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m124: rhs_ammo_9m112m
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m112_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(600/15);
	};
	class rhs_ammo_9m112m_penetrator: rhs_ammo_9m112_penetrator
	{
		hit = 500;
		caliber = __EVAL(735/15);
	};
	class rhs_ammo_9m112m2_penetrator: rhs_ammo_9m112_penetrator
	{
		hit = 500;
		caliber = __EVAL(795/15);
	};
	class rhs_ammo_9m124_penetrator: rhs_ammo_9m112_penetrator
	{
		hit = 500;
		caliber = __EVAL(870/15);
	};
	class rhs_ammo_9m128: rhs_ammo_atgmCore_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m128_penetrator: rhs_ammo_9m112_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 500;
		caliber = __EVAL(850/15);
	};
	class rhs_ammo_9m111: rhs_ammo_atgmBase_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m111m: rhs_ammo_9m111
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m111_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(550/15);
	};
	class rhs_ammo_9m111m_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(650/15);
	};
	class rhs_ammo_9m113: rhs_ammo_atgmBase_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m113m: rhs_ammo_9m113
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m113_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(900/15);
	};
	class rhs_ammo_9m113m_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(950/15);
	};
	class rhs_ammo_9m117: rhs_ammo_atgmCore_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m117_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(550/15);
	};
	class rhs_ammo_9m117m: rhs_ammo_9m117
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m117m_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(600/15);
	};
	class rhs_ammo_9m117m1: rhs_ammo_9m117m
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m117m1_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(750/15);
	};
	class rhs_ammo_9m118: rhs_ammo_9m117
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m118_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(700/15);
	};
	class rhs_ammo_9m119: rhs_ammo_atgmCore_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m119_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(750/15);
	};
	class rhs_ammo_9m119m: rhs_ammo_9m119
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m119m_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(850/15);
	};
	class rhs_ammo_9m119f: rhs_ammo_9m119
	{
		hit = 100;
		indirectHit = 14;
		indirectHitRange = 32;
	};
	class rhs_ammo_9m115: rhs_ammo_9m119
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m115_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(550/15);
	};
	class rhs_ammo_9m131: rhs_ammo_9m115
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m131_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(800/15);
	};
	class rhs_ammo_9m131m: rhs_ammo_9m131
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m131m_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(900/15);
	};
	class rhs_ammo_9m131f: rhs_ammo_9m131m
	{
		hit = 120;
		indirectHit = 14;
		indirectHitRange = 32;
	};
	class rhs_ammo_9m133: rhs_ammo_atgmBase_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m133_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 500;
		caliber = __EVAL(420/15);
	};
	class rhs_ammo_9m133f: rhs_ammo_9m131f
	{
		hit = 125;
		indirectHit = 14;
		indirectHitRange = 32;
	};
	class rhs_ammo_9m1331: rhs_ammo_9m133
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m1331_penetrator: rhs_ammo_9m133_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(1200/15);
	};
	class rhs_ammo_9m133m2: rhs_ammo_9m133
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m133m2_penetrator: rhs_ammo_9m133_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(1300/15);
	};
	class rhs_ammo_3m7: rhs_ammo_atgmBase_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m7_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(700/15);
	};
	class rhs_ammo_9m114: rhs_ammo_atgmBase_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m114_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		caliber = __EVAL(1000/15);
	};
	class rhs_ammo_9m114m: rhs_ammo_9m114{};
	class rhs_ammo_9m114f: rhs_ammo_9m114
	{
		hit = 125;
		indirectHit = 19;
		indirectHitRange = 35;
	};
	class rhs_ammo_9m114m1: rhs_ammo_9m114
	{
		maxcontrolrange = 6000;
	};
	class rhs_ammo_9m114m2: rhs_ammo_9m114
	{
		maxcontrolrange = 7000;
	};
	class rhs_ammo_9m120: rhs_ammo_atgmBase_base
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m120_penetrator: rhs_ammo_base_penetrator
	{
		hit = 500;
		warheadName = "TandemHEAT";
		caliber = __EVAL(1000/15);
	};
	class rhs_ammo_9m120m: rhs_ammo_9m120
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m120m_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 500;
		caliber = __EVAL(1100/15);
	};
	class rhs_ammo_9m120f: rhs_ammo_9m120
	{
		hit = 125;
		indirectHit = 17;
		indirectHitRange = 28;
	};
	class rhs_ammo_9m120o: rhs_ammo_9m120
	{
		hit = 125;
		indirectHit = 19;
		indirectHitRange = 32;
	};
	class rhs_ammo_9m127: rhs_ammo_9m120
	{
		submunitionInitSpeed = 1700;
	};
	class rhs_ammo_9m127_penetrator: rhs_ammo_base_penetrator
	{
		warheadName = "TandemHEAT";
		hit = 500;
		caliber = __EVAL(1200/15);
	};
	class rhs_ammo_9m127m: rhs_ammo_9m127{};
};

class CfgVehicles 
{
	class Landvehicle;
	class Tank: LandVehicle
	{
		class HitPoints;
	};
	class Tank_F:Tank
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
		};
	};
	class MBT_01_base_F: Tank_F
	{
		class EventHandlers;
	};
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		enableGPS=1;
		maxSpeed = 112.7;
		maximumLoad = 7500;
		enginePower = 1118.55;
		peakTorque = 5355;
		clutchStrength=60; //Default=50
		engineLosses=20; //Default=25
		transmissionLosses=12; //Default=15
		idleRPM = 1000; //Default=850
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((3000 * 2 * PI) / 60);
		armor = 860;
		armorStructural = 13.7669;
	};
	
	class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base
	{
		enableGPS=1;
		maxSpeed = 112.7;
		maximumLoad = 7500;
		enginePower = 1118.55;
		peakTorque = 5355;
		clutchStrength=60; //Default=50
		engineLosses=20; //Default=25
		transmissionLosses=12; //Default=15
		idleRPM = 1000; //Default=850
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((3000 * 2 * PI) / 60);
		armor = 910;
		armorStructural = 13.7669;
	};
	class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base
	{
		enableGPS=1;
		maxSpeed = 112.7;
		maximumLoad = 7500;
		enginePower = 1118.55;
		peakTorque = 5355;
		clutchStrength=60; //Default=50
		engineLosses=20; //Default=25
		transmissionLosses=12; //Default=15
		idleRPM = 1000; //Default=850
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((3000 * 2 * PI) / 60);
		armor = 950;
		armorStructural = 13.7669;
	};
	class rhsusf_m1a1hc_wd: rhsusf_m1a1tank_base
	{
		enableGPS=1;
		maxSpeed = 112.7;
		maximumLoad = 7500;
		enginePower = 1118.55;
		peakTorque = 5355;
		clutchStrength=60; //Default=50
		engineLosses=20; //Default=25
		transmissionLosses=12; //Default=15
		idleRPM = 1000; //Default=850
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((3000 * 2 * PI) / 60);
		armor = 890;
		armorStructural = 13.7669;
	};
	class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base
	{
		enableGPS=1;
		maxSpeed = 112.7;
		maximumLoad = 7500;
		enginePower = 1118.55;
		peakTorque = 5355;
		clutchStrength=60; //Default=50
		engineLosses=20; //Default=25
		transmissionLosses=12; //Default=15
		idleRPM = 1000; //Default=850
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((3000 * 2 * PI) / 60);
		armor = 1000;
		armorStructural = 19.2241;
	};
	class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base
	{
		armor = 1000;
		armorStructural = 19.2241;
	};	
	class rhsusf_m1a2sep1tuskiiwd_usarmy : rhsusf_m1a2sep1tuskid_usarmy
	{
		armor = 1000;
		armorStructural = 19.2241;
	};
	class rhsusf_m1a2sep2_base: rhsusf_m1a2tank_base
	{
		enableGPS=1;
		maxSpeed = 112.7;
		maximumLoad = 7500;
		enginePower = 1118.55;
		peakTorque = 5355;
		clutchStrength=60; //Default=50
		engineLosses=20; //Default=25
		transmissionLosses=12; //Default=15
		idleRPM = 1000; //Default=850
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((3000 * 2 * PI) / 60);
		armor = 1000;
		armorStructural = 19.2241;
	};
	class rhs_t14_base: Tank_F
	{
		enginePower = 1119;
		maxFordingDepth = 1.6;
		maxSpeed = 90;
		peakTorque = 3840;
		crewExplosionProtection=0.9999988;
		armor = 1286;
		armorStructural = 11.3031;
	};
	class rhs_a3t72tank_base: Tank_F
	{
		enginePower = 580;
		armor=600; //Default=500 890
		armorStructural=14; //Default=4 15
		/*
		class HitPoints
		{
			class HitFuelTank_Left
			{
				armor = -80;
				material = -1;
				name = "Hit_FuelTank_Left";
				armorComponent = "Hit_FuelTank_Left";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.23999999;
				explosionShielding = 0;
				radius = 0.5;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name = "Hit_FuelTank_Right";
				armorComponent = "Hit_FuelTank_Right";
			};
			class HitFuel
			{
				armor = 999;
				name = "Hit_Fuel";
				armorComponent = "Hit_Fuel";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.23999999;
				explosionShielding = 0;
				radius = 0.5;
				depends = "(HitFuelTank_Left+HitFuelTank_Right)*0.5";
			};
			depends = "(HitFuelTank_Left+HitFuelTank_Right+HitFuel)*0.5";
			class HitAmmo
			{
				armor = -100;
				armorComponent = "Hit_Turret";
				explosionShielding = 0;
				material = -1;
				minimalhit = 0,14;
				name = "Hit_Ammo";
				passThrough = 0;
				radius = 0,15;
			};
			class HitHull
			{
				armor=0.85000002;
				material=-1;
				name="hithull_point";
				visual="visual_body";
				passThrough=1;
				minimalHit=0.14;
				explosionShielding=2;
				radius=0.30000001;
				depends = "(HitFuelTank_Left+HitFuelTank_Right+HitFuel+HitAmmo)*0.5";

			};
			

		};
		*/
	
	};
	class rhs_t72ba_tv: rhs_a3t72tank_base
	{
		enginePower = 580;
		armor=600; //Default=500
		armorStructural=14; //Default=4
	};
	class rhs_t72bb_tv: rhs_a3t72tank_base
	{
		enginePower = 840;
		armor=600; //Default=500
		armorStructural=14; //Default=4
	};
	class rhs_t72bc_tv: rhs_a3t72tank_base
	{
		enginePower = 840;
		armor=600; //Default=500
		armorStructural=14; //Default=4
	};
	class rhs_t72bd_tv: rhs_a3t72tank_base
	{
		enginePower = 840;
		armor=670; //Default=500
		armorStructural=14; //Default=4
	};
	class rhs_t72be_tv: rhs_t72bd_tv
	{
		enginePower = 840;
		armor=670; //Default=500
		armorStructural=14; //Default=4
	};
	class rhs_t90_tv: rhs_t72bd_tv
	{
		maxSpeed = 60;
		idleRPM = 1000; //Default=800
		maximumLoad = 7500;
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((2300 * 2 * PI) / 60);
		enginePower = 736;
		peakTorque = 3922.66;
		armorStructural=14; //Default=4
	};
	class rhs_t90a_tv: rhs_t90_tv
	{
		maxSpeed = 60;
		idleRPM = 1000; //Default=800
		maximumLoad = 7500;
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((2300 * 2 * PI) / 60);
		enginePower = 736;
		peakTorque = 3922.66;
		armorStructural=14; //Default=4
	};
	class rhs_t90saa_tv: rhs_t90a_tv
	{
		maxSpeed = 60;
		idleRPM = 1000; //Default=800
		maximumLoad = 7500;
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((2300 * 2 * PI) / 60);
		enginePower = 736;
		peakTorque = 3922.66;
		armorStructural=14; //Default=4
	};
	class rhs_t90sab_tv: rhs_t90a_tv
	{
		maxSpeed = 60;
		idleRPM = 1000; //Default=800
		maximumLoad = 7500;
		minOmega = __EVAL((1000 * 2 * PI) / 60);
		maxOmega = __EVAL((2300 * 2 * PI) / 60);
		enginePower = 736;
		peakTorque = 3922.66;
		armorStructural=14; //Default=4
	};
	class rhs_t90am_tv: rhs_t90_tv
	{
		enginePower=831;
		peakTorque=4821;
		armorStructural=14; //Default=4
	};
	class rhs_t90sm_tv: rhs_t90am_tv
	{
		enginePower=831;
		peakTorque=4821;
		armorStructural=14; //Default=4
	};
	class rhs_tank_base: Tank_F
	{
		enginePower = 745.699872;
		armorStructural=14; //Default=4
	};
	class rhs_t80b: rhs_tank_base
	{
		enginePower = 745.699872;
		armor = 620;
		armorStructural=14; //Default=4
	};
	class rhs_t80bk: rhs_t80b
	{
		enginePower = 745.699872;
		armorStructural=14; //Default=4
	};
	class rhs_t80bv: rhs_t80b
	{
		enginePower = 745.699872;
		armorStructural=14; //Default=4
	};
	class rhs_t80bvk: rhs_t80bv
	{
		enginePower = 745.699872;
		armorStructural=14; //Default=4
	};
	class rhs_t80: rhs_t80b
	{
		enginePower = 745.699872;
		armorStructural=14; //Default=4
	};
	class rhs_t80a: rhs_t80bv
	{
		enginePower = 745.699872;
		armorStructural=14; //Default=4
	};
	class rhs_t80u: rhs_t80a
	{
		enginePower = 932.12484;
		armorStructural=14; //Default=4
	};
	class rhs_t80uk: rhs_t80u
	{
		enginePower = 932.12484;
		armorStructural=14; //Default=4
	};
	class rhs_t80u45m: rhs_t80u
	{
		enginePower = 932.12484;
		armorStructural=14; //Default=4
	};
	class rhs_t80ue1: rhs_t80a
	{
		enginePower = 932.12484;
		armorStructural=14; //Default=4
	};
	class rhs_t80um: rhs_t80u
	{
		enginePower = 932.12484;
		armorStructural=14; //Default=4
	};
};