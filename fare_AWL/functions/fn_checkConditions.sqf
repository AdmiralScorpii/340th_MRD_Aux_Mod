//------------------------------------------------------------------------------------
// fn_checkConditions.sqf
// Checks all the conditions necessary for auto lowering to occur
// params: [_anim]
// _anim: STRING (animation state)
// returns: BOOL (true if conditions met)
// author: thoreaufare
//------------------------------------------------------------------------------------
params ["_anim"];
 
//TODO replace giant condition statement with something smarter,
//current performance is about 0.034ms for true result, about half that for false
//TODO auto lower in FFV seats?

_passed = false;
if ((FARE_ENABLED
&& {FARE_ENABLED_TOGGLE}
&& {vehicle player == player}
&& {(!FARE_CHECK_MOVE
	|| {FARE_rifleAnimations findIf {_x == _anim} != -1}
	|| {FARE_handgunAnimations findIf {_x == _anim} != -1 && FARE_CHECK_HANDGUN})}
&& {!(FARE_rifleSprintAnimations findIf {_x == _anim} != -1
	|| {FARE_handgunSprintAnimations findIf {_x == _anim} != -1 && FARE_CHECK_HANDGUN})}
&& {!(stance player == "PRONE")}
&& {!(((time - (player getVariable "fare_shooting_time")) <= FARE_DELAY_SHOOT) && FARE_CHECK_SHOOT)}
&& {!(((time - (player getVariable "fare_firedNear_time")) <= FARE_DELAY_NEAR) && FARE_CHECK_NEAR)}
&& {!(player getVariable "fare_reloading" && FARE_CHECK_RELOAD)}
&& {!(isWalking player && FARE_CHECK_WALK)}
&& {!(player getVariable "fare_tactical_toggle" && FARE_CHECK_TACTICAL)}
&& {!(((abs (((player selectionPosition "head") select 0) - 0.15)) > 0.15) && FARE_CHECK_LEAN)}
&& {!(cameraView == "GUNNER"  && FARE_CHECK_ADS)}
&& {!(isWeaponRested player && !(side cursorObject == side player && player distance cursorObject < 2) && FARE_CHECK_REST)}
&& {!(player isFlashlightOn (currentWeapon player) && FARE_CHECK_LIGHT 
	&& !((sunOrMoon > FARE_DELAY_DAYTIME) && FARE_STATE_DAYTIME))}
&& {!(player isIRLaserOn (currentWeapon player) && FARE_CHECK_LASER 
	&& !((sunOrMoon > FARE_DELAY_DAYTIME) && FARE_STATE_DAYTIME))}
&& {!(inputAction "TactTemp" == 1 && FARE_CHECK_TACTICAL)}
&& {!(weaponLowered player)
	|| {FARE_rifleLowerAnimations findIf {_x == _anim} != -1
	|| {FARE_handgunLowerAnimations findIf {_x == _anim} != -1 && FARE_CHECK_HANDGUN}}}
) isEqualTo true) then {
	_passed = true;
};
_passed