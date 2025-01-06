#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class mavik_Data
	{
		author="DarkBall & Sam";
		name="DJI Mavic 3 MOD";
		url="";
		requiredAddons[]={"A3_Data_F_AoW_Loadorder","A3_Data_F","A3_Drones_F","cba_settings"};
		requiredVersion=2.18;
		units[]={"mavik_3_OPF","mavik_3_BLU","mavik_3_IND","mavik_3T_OPF","mavik_3T_BLU","mavik_3T_IND"};
		magazines[]={"Item_Mavic3","Item_Mavic3T"};
		weapons[]={};
	};
};

class CfgFunctions
{
	class mavic
	{
		class mavic_main
		{
			file="\mavik\functions";
			class drawHud {};
			class getSignal {};
			class handleConnect {postInit=1;};
			class onExit {};
			class createMavicOnItemCheck {};
			class addUavToInventory {};
			class changeBattery {};
			class checkUAVGrenadeDrop {};
			class canDisassembly {};
		};
	};
};

class Extended_PreInit_EventHandlers
{
	class Mavic_preInit
	{
		init="call compile preProcessFileLineNumbers '\mavik\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers
{
	class Mavic_postInit
	{
		init="call compile preProcessFileLineNumbers '\mavik\XEH_clientInit.sqf'";
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
		class ACE_Actions
		{
			class ACE_MainActions {};
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHRotor;
			class HitHull;
		};
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions {};
		};
		class AnimationSources;
		class EventHandlers;
		class Components;
	};
	class UAV_06_base_F: Helicopter_Base_F
	{
		class ViewPilot;
		class ViewOptics;
	};
	class mavic_drone_base_F: UAV_06_base_F
	{
		features="Randomization: No						<br />Camo selections: 1 - the whole body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: None";
		author="Sam";
		mapSize=4;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_air_UAV_s"};
				speechPlural[]={"veh_air_UAV_p"};
			};
		};
		textSingular="$STR_A3_nameSound_veh_air_UAV_s";
		textPlural="$STR_A3_nameSound_veh_air_UAV_p";
		nameSound="veh_air_UAV_s";
		editorSubcategory="EdSubcat_Drones";
		scope=0;
		displayName="DJI Mavic 3";
		isUav=1;
		uavCameraDriverPos="pip_pilot_pos";
		uavCameraDriverDir="pip_pilot_dir";
		uavCameraGunnerPos="pos_pilotcamera";
		uavCameraGunnerDir="pos_pilotcamera_dir";
		memoryPointDriverOptics="pos_pilotcamera";
		driverOpticsModel="\mavik\mavik_hud.p3d";
		GunnerOpticsModel="\mavik\mavik_hud.p3d";
		driverForceOptics=1;
		extCameraPosition[]={0,-0.25,-2.3499999};
		extCameraParams[]={0.93000001,10,30,0.25,1,10,30,0,1};
		formationX=10;
		formationZ=10;
		memoryPointTaskMarker="TaskMarker_1_pos";
		disableInventory=1;
		unitInfoType="RscUnitInfoNoWeapon";
		unitInfoTypeRTD="RscUnitInfoNoWeapon";
		driverWeaponsInfoType="RscOptics_Offroad_01";
		getInRadius=0;
		damageEffect="UAVDestructionEffects";
		damageTexDelay=0.5;
		dustEffect="UAVDust";
		waterEffect="UAVWater";
		washDownDiameter="10.0f";
		washDownStrength="0.25f";
		killFriendlyExpCoef=0.1;
		accuracy=1.5;
		camouflage=0.5;
		audible=0.1;
		armor=0.5;
		cost=20000;
		altFullForce=1000;
		altNoForce=2000;
		epeImpulseDamageCoef=5;
		fuelExplosionPower=0;
		vehicleClass="Autonomous";
		model="\mavik\mavik3.p3d";
		icon="\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\Map_UAV_01_CA.paa";
		picture="\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
		class Reflectors {};
		startDuration=3;
		maxSpeed=10;
		precision=15;
		steerAheadSimul=0.5;
		steerAheadPlan=0.69999999;
		predictTurnPlan=2;
		predictTurnSimul=1.5;
		liftForceCoef=1;
		cyclicAsideForceCoef=2;
		cyclicForwardForceCoef=1.2;
		bodyFrictionCoef=0.30000001;
		backRotorForceCoef=5;
		fuelCapacity=0.5;
		fuelConsumptionRate=0.00027700001;
		maxFordingDepth=0.30000001;
		threat[]={0.1,0.1,0.1};
		maxMainRotorDive=0;
		minMainRotorDive=0;
		neutralMainRotorDive=0;
		gearRetracting=0;
		mainRotorSpeed=7;
		backRotorSpeed=-7;
		mainBladeCenter="rotor_center";
		mainBladeRadius=0.34999999;
		tailBladeCenter="rotor2_center";
		tailBladeRadius=0.34999999;
		tailBladeVertical=0;
		radarTargetSize=0.1;
		visualTargetSize=0.1;
		irTarget=0;
		lockDetectionSystem=0;
		incomingMissileDetectionSystem=0;
		weapons[]={};
		magazines[]={};
		irScanRangeMin=0;
		irScanRangeMax=0;
		irScanToEyeFactor=1;
		class TransportItems {};
		destrType="DestructWreck";
		driverCompartments="Compartment3";
		cargoCompartments[]={"Compartment2"};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"mavik\textures\body_co.paa"};
		selectionDamage="damage";
		class Damage
		{
			tex[]={};
			mat[]={"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01.rvmat","A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_damage.rvmat","A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_destruct.rvmat"};
		};
		class ViewPilot: ViewPilot
		{
			minFov=0.25;
			maxFov=0.80000001;
			initFov=0.80000001;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class ViewOptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			minFov=0.25;
			maxFov=0.80000001;
			initFov=0.80000001;
			visionMode[]={"Normal"};
			thermalMode[]={0,1};
		};
		class MFD {};
		enableManualFire=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class PilotCamera
		{
			minTurn=-27;
			maxTurn=27;
			initTurn=0;
			minElev=-35;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.80000001;
					minFov=0.028000001;
					maxFov=0.80000001;
					directionStabilized=1;
					visionMode[]={"Normal"};
					thermalMode[]={};
					GunnerOpticsModel="\mavik\mavik_hud.p3d";
					opticsPPEffects[]={"OpticsCHAbera2","OpticsBlur2"};
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
		};
		attenuationEffectType="OpenHeliAttenuation";
		soundGetIn[]={"",1,1};
		soundGetOut[]={"",1,1,50};
		soundEnviron[]={"",0.031622775,1};
		soundDammage[]={"",0.56234133,1};
		soundEngineOnInt[]={"A3\Sounds_F\air\Uav_01\quad_start_full_int",0,2};
		soundEngineOnExt[]={"mavik\sounds\quad_engine_full_mavic",0.56234133,1,120};
		soundEngineOffInt[]={"A3\Sounds_F\air\Uav_01\quad_stop_full_int",0,2};
		soundEngineOffExt[]={"mavik\sounds\quad_engine_full_mavic",0.56234133,3,60};
		soundBushCollision1[]={"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1,1,10};
		soundBushCollision2[]={"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1,1,10};
		soundBushCollision3[]={"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1,1,10};
		soundBushCrash[]={
			"soundBushCollision1",0.33000001,
			"soundBushCollision2",0.33000001,
			"soundBushCollision3",0.33000001
		};
		soundWaterCollision1[]={"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1,1,10};
		soundWaterCollision2[]={"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1,1,10};
		soundWaterCrashes[]={
			"soundWaterCollision1",0.5,
			"soundWaterCollision2",0.5
		};
		Crash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,90};
		Crash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,90};
		Crash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,90};
		Crash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,90};
		soundCrashes[]={
			"Crash0",0.25,
			"Crash1",0.25,
			"Crash2",0.25,
			"Crash3",0.25
		};
		class Sounds
		{
			class Engine
			{
				sound[]={"mavik\sounds\quad_engine_full_mavic",0.44668359,1,120};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]={"A3\Sounds_F\air\Uav_01\blade",0.31622776,3,60};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[]={"A3\Sounds_F\air\Uav_01\blade_high",0.31622776,3,65};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class EngineIn
			{
				sound[]={"A3\Sounds_F\air\Uav_01\quad_engine_full_int",0,2};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]={"A3\Sounds_F\air\Uav_01\blade_int",0,2};
				frequency="rotorSpeed";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[]={"A3\Sounds_F\air\Uav_01\blade_high_int",0,2};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustsEffectDrone";
			};
		};
		class EventHandlers
		{
			class Mavic_Events
			{
				killed="player connectTerminalToUAV objNull; { _x setDamage 1 } forEach (crew (_this # 0));";
				init="params ['_entity']; if ((isClass(configFile >> ""CfgPatches"" >> ""DB_D37_scripts_mavick_vogs"")) && !(is3DEN)) then { [_entity, 1] spawn mavic_drop_fnc_makeGrenadeDrone; };";
			};
		};
		class UserActions
		{
			class DisassembleUAV
			{
				displayName="Put in inventory";
				priority=0.5;
				radius=7;
				position="";
				showWindow=0;
				onlyForPlayer=1;
				icon="";
				condition="[this] call mavic_fnc_canDisassembly";
				statement="[this, player] call mavic_fnc_addUavToInventory";
			};
			class ChangeBattery
			{
				displayName="Change Battery";
				priority=0.5;
				radius=7;
				position="";
				showWindow=0;
				onlyForPlayer=1;
				icon="";
				condition="!(isClass (configFile >> ""CfgPatches"" >> ""ace_main"")) && (alive this) && ([player, ""Laserbatteries""] call BIS_fnc_hasItem) && (cameraOn == player) && {(fuel this) < 1} && {(speed this) < 1} && {!(isEngineOn this)}";
				statement="[this, player] call mavic_fnc_changeBattery";
			};
		};
		class Turrets {};
		class VehicleTransport {};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class components {};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				class components {};
			};
		};
	};
	class mavic3_drone_base_F: mavic_drone_base_F
	{
		displayName="DJI Mavic 3";
	};
	class mavic3T_drone_base_F: mavic_drone_base_F
	{
		displayName="DJI Mavic 3T";
		class ViewPilot: ViewPilot
		{
			visionMode[]={"Normal","Ti"};
			thermalMode[]={0,1,6};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]={"Normal","Ti"};
			thermalMode[]={0,1,6};
		};
		class PilotCamera: PilotCamera
		{
			class OpticsIn: OpticsIn
			{
				class Wide: Wide
				{
					visionMode[]={"Normal","Ti"};
					thermalMode[]={0,1,6};
				};
			};
		};
	};
	class mavik_3_OPF: mavic3_drone_base_F
	{
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI_F";
		typicalCargo[]={"O_UAV_AI_F"};
	};
	class mavik_3_BLU: mavic3_drone_base_F
	{
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI_F";
		typicalCargo[]={"B_UAV_AI_F"};
	};
	class mavik_3_IND: mavic3_drone_base_F
	{
		scope=2;
		scopeCurator=2;
		side=2;
		faction="IND_F";
		crew="I_UAV_AI_F";
		typicalCargo[]={"I_UAV_AI_F"};
	};
	class mavik_3_CIV: mavic3_drone_base_F
	{
		scope=2;
		scopeCurator=2;
		side=3;
		faction="CIV_F";
		crew="C_UAV_AI_F";
		typicalCargo[]={"C_UAV_AI_F"};
	};
	class mavik_3T_OPF: mavic3T_drone_base_F
	{
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI_F";
		typicalCargo[]={"O_UAV_AI_F"};
	};
	class mavik_3T_BLU: mavic3T_drone_base_F
	{
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI_F";
		typicalCargo[]={"B_UAV_AI_F"};
	};
	class mavik_3T_IND: mavic3T_drone_base_F
	{
		scope=2;
		scopeCurator=2;
		side=2;
		faction="IND_F";
		crew="I_UAV_AI_F";
		typicalCargo[]={"I_UAV_AI_F"};
	};
	class mavik_3T_CIV: mavic3T_drone_base_F
	{
		scope=2;
		scopeCurator=2;
		side=3;
		faction="CIV_F";
		crew="C_UAV_AI_F";
		typicalCargo[]={"C_UAV_AI_F"};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class Item_Mavic: CA_Magazine
	{
		scope=1;
		author="DarkBall";
		descriptionShort="DJI Mavic 3<br />FPV Recon Drone<br />Put on the ground to deploy it.";
		displayName="Mavic 3";
		model="\mavik\mavik3.p3d";
		icon="\mavik\interface\game\mavick_map.paa";
		picture="\mavik\interface\game\mavick_map.paa";
		mass=20;
		count=100;
		ammo="";
		ACE_isUnique = 1;
	};
	class Item_Mavic3: Item_Mavic
	{
		scope=2;
		descriptionShort="DJI Mavic 3<br />FPV Recon Drone<br />Put on the ground to deploy it.";
		displayName="Mavic 3";
		ACE_isUnique = 1;
	};
	class Item_Mavic3T: Item_Mavic
	{
		scope=2;
		descriptionShort="DJI Mavic 3T<br />FPV Recon Drone with Thermal Vision<br />Put on the ground to deploy it.";
		displayName="Mavic 3T";
		ACE_isUnique = 1;
	};
};

class CfgSounds
{
	sounds[]={};
	class Mavic_Beep
	{
		name="Mavic Beep";
		sound[]={"\mavik\sounds\beep.ogg",1,50,100};
		titles[]={0,""};
	};
};

class ctrlStaticPicture;
class ctrlControlsGroupNoScrollBars;
class ctrlStaticBackGround;
class ctrlStructuredText;
class RscTitles
{
	class Mavic_Interface
	{
		idd=-1;
		duration=1e+010;
		class controls
		{
			class Camera_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\camera.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2 - ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))/2 - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="safeZoneY + safeZoneH - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 )) - ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w="( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Settings_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\dots.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2 - ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))/2 - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="safeZoneY + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w="( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Exit_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\triangle.paa";
				x="safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="safeZoneY + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w="( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class FlightMode_Text: ctrlStructuredText
			{
				idc=-1;
				text="$STR_mavic_fligtMode";
				x="safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) ) + ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y="safeZoneY + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )  + ( 0.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 5.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
				size="( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class Attributes
				{
					font="PuristaMedium";
				};
			};
			class FlightStatus_Text: FlightMode_Text
			{
				text="In Flight";
				onLoad="uiNameSpace setVariable ['DB_mavic_FlightStatus_Text', _this # 0];";
				x="safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) ) + ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + 2*( 3.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
			};
			class Cross: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\kross.paa";
				x="0.5 - ( 5.0 * ( pixelGridNoUIScale * pixelW * 2 )) / 2";
				y="0.5 - ( 5.0 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w="( 5.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 5.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class MapTriangle_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\maptriangle.paa";
				x="safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class RTH_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\arrow.paa";
				x="safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 + ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Record_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\redcircle.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 - ( 3 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w="( 3 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 3 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Play_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\play.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2 - ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))/2 - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 + ( 3 * ( pixelGridNoUIScale * pixelH * 2 )) + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w="( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Galery_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\galery.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2 - ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))/2 - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w="( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Zoom_Display: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\zoom\zoom.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w="( 2.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Zoom_Text: ctrlStructuredText
			{
				idc=-1;
				text="4x";
				onLoad="uiNameSpace setVariable ['DB_mavic_Zoom_Text', _this # 0];";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 + ( 0.5 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 2.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
				size="( 1.1 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class Attributes
				{
					align="center";
					font="PuristaSemiBold";
				};
			};
			class MemoryPicture: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\main\memory.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="safeZoneY + safeZoneH - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 )) - ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w="( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class AF_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\zoom\AF.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 + ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) + ( 0.05 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 2.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Binoc_Button: ctrlStaticPicture
			{
				idc=-1;
				text="\mavik\interface\zoom\binocular.paa";
				x="safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y="0.5 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 2.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class UAVInfo_Group: ctrlControlsGroupNoScrollBars
			{
				idc=-1;
				x="safeZoneXAbs + ( 0.8 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y="safezoneY + safeZoneH - ( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w="( 15 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 3 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class Map_Picture: ctrlStaticPicture
					{
						idc=-1;
						text="\mavik\interface\main\map.paa";
						x=0;
						y=0;
						w="( 3.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 3.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class H_Text: ctrlStructuredText
					{
						idc=-1;
						x="( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y="( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 1.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w="( 1.4 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="H";
						size="( 1.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							color="#ccc5c5";
							font="PuristaMedium";
						};
					};
					class VSpeed: ctrlStructuredText
					{
						idc=-1;
						onLoad="uiNameSpace setVariable ['DB_mavic_VSpeed_control', _this # 0];";
						x="( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.4 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y="( 0.7 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w="( 6 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.7 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="0.0 km/h";
						size="( 0.9 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							font="PuristaMedium";
						};
					};
					class Height: VSpeed
					{
						idc=-1;
						onLoad="uiNameSpace setVariable ['DB_mavic_Height_control', _this # 0];";
						y="( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.1 * ( pixelGridNoUIScale * pixelH * 2 ))";
						h="( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="0.0 ft";
						size="( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class D_Text: H_Text
					{
						idc=-1;
						x="( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + 4*( 1.4 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.0 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 1.4 * ( pixelGridNoUIScale * pixelW * 2 ))";
						text="D";
					};
					class HSpeed: ctrlStructuredText
					{
						idc=-1;
						onLoad="uiNameSpace setVariable ['DB_mavic_HSpeed_control', _this # 0];";
						x="( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + 4*( 1.4 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y="( 0.7 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w="( 6 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.7 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="0.0 km/h";
						size="( 0.9 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							font="PuristaMedium";
						};
					};
					class Distance: HSpeed
					{
						idc=-1;
						onLoad="uiNameSpace setVariable ['DB_mavic_Distance_control', _this # 0];";
						y="( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.1 * ( pixelGridNoUIScale * pixelH * 2 ))";
						h="( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="0.0 ft";
						size="( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
			class StatusInfo_Group: ctrlControlsGroupNoScrollBars
			{
				idc=-1;
				x="safeZoneX + safeZoneWAbs - ( 5 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 11.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y="safeZoneY + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w="( 15 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class Battery: ctrlStaticPicture
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""DB_mavic_batteryPicture"", _this # 0]";
						text="\mavik\interface\bat\100.paa";
						x=0;
						y=0;
						w="( 1.5 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1.5 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class BatteryText: ctrlStructuredText
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""DB_mavic_batteryText"", _this # 0]";
						text="99";
						x=0;
						y="( 0.8 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 0.08 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w="( 1.5 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.8 * ( pixelGridNoUIScale * pixelH * 2 ))";
						size="( 0.8 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							color="#4cbb90";
							font="PuristaMedium";
							align="center";
						};
					};
					class RemainingTime: ctrlStructuredText
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""DB_mavic_RemainingTimeText"", _this # 0]";
						text="00'00""";
						size="( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							font="PuristaMedium";
						};
						x="( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y=0;
						w="( 4 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Signal: ctrlStaticPicture
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""DB_mavic_SignalText"", _this # 0]";
						text="\mavik\interface\signal\100.paa";
						x="( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y="( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w="( 1.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Sensor: ctrlStaticPicture
					{
						idc=-1;
						text="\mavik\interface\main\sensor.paa";
						x="( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + 4*( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y="( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w="( 1.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Satellite: ctrlStaticPicture
					{
						idc=-1;
						onLoad="uiNameSpace setVariable [""DB_mavic_SatellitePicture"", _this # 0]";
						text="\mavik\interface\main\sat0.paa";
						x="( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + 4*( 0.1 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y="( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w="( 1.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Datchik: ctrlStaticPicture
					{
						idc=-1;
						text="\mavik\interface\main\datchik.paa";
						x="( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + 5*( 0.1 * ( pixelGridNoUIScale * pixelW * 2 )) + 2*( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y="( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w="( 1.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
			class DetachGrenade: ctrlControlsGroupNoScrollBars
			{
				idc=-1;
				fade=1;
				onLoad="uiNameSpace setVariable [""DB_DetachGrenade_group"", _this # 0]";
				x="0.5 - ( 11 * ( pixelGridNoUIScale * pixelW * 2 )) / 2";
				y="0.5 - ( 6 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w="( 11 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h="( 6 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class BackGround: ctrlStaticPicture
					{
						idc=-1;
						text="\mavik\interface\detach\big.paa";
						x=0;
						y=0;
						w="( 11 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 6 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Text: ctrlStructuredText
					{
						idc=-1;
						class Attributes
						{
							align="center";
							font="PuristaMedium";
						};
						size="( 0.9 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text="$STR_mavic_dropMessage";
						x=0;
						y="( 6 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 1 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.9 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w="( 11 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h="( 1 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
		};
		class controlsBackground
		{
			class Gradient: ctrlStaticPicture
			{
				idc=-1;
				onLoad="uiNamespace setVariable [""DB_gradient_control"", _this # 0];";
				text="\mavik\interface\signal\gradient.paa";
				x="safeZoneXAbs";
				y="safeZoneY";
				w="safeZoneWAbs";
				h="safeZoneH";
				show=0;
			};
		};
	};
};
