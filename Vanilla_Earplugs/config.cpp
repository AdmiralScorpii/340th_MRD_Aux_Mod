#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Vanilla_Earplugs
	{
		units[]={};
		weapons[]={};
		requiredVersion= 1.0;
		requiredAddons[]=
		{
			"Extended_EventHandlers"
		};
	};
};
class Extended_PreInit_EventHandlers
{
	Vanilla_Earplugs_Pre_Init= "Vanilla_Earplugs_Pre_Init_Var = [] execVM '\Vanilla_Earplugs\Functions\preInit.sqf'";
};

