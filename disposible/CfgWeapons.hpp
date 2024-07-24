class CfgWeapons {
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

    class RPG_30K: Launcher_Base_F {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "RPG_30K";

        magazineWell[] = {""};
        magazines[] = {"CBA_FakeLauncherMagazine"};
        magazineReloadTime = 0.1;
        reloadMagazineSound[] = {"",1,1};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 180; 
        };
    };

    class launch_RPG_ready_F: RPG_30K {
        author = "Sam";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "RPG_30K";

        magazines[] = {"RPG_30K_MAG"};
		magazineWell[] = {"RPG32"}; 

        class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable";
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };

    class RPG_30K_used: RPG_30K {
        author = "Sam";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "RPG_30K_used";

        displayName = "RPG30 used tube";
        descriptionShort = "RPG30 used tube";
        weaponPoolAvailable = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 100;
        };
    };
};
