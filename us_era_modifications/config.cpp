class CfgPatches
{
	class 340th_USAF_ERA_Modifications
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.78;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder",
			"rhsusf_main"
		};
		name="340th MRD RHSUSAF ERA Rebalanced";
		author="Scorpii";
	};
};

class CfgArmorSimulations
{
	class Armor_ERA_Light;
	class Armor_ERA_Heavy;
	class RHS_ERA_Arat1: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.9,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.1,0.1};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1};
		};
	};
	class RHS_ERA_Arat2: RHS_ERA_Arat1
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.9,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.15,0.15};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1};
		};
	};
	class RHS_ERA_Arat2_Mixed: RHS_ERA_Arat2
	{
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.05,0.05};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.85,1};
		};
	};
	class RHS_SLAT: Armor_ERA_Light
	{
		class AP
		{
			hit[] = {1};
			speed[] = {1,1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.3,0.3};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1,1};
		};
	};
	class RHS_QNET:  RHS_SLAT
	{
		class AP
		{
			hit[] = {2};
			speed[] = {1,1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.08,0.08};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1,1};
		};
	};
	class RHS_ERA_BUSK: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.9,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.1,0.1};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1};
		};
	};
	class RHS_Hull_Helicopter
	{
		// warheads
		class Default
		{
			hit[] = {1};
			speed[] = {1};
		};
		class AP
		{
			hit[] = {1};
			speed[] = {1};
		};
		class HE
		{
			hit[] = {2};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {3};
			speed[] = {1};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1};
		};
	};
	class RHS_MinePlow
	{
		// warheads
		class Default
		{
			hit[] = {0.01};
			speed[] = {1};
		};
		class AP
		{
			hit[] = {1};
			speed[] = {1};
		};
		class HE
		{
			hit[] = {0.01};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {1};
		};
		class TandemHEAT
		{
			hit[] = {1};
			speed[] = {1};
		};
	};
};

