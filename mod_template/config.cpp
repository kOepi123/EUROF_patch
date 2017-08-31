// military units patch, main config

#define _ARMA_

class CfgPatches
{
	class us_military_units_patch
	{
		name = "USM Mod Patch and Fix";
		units[] = {};							// Backpacks (are actually cfgvehicles)
		weapons[] = {};							//Helemts, weapons, vests, items (cfgweapons))};
		requiredVersion = 1.0;
		requiredAddons[] = {"us_military_units"};
		author = "kOepi";
		authors[] = {};
		versionAr[] = {1.0};
		magazines[] = {};				//{"usm_lc2canteen_empty","usm_mre","usm_mre_trash"};
		ammo[] = {};
	};
};
class CfgWeapons
{
	#include "CfgProtection.hpp"
	#include "CfgItems.hpp"
	
};

//class CfgMagazines
class CfgVehicles
{
	#include "CfgBackpacks.hpp"
};