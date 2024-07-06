//------------------------------------------------------------------------------------
// fn_lowerWeapon.sqf
// Lowers weapon and restores flashlight/laser state
// returns: bool
// author: thoreaufare
//------------------------------------------------------------------------------------

_lowered = false;

_lightState = player isFlashlightOn (currentWeapon player);
_laserState = player isIRLaserOn (currentWeapon player);
//believe it or not, this actually lowers your weapon
player action ["WeaponOnBack", player];
if (_lightState) then { player action ["GunLightOn", player]; };
if (_laserState) then { player action ["IRLaserOn", player]; };

_lowered = true;
_lowered