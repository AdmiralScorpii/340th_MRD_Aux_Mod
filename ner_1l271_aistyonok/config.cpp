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
			"cba_xeh"
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
		destrType="DestructWreck";
		armor=30;
		explosionShielding=0;
		minTotalDamageThreshold=0.5;
		explosionEffect="FuelExplosion";
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
		memoryPointDriverOptics[]=
		{
			"driverview",
			"pilot"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";				
		scope=1;		
		side=1;		
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
	};	
};
