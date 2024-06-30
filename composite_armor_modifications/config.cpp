class CfgPatches
{
	class 340th_Composite_Modifications
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.78;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder",
			"rhs_main",
			"rhsusf_main",
			"340th_AFRF_ERA_Modifications",
			"340th_USAF_ERA_Modifications"
		};
		name="340th MRD Composite Armor Rebalanced";
		author="Scorpii";
	};
};

class CfgArmorSimulations
{
	class RHS_Composite_50
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{1,1.25},1};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1.5};
			speed[]={0.5,0.5};
		};
		class TandemHEAT
		{
			hit[]={{2,2.25},2.25};
			speed[]={1,1};
		};
	};
	class RHS_Composite_55
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{1.25,1.5},1.25};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={{1,1.5},};
			speed[]={0.55000001,0.55000001};
		};
		class TandemHEAT
		{
			hit[]={{2,2.25},2.25};
			speed[]={1,1};
		};
	};
	class RHS_Composite_60
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{1.5,2},1.5};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={1.5};
			speed[]={0.60000002,0.60000002};
		};
		class TandemHEAT
		{
			hit[]={{2,2.25},2.25};
			speed[]={1,1};
		};
	};
	class RHS_Composite_65
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{2,2.5},2};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={2.0};
			speed[]={0.64999998,0.64999998};
		};
		class TandemHEAT
		{
			hit[]={{2,2.25},2.25};
			speed[]={1,1};
		};
	};
	class RHS_Composite_70
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{2.5,3},2.5};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={2.0};
			speed[]={0.69999999,0.69999999};
		};
		class TandemHEAT
		{
			hit[]={{2.5,3},3};
			speed[]={1,1};
		};
	};
	class RHS_Composite_75
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{2.5,3},2.5};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={2};
			speed[]={0.75,0.75};
		};
		class TandemHEAT
		{
			hit[]={{2.5,3},3};
			speed[]={1,1};
		};
	};
	class RHS_Composite_80
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{3,3.5},3};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={2};
			speed[]={0.80000001,0.80000001};
		};
		class TandemHEAT
		{
			hit[]={{3,3.5},3.5};
			speed[]={1,1};
		};
	};
	class RHS_Composite_85
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{3,3.5},3};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={2};
			speed[]={0.85000002,0.85000002};
		};
		class TandemHEAT
		{
			hit[]={{3,3.5},3.5};
			speed[]={1,1};
		};
	};
	class RHS_Composite_90
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{3,3.5},3};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={2};
			speed[]={0.89999998,0.89999998};
		};
		class TandemHEAT
		{
			hit[]={{3.5,4},4};
			speed[]={1,1};
		};
	};
	class RHS_Composite_95
	{
		class Default
		{
			hit[]={1};
			speed[]={1};
		};
		class AP
		{
			hit[]={{3,3.5},3};
			speed[]={1,1};
		};
		class HE: Default
		{
		};
		class HEAT
		{
			hit[]={2};
			speed[]={0.94999999,0.94999999};
		};
		class TandemHEAT
		{
			hit[]={{3.5,4},4};
			speed[]={1,1};
		};
	};
};

