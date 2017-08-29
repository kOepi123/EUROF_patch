// military units patch, main config

#define _ARMA_

class CfgPatches
{
	class us_military_units_patch
	{
		name = "USM Mod Patch and Fix";
		units[] = 
		{
			
			"usm_pack_alice",
			"usm_pack_alice_medic",
			"usm_pack_alice_prc119",
			"usm_pack_alice_prc117",
			"usm_pack_alice_prc77",
			"usm_pack_st138_prc77",
			"usm_pack_m5_medic",
			"usm_pack_abag_m60",
			"usm_pack_762x51_bandoliers",
			"usm_pack_200rnd_556_bandoliers",
			"usm_pack_762x51_ammobelts",
			"usm_pack_556x45_ammobelts",
			"usm_gasmaskcarrier",
			"usm_gear_earmuffs"
			
		};
		weapons[] = {"usm_helmet_pasgt_w","usm_90mphtape","usm_bugrepellant","usm_lc2canteen_full","usm_climbingrope","usm_dogtags","usm_etool","usm_flashlight","usm_footpowder","usm_gigloves","usm_socks","usm_hygienekit","usm_isomat","usm_militaryid","usm_mre","usm_notepadpen","usm_playboy","usm_poncho","usm_poncholiner","usm_rifle_cleaning_kit","usm_sleepingbag","usm_bayonet_m9","usm_gasmask_m17","usm_gasmaskcarrier"};
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
class cfgMods
{
	author = "timb120";
	timepacked = "1461269850";
};