#include "BIS_AddonInfo.hpp"
//------------------------------------------------------------------------------------
// fare_AWL Version 1.5
// author: thoreaufare
//------------------------------------------------------------------------------------

class CfgPatches {
	class fare_AWL {
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"CBA_Extended_EventHandlers"};
		version = "1.5";
		versionStr = "1.5";
		versionDesc = "Fare AWL";
		versionAr[] = {1,5};
		author[] = {"thoreaufare"};
	};
};

class CfgFunctions {
	class fare {
		tag = "fare";
		requiredAddons[] = {"CBA_Extended_EventHandlers"};
		
		class AWL {
			file = "\fare_AWL\functions";
			class autoLower {};
			class checkConditions {};
			class lowerWeapon {};
			class removeHandlers {};
			class setupHandlers {};
			class speedUp {};
		};
	};
};

// time for fun animation stuff

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		fare_Lower01 = "fare_Lower01";
		fare_Lower02 = "fare_Lower02";
	};
	class Actions
	{
		class Default;
		class NoActions: ManActions
		{
			fare_Lower01[] = {"fare_Lower01","Gesture"};
			fare_Lower02[] = {"fare_Lower02","Gesture"};
		};
	};
};

class CfgGesturesMale
{
	skeletonName = "OFP2_ManSkeleton";
	class ManActions{};
	class Actions
	{
		class NoActions
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
			stance = "ManStanceUndefined";
		};
	};
	class Default
	{
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		static = 0;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		ragdoll = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 0;
		showWeaponAim = 0;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		Walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 1;
		rightHandIKEnd = 1;
		leftHandIKCurve[] = {};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	class States
	{
		class fare_base: Default
		{
			canPullTrigger = 0;
			connectAs = "";
			connectFrom[] = {};
			connectTo[] = {};
			disableWeapons = 0;
			enableBinocular = 1;
			enableMissile = 1;
			enableOptics = 0;
			equivalentTo = "";
			forceAim = 0;
			headBobMode = 0;
			headBobStrength = 0;
			interpolateFrom[] = {};
			interpolateTo[] = {};
			interpolateWith[] = {};
			interpolationRestart = 0;
			interpolationSpeed = 6;
			looped = 1;
			mask = "handsWeapon";
			minPlayTime = 0.5;
			preload = 0;
			ragdoll = 0;
			relSpeedMax = 1;
			relSpeedMin = 1;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 1;
			soundEdge[] = {0.5,1};
			soundEnabled = 1;
			soundOverride = "";
			speed = -2;
			static = 0;
			terminal = 0;
			Walkcycles = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
		};
		class fare_Lower01: fare_base
		{
			connectAs = "";
			connectFrom[] = {};
			connectTo[] = {};
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_5idle.rtm";
			minPlayTime = 2;
			looped = 0;
			speed = 0.3;
			mask = "fare_weaponBlend";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			weaponLowered = 0;
			showWeaponAim = 1;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 1;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
		class fare_Lower02: fare_base
		{
			connectAs = "";
			connectFrom[] = {};
			connectTo[] = {};
			file = "a3\anims_f\data\anim\sdr\cts\poster_pose_02.rtm";
			minPlayTime = 2;
			looped = 0;
			speed = 0.3;
			mask = "fare_weaponBlend";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			weaponLowered = 0;
			showWeaponAim = 1;
			showHandGun = 0;
			canPullTrigger = 0;
			canReload = 1;
			terminal = 0;
			limitGunMovement = 0;
			preload = 1;
			headBobMode = 1;
			headBobStrength = 0.001;
			interpolateTo[] = {};
		};
		// following taken from TFAR Animations mod
		// used as empty gesture to exit other gesture, currently not implemented
		class GestureNod;
		class fare_stop: GestureNod {
			canPullTrigger=1;
			disableWeapons=0;
			disableWeaponsLong=0;
			canReload=0;
			enableBinocular=1;
			enableMissile=1;
			enableOptics=1;
			mask = "empty";
			file = "a3\anims_f\data\anim\sdr\gst\gesturenod.rtm";
		};
	};
	class BlendAnims
	{
		fare_weaponBlend[] = {"Weapon",1,"Pelvis",0,"Spine",0,"Spine1",0,"Spine2",0,"Spine3",0,"Camera",0,"launcher",0,"weapon",0,"launcher",0,"neck",0,"neck1",0,"head",0,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"RightShoulder",0,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"LeftUpLeg",0,"LeftUpLegRoll",0,"LeftLeg",0,"LeftLegRoll",0,"LeftFoot",0,"LeftToeBase",0,"RightUpLeg",0,"RightUpLegRoll",0,"RightLeg",0,"RightLegRoll",0,"RightFoot",0,"RightToeBase",0,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHankka3ing",1,"LeftHankka3ing1",1,"LeftHankka3ing2",1,"LeftHankka3ing3",1,"LeftHandThumb",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHankka3ing",1,"RightHankka3ing1",1,"RightHankka3ing2",1,"RightHankka3ing3",1,"RightHandThumb",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1};
	};
};

class Extended_PreInit_EventHandlers {
    class fare_AWL_settings {
        init = "call compile preprocessFileLineNumbers '\fare_AWL\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
	class fare_AWL_script {
		init = "call compile preprocessFileLineNumbers '\fare_AWL\XEH_postInit.sqf'";
	};
};
