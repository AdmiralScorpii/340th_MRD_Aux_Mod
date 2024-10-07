#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class mkk_BMP_2M
	{
		units[]=
		{
			"mkk_BMP_2M"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMagazines
{
	class rhs_mag_9m133m2_2;
	class bs_mag_kornet_d_9m133M2: rhs_mag_9m133m2_2
	{
		count=1;
		canLock=0;
		initSpeed=0;
		namesound="missiles";
		displayName="9M133M2";
		displayNameShort="9M133M2";
		maxleadspeed=300;
		ammo="rhs_ammo_9m133m2";
		mass=82.5;
		weight=82.5;
		pylonWeapon="bs_weap_kornet_d_launcher";
		hardpoints[]=
		{
			"MKK_HP_KORNET_D"
		};
		model="bs_bmp_2m\proxy\mkk_pylon_m_kornet_d_1x.p3d";
	};
};
class vdisp_Radar_mh6_Left;
class vdisp_Radar_mh6_Right;
class Defaulteventhandlers;
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components;
};
class VehicleSystemsTemplateLeftSensorsCommander: DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateRightSensorsCommander: DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateLeftSensorsGunner: DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateRightSensorsGunner: DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateLeftSensorsPilot: DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components: components
	{
	};
};
class VehicleSystemsTemplateRightSensorsPilot: DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components: components
	{
	};
};
class pzn_vdisp_Radar_tunguska_Left;
class pzn_vdisp_Radar_tunguska_Right;
class pzn_vdisp_default_Left;
class pzn_vdisp_default_Right;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class All
	{
		class TransportMagazines;
		class TransportWeapons;
		class ViewOptics;
	};
	class AllVehicles: All
	{
		class NewTurret;
		class CargoTurret;
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class HitPoints;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class ViewOptics;
		class Sounds;
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
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class Periscope;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
		};
		class EventHandlers;
		class Components;
		class ACE_SelfActions;
	};
	class BMP_2M_base_Tank_F: Tank_F
	{
		class DestructionEffects
		{
			class LightFlames1
			{
				simulation="particles";
				type="RHS_FireSparksBC";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
		class TransportMagazines
		{
		};
		maximumLoad=8000;
		transportMaxMagazines=400;
		insideSoundCoef=0.89999998;
		driverCompartments=0;
		crewExplosionProtection=0.99989998;
		damageResistance=0.02;
		crewVulnerable=0;
		waterPPInVehicle=0;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		showNVGDriver=1;
		showNVGCommander=1;
		castDriverShadow=1;
		tf_hasLRradio=1;
		tf_hasLRradio_api=1;
		model="bs_bmp_2m\bmp_2m.p3d";
		author="SG & BS";
		side=0;
		faction="rhs_faction_msv";
		vehicleClass="rhs_vehclass_ifv";
		editorSubcategory="rhs_EdSubcat_ifv";
		displayName="BMP-2M";
		displayNameShort="BMP-2M";
		descriptionShort="BMP-2M";
		type=1;
		icon="\rhsafrf\addons\rhs_bmp\data\icomap_bmp2_CA.paa";
		editorPreview="\bs_bmp_2m\data\preview\bmp_2m.jpg";
		driverWeaponsInfoType="RscOptics_MBT_01_Driver";
		secondaryExplosion=1;
		fuelExplosionPower=50;
		fuelCapacity=10;
		crew="rhs_msv_crew";
		driverIsCommander=0;
		attenuationEffectType="TankAttenuation";
		driverOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
		driverforceoptics=1;
		memoryPointdriverOptics="driverview";
		unitInfoType="RHS_RscInfoBMP2";
		driverAction="RHS_BMP3_driverout";
		driverInAction="rhs_bmp2_driver";
		hideProxyInCombat=1;
		viewDriverInExternal=1;
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		tf_range_api=17000;
		enableGPS=1;
		selectionBrakeLights="brzdove svetlo";
		selectionBackLights="zadni svetlo";
		LodTurnedIn=1100;
		LodTurnedOut=1100;
		LodOpticsOut=1100;
		LODOpticsIn=1100;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo[]=
		{
			"pos cargo L",
			"pos cargo R",
			"pos cargo L",
			"pos cargo R",
			"pos cargo L",
			"pos cargo R",
			"pos cargo L"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo L dir",
			"pos cargo R dir",
			"pos cargo L dir",
			"pos cargo R dir",
			"pos cargo L dir",
			"pos cargo R dir",
			"pos cargo L dir"
		};
		cargoGetInAction[]=
		{
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInMedium"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutMedium"
		};
		cargoAction[]=
		{
			"RHS_BMP_Cargo"
		};
		dustFrontLeftPos="stopa ll";
		dustFrontRightPos="stopa rl";
		memoryPointTrackFLL="stopa ll";
		memoryPointTrackFLR="stopa lr";
		memoryPointTrackFRL="stopa rl";
		memoryPointTrackFRR="stopa rr";
		dustBackLeftPos="podkolol6";
		dustBackRightPos="podkolop6";
		destrType="DestructDefault";
		tf_RadioType="tf_rt1523g";
		TFAR_AdditionalLR_Turret[]=
		{
			{0,1}
		};
		acre_hasInfantryPhone=0;
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="$STR_ACRE_sys_intercom_crewIntercom";
				shortName="$STR_ACRE_sys_intercom_shortCrewIntercom";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="$STR_ACRE_sys_rack_dashUpper";
				shortName="$STR_ACRE_sys_rack_dashUpperShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="";
				isRadioRemovable=1;
				intercom[]=
				{
					"Intercom_1"
				};
			};
			class Rack_2
			{
				displayName="$STR_ACRE_sys_rack_dashLower";
				shortName="$STR_ACRE_sys_rack_dashLowerShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_SEM70";
				isRadioRemovable=0;
				intercom[]=
				{
					"Intercom_1"
				};
			};
		};
		class Library
		{
			libTextDesc="";
		};
		typicalCargo[]=
		{
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew",
			"rhs_msv_armoredcrew"
		};
		class ViewOptics
		{
			minAngleX=-30;
			maxAngleX=30;
			initAngleX=0;
			minAngleY=-45;
			maxAngleY=45;
			initAngleY=0;
			minFov=1;
			maxFov=1;
			initFov=1;
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class ViewPilot
		{
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.25;
			maxFov=1.4;
		};
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7879457,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7309573,
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",
			0.78794575,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
			0.73095739,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_alap",
					8.9125099,
					1,
					400
				};
				frequency="0.95	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="(thrust factor [0.1,0])*engineOn*camPos*(rpm interpolate [700,900,1,0])";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.2,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(600/	2850),(1000/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine1_ext_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.9943281,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine1_ext_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					2.3943281,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.1912509,
					1,
					850
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.2,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.4220185,
					1,
					840
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.6125376,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*camPos*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.5912509,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.4220185,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					1.5589254,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					1.7125376,
					1,
					850
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					1.8848932,
					1,
					950
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					1.9782794,
					1,
					1000
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					3.1952624,
					1,
					1050
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.81622773,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.55481339,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_int_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					1.3943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.59810716,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.64668357,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.70118719,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.76234132,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.83095735,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.65481335,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					0.69810718,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					0.7466836,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.7466836,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.80118722,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					0.86234134,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					1.1,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.56234133,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.79432821,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.19810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.1466836,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.1011872,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.16234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.26234132,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.11622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.15481336,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.19810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.1466836,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.20118719,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
		maxSpeed=60;
		canFloat=1;
		ThrowDelay=5;
		waterLeakiness=250;
		waterResistance=1;
		waterResistanceCoef=0.015;
		waterLinearDampingCoefY=5;
		waterLinearDampingCoefX=5;
		waterAngularDampingCoef=1.2;
		waterDamageEngine=0.89999998;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		engineShiftY=0.69999999;
		waterFastEffectSpeed=28;
		driverCanSee="2+4+8";
		gunnerCanSee="2+4+8";
		commanderCanSee="2+4+8";
		incomingMissileDetectionSystem=0;
		simulation="tankX";
		driveOnComponent[]=
		{
			"track_l",
			"track_r",
			"slide"
		};
		enginePower=224;
		maxOmega=298.45001;
		minOmega=75;
		engineMOI=8;
		peakTorque=5770;
		torqueCurve[]=
		{
			{0.36363599,0.68000001},
			{0.45454499,0.80000001},
			{0.54545498,0.94999999},
			{0.60606098,0.98000002},
			{0.66666698,1},
			{0.72727299,0.94},
			{0.84848499,0.80000001},
			{1,0.63999999}
		};
		thrustDelay=0.050000001;
		clutchStrength=8;
		brakeIdleSpeed=0;
		latency=1;
		turnCoef=1;
		slowSpeedForwardCoef=0.30000001;
		normalSpeedForwardCoef=0.77999997;
		idleRpm=700;
		redRpm=2900;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		tankTurnForce=300000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.92000002;
		accelAidForceCoef=4.3000002;
		accelAidForceYOffset=-3.9000001;
		accelAidForceSpd=2.23;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		transmissionLosses=15;
		engineLosses=25;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.939394,0.42424199,0.909091,0.63636398,0.84848499,0.66666698,1,0.66666698};
		class complexGearbox
		{
			AmphibiousRatios[]=
			{
				"R1",
				-3.5,
				"N",
				0,
				"D1",
				14.5
			};
			GearboxRatios[]=
			{
				"R1",
				-5.8000002,
				"N",
				0,
				"D1",
				4.9000001,
				"D2",
				2.9000001,
				"D3",
				1.8,
				"D4",
				0.69999999
			};
			TransmissionRatios[]=
			{
				"High",
				13
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0;
		};
		class Wheels
		{
			class wheel_1_0
			{
				boneName="";
				center="wheel_l_drive_axis";
				boundary="wheel_l_drive_bound";
				damping=75;
				steering=0;
				side="left";
				weight=120;
				mass=120;
				MOI=10;
				latStiffX=1;
				latStiffY=35;
				suspTravelDirection[]={-0.125,-1,0};
				longitudinalStiffnessPerUnitGravity=32000;
				maxBrakeTorque=3000;
				sprungMass=200;
				springStrength=3000;
				springDamperRate=10000;
				dampingRate=1;
				dampingRateInAir=400;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0;
				maxCompression=0;
				frictionVsSlipGraph[]=
				{
					{0,0.80000001},
					{0.38,1},
					{0.69999999,0.64999998}
				};
			};
			class wheel_1_1: wheel_1_0
			{
				boneName="wheel_podkolol1";
				center="wheel_l_01_axis";
				boundary="wheel_l_01_bound";
				sprungMass=1013;
				springStrength=200000;
				springDamperRate=10000;
				maxDroop=0.18000001;
				maxCompression=0.079999998;
			};
			class wheel_1_2: wheel_1_1
			{
				boneName="wheel_podkolol2";
				center="wheel_l_02_axis";
				boundary="wheel_l_02_bound";
			};
			class wheel_1_3: wheel_1_2
			{
				boneName="wheel_podkolol3";
				center="wheel_l_03_axis";
				boundary="wheel_l_03_bound";
			};
			class wheel_1_4: wheel_1_2
			{
				boneName="wheel_podkolol4";
				center="wheel_l_04_axis";
				boundary="wheel_l_04_bound";
			};
			class wheel_1_5: wheel_1_2
			{
				boneName="wheel_podkolol5";
				center="wheel_l_05_axis";
				boundary="wheel_l_05_bound";
			};
			class wheel_1_6: wheel_1_2
			{
				boneName="wheel_podkolol6";
				center="wheel_l_06_axis";
				boundary="wheel_l_06_bound";
			};
			class wheel_1_7: wheel_1_0
			{
				boneName="";
				center="wheel_l_back_axis";
				boundary="wheel_l_back_bound";
			};
			class wheel_2_0: wheel_1_0
			{
				side="right";
				boneName="";
				center="wheel_r_drive_axis";
				boundary="wheel_r_drive_bound";
				suspTravelDirection[]={0.125,-1,0};
			};
			class wheel_2_1: wheel_1_1
			{
				boneName="wheel_podkolop1";
				center="wheel_r_01_axis";
				boundary="wheel_r_01_bound";
			};
			class wheel_2_2: wheel_1_2
			{
				boneName="wheel_podkolop2";
				center="wheel_r_02_axis";
				boundary="wheel_r_02_bound";
				side="right";
			};
			class wheel_2_3: wheel_2_2
			{
				boneName="wheel_podkolop3";
				center="wheel_r_03_axis";
				boundary="wheel_r_03_bound";
			};
			class wheel_2_4: wheel_2_2
			{
				boneName="wheel_podkolop4";
				center="wheel_r_04_axis";
				boundary="wheel_r_04_bound";
			};
			class wheel_2_5: wheel_2_2
			{
				boneName="wheel_podkolop5";
				center="wheel_r_05_axis";
				boundary="wheel_r_05_bound";
			};
			class wheel_2_6: wheel_2_2
			{
				boneName="wheel_podkolop6";
				center="wheel_r_06_axis";
				boundary="wheel_r_06_bound";
			};
			class wheel_2_7: wheel_2_0
			{
				boneName="";
				center="wheel_r_back_axis";
				boundary="wheel_r_back_bound";
			};
		};
		steerAheadSimul=0.60000002;
		steerAheadPlan=0.40000001;
		predictTurnPlan=2.8;
		predictTurnSimul=2.5999999;
		brakeDistance=25;
		precision=5;
		transportSoldier=0;
		maxFordingDepth=0.050000001;
		wheelCircumference=1.9220001;
		tracksSpeed=-2.5;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		cost=1500000;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_APC_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_APC_p"
				};
			};
		};
		class TextureSources
		{
			class default_green_camo
			{
				displayName="BMP-2M_Camo_Green";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\bmp_2_body_co.paa",
					"bs_bmp_2m\data\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class forest_camo
			{
				displayName="BMP-2M_Camo_Forest";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\forest\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\forest\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\forest\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class desert_yellow_brown_camo
			{
				displayName="BMP-2M_Camo_desert_yellow_brown";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\desert_yellow_brown\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\desert_yellow_brown\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\desert_yellow_brown\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class winter_white_olive_camo
			{
				displayName="BMP-2M_Camo_winter_white_olive";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\winter_white_olive\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\winter_white_olive\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\winter_white_olive\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class deform_camo
			{
				displayName="BMP-2M_Camo_deform";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\deform\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\deform\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\deform\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class winter_camo
			{
				displayName="BMP-2M_Camo_winter";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\winter\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\winter\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\winter\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class winter_lines_camo
			{
				displayName="BMP-2M_Camo_winter_lines";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\winter_lines\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\winter_lines\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\winter_lines\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class brown_lines_camo
			{
				displayName="BMP-2M_Camo_brown_lines";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\brown_lines\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\brown_lines\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\brown_lines\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class snow_spots_camo
			{
				displayName="BMP-2M_Camo_snow_spots";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\snow_spots\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\snow_spots\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\snow_spots\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class modern_desert_camo
			{
				displayName="BMP-2M_Camo_modern_desert";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\modern_desert\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\modern_desert\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\modern_desert\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class modern_green_camo
			{
				displayName="BMP-2M_Camo_modern_green";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\modern_green\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\modern_green\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\modern_green\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class airborne_forces_camo
			{
				displayName="BMP-2M_Camo_airborne_forces";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\airborne_forces\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\airborne_forces\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\airborne_forces\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class chdkz_camo
			{
				displayName="BMP-2M_Camo_chdkz";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\chdkz\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\chdkz\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\chdkz\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class fin_camo
			{
				displayName="BMP-2M_Camo_fin";
				author="SG & BS";
				textures[]=
				{
					"bs_bmp_2m\data\camo\fin\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\fin\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\fin\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
				factions[]={};
			};
			class svo
			{
				displayName = "ZOV";
				author = "Qewa";
				textures[]=
				{
					"bs_bmp_2m\data\camo\svo\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\svo\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\svo\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
			};
			class svo_zov
			{
				displayName = "ZOV GOYDA";
				author = "Qewa";
				textures[]=
				{
					"bs_bmp_2m\data\camo\svo_zov\bmp_2_body_co.paa",
					"bs_bmp_2m\data\camo\svo_zov\bmp_2m_turret_co.paa",
					"bs_bmp_2m\data\camo\svo_zov\bmp_2_gun_co.paa",
					"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
					"bs_bmp_2m\data\rifled_barrel_b_co.paa",
					"bs_bmp_2m\data\9m133_rocket_co.paa"
				};
			};
		};
		class AnimationSources
		{
			class recoil
			{
				source="reload";
				weapon="rhs_weap_2a42";
			};
			class ags_recoil
			{
				source="reload";
				weapon="atg_weap_ag17";
			};
			class front_panel_anim
			{
				source="user";
				animperiod=2;
				initPhase=0;
				sound="";
			};
			class missiles_revolving
			{
				source="revolving";
				weapon="bs_weap_kornet_d_launcher";
			};
			class revolving
			{
				source="revolving";
				weapon="rhs_weap_902a";
			};
			class zaslehrot_coax
			{
				source="ammorandom";
				weapon="atg_weap_pkt";
			};
			class ex_armor_l_01_hit
			{
				source="Hit";
				hitpoint="ex_armor_l_01_hit";
			};
			class ex_armor_l_02_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_l_02_hit";
			};
			class ex_armor_l_03_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_l_03_hit";
			};
			class ex_armor_l_04_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_l_04_hit";
			};
			class ex_armor_l_05_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_l_05_hit";
			};
			class ex_armor_r_01_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_r_01_hit";
			};
			class ex_armor_r_02_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_r_02_hit";
			};
			class ex_armor_r_03_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_r_03_hit";
			};
			class ex_armor_r_04_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_r_04_hit";
			};
			class ex_armor_r_05_hit: ex_armor_l_01_hit
			{
				hitpoint="ex_armor_r_05_hit";
			};
		};
		class Reflectors
		{
			class RSvetla
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="p svetlo";
				direction="konec P svetla";
				hitpoint="p svetlo";
				selection="p svetlo";
				size=1;
				innerAngle=50;
				outerAngle=140;
				coneFadeCoef=10;
				intensity=2.5;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LSvetla
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="l svetlo";
				direction="konec L svetla";
				hitpoint="l svetlo";
				selection="l svetlo";
				size=1;
				innerAngle=50;
				outerAngle=140;
				coneFadeCoef=10;
				intensity=2.5;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
		};
		aggregateReflectors[]=
		{
			"RSvetla",
			"LSvetla"
		};
		class MarkerLights
		{
		};
		class UserActions
		{
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectTankBack";
			};
			class Exhaust2: Exhaust1
			{
				position="vyfuk start2";
				direction="vyfuk konec2";
			};
		};
		armor=400;
		armorStructural=15;
		class HitPoints
		{
			class HitHull
			{
				armor=0.80000001;
				material=-1;
				name="hithull_point";
				armorComponent="hit_hithull";
				visual="camo1";
				passThrough=1;
				minimalHit=0.045000002;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitEngine
			{
				armor=0.80000001;
				material=-1;
				name="hitengine_point";
				armorComponent="hit_hitengine";
				passThrough=1;
				minimalHit=0.045000002;
				explosionShielding=0.5;
				radius=0.30000001;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke";
						intensity=0.5;
						interval=1;
						lifeTime=60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type="SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type="RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation="sound";
						type="Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type="WeaponWreckSmoke";
						position="vyfuk start";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position="vyfuk start2";
					};
				};
			};
			class HitFuel
			{
				armor=1.5;
				material=-1;
				name="hitfuel_point";
				armorComponent="hit_hitfuel";
				visual="-";
				passThrough=1;
				minimalHit=0.079999998;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitLTrack
			{
				armor=0.5;
				material=-1;
				name="hittrack_l_point";
				visual="camo4";
				passThrough=0;
				minimalHit=0.23999999;
				explosionShielding=0.40000001;
				radius=0.30000001;
			};
			class HitRTrack
			{
				armor=0.5;
				material=-1;
				name="hittrack_r_point";
				visual="camo4";
				passThrough=0;
				minimalHit=0.23999999;
				explosionShielding=0.40000001;
				radius=0.30000001;
			};
			class ex_armor_l_01_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_l_01_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_l_01";
			};
			class ex_armor_l_02_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_l_02_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_l_02";
			};
			class ex_armor_l_03_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_l_03_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_l_03";
			};
			class ex_armor_l_04_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_l_04_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_l_04";
			};
			class ex_armor_l_05_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_l_05_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_l_05";
			};
			class ex_armor_r_01_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_r_01_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_r_01";
			};
			class ex_armor_r_02_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_r_02_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_r_02";
			};
			class ex_armor_r_03_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_r_03_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_r_03";
			};
			class ex_armor_r_04_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_r_04_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_r_04";
			};
			class ex_armor_r_05_hit
			{
				armor=-20;
				material=-1;
				name="ex_armor_r_05_hit";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_r_05";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"bs_bmp_2m\data\bmp_2_body_co.paa",
			"bs_bmp_2m\data\bmp_2m_turret_co.paa",
			"bs_bmp_2m\data\bmp_2_gun_co.paa",
			"bs_bmp_2m\data\ussr_bmp_1_track_co.paa",
			"bs_bmp_2m\data\rifled_barrel_b_co.paa",
			"bs_bmp_2m\data\9m133_rocket_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"bs_bmp_2m\data\materials\bmp_2_body.rvmat",
				"bs_bmp_2m\data\damage\bmp_2_body_damage.rvmat",
				"bs_bmp_2m\data\damage\bmp_2_body_destruct.rvmat",
				"bs_bmp_2m\data\materials\bmp_2m_turret.rvmat",
				"bs_bmp_2m\data\damage\bmp_2m_turret_damage.rvmat",
				"bs_bmp_2m\data\damage\bmp_2m_turret_destruct.rvmat",
				"bs_bmp_2m\data\materials\bmp_2_gun.rvmat",
				"bs_bmp_2m\data\damage\bmp_2_gun_damage.rvmat",
				"bs_bmp_2m\data\damage\bmp_2_gun_destruct.rvmat",
				"bs_bmp_2m\data\materials\ussr_bmp_1_track.rvmat",
				"bs_bmp_2m\data\damage\ussr_bmp_1_track_damage.rvmat",
				"bs_bmp_2m\data\damage\ussr_bmp_1_track_destruct.rvmat",
				"bs_bmp_2m\data\materials\rifled_barrel_b.rvmat",
				"bs_bmp_2m\data\damage\rifled_barrel_b_damage.rvmat",
				"bs_bmp_2m\data\damage\rifled_barrel_b_destruct.rvmat",
				"bs_bmp_2m\data\materials\9m133_rocket.rvmat",
				"bs_bmp_2m\data\damage\9m133_rocket_damage.rvmat",
				"bs_bmp_2m\data\damage\9m133_rocket_destruct.rvmat"
			};
		};
		memoryPointMissile[]=
		{
			"spice rakety",
			"usti hlavne"
		};
		memoryPointMissileDir[]=
		{
			"konec rakety",
			"konec hlavne"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_2a42",
					"atg_weap_ag17",
					"rhs_weap_9K133M_9M133M2",
					"atg_weap_pkt",
					"rhs_weap_902a"
				};
				magazines[]=
				{
					"rhs_mag_3uof8_340",
					"rhs_mag_3ubr6_160",
					"rhs_mag_762x54mm_2000",
					"rhs_mag_9m133m2_pylon",
					"rhs_mag_9m133m2_pylon",
					"rhs_mag_9m133m2_pylon",
					"rhs_mag_9m133m2_pylon",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"RHS_mag_VOG30_30",
					"rhs_mag_3d17_6"
				};
				soundServo[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\turret1.wss",
					4,
					1,
					10
				};
				soundServoVertical[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\turret1.wss",
					0.56234097,
					1,
					30
				};
				maxHorizontalRotSpeed=0.60000002;
				maxVerticalRotSpeed=0.27000001;
				discreteDistance[]={50,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex=3;
				forceHideGunner=0;
				memoryPointGunnerOptics="gunnerview";
				turretInfoType="RscOptics_MBT_02_gunner";
				proxyType="CPGunner";
				proxyIndex=1;
				outGunnerMayFire=0;
				primary=1;
				primaryGunner=1;
				primaryObserver=0;
				minElev=-4;
				maxElev=30;
				initElev=0;
				initTurn=0;
				stabilizedInAxes=3;
				animationSourceBody="mainTurret";
				animationSourceGun="maingun";
				body="mainTurret";
				gun="maingun";
				memoryPointGun="usti hlavne 3";
				gunnerOpticsEffect[]={};
				ejectDeadGunner=0;
				viewGunnerInExternal=1;
				lockWhenDriverOut=1;
				radarType=0;
				startEngine=0;
				LodTurnedIn=1000;
				LodTurnedOut=1000;
				LodOpticsOut=1000;
				LODOpticsIn=1000;
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerAction="rhs_bmp3_commanderOut";
				gunnerInAction="rhs_bmp3_gunner";
				personTurretAction="RHS_passenger_inside_6";
				gunnerOpticsModel="";
				gunnerForceoptics=1;
				hasGunner=1;
				allowTabLock=0;
				hideWeaponsGunner=1;
				selectionFireAnim="zasleh2";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=1.5;
						material=-1;
						name="hitturret_point";
						armorComponent="hit_hitturret";
						visual="camo2";
						passThrough=1;
						minimalHit=0.024;
						explosionShielding=0.30000001;
						radius=0.2;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.2;
						material=-1;
						name="hitgun_point";
						visual="camo3";
						armorComponent="gun_barrel";
						passThrough=0;
						minimalHit=0.18000001;
						explosionShielding=0.25;
						radius=0.1;
						isGun=1;
					};
				};
				class ViewOptics
				{
					minAngleX=-45;
					maxAngleX=45;
					initAngleX=0;
					minAngleY=-75;
					maxAngleY=75;
					initAngleY=0;
					minFov=0.5;
					maxFov=0.09375;
					initFov=0.75;
					visionMode[]=
					{
						"Normal"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						minFov=0.40000001;
						maxFov=0.40000001;
						initFov=0.40000001;
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalScreen_wide.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						opticsDisplayName="";
						minFov="0.233/6";
						maxFov="0.233/6";
						initFov="0.233/6";
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalScreen_wide.p3d";
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
					};
					class Narrow: Medium
					{
						opticsDisplayName="";
						minFov="0.233/12";
						maxFov="0.233/12";
						initFov="0.233/12";
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalScreen_narrow.p3d";
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						proxyType="CPCommander";
						proxyIndex=1;
						weapons[]={};
						magazines[]={};
						memoryPointGunnerOptics="commanderview";
						body="obsturret";
						gun="obsgun";
						minElev=-10;
						maxElev=60;
						commanding=4;
						animationSourceBody="obsturret";
						animationSourceGun="obsgun";
						viewGunnerInExternal=1;
						ejectDeadGunner=0;
						gunnerType="rhs_msv_crew_commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerAction="rhs_bmp3_commanderOut";
						gunnerInAction="rhs_bmp3_commander";
						gunnerOutForceOptics=0;
						isPersonTurret=0;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_m1_triplex";
						gunnerOutOpticsModel="";
						gunnerHasFlares=1;
						canUseScanners=0;
						allowTabLock=0;
						turretInfoType="RscOptics_MBT_02_gunner";
						startEngine=0;
						personTurretAction="";
						lockWhenDriverOut=0;
						outGunnerMayFire=1;
						LodTurnedIn=1000;
						LodTurnedOut=1000;
						LodOpticsOut=1000;
						LODOpticsIn=1000;
						memoryPointsGetInGunner="pos commander";
						memoryPointsGetInGunnerDir="pos commander dir";
						primary=0;
						primaryGunner=0;
						primaryObserver=1;
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-95;
						maxOutTurn=95;
						initOutTurn=0;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes=2;
						inGunnerMayFire=1;
						hideWeaponsGunner=1;
						class ViewOptics: ViewOptics
						{
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_m1_triplex.p3d";
								initFov="0.233*2";
								minFov="0.233*2";
								maxFov="0.233*2";
								visionMode[]=
								{
									"Normal",
									"Ti"
								};
							};
							class com_norm: Wide
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
								gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_m1_triplex.p3d";
								visionMode[]=
								{
									"Normal",
									"Ti"
								};
							};
							class com_norm_x8: com_norm
							{
								initFov="0.233/8";
								minFov="0.233/8";
								maxFov="0.233/8";
							};
						};
						class HitPoints
						{
							class HitTurretCom
							{
								armor=1;
								material=-1;
								name="obsturret_hitpoint";
								visual="bone_commander_sight_h";
								passThrough=0.5;
								minimalHit=0.25;
								explosionShielding=0.30000001;
								radius=0.30000001;
								isTurret=1;
							};
						};
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
							{
								class EmptyDisplay
								{
									componentType="EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType="CrewDisplayComponent";
									resource="RscCustomInfoCrew";
								};
							};
							class VehicleSystemsDisplayManagerComponentRight
							{
								class EmptyDisplay
								{
									componentType="EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType="CrewDisplayComponent";
									resource="RscCustomInfoCrew";
								};
							};
						};
					};
				};
			};
			class CargoInside_Left_1: NewTurret
			{
				proxyIndex=1;
				gunnerName="$STR_CargoBackLeft";
				proxyType="CPCargo";
				showAsCargo=1;
				memoryPointsGetInGunner="pos cargo l";
				memoryPointsGetInGunnerDir="pos cargo l dir";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				memoryPointGunnerOptics="cargo_cam_1_pos";
				gunnerInAction="rhs_bmd_cargo_in";
				forceHideGunner=1;
				viewGunnerInExternal=1;
				dontCreateAI=1;
				primaryGunner=0;
				primaryObserver=0;
				canUseScanners=0;
				allowTabLock=0;
				gunnerForceOptics=1;
				startEngine=0;
				maxHorizontalRotSpeed=0;
				maxVerticalRotSpeed=0;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				LodOpticsIn=1000;
				LodOpticsOut=1000;
				gunnerCompartments="Compartment4";
				class ViewOptics: ViewOptics
				{
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cargo_cam_1_pos";
						camDir="cargo_cam_1_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.233;
						maxFov=0.233;
						initFov=0.233;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
						gunnerOpticsEffect[]={};
					};
				};
				class HitPoints
				{
				};
			};
			class CargoInside_Left_2: CargoInside_Left_1
			{
				proxyIndex=2;
				memoryPointGunnerOptics="cargo_cam_2_pos";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cargo_cam_2_pos";
						camDir="cargo_cam_2_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.233;
						maxFov=0.233;
						initFov=0.233;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Left_3: CargoInside_Left_1
			{
				proxyIndex=3;
				memoryPointGunnerOptics="cargo_cam_3_pos";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cargo_cam_3_pos";
						camDir="cargo_cam_3_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.233;
						maxFov=0.233;
						initFov=0.233;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Right_1: CargoInside_Left_1
			{
				proxyIndex=4;
				gunnerName="$STR_CargoBackRight";
				memoryPointGunnerOptics="cargo_cam_4_pos";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cargo_cam_4_pos";
						camDir="cargo_cam_4_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.233;
						maxFov=0.233;
						initFov=0.233;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Right_2: CargoInside_Left_1
			{
				proxyIndex=5;
				gunnerName="$STR_CargoBackRight";
				memoryPointGunnerOptics="cargo_cam_5_pos";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cargo_cam_5_pos";
						camDir="cargo_cam_5_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.233;
						maxFov=0.233;
						initFov=0.233;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Right_3: CargoInside_Left_1
			{
				proxyIndex=6;
				gunnerName="$STR_CargoBackRight";
				memoryPointGunnerOptics="cargo_cam_6_pos";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cargo_cam_6_pos";
						camDir="cargo_cam_6_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.233;
						maxFov=0.233;
						initFov=0.233;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Front: CargoInside_Left_1
			{
				proxyIndex=7;
				gunnerName="BMP-2M_CargoFront";
				memoryPointGunnerOptics="cargo_7_view";
				memoryPointsGetInGunner="cargo14";
				memoryPointsGetInGunnerDir="cargo14_dir";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.233;
						maxFov=0.233;
						initFov=0.233;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				proxyIndex=9;
				gunnerName="BMP-2M_LM_Pass";
				gunnerCompartments="Compartment3";
				commanding=-2;
				gunnerAction="passenger_flatground_2";
				memoryPointsGetInGunner="cargo9";
				memoryPointsGetInGunnerDir="cargo9_dir";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				maxElev=45;
				minElev=-35;
				maxTurn=61;
				minTurn=-35;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				LodOpticsIn=1000;
				LodOpticsOut=1000;
				CanHideGunner=0;
				class ViewOptics
				{
					minAngleX=-30;
					maxAngleX=30;
					initAngleX=0;
					minAngleY=-45;
					maxAngleY=45;
					initAngleY=0;
					minFov=1;
					maxFov=1;
					initFov=1;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex=10;
				gunnerName="BMP-2M_RR_Pass";
				gunnerAction="passenger_flatground_3";
				memoryPointsGetInGunner="cargo10";
				memoryPointsGetInGunnerDir="cargo10_dir";
			};
			class CargoTurret_03: CargoTurret_01
			{
				proxyIndex=11;
				gunnerName="BMP-2M_RM_Pass";
				gunnerAction="passenger_flatground_4";
				memoryPointsGetInGunner="cargo11";
				memoryPointsGetInGunnerDir="cargo11_dir";
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
			};
			class CargoTurret_04: CargoTurret_01
			{
				proxyIndex=12;
				gunnerName="BMP-2M_C_Pass";
				gunnerAction="passenger_boat_3";
				memoryPointsGetInGunner="cargo12_13";
				memoryPointsGetInGunnerDir="cargo12_13_dir";
				maxElev=20;
				minElev=-20;
				maxTurn=0;
				minTurn=-35;
			};
			class CargoTurret_05: CargoTurret_01
			{
				proxyIndex=13;
				gunnerName="BMP-2M_R_Pass";
				gunnerAction="rhs_bmp_cargostatic_01";
				memoryPointsGetInGunner="cargo12_13";
				memoryPointsGetInGunnerDir="cargo12_13_dir";
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
				enabledByAnimationSource="cargoHandler1";
			};
			class CargoTurret_06: CargoTurret_01
			{
				proxyIndex=15;
				gunnerName="BMP-2M_RF_Pass";
				gunnerAction="rhs_bmp_cargostatic_02";
				memoryPointsGetInGunner="cargo15";
				memoryPointsGetInGunnerDir="cargo15_dir";
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
			};
			class CargoTurret_07: CargoTurret_01
			{
				proxyIndex=16;
				gunnerName="BMP-2M_F_Pass";
				gunnerAction="rhs_bmp_cargostatic_03";
				memoryPointsGetInGunner="cargo16";
				memoryPointsGetInGunnerDir="cargo16_dir";
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
			};
			class CargoTurret_08: CargoTurret_01
			{
				proxyIndex=17;
				gunnerName="BMP-2M_FC_Pass";
				gunnerAction="passenger_flatground_4";
				memoryPointsGetInGunner="cargo17";
				memoryPointsGetInGunnerDir="cargo17_dir";
				maxElev=0.001;
				minElev=0;
				maxTurn=0.001;
				minTurn=0;
			};
		};
		getInProxyOrder[]={1,2,3,4,5,6};
		class Eventhandlers: EventHandlers
		{
			init="_this execVM 'bs_bmp_2m\scripts\inWater_bmp2m.sqf'";
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class mkk_BMP_2M: BMP_2M_base_Tank_F
	{
		author="Qewa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};
class CfgWeapons
{
    class rhs_weap_2a42_base;
    class rhs_weap_2a42: rhs_weap_2a42_base
    {
		ballisticsComputer= "2+16";
        maxZeroing = 3500;
	};
	class rhs_weap_pkt;
	class atg_weap_pkt: rhs_weap_pkt
	{
		ballisticsComputer= "2+16";
		maxZeroing = 1000;
	};
	class RHS_weap_Ags30;
	class atg_weap_ag17: RHS_weap_Ags30
	{
		displayName="AG-17";
		ballisticsComputer= "2+16";
        maxZeroing = 1730;
	};
	class ace_compat_rhs_afrf3_rhs_weap_9K133_launcher;
	class ace_weap_9K133_launcher: ace_compat_rhs_afrf3_rhs_weap_9K133_launcher
	{
	};
	class bs_weap_kornet_d_launcher: ace_weap_9K133_launcher
	{
		canlock=0;
		cursoraim="";
		weaponLockSystem=1;
		displayname="9K135";
		magazines[]=
		{
			"bs_mag_kornet_d_9m133M2"
		};
		airateoffire=4;
		airateoffiredistance=700;
		maxrange=5000;
		maxrangeprobab=0.001;
		midrange=3000;
		midrangeprobab=0.69999999;
		minrange=65;
		minrangeprobab=0.5;
		reloadtime=1;
		magazineReloadTime=1;
		class gunParticles
		{
		};
	};
};
class cfgMods
{
	author="Qewa";
	timepacked="1674415925";
};
