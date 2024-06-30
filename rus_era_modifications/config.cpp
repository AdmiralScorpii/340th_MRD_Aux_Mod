class CfgPatches
{
	class 340th_AFRF_ERA_Modifications
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.78;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder",
			"rhs_main"
		};
		name="340th MRD RHSAFRF ERA Rebalanced";
		author="Scorpii";
	};
};

class CfgArmorSimulations
{
	class Armor_ERA_Light;
	class Armor_ERA_Heavy;
	class RHS_Sideskirt_Rubber: Armor_ERA_Light
	{
		class Default // when hit by ammunition without warHeadName
		{
			hit[] = {1};
			speed[] = {1};
		};
		// Vanilla warheads
		class AP
		{
			hit[] = {2};
			speed[] = {1,1};
		};
		class HE
		{
			hit[] = {0.5,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {2};
			speed[] = {0.7,0.7};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1,1};
		};
	};
	class RHS_ERA_K1: Armor_ERA_Light
	{
		class Default // when hit by ammunition without warHeadName
		{
			hit[] = {1};
			speed[] = {1};
		};
		// Vanilla warheads
		class AP
		{
			hit[] = {2};
			speed[] = {1,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1.5};
			speed[] = {0.1,0.1};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1,1};
		};
	};
	class RHS_ERA_K5: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.75,0.75};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.05,0.05};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.9,1};
		};
	};
	class RHS_ERA_RELIKT: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.6,0.6};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
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
	class RHS_ERA_MALACHIT: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.5,0.5};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.03,0.03};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.8,0.3};
		};
	};
	class RHS_SLAT: Armor_ERA_Light
	{
		class HEAT
		{
			hit[]={1};
			speed[]={0.30000001,0.30000001};
		};
		class TandemHEAT
		{
			hit[]={3};
			speed[]={1,1};
		};
	};
};

