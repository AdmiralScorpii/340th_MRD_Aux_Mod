class CfgPatches {
	class ner_1l271_aistyonok {
		name = "ner_1l271_aistyonok";
		units[] = {
			"ner_1l271_aistyonok",
			"ner_1l271_aistyonok_b",
			"ner_1l271_aistyonok_o",
			"ner_1l271_aistyonok_i"
		};
		weapons[]={
			"ner_1l271_aistyonok_b",
			"ner_1l271_aistyonok_o",
			"ner_1l271_aistyonok_i"
		};
		requiredAddons[] = {
			"A3_Data_F_AoW_Loadorder",
			"cba_xeh",
			"rhs_c_heavyweapons",
			"rhs_main"
		};
		author = "NEREXIS";	
	};
};

class CfgFunctions {
    class ner_1l271_aistyonok {
        class main {
            file = "ner_1l271_aistyonok\bootstrap";
            class preInit {
                preInit = 1;
            };
        };
    };
};

class Extended_PreInit_EventHandlers {
    class ner_1l271_aistyonok_preInit_event {
        init = "call compile preprocessFileLineNumbers 'ner_1l271_aistyonok\XEH_preInit.sqf';";
    };
};

class CfgVehicles {

	class StaticWeapon;


	class ner_1l271_aistyonok_base : StaticWeapon
	{
		model = "\Artilery_Radar\artilery_radar.p3d";
		author = "NEREXIS";
		displayName ="1L271 Aistyonok";
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		allowTabLock=1;
		irTarget=1;
		ejectDeadDriver=1;
		ejectDeadCargo=1;
		fuelCapacity=10;
		destrType="DestructEngine";
		armor=30;
		explosionShielding=0;
		minTotalDamageThreshold=0.5;
		explosionEffect="FuelExplosion";
		dammageFull[] = { "\Artilery_Radar\Textures\radar_texture_destroyed_co.paa" };
		fuelExplosionPower=0;
		hullDamageCauseExplosion=1;
		class DestructionEffects
		{
			class Smoke
			{
				simulation="particles";
				type="WeaponWreckSmoke";
				position="destructionEffect";
				intensity=1;
				interval=1;
				lifeTime=5;
			};
		};
		class assembleInfo
		{
			base="";
			assembleTo="";
			primary = 0;
			dissasembleTo[]=
			{
				"ner_1l271_bag_base"
			};
			displayName="Aistyonok Radar";
		};
		memoryPointDriverOptics[]=
		{
			"driverview",
			"pilot"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";					
	};

	class ner_1l271_aistyonok_b : ner_1l271_aistyonok_base
	{
		scope=2;
		scopeCurator = 2;
		faction="BLU_F";
		side=1;			
		vehicleClass = "Autonomous";
		editorSubcategory="EdSubcat_Turrets";
		crew="B_UAV_AI";
		class assembleInfo
		{
			base="";
			assembleTo="";
			primary = 0;
			dissasembleTo[]=
			{
				"ner_1l271_bag_b"
			};
			displayName="Aistyonok Radar";
		};
	};
	class ner_1l271_aistyonok_o : ner_1l271_aistyonok_base
	{
		scope=2;
		scopeCurator = 2;
		faction="OPF_F";		
		side=0;
		vehicleClass = "Autonomous";
		editorSubcategory="EdSubcat_Turrets";
		crew="O_UAV_AI";
		class assembleInfo
		{
			base="";
			assembleTo="";
			primary = 0;
			dissasembleTo[]=
			{
				"ner_1l271_bag_o"
			};
			displayName="Aistyonok Radar";
		};
	};	
	class ner_1l271_aistyonok_i : ner_1l271_aistyonok_base
	{
		scope=2;
		scopeCurator = 2;
		faction="IND_F";
		side=2;			
		vehicleClass = "Autonomous";
		editorSubcategory="EdSubcat_Turrets";		
		crew="I_UAV_AI";
		class assembleInfo
		{
			base="";
			assembleTo="";
			primary = 0;
			dissasembleTo[]=
			{
				"ner_1l271_bag_i"
			};
			displayName="Aistyonok Radar";
		};
	};	
	
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};	
	class ner_1l271_bag_base: Weapon_Bag_Base
	{
		scopeCurator = 2;
		scope=2;
		mass=250;
		displayName="1L271 Backpack";
		model="\rhsafrf\addons\rhs_heavyweapons\bags\StaticX.p3d";
		picture="\rhsafrf\addons\rhs_heavyweapons\bags\staticX_CA.paa";
		icon="\rhsafrf\addons\rhs_heavyweapons\bags\mapIcon_backpack_CA.paa";
		class assembleInfo: assembleInfo
		{
			primary=1;
			base="";
			assembleTo="ner_1l271_aistyonok_base";
			dissasembleTo[]={};
			displayName="Aistyonok Radar";
		};
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};
	class ner_1l271_bag_o: ner_1l271_bag_base
	{
		scopeCurator = 2;
		scope=2;
		displayName="1L271 Backpack (OPFOR)";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="ner_1l271_aistyonok_o";
			dissasembleTo[]={};
			displayName="Aistyonok Radar";
		};
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};
	class ner_1l271_bag_b: ner_1l271_bag_base
	{
		scopeCurator = 2;
		scope=2;
		displayName="1L271 Backpack (BLUFOR)";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="ner_1l271_aistyonok_b";
			dissasembleTo[]={};
			displayName="Aistyonok Radar";
		};
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};
	class ner_1l271_bag_i: ner_1l271_bag_base
	{
		scopeCurator = 2;
		scope=2;
		displayName="1L271 Backpack (INDFOR)";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="ner_1l271_aistyonok_i";
			dissasembleTo[]={};
			displayName="Aistyonok Radar";
		};
		editorSubcategory = "EdSubcat_DismantledWeapons";
	};
	
};
