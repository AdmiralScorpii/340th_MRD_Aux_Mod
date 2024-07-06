//------------------------------------------------------------------------------------
// fn_setupHandlers.sqf
// Sets up all the handlers necessary for checks and states
// author: thoreaufare
//------------------------------------------------------------------------------------

//TODO add killed event handler to remove other event handlers?

//TODO add some way to reset script and variables if bugged, maybe auto reset when rifle lowered manually
//TODO move variables to separate file
player setVariable["fare_leanLeft_toggle", false];
player setVariable["fare_leanRight_toggle", false];
player setVariable["fare_tactical_toggle", false];

//animations arrays
//TODO update these global arrays to be preprocessor?
FARE_rifleAnimations = [
	"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",
	"AmovPknlMstpSlowWrflDnon_AmovPknlMstpSrasWrflDnon",
	"AmovPercMstpSrasWrflDnon",
	"AmovPknlMstpSrasWrflDnon",
	"AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",
	"AmovPknlMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",
	"AmovPercMstpSrasWrflDnon_turnL",
	"AmovPercMstpSrasWrflDnon_turnR",
	"AmovPknlMstpSrasWrflDnon_turnL",
	"AmovPknlMstpSrasWrflDnon_turnR",
	"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",
	"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon"
];

FARE_handgunAnimations = [
	"AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon",
	"AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon",
	"AmovPercMstpSrasWpstDnon",
	"AmovPknlMstpSrasWpstDnon",
	"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
	"AmovPknlMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon",
	"AmovPercMstpSrasWpstDnon_turnL",
	"AmovPercMstpSrasWpstDnon_turnR",
	"AmovPknlMstpSrasWpstDnon_turnL",
	"AmovPknlMstpSrasWpstDnon_turnR",
	"AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",
	"AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon"
];

FARE_rifleSprintAnimations = [
	"AmovPercMevaSrasWrflDf",
	"AmovPercMevaSrasWrflDfl",
	"AmovPercMevaSrasWrflDfr",
	"AmovPknlMevaSrasWrflDf",
	"AmovPknlMevaSrasWrflDfl",
	"AmovPknlMevaSrasWrflDfr"
];

FARE_handgunSprintAnimations = [
	"AmovPercMevaSrasWpstDf",
	"AmovPercMevaSrasWpstDfl",
	"AmovPercMevaSrasWpstDfr",
	"AmovPknlMevaSrasWpstDf",
	"AmovPknlMevaSrasWpstDfl",
	"AmovPknlMevaSrasWpstDfr"
];

FARE_rifleLowerAnimations = [
	"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",
	"AmovPknlMstpSlowWrflDnon_AmovPknlMstpSrasWrflDnon"
];

FARE_handgunLowerAnimations = [
	"AmovPercMstpSlowWpstDnon_AmovPercMstpSrasWpstDnon",
	"AmovPknlMstpSlowWpstDnon_AmovPknlMstpSrasWpstDnon"
];

FARE_rifleRaiseAnimations = [
	"AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon",
	"AmovPknlMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon"
];

FARE_handgunRaiseAnimations = [
	"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",
	"AmovPknlMstpSrasWpstDnon_AmovPknlMstpSlowWpstDnon"
];

FARE_inventoryAnimations = [
	"AinvPercMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",
	"AinvPercMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon"
];

FARE_lowerAnimations = FARE_rifleLowerAnimations + FARE_handgunLowerAnimations;
FARE_raiseAnimations = FARE_rifleRaiseAnimations + FARE_handgunRaiseAnimations;

//event handler for toggles
//TODO figure out how to detect double tap more reliably,
//double tap toggle may fail if single tap for same key is bound
//TODO counter inputAction registering multiple keypresses very quickly
_menu = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
	if (vehicle player == player) then {
		if (!(stance player == "PRONE")) then {
			// new way of detecting leaning
			_posHeadRel = player selectionPosition "head";
			_leanCoef = (_posHeadRel select 0) - 0.15;

			if (abs _leanCoef > 0.15) then {
				player setVariable["fare_leanLeft_toggle", true];
				player setVariable["fare_leanRight_toggle", true];
			} else {
				player setVariable["fare_leanLeft_toggle", false];
				player setVariable["fare_leanRight_toggle", false];
			};
		};

		if ((inputAction "TactToggle") > 0) then {
			_temp = !(player getVariable "fare_tactical_toggle");
			player setVariable["fare_tactical_toggle", _temp];
		};
		
	};
}];

//event handler for when player shoots. don't want to lower weapon if they are in danger
player setVariable["fare_shooting_time", 0];

player addEventHandler ["Fired", {
	player setVariable["fare_shooting_time", time];
}];

//event handler for firednear so nearby combat blocks lowering
player setVariable["fare_firedNear_time", 0];

player addEventHandler ["FiredNear", {
	params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];

	if (player != _firer && _distance <= FARE_DISTANCE_FIRED) then {
		player setVariable["fare_firedNear_time", time];
	};
}];

//TODO in general, redo reloading detection because this all seems unnecessary, there has to be simpler way
//check if currently reloading using reload key
player setVariable["fare_reloading", false];

_menu_3 = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
	if (vehicle player == player) then {
		if (_key in actionKeys "ReloadMagazine" && !_ctrl && !_shift) then {
			player setVariable["fare_reloading", true];
		};
	};
}];

//add event handler for when finished reloading
player addEventHandler ["Reloaded", {player setVariable["fare_reloading", false];}];

//check if reloading using action menu (e.g. changing magazine type or weapon empty)
//or if player has taken a single item from the ground
//item is potentially a magazine that would cause an auto reload, so set reloading = true
inGameUISetEventHandler ["Action", "
	if ((_this select 3 == 'LoadOtherMagazine') || (_this select 3 == 'LoadEmptyMagazine') || (_this select 3 == 'TakeItem')) then {
		player setVariable['fare_reloading', true];
		false
	}
"];

//once item is taken, set reloading to false
//if item is magazine, this would fire after reload is finished
player addEventHandler ["Take", {
	player setVariable["fare_reloading", false];
}];

//check if player is reloading a weapon using inventory menu
//TODO eventually rewrite this with CBA_fnc_wait...
player setVariable["fare_inventory_open", false];

player addEventHandler ["InventoryOpened", {
	params ["_unit", "_container"];
	player setVariable["fare_inventory_open", true];
	if (weaponLowered player && FARE_STATE_GEAR) then {
		player setVariable["fare_weapon_lowered", true];
	} else {
		player setVariable["fare_weapon_lowered", false];
	};
	[] spawn {
		while {player getVariable "fare_inventory_open";} do {
			waitUntil {!(isNull (findDisplay 602))};
			_display = findDisplay 602;
			//reloading primary magazine with drag and drop
			(_display displayCtrl 623) ctrlSetEventHandler ["LBDrop", "
				player setVariable['fare_reloading', true];
			"];
			//reloading primary under barrel with drag and drop
			(_display displayCtrl 644) ctrlSetEventHandler ["LBDrop", "
				player setVariable['fare_reloading', true];
			"];
			//reloading secondary magazine with drag and drop
			(_display displayCtrl 627) ctrlSetEventHandler ["LBDrop", "
				player setVariable['fare_reloading', true];
			"];
			//reloading handgun magazine with drag and drop
			(_display displayCtrl 631) ctrlSetEventHandler ["LBDrop", "
				player setVariable['fare_reloading', true];
			"];
			//if we take a single item from ground or container (right click), we are potentially reloading
			// displayCtrl for ground items is 632, chosen container is 640
			(_display displayCtrl 632) ctrlSetEventHandler ["MouseButtonClick", "
				params ['_control', '_button', '_xPos', '_yPos', '_shift', '_ctrl', '_alt'];
				if (_button == 1) then {
					player setVariable['fare_reloading', true];
				};
			"];
			(_display displayCtrl 640) ctrlSetEventHandler ["MouseButtonClick", "
				params ['_control', '_button', '_xPos', '_yPos', '_shift', '_ctrl', '_alt'];
				if (_button == 1) then {
					player setVariable['fare_reloading', true];
				};
			"];
			waitUntil {isNull (findDisplay 602)};
		};
	};
}];

//add event handler for inventory to return to weapon raise/lower after interacting
//TODO smooth out return to lower when inside vehicle, twitchy right now
player addEventHandler ["InventoryClosed", { 
	params ["_unit", "_container"];
	player setVariable["fare_inventory_open", false];
	if ((player getVariable "fare_weapon_lowered") && !(player getVariable "fare_reloading")) then {
		[{call fare_fnc_lowerWeapon;}, [], 0.2] call CBA_fnc_waitAndExecute;
	};
}];

//TODO return to lower after using ACE check ammo
//default ctrl+r keybind right now
/*
_menu_4 = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
	if (vehicle player == player) then {
		if (_key == 19 && _ctrl) then {
			if (weaponLowered player) then {
				[{call fare_fnc_lowerWeapon;}, [], 0.5] call CBA_fnc_waitAndExecute;
			};
		};
	};
}];*/

//restore weapon state after doing vanilla medical
inGameUISetEventHandler ["Action", "
	if ((_this select 3 == 'HealSoldier') || (_this select 3 == 'HealSoldierSelf')) then {
		if (weaponLowered player && {!(stance player == 'PRONE')} && {FARE_STATE_MEDICAL}) then {
			[{call fare_fnc_lowerWeapon}, [], 0.2] call CBA_fnc_waitAndExecute;
		};
		false
	}
"];

//TODO check if player is falling and return to weapon lower

//TODO add event handler to detect left mouse click 
//if I use custom gesture, we have to escape gesture somehow
//left click could induce GestureNod gesture to escape lowering gesture

//Main loop
player setVariable["fare_script_running", false];
player setVariable["fare_speedup_running", false];

//TODO logic in this handler is kinda spaghetti due to speedup and ace medical
FARE_medMenuOpen = false;
FARE_ENABLED_TOGGLE = true;
[{	
	if (FARE_ENABLED && FARE_ENABLED_TOGGLE) then {
		if (FARE_ANIM_LOWER || FARE_ANIM_RAISE) then {
			[animationState player] call fare_fnc_speedUp;
		};
		if (FARE_STATE_ACE_MENU) then {
			// get medical menu display
			_display = uiNamespace getVariable ["ace_medical_gui_menuDisplay", displayNull];
			if ((!isNull _display) && !FARE_medMenuOpen) then {
				FARE_medMenuOpen = true;
				if (!(weaponLowered player) && (vehicle player == player) && (stance player != "PRONE")) then {
					// if player is ADS, we get stuck in animation loop 
					// so forcibly un-ADS player 
					if (cameraView == "GUNNER") then {
						player switchCamera "INTERNAL";
					};
					call fare_fnc_lowerWeapon;
				};
			} else {
				if (isNull _display) then {
					FARE_medMenuOpen = false;
				};
				call fare_fnc_autoLower;
			};
		} else {
			call fare_fnc_autoLower;
		};
	};
}, 0.1] call CBA_fnc_addPerFrameHandler;
