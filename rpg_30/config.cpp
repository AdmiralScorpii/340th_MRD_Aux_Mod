class CfgPatches
{
	class RPG_30K
	{
		units[]=
		{
			"RPG30_box"
		};
		weapons[]=
		{
			"RPG_30K"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp_Launchers_RPG32",
			"A3_Weapons_F"
		};
		magazines[]=
		{
			"RPG_30K_MAG"
		};
		ammo[]=
		{
			"PG7VR",
			"ammo_Penetrator_PRG30"
		};
	};
};
class CfgMagazines
{
	class RPG32_F;
	class RPG_30K_MAG: RPG32_F
	{
		author="Sam";
		scope=2;
		displayName="PG-30/IG30";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\rpg_30\ui\MAG.paa";
		descriptionShort="AT 105 mm tandem shaped charge with second rocket imitator";
		displaynameshort="PG-30/IG30";
		ammo="PG7VR";
		mass=80;
	};
};
class CfgAmmo
{
	class ShellCore;
	class ShellBase;
	class ammo_Penetrator_Base;
	class R_PG32V_F;
	class PG7VR: R_PG32V_F
	{
		submunitionAmmo = "ammo_Penetrator_Jian";
	};
	class ammo_Penetrator_PRG30: ammo_Penetrator_Base
	{
		caliber=1;
		warheadName="TandemHEAT";
		hit = 600;
		indirectHit = 600;
		indirectHitRange = 2;
		submunitionAmmo = "ammo_Penetrator_Jian";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class launch_RPG32_F;
	class RPG_30K: launch_RPG32_F
	{
		author="Sam";
		_generalMacro="RPG_30K";
		scope=2;
		displayName="RPG 30";
		descriptionShort="RPG 30";
		model="\rpg_30\rpg_30.p3d";
		picture="\rpg_30\ui\BODY.paa";
		UiPicture="\rpg_30\ui\BODY.paa";
		cameraDir="look";
		maxZeroing=200;
		weaponInfoType="RscWeaponZeroing";
		modeOptics="-";
		class OpticsModes
		{
			class ironsight
			{
				opticsID=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				useModelOptics=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.050000001;
				opticsZoomMax=0.30000001;
				opticsZoomInit=0.050000001;
				visionMode="";
				discreteDistanceInitIndex=0;
				discreteDistance[]={100,200};
				discreteDistanceCameraPoint[]=
				{
					"OP_eye1",
					"OP_eye2"
				};
				cameraDir="op_look";
				distanceZoomMin=100;
				distanceZoomMax=200;
			};
		};
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		magazines[]=
		{
			"RPG_30K_MAG"
		};
		magazineWell[]=
		{
			"RPG32"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\rpg_30\sound\double.ogg",
					2,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			showToPlayer=1;
			reloadTime=1;
			minRange=10;
			minRangeProbab=0.89999998;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.60000002;
			aiRateOfFire=7;
			aiRateOfFireDistance=300;
			dispersion=0.0099999998;
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		class Library
		{
			libTextDesc="RPG 30 Hook";
		};
	};
};
class CfgVehicles
{
	class Box_EAF_WpsSpecial_F;
	class RPG30_box: Box_EAF_WpsSpecial_F
	{
		scope=2;
		scopecurator=2;
		author="Sam";
		displayName="RPG30 box";
		class TransportWeapons
		{
			class _xx_RPG_30K
			{
				weapon="RPG_30K";
				count=1;
			};
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
};