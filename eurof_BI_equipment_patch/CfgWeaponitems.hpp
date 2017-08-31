// removes all unused stuff from the virtual arsenal: ItemCore { scope = 0; };

/*
class CfgPatches
{
	class eurof_BI_equipment_patch_Witems
	{
		units[] = {};
		weapons[] = 
		{
		
			"ItemGPS",
			"MineDetector",
			"Rangefinder",
//			"NVGoggles",
			"NVGoggles_OPFOR",
			"NVGoggles_INDEP",
			"Integrated_NVG_F",
			"Integrated_NVG_TI_0_F",
			"Integrated_NVG_TI_1_F",
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			"FirstAidKit",
			"Medikit",
			"ToolKit",
			"Zasleh2",
//			"muzzle_snds_H",
			"muzzle_snds_L",
			"muzzle_snds_M",
			"muzzle_snds_B",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"optic_Arco",
			"optic_Hamr",
			"optic_Aco",
			"optic_ACO_grn",
			"optic_Aco_smg",
			"optic_ACO_grn_smg",
			"optic_Holosight",
			"optic_Holosight_smg",
			"optic_SOS",
			"acc_flashlight",
			"acc_flashlight_pistol",
			"acc_pointer_IR",
			"optic_MRCO",
			"muzzle_snds_acp",
			"optic_NVS",
			"optic_Nightstalker",
			"optic_tws",
			"optic_tws_mg",
			"optic_DMS",
			"optic_Yorris",
			"optic_MRD",
			"optic_LRPS",
			"B_UavTerminal",
			"O_UavTerminal",
			"I_UavTerminal",
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"optic_AMS",
			"optic_AMS_khk",
			"optic_AMS_snd",
			"optic_KHS_blk",
			"optic_KHS_hex",
			"optic_KHS_old",
			"optic_KHS_tan",
			"bipod_01_F_snd",
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_02_F_blk",
			"bipod_02_F_tan",
			"bipod_02_F_hex",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F",
			"O_NVGoggles_ghex_F",
			"NVGoggles_tna_F",
			"NVGogglesB_blk_F",
			"NVGogglesB_grn_F",
			"NVGogglesB_gry_F",
			"Laserdesignator_01_khk_F",
			"Laserdesignator_02_ghex_F",
			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_58_ghex_F",
			"muzzle_snds_58_hex_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F",
			"optic_Arco_blk_F",
			"optic_Arco_ghex_F",
			"optic_DMS_ghex_F",
			"optic_Hamr_khk_F",
			"optic_ERCO_blk_F",
			"optic_ERCO_khk_F",
			"optic_ERCO_snd_F",
			"optic_SOS_khk_F",
			"optic_LRPS_tna_F",
			"optic_LRPS_ghex_F",
			"optic_Holosight_blk_F",
			"optic_Holosight_khk_F",
			"optic_Holosight_smg_blk_F",
			"optic_Holosight_smg_khk_F",
			"bipod_01_F_khk"		
		};
		magazines[] = {};
		requiredVersion = 1;
		requiredAddons[] = {};
	};
};
*/
//class CfgWeapons
{
//	class Default;
//	class ItemCore: Default{};

//	class ItemWatch: ItemCore { scope = 0; };
//	class ItemCompass: ItemCore { scope = 0; };
	class ItemGPS: ItemCore { scope = 0; };
	class ItemRadio: ItemCore { scope = 0; };
//	class ItemMap: ItemCore { scope = 0; };
	class MineDetector: ItemCore { scope = 0; };
//	class Binocular: ItemCore { scope = 0; };
	class Rangefinder: ItemCore { scope = 0; };
//	class NVGoggles: ItemCore { scope = 0; };
	class NVGoggles_OPFOR: ItemCore { scope = 0; };
	class NVGoggles_INDEP: ItemCore { scope = 0; };
	class Integrated_NVG_F: ItemCore { scope = 0; };
	class Integrated_NVG_TI_0_F: ItemCore { scope = 0; };
	class Integrated_NVG_TI_1_F: ItemCore { scope = 0; };
	class Laserdesignator: ItemCore { scope = 0; };
	class Laserdesignator_02: ItemCore { scope = 0; };
	class Laserdesignator_03: ItemCore { scope = 0; };
	class FirstAidKit: ItemCore { scope = 0; };
	class Medikit: ItemCore { scope = 0; };
	class ToolKit: ItemCore { scope = 0; };
	class Zasleh2: ItemCore { scope = 0; };
//	class muzzle_snds_H: ItemCore { scope = 0; };	// base class for all the niarms suppressors
	class muzzle_snds_L: ItemCore { scope = 0; };
	class muzzle_snds_M: ItemCore { scope = 0; };
	class muzzle_snds_B: ItemCore { scope = 0; };
	class muzzle_snds_H_MG: ItemCore { scope = 0; };
	class muzzle_snds_H_SW: ItemCore { scope = 0; };
	class optic_Arco: ItemCore { scope = 0; };
	class optic_Hamr: ItemCore { scope = 0; };
	class optic_Aco: ItemCore { scope = 0; };
	class optic_ACO_grn: ItemCore { scope = 0; };
	class optic_Aco_smg: ItemCore { scope = 0; };
	class optic_ACO_grn_smg: ItemCore { scope = 0; };
	class optic_Holosight: ItemCore { scope = 0; };
	class optic_Holosight_smg: ItemCore { scope = 0; };
	class optic_SOS: ItemCore { scope = 0; };
	class acc_flashlight: ItemCore { scope = 0; };
	class acc_flashlight_pistol: ItemCore { scope = 0; };
	class acc_pointer_IR: ItemCore { scope = 0; };
	class optic_MRCO: ItemCore { scope = 0; };
	class muzzle_snds_acp: ItemCore { scope = 0; };
	class optic_NVS: ItemCore { scope = 0; };
	class optic_Nightstalker: ItemCore { scope = 0; };
	class optic_tws: ItemCore { scope = 0; };
	class optic_tws_mg: ItemCore { scope = 0; };
	class optic_DMS: ItemCore { scope = 0; };
	class optic_Yorris: ItemCore { scope = 0; };
	class optic_MRD: ItemCore { scope = 0; };
	class optic_LRPS: ItemCore { scope = 0; };
	class B_UavTerminal: ItemCore { scope = 0; };
	class O_UavTerminal: ItemCore { scope = 0; };
	class I_UavTerminal: ItemCore { scope = 0; };
	class muzzle_snds_338_black: ItemCore { scope = 0; };
	class muzzle_snds_338_green: ItemCore { scope = 0; };
	class muzzle_snds_338_sand: ItemCore { scope = 0; };
	class muzzle_snds_93mmg: ItemCore { scope = 0; };
	class muzzle_snds_93mmg_tan: ItemCore { scope = 0; };
	class optic_AMS: ItemCore { scope = 0; };
	class optic_AMS_khk: ItemCore { scope = 0; };
	class optic_AMS_snd: ItemCore { scope = 0; };
	class optic_KHS_blk: ItemCore { scope = 0; };
	class optic_KHS_hex: ItemCore { scope = 0; };
	class optic_KHS_old: ItemCore { scope = 0; };
	class optic_KHS_tan: ItemCore { scope = 0; };
	class bipod_01_F_snd: ItemCore { scope = 0; };
	class bipod_01_F_blk: ItemCore { scope = 0; };
	class bipod_01_F_mtp: ItemCore { scope = 0; };
	class bipod_02_F_blk: ItemCore { scope = 0; };
	class bipod_02_F_tan: ItemCore { scope = 0; };
	class bipod_02_F_hex: ItemCore { scope = 0; };
	class bipod_03_F_blk: ItemCore { scope = 0; };
	class bipod_03_F_oli: ItemCore { scope = 0; };
	class O_NVGoggles_hex_F: ItemCore { scope = 0; };
	class O_NVGoggles_urb_F: ItemCore { scope = 0; };
	class O_NVGoggles_ghex_F: ItemCore { scope = 0; };
	class NVGoggles_tna_F: ItemCore { scope = 0; };
	class NVGogglesB_blk_F: ItemCore { scope = 0; };
	class NVGogglesB_grn_F: ItemCore { scope = 0; };
	class NVGogglesB_gry_F: ItemCore { scope = 0; };
	class Laserdesignator_01_khk_F: ItemCore { scope = 0; };
	class Laserdesignator_02_ghex_F: ItemCore { scope = 0; };
	class muzzle_snds_H_khk_F: ItemCore { scope = 0; };
	class muzzle_snds_H_snd_F: ItemCore { scope = 0; };
	class muzzle_snds_m_khk_F: ItemCore { scope = 0; };
	class muzzle_snds_m_snd_F: ItemCore { scope = 0; };
	class muzzle_snds_58_blk_F: ItemCore { scope = 0; };
	class muzzle_snds_58_wdm_F: ItemCore { scope = 0; };
	class muzzle_snds_58_ghex_F: ItemCore { scope = 0; };
	class muzzle_snds_58_hex_F: ItemCore { scope = 0; };
	class muzzle_snds_B_khk_F: ItemCore { scope = 0; };
	class muzzle_snds_B_snd_F: ItemCore { scope = 0; };
	class muzzle_snds_65_TI_blk_F: ItemCore { scope = 0; };
	class muzzle_snds_65_TI_hex_F: ItemCore { scope = 0; };
	class muzzle_snds_65_TI_ghex_F: ItemCore { scope = 0; };
	class muzzle_snds_H_MG_blk_F: ItemCore { scope = 0; };
	class muzzle_snds_H_MG_khk_F: ItemCore { scope = 0; };
	class optic_Arco_blk_F: ItemCore { scope = 0; };
	class optic_Arco_ghex_F: ItemCore { scope = 0; };
	class optic_DMS_ghex_F: ItemCore { scope = 0; };
	class optic_Hamr_khk_F: ItemCore { scope = 0; };
	class optic_ERCO_blk_F: ItemCore { scope = 0; };
	class optic_ERCO_khk_F: ItemCore { scope = 0; };
	class optic_ERCO_snd_F: ItemCore { scope = 0; };
	class optic_SOS_khk_F: ItemCore { scope = 0; };
	class optic_LRPS_tna_F: ItemCore { scope = 0; };
	class optic_LRPS_ghex_F: ItemCore { scope = 0; };
	class optic_Holosight_blk_F: ItemCore { scope = 0; };
	class optic_Holosight_khk_F: ItemCore { scope = 0; };
	class optic_Holosight_smg_blk_F: ItemCore { scope = 0; };
	class optic_Holosight_smg_khk_F: ItemCore { scope = 0; };
	class bipod_01_F_khk: ItemCore { scope = 0; };
//};