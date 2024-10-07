class CfgPatches
{
	class rhs_HMG_Fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"rhs_main","rhs_c_heavyweapons","rhsusf_c_heavyweapons","rhsusf_c_weapons"};
		name = "Heavy weapons Fix";
	};
};
class CfgAmmo
{
	class B_127x108_Ball;
	class rhs_ammo_127x107mm: B_127x108_Ball
	{
		hit = 20;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		timeToLive = 25;
		tracerEndTime = 3;
	};
	class rhs_ammo_127x108mm: rhs_ammo_127x107mm
	{
		caliber = 2.45803;
	};
	class rhs_ammo_127x108mm_notracer: rhs_ammo_127x108mm
	{
		model = "\A3\Weapons_f\empty";
	};
	class rhs_ammo_145x115mm: rhs_ammo_127x107mm
	{
		tracerEndTime = 2.35;
		typicalSpeed = 988;
		airFriction = -0.00052;
		caliber = 2.45803;
	};
	class rhs_ammo_BS32_145x115mm: rhs_ammo_145x115mm
	{
		caliber = 2.45402;
	};
	class B_30mm_AP;
	class rhs_ammo_30x165mm_base: B_30mm_AP
	{
		typicalspeed = 970;
	};
	class rhs_ammo_3ubr6: rhs_ammo_30x165mm_base
	{
		hit = 65;
		caliber = 3.78007;
	};
	class rhs_ammo_3ubr8: rhs_ammo_30x165mm_base
	{
		hit = 65;
		caliber = 3.98857;
	};
	class rhs_ammo_3ubr11: rhs_ammo_3ubr8
	{
		hit = 65;
		caliber = 4.1419;
	};
	class B_127x99_Ball;
	class rhs_ammo_127x99_Ball: B_127x99_Ball
	{
		caliber = 2.45803;
	};
	/// хит 90
	/// калибо 4.46009
};