class CfgPatches
{
	class 340th_USAF_Ammunition_Modifications
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.78;
		requiredAddons[]=
		{
			"RPG_30K"
		};
		name="340th MRD AFRF Ammo Modifications";
		author="Scorpii";
	};
};

class Mode_SemiAuto;
class CfgWeapons 
{
	class launch_RPG32_F;
	class RPG_30K: launch_RPG32_F
	{
		class OpticsModes
		{
			class ironsight
			{
				opticsZoomMin=0.25;
				opticsZoomMax=0.60000002;
				opticsZoomInit=0.60000002;			
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType	
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Launcher\rpg32",
					1.99526,
					1,
					900
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};			
		};
	};
};






























































