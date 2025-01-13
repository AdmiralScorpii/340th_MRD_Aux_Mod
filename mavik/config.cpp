class CfgPatches
{
	class mavik_Data
	{
		name = "Mavic 3 (Improved) - Core";
		author = "Mavic 3 MOD";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id = 3401580668";
		requiredVersion = 2.18;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder","cba_settings"};
		units[] = {"mavik_3_OPF","mavik_3_BLU","mavik_3_IND","mavik_3_CIV","mavik_3T_OPF","mavik_3T_BLU","mavik_3T_IND","mavik_3T_CIV"};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class mavic //mavic_fnc_scriptsClass
	{
		file = "\mavik\functions";
		class functions
		{
			class drawHud {};
			class getSignal {};
			class handleConnect {postInit = 1;};
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
		init = "call compile preProcessFileLineNumbers '\mavik\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers
{
	class Mavic_postInit
	{
		init = "call compile preProcessFileLineNumbers '\mavik\XEH_clientInit.sqf'";
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
	class Helicopter_Base_F;
	class UAV_06_base_F: Helicopter_Base_F
	{
		class ViewPilot;
		class ViewOptics;
		class EventHandlers;
		class Components;
	};
	class mavic_drone_base_F: UAV_06_base_F
	{
		author = "Mavic 3 MOD";
		scope = 0;
		displayName = "DJI Mavic 3";
		mapSize = 4;
		uavCameraDriverPos = "pip_pilot_pos";
		uavCameraDriverDir = "pip_pilot_dir";
		uavCameraGunnerPos = "pos_pilotcamera";
		uavCameraGunnerDir = "pos_pilotcamera_dir";
		memoryPointDriverOptics = "pos_pilotcamera";
		driverOpticsModel = "\mavik\mavik_hud.p3d";
		driverForceOptics = 1;
		extCameraPosition[] = {0,-0.25,-2.35};
		extCameraParams[] = {0.93,10,30,0.25,1,10,30,0,1};
		disableInventory = 1;
		unitInfoType = "RscOptics_UAV_06";
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		unitInfoTypeLite = "RscUnitInfoAirRTDBasic";
		driverWeaponsInfoType = "RscOptics_UAV_06_TGP";
		epeImpulseDamageCoef = 5;
		model = "\mavik\mavik3.p3d";
		icon = "\mavik\interface\game\mavick_map.paa";
		picture = "\mavik\interface\game\mavick_map.paa";
		maxSpeed = 100;
		liftForceCoef = 1;
		cyclicAsideForceCoef = 2;
		cyclicForwardForceCoef = 1.2;
		bodyFrictionCoef = 0.3;
		backRotorForceCoef = 5;
		fuelCapacity = 0.5;
		fuelConsumptionRate = 0.00028;
		mainBladeRadius = 0.35;
		tailBladeRadius = 0.35;
		class TransportItems {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"mavik\textures\body_co.paa"};
		destrType = "DestructWreck";
		class MarkerLights
		{
			class NavGreen
			{
				name = "nav_green";
				blinking = 1;
				blinkingStartsOn = 1;
				blinkingPattern[] = {0.5,0.5};
				blinkingPatternGuarantee = 1;
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.05;
				activeLight = 0;
				dayLight = 1;
				useFlare = 1;
				flareSize = 0.05;
				size = 0.02;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class NavGreenB: NavGreen
			{
				name = "nav_greenB";
			};
			class NavRED: NavGreen
			{
				name = "nav_redB";
				blinkingStartsOn = 0;
				color[] = {0.8,0,0};
				ambient[] = {0.8,0,0};
			};
		};
		class ViewPilot: ViewPilot
		{
			minFov = 0.25;
			maxFov = 0.8;
			initFov = 0.8;
		};
		class ViewOptics: ViewOptics
		{
			minFov = 0.25;
			maxFov = 0.8;
			initFov = 0.8;
			visionMode[] = {"Normal"};
			thermalMode[] = {};
		};
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide //x1~25
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.8;
					minFov = 0.028;
					maxFov = 0.8;
					//initFov = 0.25;
					//minFov = 0.01; //0.25x0.25= x25 zoom!
					//maxFov = 0.25; //from 1x scope. so it's x1 zoom
					directionStabilized = 1;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
					gunnerOpticsModel = "\mavik\mavik_hud.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};/*
				class Medium //x3~7
				{
					opticsDisplayName = "MFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.0833;
					minFov = 0.0357;
					maxFov = 0.0833;
					directionStabilized = 1;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
					gunnerOpticsModel = "\mavik\mavik_hud.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class Narrow //x7~25
				{
					opticsDisplayName = "NFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.0357;
					minFov = 0.01;
					maxFov = 0.0357;
					directionStabilized = 1;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
					gunnerOpticsModel = "\mavik\mavik_hud.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};*/
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 0;
			};
			minTurn = -27;
			maxTurn = 27;
			initTurn = 0;
			minElev = -35;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Uav_01\quad_start_full_int",0,2};
		soundEngineOnExt[] = {"mavik\sounds\quad_engine_full_mavic",0.56234133,1,120};
		soundEngineOffInt[] = {"A3\Sounds_F\air\Uav_01\quad_stop_full_int",0,2};
		soundEngineOffExt[] = {"mavik\sounds\quad_engine_full_mavic",0.56234133,3,60};
		class Sounds
		{
			class Engine
			{
				sound[] = {"mavik\sounds\quad_engine_full_mavic",0.44668359,1,120};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"A3\Sounds_F\air\Uav_01\blade",0.31622776,3,60};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[] = {"A3\Sounds_F\air\Uav_01\blade_high",0.31622776,3,65};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))";
				cone[] = {1.6,3.1400001,1.6,0.94999999};
			};
			class EngineIn
			{
				sound[] = {"A3\Sounds_F\air\Uav_01\quad_engine_full_int",0,2};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"A3\Sounds_F\air\Uav_01\blade_int",0,2};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[] = {"A3\Sounds_F\air\Uav_01\blade_high_int",0,2};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class EventHandlers: EventHandlers
		{
			class Mavic_Events
			{
				killed = "player connectTerminalToUAV objNull; { _x setDamage 1 } forEach (crew (_this # 0));";
				init = "params ['_entity']; if ((isClass(configFile >> ""CfgPatches"" >> ""DB_D37_scripts_mavick_vogs"")) && !(is3DEN)) then { [_entity, 1] spawn mavic_drop_fnc_makeGrenadeDrone; };";
			};
		};
		class UserActions
		{
			class MAVIC_DisassembleUAV
			{
				displayName = "Put Mavic in inventory";
				position = "";
				priority = -2;
				radius = 5;
				onlyForplayer = 1;
				showWindow = 0;
				condition = "[this] call mavic_fnc_canDisassembly";
				statement = "[this, player] call mavic_fnc_addUavToInventory";
			};
			class MAVIC_ResetCamera
			{
				displayName = "Reset Camera Position";
				position = "";
				priority = 6;
				radius = 5;
				onlyForplayer = 0;
				showWindow = 0;
				condition = "cameraOn isEqualTo this";
				statement = "this setPilotCameraDirection [0,1,0]";
			};
			class MAVIC_CollisionLightOff
			{
				displayName = "Collision Light Off";
				position = "";
				priority = 0.5;
				radius = 5;
				onlyForplayer = 0;
				showWindow = 0;
				condition = "(getConnectedUAV player) isEqualTo this && driver this checkAIFeature 'LIGHTS'";
				statement = "driver this disableAI 'LIGHTS'; this setCollisionLight false;";
			};
			class MAVIC_CollisionLightOn
			{
				displayName = "Collision Light On";
				position = "";
				priority = 0.5;
				radius = 5;
				onlyForplayer = 0;
				showWindow = 0;
				condition = "(getConnectedUAV player) isEqualTo this && !(driver this checkAIFeature 'LIGHTS')";
				statement = "driver this enableAI 'LIGHTS'; this setCollisionLight true;";
			};
			class MAVIC_ChangeBattery
			{
				displayName = "Change Battery";
				priority = -1;
				radius = 5;
				position = "";
				onlyForplayer = 1;
				showWindow = 0;
				condition = "!(isClass (configFile >> ""CfgPatches"" >> ""ace_main"")) && (alive this) && ([player, ""Laserbatteries""] call BIS_fnc_hasItem) && (cameraOn == player) && {(fuel this) < 1} && {(speed this) < 1} && {!(isEngineOn this)}";
				statement = "[this, player] call mavic_fnc_changeBattery";
			};
		};
		class Components
		{
			class TransportCountermeasuresComponent {};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType = "VehicleSystemsDisplayManager";
				left = 1;
				defaultDisplay = "EmptyDisplay";
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType = "VehicleSystemsDisplayManager";
				right = 1;
				defaultDisplay = "EmptyDisplay";
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
				};
			};
		};
	};
	class mavic3_drone_base_F: mavic_drone_base_F
	{
		displayName = "DJI Mavic 3";
	};
	class mavic3T_drone_base_F: mavic_drone_base_F
	{
		displayName = "DJI Mavic 3T";
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","Ti"};
			thermalMode[] = {0,1,6};
		};
		class PilotCamera: PilotCamera
		{
			class OpticsIn: OpticsIn
			{
				class Wide: Wide
				{
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1,6};
				};/*
				class Medium: Medium
				{
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1,6};
				};
				class Narrow: Narrow
				{
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1,6};
				};*/
			};
		};
	};
	class mavik_3_OPF: mavic3_drone_base_F
	{
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI_F";
		typicalCargo[] = {"O_UAV_AI_F"};
	};
	class mavik_3_BLU: mavic3_drone_base_F
	{
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI_F";
		typicalCargo[] = {"B_UAV_AI_F"};
	};
	class mavik_3_IND: mavic3_drone_base_F
	{
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI_F";
		typicalCargo[] = {"I_UAV_AI_F"};
	};
	class mavik_3_CIV: mavic3_drone_base_F
	{
		scope = 2;
		side = 3;
		faction = "CIV_F";
		crew = "C_UAV_AI_F";
		typicalCargo[] = {"C_UAV_AI_F"};
	};
	class mavik_3T_OPF: mavic3T_drone_base_F
	{
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI_F";
		typicalCargo[] = {"O_UAV_AI_F"};
	};
	class mavik_3T_BLU: mavic3T_drone_base_F
	{
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI_F";
		typicalCargo[] = {"B_UAV_AI_F"};
	};
	class mavik_3T_IND: mavic3T_drone_base_F
	{
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI_F";
		typicalCargo[] = {"I_UAV_AI_F"};
	};
	class mavik_3T_CIV: mavic3T_drone_base_F
	{
		scope = 2;
		side = 3;
		faction = "CIV_F";
		crew = "C_UAV_AI_F";
		typicalCargo[] = {"C_UAV_AI_F"};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class Item_Mavic: CA_Magazine
	{
		scope = 1;
		author = "Mavic 3 MOD";
		descriptionShort = "DJI Mavic 3<br />FPV Recon Drone<br />Put on the ground to deploy it.";
		displayName = "Mavic 3";
		model = "\mavik\mavik3.p3d";
		icon = "\mavik\interface\game\mavick_map.paa";
		picture = "\mavik\interface\game\mavick_map.paa";
		mass = 20;
		count = 100;
		ammo = "";
		ACE_isUnique = 1;
	};
	class Item_Mavic3: Item_Mavic
	{
		scope = 2;
		descriptionShort = "DJI Mavic 3<br />FPV Recon Drone<br />Put on the ground to deploy it.";
		displayName = "Mavic 3";
		ACE_isUnique = 1;
	};
	class Item_Mavic3T: Item_Mavic
	{
		scope = 2;
		descriptionShort = "DJI Mavic 3T<br />FPV Recon Drone with Thermal Vision<br />Put on the ground to deploy it.";
		displayName = "Mavic 3T";
		ACE_isUnique = 1;
	};
};

class CfgSounds
{
	sounds[] = {};
	class Mavic_Beep
	{
		name = "Mavic Beep";
		sound[] = {"\mavik\sounds\beep.ogg",1,50,100};
		titles[] = {0,""};
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
		idd = -1;
		duration = 1e+010;
		class controls
		{
			class Camera_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\camera.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2 - ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))/2 - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "safeZoneY + safeZoneH - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 )) - ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w = "( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Settings_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\dots.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2 - ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))/2 - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "safeZoneY + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w = "( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Exit_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\triangle.paa";
				x = "safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "safeZoneY + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w = "( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class FlightMode_Text: ctrlStructuredText
			{
				idc = -1;
				text = "$STR_mavic_fligtMode";
				x = "safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) ) + ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y = "safeZoneY + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )  + ( 0.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w = "( 5.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
				size = "( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class Attributes
				{
					font = "PuristaMedium";
				};
			};
			class FlightStatus_Text: FlightMode_Text
			{
				text = "In Flight";
				onLoad = "uiNameSpace setVariable ['DB_mavic_FlightStatus_Text', _this # 0];";
				x = "safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) ) + ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + 2*( 3.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
			};
			class Cross: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\kross.paa";
				x = "0.5 - ( 5.0 * ( pixelGridNoUIScale * pixelW * 2 )) / 2";
				y = "0.5 - ( 5.0 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w = "( 5.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 5.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class MapTriangle_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\maptriangle.paa";
				x = "safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w = "( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class RTH_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\arrow.paa";
				x = "safeZoneX + ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 + ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w = "( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Record_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\redcircle.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 - ( 3 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w = "( 3 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 3 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Play_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\play.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2 - ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))/2 - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 + ( 3 * ( pixelGridNoUIScale * pixelH * 2 )) + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w = "( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Galery_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\galery.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) / 2 - ( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))/2 - ( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w = "( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Zoom_Display: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\zoom\zoom.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w = "( 2.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Zoom_Text: ctrlStructuredText
			{
				idc = -1;
				text = "4x";
				onLoad = "uiNameSpace setVariable ['DB_mavic_Zoom_Text', _this # 0];";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 + ( 0.5 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w = "( 2.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
				size = "( 1.1 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class Attributes
				{
					align = "center";
					font = "PuristaSemiBold";
				};
			};
			class MemoryPicture: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\main\memory.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "safeZoneY + safeZoneH - ( 2.0 * ( pixelGridNoUIScale * pixelH * 2 )) - ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w = "( 2.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class AF_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\zoom\AF.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 + ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) + ( 0.05 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w = "( 2.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class Binoc_Button: ctrlStaticPicture
			{
				idc = -1;
				text = "\mavik\interface\zoom\binocular.paa";
				x = "safeZoneX + safeZoneWAbs - ( 3 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 2.2 * ( pixelGridNoUIScale * pixelW * 2 )) - 2*( ( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) )";
				y = "0.5 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 2.2 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w = "( 2.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
			};
			class UAVInfo_Group: ctrlControlsGroupNoScrollBars
			{
				idc = -1;
				x = "safeZoneXAbs + ( 0.8 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y = "safezoneY + safeZoneH - ( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
				w = "( 15 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 3 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class Map_Picture: ctrlStaticPicture
					{
						idc = -1;
						text = "\mavik\interface\main\map.paa";
						x = 0;
						y = 0;
						w = "( 3.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 3.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class H_Text: ctrlStructuredText
					{
						idc = -1;
						x = "( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y = "( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 1.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w = "( 1.4 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 1.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text = "H";
						size = "( 1.4 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							color = "#ccc5c5";
							font = "PuristaMedium";
						};
					};
					class VSpeed: ctrlStructuredText
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable ['DB_mavic_VSpeed_control', _this # 0];";
						x = "( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.4 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y = "( 0.7 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w = "( 6 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.7 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text = "0.0 km/h";
						size = "( 0.9 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							font = "PuristaMedium";
						};
					};
					class Height: VSpeed
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable ['DB_mavic_Height_control', _this # 0];";
						y = "( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.1 * ( pixelGridNoUIScale * pixelH * 2 ))";
						h = "( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text = "0.0 ft";
						size = "( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class D_Text: H_Text
					{
						idc = -1;
						x = "( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + 4*( 1.4 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.0 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 1.4 * ( pixelGridNoUIScale * pixelW * 2 ))";
						text = "D";
					};
					class HSpeed: ctrlStructuredText
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable ['DB_mavic_HSpeed_control', _this # 0];";
						x = "( 3.0 * ( pixelGridNoUIScale * pixelW * 2 )) + 4*( 1.4 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.0 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y = "( 0.7 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w = "( 6 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.7 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text = "0.0 km/h";
						size = "( 0.9 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							font = "PuristaMedium";
						};
					};
					class Distance: HSpeed
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable ['DB_mavic_Distance_control', _this # 0];";
						y = "( 3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.1 * ( pixelGridNoUIScale * pixelH * 2 ))";
						h = "( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text = "0.0 ft";
						size = "( 1.3 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
			class StatusInfo_Group: ctrlControlsGroupNoScrollBars
			{
				idc = -1;
				x = "safeZoneX + safeZoneWAbs - ( 5 * ( pixelGridNoUIScale * pixelW * 2 )) - ( 11.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
				y = "safeZoneY + ( ( 1.3 * ( pixelGridNoUIScale * pixelH * 2 )) )";
				w = "( 15 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 2.0 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class Battery: ctrlStaticPicture
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable [""DB_mavic_batteryPicture"", _this # 0]";
						text = "\mavik\interface\bat\100.paa";
						x = 0;
						y = 0;
						w = "( 1.5 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 1.5 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class BatteryText: ctrlStructuredText
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable [""DB_mavic_batteryText"", _this # 0]";
						text = "99";
						x = 0;
						y = "( 0.8 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 0.08 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w = "( 1.5 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.8 * ( pixelGridNoUIScale * pixelH * 2 ))";
						size = "( 0.8 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							color = "#4cbb90";
							font = "PuristaMedium";
							align = "center";
						};
					};
					class RemainingTime: ctrlStructuredText
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable [""DB_mavic_RemainingTimeText"", _this # 0]";
						text = "00'00""";
						size = "( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
						class Attributes
						{
							font = "PuristaMedium";
						};
						x = "( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y = 0;
						w = "( 4 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Signal: ctrlStaticPicture
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable [""DB_mavic_SignalText"", _this # 0]";
						text = "\mavik\interface\signal\100.paa";
						x = "( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y = "( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w = "( 1.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Sensor: ctrlStaticPicture
					{
						idc = -1;
						text = "\mavik\interface\main\sensor.paa";
						x = "( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + 4*( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y = "( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w = "( 1.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Satellite: ctrlStaticPicture
					{
						idc = -1;
						onLoad = "uiNameSpace setVariable [""DB_mavic_SatellitePicture"", _this # 0]";
						text = "\mavik\interface\main\sat0.paa";
						x = "( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + 4*( 0.1 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y = "( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w = "( 1.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Datchik: ctrlStaticPicture
					{
						idc = -1;
						text = "\mavik\interface\main\datchik.paa";
						x = "( 1.5 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 3.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + 5*( 0.1 * ( pixelGridNoUIScale * pixelW * 2 )) + 2*( 1.2 * ( pixelGridNoUIScale * pixelW * 2 )) + ( 0.1 * ( pixelGridNoUIScale * pixelW * 2 ))";
						y = "( 1.5 * ( pixelGridNoUIScale * pixelH * 2 )) / 2 - ( 1.2 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
						w = "( 1.2 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 1.2 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
			class DetachGrenade: ctrlControlsGroupNoScrollBars
			{
				idc = -1;
				fade = 1;
				onLoad = "uiNameSpace setVariable [""DB_DetachGrenade_group"", _this # 0]";
				x = "0.5 - ( 11 * ( pixelGridNoUIScale * pixelW * 2 )) / 2";
				y = "0.5 - ( 6 * ( pixelGridNoUIScale * pixelH * 2 )) / 2";
				w = "( 11 * ( pixelGridNoUIScale * pixelW * 2 ))";
				h = "( 6 * ( pixelGridNoUIScale * pixelH * 2 ))";
				class controls
				{
					class BackGround: ctrlStaticPicture
					{
						idc = -1;
						text = "\mavik\interface\detach\big.paa";
						x = 0;
						y = 0;
						w = "( 11 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 6 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
					class Text: ctrlStructuredText
					{
						idc = -1;
						class Attributes
						{
							align = "center";
							font = "PuristaMedium";
						};
						size = "( 0.9 * ( pixelGridNoUIScale * pixelH * 2 ))";
						text = "$STR_mavic_dropMessage";
						x = 0;
						y = "( 6 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 1 * ( pixelGridNoUIScale * pixelH * 2 )) - ( 0.9 * ( pixelGridNoUIScale * pixelH * 2 ))";
						w = "( 11 * ( pixelGridNoUIScale * pixelW * 2 ))";
						h = "( 1 * ( pixelGridNoUIScale * pixelH * 2 ))";
					};
				};
			};
		};
		class controlsBackground
		{
			class Gradient: ctrlStaticPicture
			{
				idc = -1;
				onLoad = "uiNamespace setVariable [""DB_gradient_control"", _this # 0];";
				text = "\mavik\interface\signal\gradient.paa";
				x = "safeZoneXAbs";
				y = "safeZoneY";
				w = "safeZoneWAbs";
				h = "safeZoneH";
				show = 0;
			};
		};
	};
};
