/* This is the very first semi-complete version of this auto lower system I wrote.
	Kind of interesting to see how the system evolved as I gained experience. */

/*
//TODO add event handler for gear access. Return to weapon lowered if started at weapon lowered.

//set up event handler for when player shoots. don't want to lower weapon if they are in danger.
shooting = false;
player addEventHandler ["Fired", {shooting = true;}];

//check if currently reloading using reload key
reloading = false;
waitUntil {!(isNull (findDisplay 46))};
_menu = (findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1) in actionKeys ""ReloadMagazine"") then {reloading=true;};"];

//add event handler for when finished reloading
player addEventHandler ["Reloaded", {reloading = false;}];

//start while loop to check current animation state
//TODO make this using event handlers instead? Infinite while loop with 5 if statements is dumb
while {true} do {
	if (enabled) then {
		//check current animation state
		_state = animationState player;
		//hintSilent _state;
		
		//if we aren't reloading, continue. Currently only can check reload key pressed, not if reloading through action menu
		if (!reloading) then {
			//if we are shooting, we aren't going to change animation
			if (!shooting) then {
				//weapon will lower if we currently have weapon raised standing or crouched, we aren't ADS'ing, and we aren't weapon resting
				//TODO figure out how to check if player is leaning. Maybe through inputAction?
				//TODO figure out how to make combat pace check work for tactical toggle. Currently works for hold.
				//TODO lazy evaluation for if statements for performance? Maybe deMorganize them
				if ((_state == "AmovPercMstpSrasWrflDnon" || _state ==  "AmovPknlMstpSrasWrflDnon") 
				&& cameraView != "GUNNER" 
				&& !(isWeaponRested player)
				&& (inputAction "TactTemp" == 0)) then {
					//delay animation change by 2 seconds, similar to temporary combat pace modifier
					//TODO think about using inputAction to see if temporary combat pace has been pressed. Use that to replace sleep below
					sleep 2;
					_state = animationState player;
					//do checks again. If all are same, go ahead and do animation change.
					if (!shooting 
					&& !reloading
					&& (_state == "AmovPercMstpSrasWrflDnon" || _state == "AmovPknlMstpSrasWrflDnon") 
					&& cameraView != "GUNNER" 
					&& !(isWeaponRested player)
					&& (inputAction "TactTemp" == 0)) then {
						//this actually lowers your weapon
						player action ["WeaponOnBack", player];
					} else {
						//if second checks failed, don't switch
						//set shooting to false to reset event handler
						shooting = false;
					};
					//sleep a little bit so next animationState check doesn't mess up
					sleep 1;
				};
			} else {
				//if we were shooting, at a minimum we won't check animation for 3 seconds
				//TODO maybe raise this delay? shooting is a BIG deal
				sleep 3;
				shooting = false;
			};
		};
	};
};*/