class CfgPatches
{
	class MMM_RU_TyphoonVDV
	{
		units[]=
		{
			"MMM_KamAZ4386_BM30D_base",
			"MMM_KamAZ4386_BM30D",
			"MMM_KamAZ4386_base",
			"MMM_KamAZ4386"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"rhs_main",
			"rhs_tigr",
			"rhs_optics",
			"rhs_vehiclesounds",
			"rhs_c_cars",
			"rhs_c_bmp3",
			"rhs_c_weapons",
			"rhs_c_heavyweapons"
		};
		requiredVersion=1.3200001;
		name="";
		author="Makarov Ivan Andreyavich";
	};
};
class RscText;
class RscControlsGroup;
class RscOpticsValue;
class RscPicture;
class RscEdit;
class RscInGameUI
{
	class RscUnitInfo;
	class MMM_RscWeaponBM30D: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call MMM_fnc_sight_BM30D";
		controls[]=
		{
			"CA_OpticsZoom",
			"CA_IGUI_elements_group"
		};
		class CA_OpticsZoom: RscText
		{
			idc=180;
			style=1;
			colorText[]={0.70599997,0.074500002,0.0196,1};
			sizeEx="0.038*SafezoneH";
			shadow=0;
			font="EtelkaMonospacePro";
			text=4.5;
			x="43.85 *   (0.01875 * SafezoneH)";
			y="19.6 *   (0.025 * SafezoneH)";
			w="0*   (0.01875 * SafezoneH)";
			h="0 *   (0.025 * SafezoneH)";
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 *   (0.01875 * SafezoneH) +   (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w="53.5 *   (0.01875 * SafezoneH)";
			h="40 *   (0.025 * SafezoneH)";
			idc=170;
			class VScrollbar
			{
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
				color[]={1,1,1,0};
				width=0.001;
			};
			class HScrollbar
			{
				color[]={1,1,1,0};
				height=0.001;
			};
			class Controls
			{
				class CA_Distance: RscOpticsValue
				{
					idc=151;
					style=1;
					shadow=0;
					colorBackground[]={0,0,0,0};
					colorText[]={1,1,1,1};
					font="PuristaLight";
					sizeEx="0.018*SafezoneH";
					x="28.14 *   (0.01875 * Safezoneh)";
					y="30.14 *   (0.025 * SafezoneH)";
					w="0";
					h="0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc=154;
				};
				class RHS_Sight: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=0;
					font="PuristaMedium";
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow.paa";
					x="9.15 *   (0.01875 * Safezoneh)";
					y="4.5 *   (0.025 * SafezoneH)";
					w="35 *   (0.01875 * SafezoneH)";
					h="35 *   (0.025 * SafezoneH)";
				};
				class RHS_SSU_ReadyText: RscEdit
				{
					idc=6;
					sizeEx="0.018*SafezoneH";
					colorBackground[]={0,0,0,1};
					colorText[]={1,1,1,1};
					colorSelection[]={0,0,0,1};
					font="PuristaMedium";
					text="ССУ ВКЛ";
					style=2;
					shadow=0;
					type="VSoft";
					x="12.14 *   (0.01875 * SafezoneH)";
					y="30.14 *   (0.025 * SafezoneH)";
					w="2.7 *   (0.01875 * SafezoneH)";
					h="1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_ModeText: RHS_SSU_ReadyText
				{
					idc=5;
					x="35.14 *   (0.01875 * SafezoneH)";
					w="1.6 *   (0.01875 * SafezoneH)";
					text="ОСН";
				};
				class RHS_AutoTrackerText: RHS_SSU_ReadyText
				{
					idc=21;
					x="35.14 *   (0.01875 * SafezoneH)";
					y="11.84 *   (0.025 *    SafezoneH)";
					w="1.6 *   (0.01875 * SafezoneH)";
					text="АСЦ";
				};
				class RHS_AutoTrackerMode: RHS_AutoTrackerText
				{
					idc=22;
					y="13.14 *   (0.025 * SafezoneH)";
					text="ВЫКЛ";
				};
				class RHS_Gun_ReadyText: RHS_ModeText
				{
					idc=2;
					x="16.14 *   (0.01875 * SafezoneH)";
					text="ГОТ";
				};
				class RHS_Ammo: CA_Distance
				{
					idc=3;
					text="Б";
					font="PuristaMedium";
					x="21.14 *   (0.01875 * Safezoneh)";
					y="30.14 *   (0.025 * SafezoneH)";
					w="1.2 *   (0.01875 * SafezoneH)";
					h="1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc=4;
					text="----";
					font="PuristaMedium";
					w="3.5 *   (0.01875 * SafezoneH)";
					h="1 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
};
class CfgFunctions
{
	class MMM
	{
		tag="MMM";
		class functions
		{
			class sight_BM30D
			{
				file="MMM_RU_TyphoonVDV\optic\MMM_sight_BM30D.sqf";
				description="FCS Catherine for BMD4 & BMP3M";
			};
		};
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
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Components;
				class ViewGunner;
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
			class HitGlass6;
		};
		class ViewCargo;
		class VehicleTransport
		{
			class Cargo;
		};
	};
	class MRAP_01_base_F: Car_F
	{
		class Components;
	};
	class MRAP_01_gmg_base_F: MRAP_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
				class HitPoints;
				class MFD;
			};
		};
		class EventHandlers;
	};
	class MMM_KamAZ4386_BM30D_base: MRAP_01_gmg_base_F
	{
		_generalMacro="MMM_KamAZ4386_BM30D_base";
		author="Makarov Ivan Andreyavich";
		editorPreview="\MMM_RU_TyphoonVDV\ui\MMM_KamAZ4386_preview_ca.paa";
		category="Car";
		scope=1;
		scopeCurator=0;
		insideSoundCoef=0.40000001;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		canfloat=0;
		castDriverShadow=1;
		headAimDown=10;
		class ViewOptics
		{
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
			initAngleX=0;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
			speedZoomMaxSpeed=1e+010;
			speedZoomMaxFOV=0;
		};
		class ViewPilot
		{
			initAngleX=-5;
			initAngleY=0;
			initFov=0.89999998;
			minFov=0.25;
			maxFov=1.25;
			minAngleX=-65;
			maxAngleX=85;
			minAngleY=-150;
			maxAngleY=150;
			minMoveX=-0.2;
			maxMoveX=0.2;
			minMoveY=-0.1;
			maxMoveY=0.1;
			minMoveZ=-0.1;
			maxMoveZ=0.2;
		};
		class Library
		{
			libTextDesc="The KamAZ-4386, also known as Taifun K-4386, or Taifun VDV is a Russian mine protected vehicle. This is a smaller 3-door version of the KamAZ-53949. Some automotive parts are interchangeable. It was designed for airborne units. Development began in 2015. The main goal was to provide troops with light and fast armored vehicle, capable of air-droppable insertion. First prototype was ready for testing in 2015 or 2016. This vehicle was first publicly revealed in 2017. Production contract was signed in 2018. Production commenced in 2020 and it is in limited service with the Russian military.";
		};
		class VehicleTransport: VehicleTransport
		{
			class Cargo
			{
				dimensions[] = { {-1.05459,-2.25500,0.20000} , {0.839017,3.7307,1.47638} };
			};
		};
		faction="";
		crew="";
		tf_hasLRradio_api=1;
		driverRightLegAnimName="pedalR";
		driverLeftLegAnimName="pedalL";
		normalSpeedForwardCoef=0.89999998;
		slowSpeedForwardCoef=0.44999999;
		turnCoef=3;
		terrainCoef=0.5;
		waterSpeedFactor=0.40000001;
		simulation="carx";
		dampersBumpCoef=6;
		precision=9;
		brakeDistance=6;
		acceleration=15;
		fireResistance=5;
		maxSpeed=105;
		fuelCapacity=26;
		RHS_fuelCapacity=192;
		wheelCircumference=3.924;
		brakeIdleSpeed=1.78;
		maxFordingDepth=1.5;
		waterResistance=1;
		waterLeakiness=10;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.9349999,
				"N",
				0,
				"D1",
				5.7140002,
				"D2",
				3.0829999,
				"D3",
				1.939,
				"D4",
				1.228,
				"D5",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				3.835
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.31;
		latency=1;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=20;
		transmissionLosses=9;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0.25925899,0.32653099},
			{0.37037,0.65306097},
			{0.444444,0.92925203},
			{0.51851898,1},
			{0.62963003,1},
			{0.74074101,0.963265},
			{0.851852,0.884354},
			{1.18519,0}
		};
		enginePower=200;
		peakTorque=1470;
		maxOmega=282.73999;
		minOmega=60;
		idleRpm=700;
		redRPM=2700;
		engineLosses=11;
		thrustDelay=0.1;
		engineBrakeCoef=0.30000001;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				width=0.31999999;
				steering=1;
				mass=60;
				MOI=10;
				dampingRate=3.0999999;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12000;
				maxHandBrakeTorque=0;
				maxCompression=0.13;
				maxDroop=0.11;
				sprungMass=-1;
				springStrength=135000;
				springDamperRate=12471;
				longitudinalStiffnessPerUnitGravity=4800;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0.17,0.94999999},
					{0.40000001,0.85000002},
					{1,0.75}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				steering=0;
				maxHandBrakeTorque=20000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				steering=1;
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				steering=0;
				maxHandBrakeTorque=20000;
			};
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_ext",
					0.698107,
					1,
					250
				};
				frequency="0.75 + ((rpm/ 2700) factor[(610/ 2700),(2700/ 2700)])*0.95";
				volume="engineOn*camPos*(((rpm/ 2700) factor[(10/ 2700),(50/ 2700)]) * ((rpm/ 2700) factor[(800/ 2700),(600/ 2700)]))*1.0";
			};
			class Engine
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_ext",
					"db-7",
					1,
					350
				};
				frequency="0.75 + ((rpm/ 2700) factor[(610/ 2700),(2700/ 2700)])*0.95";
				volume="engineOn*camPos*(((rpm/ 2700) factor[(620/ 2700),(820/ 2700)]) * ((rpm/ 2700) factor[(2700/ 2700),(2700/ 2700)]))*1.0";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",
					0.5,
					1,
					250
				};
				frequency="0.65 + ((rpm/ 2700) factor[(610/ 2700),(6400/ 2700)])*0.75";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.4,1])))*(((rpm/ 2700) factor[(620/ 2700),(820/ 2700)]) * ((rpm/ 2700) factor[(2700/ 2700),(2700/ 2700)]))*1.0";
			};
			class GearboxWhine_Ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_axle_whine_ext",
					0.34999999,
					1,
					250
				};
				frequency="0.85 + ((rpm/ 2700) factor[(610/ 2700),(2700/ 2700)])*0.95";
				volume="engineOn*camPos*(((rpm/ 2700) factor[(700/ 2700),(850/ 2700)]) * ((rpm/ 2700) factor[(2700/ 2700),(2700/ 2700)]))*1.0";
			};
			class Turbo_Ext
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\turbo_ext",
					0.2,
					1,
					50
				};
				frequency="0.85 + ((rpm/ 2700) factor[(610/ 2700),(2700/ 2700)])*0.95";
				volume="engineOn*camPos*(((rpm/ 2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*2.0";
			};
			class Idle_int
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_int",
					0.60000002,
					1
				};
				frequency="0.75 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
				volume="engineOn*(1-camPos)*(((rpm/ 2700) factor[(10/ 2700),(50/  2700)]) * ((rpm/  2700) factor[(800/  2700),(600/ 2700)]))*1.0";
			};
			class Engine_int
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_tigr_idle_int",
					0.60000002,
					1
				};
				frequency="0.75 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
				volume="engineOn*(1-camPos)*(((rpm/ 2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",
					0.40000001,
					1
				};
				frequency="0.85 + ((rpm/ 2700) factor[(610/ 2700),(2700/ 2700)])*0.75";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.4,1])))*(((rpm/  2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
			};
			class GearboxWhine_Int
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\rhs_axle_whine_int",
					0.2,
					1
				};
				frequency="0.85 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.95";
				volume="engineOn*(1-camPos)*(((rpm/ 2700) factor[(700/  2700),(850/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
			};
			class Turbo_Int
			{
				sound[]=
				{
					"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\Tigr\turbo_ext",
					0.15000001,
					1
				};
				frequency="0.85 + ((rpm/  2700) factor[(610/  2700),(2700/  2700)])*0.75";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/  2700) factor[(620/  2700),(820/ 2700)]) * ((rpm/  2700) factor[(2700/ 2700),(2700/  2700)]))*1.0";
			};
		};
		armor=200;
		armorStructural=5;
		armorGlass=0.89999998;
		armorWheels=4.9000001;
		minTotalDamageThreshold=0.2;
		damageResistance=0.00562;
		secondaryExplosion=-1;
		fuelExplosionPower=0.1;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MMM_RU_TyphoonVDV\data\MMM_K4386_body_dirt_co.paa",
			"MMM_RU_TyphoonVDV\data\MMM_K4386_turret_dirt_co.paa"
		};
		class textureSources
		{
			class Green
			{
				displayName="Green";
				author="Makarov Ivan Andreyavich";
				textures[]=
				{
					"MMM_RU_TyphoonVDV\data\MMM_K4386_body_co.paa",
					"MMM_RU_TyphoonVDV\data\MMM_K4386_turret_co.paa"
				};
				factions[]={};
			};
			class Green_Dirt: Green
			{
				displayName="Green (Dirty)";
				textures[]=
				{
					"MMM_RU_TyphoonVDV\data\MMM_K4386_body_dirt_co.paa",
					"MMM_RU_TyphoonVDV\data\MMM_K4386_turret_dirt_co.paa"
				};
			};
			class Tan: Green
			{
				displayName="Tan";
				textures[]=
				{
					"MMM_RU_TyphoonVDV\data\MMM_K4386_body_tan_co.paa",
					"MMM_RU_TyphoonVDV\data\MMM_K4386_turret_tan_co.paa"
				};
			};
			class Tan_Dirt: Green
			{
				displayName="Tan (Dirty)";
				textures[]=
				{
					"MMM_RU_TyphoonVDV\data\MMM_K4386_body_tan_dirt_co.paa",
					"MMM_RU_TyphoonVDV\data\MMM_K4386_turret_tan_dirt_co.paa"
				};
			};
		};
		textureList[]={};
		class Attributes
		{
			class Door_LF
			{
				displayName="Open front left door";
				property="Door_LF";
				control="CheckboxNumber";
				expression="_this animateDoor ['%s',_value,true]";
				defaultValue="0";
			};
			class Door_RF: Door_LF
			{
				displayName="Open front right door";
				property="Door_RF";
			};
			class Door_Rear: Door_LF
			{
				displayName="Open rear door";
				property="Door_Rear";
			};
		};
		destrType="DestructDefault";
		displayName="KamAZ-4386 (BM-30-D)";
		driverAction="rhs_tigr_driver";
		driverInAction="rhs_tigr_driver";
		crewVulnerable=1;
		hideProxyInCombat=0;
		enableManualFire=0;
		forceHideDriver=1;
		viewDriverInExternal=1;
		driverIsCommander=1;
		enableGPS=0;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		Icon="\MMM_RU_TyphoonVDV\ui\MMM_KamAZ4386_mapicon_ca.paa";
		mapSize=6;
		model="\MMM_RU_TyphoonVDV\MMM_KamAZ_4386.p3d";
		picture="\MMM_RU_TyphoonVDV\ui\MMM_KamAZ4386_icon_ca.paa";
		selectionBackLights="zadni svetlo";
		selectionBrakeLights="brzdove svetlo";
		selectionDashboard="light";
		side=0;
		attenuationEffectType="RHS_CarAttenuation";
		TextPlural="VDV Typhoons";
		TextSingular="VDV Typhoon";
		vehicleClass="rhs_vehclass_car";
		editorSubcategory="EdSubcat_Cars";
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo[]=
		{
			"pos codriver",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos codriver dir",
			"pos cargo dir"
		};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_Rear"
		};
		soundGear[]=
		{
			"",
			"db-85",
			1
		};
		class RenderTargets
		{
			class gunner_display
			{
				renderTarget="rendertarget0";
				class CameraViewGunner
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
			};
			class LeftMirror1
			{
				renderTarget="rendertarget1";
				class LeftMirror1view
				{
					pointPosition="pp1";
					pointDirection="pd1";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class RightMirror1
			{
				renderTarget="rendertarget2";
				class RightMirror1view
				{
					pointPosition="pp2";
					pointDirection="pd2";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
			class LeftMirror2
			{
				renderTarget="rendertarget3";
				class LeftMirror2view
				{
					pointPosition="pp3";
					pointDirection="pd3";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_3_TL",
					"PIP_3_TR",
					"PIP_3_BL",
					"PIP_3_BR"
				};
			};
			class RightMirror2
			{
				renderTarget="rendertarget4";
				class RightMirror2view
				{
					pointPosition="pp4";
					pointDirection="pd4";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_4_TL",
					"PIP_4_TR",
					"PIP_4_BL",
					"PIP_4_BR"
				};
			};
			class driver_rear_display
			{
				renderTarget="rendertarget5";
				class DriverRearView
				{
					pointPosition="pp5";
					pointDirection="pd5";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.69999999;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_5_TL",
					"PIP_5_TR",
					"PIP_5_BL",
					"PIP_5_BR"
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"MMM_RU_TyphoonVDV\data\mmm_kamaz_glass.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"a3\data_f\glass_veh_armored_damage.rvmat",
				"MMM_RU_TyphoonVDV\data\MMM_K4386_body.rvmat",
				"MMM_RU_TyphoonVDV\data\MMM_K4386_body_damage.rvmat",
				"MMM_RU_TyphoonVDV\data\MMM_K4386_body_destroy.rvmat",
				"MMM_RU_TyphoonVDV\data\MMM_K4386_turret.rvmat",
				"MMM_RU_TyphoonVDV\data\MMM_K4386_turret_damage.rvmat",
				"MMM_RU_TyphoonVDV\data\MMM_K4386_turret_destroy.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		class HitPoints
		{
			class HitLFWheel
			{
				radius=0.33000001;
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
				name="wheel_1_1_steering";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLBWheel: HitLFWheel
			{
				visual="wheel_1_2_hide";
				armorComponent="wheel_1_2_hide";
				name="wheel_1_2_steering";
			};
			class HitRFWheel: HitLFWheel
			{
				visual="wheel_2_1_hide";
				armorComponent="wheel_2_1_hide";
				name="wheel_2_1_steering";
			};
			class HitRBWheel: HitLFWheel
			{
				visual="wheel_2_2_hide";
				armorComponent="wheel_2_2_hide";
				name="wheel_2_2_steering";
			};
			class HitHull
			{
				armor=1;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.60000002;
				radius=0.25;
			};
			class HitBody
			{
				armor=6;
				material=-1;
				name="karoserie";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.0099999998;
				explosionShielding=1.5;
				radius=0.44999999;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel";
				name="palivo";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_engine";
				name="motor";
				visual="-";
				passThrough=0.30000001;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.44999999;
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
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type="WeaponWreckSmoke";
						position="engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position="engine_smoke3";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation="sound";
						type="SmokeWreck1";
					};
				};
			};
			class HitGlass1
			{
				armor=1.5;
				radius=0.25;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
				explosionShielding=3;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
				visual="glass2";
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
				visual="glass3";
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
				visual="glass4";
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
				visual="glass5";
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
				visual="glass6";
			};
			class HitMainSight
			{
				armor=-40;
				material=-1;
				minimalHit=-0.1;
				passThrough=0;
				explosionShielding=0.30000001;
				name="mainSight";
				visual="mainSight";
				armorComponent="Hit_MainSight";
				radius=0.050000001;
			};
		};
		class AnimationSources
		{
			class hatch_left_door
			{
				mass=1;
				source="door";
				animPeriod=1;
				initPhase=0;
			};
			class hatch_right_door: hatch_left_door
			{
			};
			class Door_LF
			{
				source="door";
				animPeriod=0.80000001;
				sound="RHS_UAZ_Door";
				soundPosition="door_1_1_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition="door_1_2_axis";
			};
			class Door_Rear: Door_LF
			{
				soundPosition="door_2_1_axis";
			};
			class cabinlights_hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class smokecap_revolving_source
			{
				source="revolving";
				weapon="rhs_weap_902a";
			};
			class HitMainSight
			{
				source="Hit";
				hitpoint="HitMainSight";
			};
			class recoil_source_2a42
			{
				source="reload";
				weapon="rhs_weap_2a72_btr";
			};
			class muzzle_hide: recoil_source_2a42
			{
			};
			class muzzle_rot: recoil_source_2a42
			{
				source="ammorandom";
			};
			class muzzleMG_rot
			{
				source="ammorandom";
				weapon="rhs_weap_pkt";
			};
			class muzzleMG_hide
			{
				source="ammorandom";
				weapon="rhs_weap_pkt";
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitMainGun_src
			{
				source="Hit";
				hitpoint="HitGun";
				raw=1;
			};
			class HitTurret_src
			{
				source="Hit";
				hitpoint="HitTurret";
				raw=1;
			};
			class HitLFWheel
			{
				hitpoint="HitLFWheel";
				source="Hit";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint="HitLF2Wheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint="HitRF2Wheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint="HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint="HitRMWheel";
			};
			class HitGlass1
			{
				hitpoint="HitGlass1";
				source="Hit";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint="HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint="HitGlass6";
			};
		};
		canHideDriver=0;
		cargoaction[]=
		{
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01"
		};
		cargoIsCoDriver[]={1,0};
		transportSoldier=6;
		cargoProxyIndexes[]={1,2,3,4,5,6};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		class Reflectors
		{
			class LSvetla
			{
				color[]={800,900,650};
				ambient[]={2,2,2};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=50;
				outerAngle=140;
				coneFadeCoef=10;
				intensity=2.5;
				useFlare=1;
				dayLight=0;
				flareSize=0.85000002;
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
			class RSvetla: LSvetla
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Right2: RSvetla
			{
				useFlare=1;
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef=51;
				intensity=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=50;
					hardLimitStart=0;
					hardLimitEnd=3;
				};
			};
			class Left2: LSvetla
			{
				useFlare=1;
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef=51;
				intensity=1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=50;
					hardLimitStart=0;
					hardLimitEnd=3;
				};
			};
			class cabin
			{
				color[]={40,350,960};
				ambient[]={5,0,0};
				intensity=4;
				size=1;
				innerAngle=90;
				outerAngle=165;
				coneFadeCoef=1;
				position="cabin_light";
				direction="cabin_light_dir";
				hitpoint="cabin_light";
				selection="cabin_light";
				useFlare=0;
				flareSize=1;
				flareMaxDistance=5;
				dayLight=1;
				blinking=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=50;
					hardLimitStart=1;
					hardLimitEnd=1.5;
				};
			};
			class cargo_light_1: cabin
			{
				color[]={40,350,960};
				position="cargo_light_1";
				direction="cargo_light_1_dir";
				hitpoint="cargo_light_1";
				selection="cargo_light_1";
				intensity=3;
				useFlare=0;
				coneFadeCoef=0.1;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=70;
					hardLimitStart=0.5;
					hardLimitEnd=1.5;
				};
			};
			class reverse_light_1: LSvetla
			{
				intensity=0.1;
				useFlare=1;
				innerAngle=50;
				outerAngle=179;
				position="reverse_light_1_pos";
				direction="reverse_light_1_dir";
				hitpoint="reverse_light_hit";
				selection="reverse_light";
			};
			class reverse_light_2: reverse_light_1
			{
				position="reverse_light_2_pos";
				direction="reverse_light_2_dir";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LSvetla",
				"RSvetla"
			},
			
			{
				"Left2",
				"Right2"
			},
			
			{
				"reverse_light_1",
				"reverse_light_2"
			}
		};
		armorLights=0.1;
		class UserActions
		{
			class cabinlights_toggle
			{
				position="";
				radius=12;
				priority=1.5;
				showWindow=0;
				onlyForplayer=1;
				condition="(player == driver this) AND (isLightOn this)";
				shortcut="rhs_vehicle_cabinLights";
				displayName="Toggle cabin lights";
				statement="[this,1] call rhs_fnc_carLightToggle";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call rhs_fnc_tigr_init;";
				postInit="_this call rhs_fnc_reapplyTextures";
				turnIn="";
				turnOut="";
				engine="_this call rhs_fnc_engineCheckDamage;";
				dammaged="_this call rhs_fnc_wheelDamaged";
			};
			class RHS_TigrHandler
			{
				seatSwitched="if(_this select 1 != driver (_this select 0))then{(_this select 1) action ['turnIn',_this select 0]}";
				getIn="if((_this select 3) in [[0],[1]])then{(_this select 2) action ['turnIn',_this select 0]};";
			};
		};
		class MFD
		{
			class MFD_Driver_Heading_text
			{
				topLeft="MFD_Driver_1_TL";
				topRight="MFD_Driver_1_TR";
				bottomLeft="MFD_Driver_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="static";
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.02},
							1
						};
						right[]=
						{
							{0.69999999,0.02},
							1
						};
						down[]=
						{
							{0.44999999,0.87},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_second
			{
				topLeft="MFD_Driver_2_TL";
				topRight="MFD_Driver_2_TR";
				bottomLeft="MFD_Driver_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0},
							1
						};
						right[]=
						{
							{0.94999999,0},
							1
						};
						down[]=
						{
							{0.44999999,0.81},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_armament
					{
						type="text";
						source="static";
						text="ГЛАВНОЕ ОРУДИЕ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.0049999999},
							1
						};
						right[]=
						{
							{0.075000003,-0.0049999999},
							1
						};
						down[]=
						{
							{0.015,0.072999999},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="ПУЛЕМЕТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.31},
							1
						};
						right[]=
						{
							{0.075000003,0.31},
							1
						};
						down[]=
						{
							{0.015,0.38800001},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type="text";
						source="static";
						text="ТИП АМУНИЦИИ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.55000001,-0.0049999999},
							1
						};
						right[]=
						{
							{0.61000001,-0.0049999999},
							1
						};
						down[]=
						{
							{0.55000001,0.072999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="ДАЛЬНОСТЬ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.83999997},
							1
						};
						right[]=
						{
							{0.075000003,0.83999997},
							1
						};
						down[]=
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.91500002},
							1
						};
						right[]=
						{
							{0.075000003,0.91500002},
							1
						};
						down[]=
						{
							{0.015,0.99299997},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="ПОВРЕЖДЕНИЯ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.38999999},
							1
						};
						right[]=
						{
							{0.075000003,0.38999999},
							1
						};
						down[]=
						{
							{0.015,0.46799999},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.91500002},
							1
						};
						right[]=
						{
							{0.40000001,0.91500002},
							1
						};
						down[]=
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.83999997},
							1
						};
						right[]=
						{
							{0.40000001,0.83999997},
							1
						};
						down[]=
						{
							{0.34,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Main_Armament_Ammo_Type
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.55500001,0.064999998},
							1
						};
						right[]=
						{
							{0.63499999,0.064999998},
							1
						};
						down[]=
						{
							{0.55500001,0.185},
							1
						};
					};
				};
			};
			class MFD_Gunner_Coax_Ammo
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.31,0.31},
							1
						};
						right[]=
						{
							{0.37,0.31},
							1
						};
						down[]=
						{
							{0.31,0.38800001},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="БР";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.064999998},
							1
						};
						right[]=
						{
							{0.075000003,0.064999998},
							1
						};
						down[]=
						{
							{0.015,0.14300001},
							1
						};
					};
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.064999998},
							1
						};
						right[]=
						{
							{0.45500001,0.064999998},
							1
						};
						down[]=
						{
							{0.39500001,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="ОФ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.125},
							1
						};
						right[]=
						{
							{0.075000003,0.125},
							1
						};
						down[]=
						{
							{0.015,0.20299999},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.125},
							1
						};
						right[]=
						{
							{0.45500001,0.125},
							1
						};
						down[]=
						{
							{0.39500001,0.20299999},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="Р";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.185},
							1
						};
						right[]=
						{
							{0.075000003,0.185},
							1
						};
						down[]=
						{
							{0.015,0.26300001},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=2;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.185},
							1
						};
						right[]=
						{
							{0.45500001,0.185},
							1
						};
						down[]=
						{
							{0.39500001,0.26300001},
							1
						};
					};
				};
			};
			class MFD_Commander_Second_Display
			{
				topLeft="MFD_7_TL";
				topRight="MFD_7_TR";
				bottomLeft="MFD_7_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="EtelkaMonospacePro";
				turret[]={0,0};
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Crosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.5,0.42341301},
								1
							},
							
							{
								{0.5,0.34642899},
								1
							},
							{},
							
							{
								{0.5,0.57738101},
								1
							},
							
							{
								{0.5,0.654365},
								1
							},
							{},
							
							{
								{0.55000001,0.50039703},
								1
							},
							
							{
								{0.60000002,0.50039703},
								1
							},
							{},
							
							{
								{0.40000001,0.50039703},
								1
							},
							
							{
								{0.44999999,0.50039703},
								1
							},
							{},
							
							{
								{0.30000001,0.34642899},
								1
							},
							
							{
								{0.30000001,0.26944399},
								1
							},
							{},
							
							{
								{0.30000001,0.26944399},
								1
							},
							
							{
								{0.34999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.34642899},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.64999998,0.26944399},
								1
							},
							
							{
								{0.69999999,0.26944399},
								1
							},
							{},
							
							{
								{0.69999999,0.654365},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.64999998,0.73134899},
								1
							},
							
							{
								{0.69999999,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.654365},
								1
							},
							
							{
								{0.30000001,0.73134899},
								1
							},
							{},
							
							{
								{0.30000001,0.73134899},
								1
							},
							
							{
								{0.34999999,0.73134899},
								1
							},
							{}
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.82999998,0.25},
							1
						};
						right[]=
						{
							{0.88,0.25},
							1
						};
						down[]=
						{
							{0.82999998,0.33000001},
							1
						};
					};
					class Lased_Range_Background
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.43000001,0.81},
										1
									},
									
									{
										{0.56999999,0.81},
										1
									},
									
									{
										{0.56999999,0.87},
										1
									},
									
									{
										{0.43000001,0.87},
										1
									}
								}
							};
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.49399999,0.80000001},
							1
						};
						right[]=
						{
							{0.54400003,0.80000001},
							1
						};
						down[]=
						{
							{0.49399999,0.88},
							1
						};
					};
				};
			};
		};
		class NVGMarkers
		{
		};
		numberPhysicalWheels=4;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGun="machinegun";
				gunBeg="Gun_start";
				gunEnd="Gun_end";
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control_y";
				gunnerRightHandAnimName="turret_control_y";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerDoor="door_2_1";
				turretInfoType="MMM_RscWeaponBM30D";
				discreteDistance[]={};
				discreteDistanceInitIndex=0;
				weapons[]=
				{
					"rhs_weap_2a72_btr",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3uof8_150",
					"rhs_mag_3ubr11_150",
					"rhs_mag_762x54mm_2000",
					"rhs_mag_3d17_6",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				gunnerInAction="Gunner_MBT_02_cannon_F_in";
				selectionFireAnim="zasleh_1";
				minElev=-10;
				initElev=0;
				maxElev=60;
				maxhorizontalrotspeed=0.85000002;
				maxverticalrotspeed=0.85000002;
				stabilizedInAxes=3;
				class ViewGunner
				{
					initAngleX=-20;
					minAngleX=-65;
					maxAngleX=85;
					initAngleY=-35;
					minAngleY=-240;
					maxAngleY=60;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						opticsDisplayName="DAY3";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="DAY12";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow: Medium
					{
						opticsDisplayName="DAY24";
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Narrow2: Narrow
					{
						opticsDisplayName="AUTOTRACK";
						directionStabilized=1;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						visual="-";
						armorComponent="Hit_Main_Turret";
						passThrough=1;
						minimalHit=0.44;
						radius=0.2;
					};
					class HitGun
					{
						armor=0.40000001;
						material=-1;
						name="zbran";
						visual="-";
						armorComponent="Hit_Main_Gun";
						passThrough=0.1;
						minimalHit=0.44;
						radius=0.2;
					};
				};
				startEngine=1;
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
	class MMM_KamAZ4386_BM30D: MMM_KamAZ4386_BM30D_base
	{
		scope=2;
		scopeCurator=2;
		faction="rhs_faction_vdv";
		crew="rhs_vdv_driver_armored";
		typicalCargo[]=
		{
			"rhs_vdv_driver_armored"
		};
		editorSubcategory="rhs_EdSubcat_car";
	};
	class MMM_KamAZ4386_base: MMM_KamAZ4386_BM30D_base
	{
		_generalMacro="MMM_KamAZ4386_base";
		editorPreview="\MMM_RU_TyphoonVDV\ui\MMM_KamAZ4386_unarmed_preview_ca.paa";
		displayName="KamAZ-4386";
		Icon="\MMM_RU_TyphoonVDV\ui\MMM_KamAZ4386_unarmed_mapicon_ca.paa";
		model="\MMM_RU_TyphoonVDV\MMM_KamAZ_4386_unarmed.p3d";
		picture="\MMM_RU_TyphoonVDV\ui\MMM_KamAZ4386_unarmed_icon_ca.paa";
		cargoaction[]=
		{
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01",
			"RHS_UAZ_Cargo01"
		};
		cargoIsCoDriver[]={1,0};
		transportSoldier=7;
		cargoProxyIndexes[]={1,2,3,4,5,6,7};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9};
		class MFD: MFD
		{
			class MFD_Driver_Heading_text
			{
				topLeft="MFD_Driver_1_TL";
				topRight="MFD_Driver_1_TR";
				bottomLeft="MFD_Driver_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="static";
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.02},
							1
						};
						right[]=
						{
							{0.69999999,0.02},
							1
						};
						down[]=
						{
							{0.44999999,0.87},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_second
			{
				topLeft="MFD_Driver_2_TL";
				topRight="MFD_Driver_2_TR";
				bottomLeft="MFD_Driver_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0},
							1
						};
						right[]=
						{
							{0.94999999,0},
							1
						};
						down[]=
						{
							{0.44999999,0.81},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_armament
					{
						type="text";
						source="static";
						text="ГЛАВНОЕ ОРУДИЕ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,-0.0049999999},
							1
						};
						right[]=
						{
							{0.075000003,-0.0049999999},
							1
						};
						down[]=
						{
							{0.015,0.072999999},
							1
						};
					};
					class Machinegun
					{
						type="text";
						source="static";
						text="ПУЛЕМЕТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.31},
							1
						};
						right[]=
						{
							{0.075000003,0.31},
							1
						};
						down[]=
						{
							{0.015,0.38800001},
							1
						};
					};
					class Main_armament_ammo_type
					{
						type="text";
						source="static";
						text="ТИП АМУНИЦИИ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.55000001,-0.0049999999},
							1
						};
						right[]=
						{
							{0.61000001,-0.0049999999},
							1
						};
						down[]=
						{
							{0.55000001,0.072999999},
							1
						};
					};
					class Lased_distance_elevation
					{
						type="text";
						source="static";
						text="ДАЛЬНОСТЬ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.83999997},
							1
						};
						right[]=
						{
							{0.075000003,0.83999997},
							1
						};
						down[]=
						{
							{0.015,0.91799998},
							1
						};
					};
					class Azimut
					{
						type="text";
						source="static";
						text="АЗИМУТ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.91500002},
							1
						};
						right[]=
						{
							{0.075000003,0.91500002},
							1
						};
						down[]=
						{
							{0.015,0.99299997},
							1
						};
					};
					class Damage
					{
						type="text";
						source="static";
						text="ПОВРЕЖДЕНИЯ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.38999999},
							1
						};
						right[]=
						{
							{0.075000003,0.38999999},
							1
						};
						down[]=
						{
							{0.015,0.46799999},
							1
						};
					};
					class Heading
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=0.2;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.91500002},
							1
						};
						right[]=
						{
							{0.40000001,0.91500002},
							1
						};
						down[]=
						{
							{0.34,0.99299997},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.34,0.83999997},
							1
						};
						right[]=
						{
							{0.40000001,0.83999997},
							1
						};
						down[]=
						{
							{0.34,0.91799998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Main_Armament_Ammo_Type
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				turret[]={0};
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_AmmoType
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.55500001,0.064999998},
							1
						};
						right[]=
						{
							{0.63499999,0.064999998},
							1
						};
						down[]=
						{
							{0.55500001,0.185},
							1
						};
					};
				};
			};
			class MFD_Gunner_Coax_Ammo
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						sourceIndex=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.31,0.31},
							1
						};
						right[]=
						{
							{0.37,0.31},
							1
						};
						down[]=
						{
							{0.31,0.38800001},
							1
						};
					};
				};
			};
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Armament_Ammo_Type_1
					{
						type="text";
						source="static";
						text="БР";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.064999998},
							1
						};
						right[]=
						{
							{0.075000003,0.064999998},
							1
						};
						down[]=
						{
							{0.015,0.14300001},
							1
						};
					};
					class Gunner_Text_1
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						sourcePrecision=1;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.064999998},
							1
						};
						right[]=
						{
							{0.45500001,0.064999998},
							1
						};
						down[]=
						{
							{0.39500001,0.14300001},
							1
						};
					};
					class Main_Armament_Ammo_Type_2
					{
						type="text";
						source="static";
						text="ОФ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.125},
							1
						};
						right[]=
						{
							{0.075000003,0.125},
							1
						};
						down[]=
						{
							{0.015,0.20299999},
							1
						};
					};
					class Gunner_Text_2
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.125},
							1
						};
						right[]=
						{
							{0.45500001,0.125},
							1
						};
						down[]=
						{
							{0.39500001,0.20299999},
							1
						};
					};
					class Main_Armament_Ammo_Type_3
					{
						type="text";
						source="static";
						text="Р";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.015,0.185},
							1
						};
						right[]=
						{
							{0.075000003,0.185},
							1
						};
						down[]=
						{
							{0.015,0.26300001},
							1
						};
					};
					class Gunner_Text_3
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=2;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.39500001,0.185},
							1
						};
						right[]=
						{
							{0.45500001,0.185},
							1
						};
						down[]=
						{
							{0.39500001,0.26300001},
							1
						};
					};
				};
			};
		};
		class Turrets
		{
		};
	};
	class MMM_KamAZ4386: MMM_KamAZ4386_base
	{
		scope=2;
		scopeCurator=2;
		faction="rhs_faction_vdv";
		crew="rhs_vdv_driver_armored";
		typicalCargo[]=
		{
			"rhs_vdv_driver_armored"
		};
		editorSubcategory="rhs_EdSubcat_car";
	};
};
