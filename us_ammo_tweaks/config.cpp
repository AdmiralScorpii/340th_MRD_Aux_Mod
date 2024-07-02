class CfgPatches
{
	class 340th_USAF_Ammunition_Modifications
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.78;
		requiredAddons[]=
		{
			"rhsusf_c_weapons"
		};
		name="340th MRD RHSUSAF Ammo Modifications";
		author="Scorpii";
	};
};

class CfgAmmo
{
	
	class BulletBase;
	class RocketBase;
	class GrenadeHand;
	class GrenadeHand_stone;
	class F_40mm_White;
	class F_40mm_Green;
	class F_40mm_Red;
	class F_40mm_Cir;
	class G_40mm_HE;
	class MissileCore;
	class MissileBase: MissileCore	
	{
		class Components;
	};
	class rhsusf_ammo_basic_penetrator;
	class rhs_ammo_M_fgm148_AT: MissileBase	
	{
		hit=200;
		class Direct
		{
		};
		class TopDown
		{
		};	
		class Cruise
		{
		};	
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
						};
						class GroundTarget
						{
						};
					};
				};
			};
		};		
	};
	class rhs_ammo_M_fgm148_AT_penetrator: rhsusf_ammo_basic_penetrator
	{
		warheadName="TandemHEAT";
		hit=220;
		caliber=50.666698;
	};
};































































