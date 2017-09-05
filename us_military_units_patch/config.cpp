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
	
//		units[] = {"usm_base_w","usm_bdubase_test","usm_soldier_w","usm_soldier_90s_d","usm_soldier_90s_w_h_rm1","usm_soldier_90s_w_h_off","usm_soldier_90s_w_h_nco","usm_soldier_90s_w_h_ftl","usm_soldier_90s_w_h_rto","usm_soldier_90s_w_h_gr","usm_soldier_90s_w_h_ar","usm_soldier_90s_w_h_mg","usm_soldier_90s_w_h_amg","usm_soldier_90s_w_h_mgab","usm_soldier_90s_w_h_medic","usm_soldier_90s_w_h_at4","usm_soldier_90s_w_pilot","usm_soldier_90s_w_h_jav","usm_soldier_90s_w_h_ajav","usm_soldier_90s_w_h_aa","usm_soldier_90s_w_h_crew1","usm_soldier_90s_d_h_rm1","usm_soldier_90s_d_h_off","usm_soldier_90s_d_h_nco","usm_soldier_90s_d_h_ftl","usm_soldier_90s_d_h_rto","usm_soldier_90s_d_h_gr","usm_soldier_90s_d_h_ar","usm_soldier_90s_d_h_mg","usm_soldier_90s_d_h_amg","usm_soldier_90s_d_h_mgab","usm_soldier_90s_d_h_medic","usm_soldier_90s_d_h_at4","usm_soldier_90s_d_pilot","usm_soldier_90s_d_h_jav","usm_soldier_90s_d_h_ajav","usm_soldier_90s_d_h_aa","usm_soldier_90s_d_h_crew1","usm_soldier_90s_w_l_rm1","usm_soldier_90s_w_l_off","usm_soldier_90s_w_l_nco","usm_soldier_90s_w_l_ftl","usm_soldier_90s_w_l_rto","usm_soldier_90s_w_l_gr","usm_soldier_90s_w_l_ar","usm_soldier_90s_w_l_mg","usm_soldier_90s_w_l_amg","usm_soldier_90s_w_l_mgab","usm_soldier_90s_w_l_medic","usm_soldier_90s_w_l_at4","usm_soldier_90s_w_l_jav","usm_soldier_90s_w_l_ajav","usm_soldier_90s_w_l_aa","usm_soldier_90s_w_l_crew1","usm_soldier_90s_d_l_rm1","usm_soldier_90s_d_l_off","usm_soldier_90s_d_l_nco","usm_soldier_90s_d_l_ftl","usm_soldier_90s_d_l_rto","usm_soldier_90s_d_l_gr","usm_soldier_90s_d_l_ar","usm_soldier_90s_d_l_mg","usm_soldier_90s_d_l_amg","usm_soldier_90s_d_l_mgab","usm_soldier_90s_d_l_medic","usm_soldier_90s_d_l_at4","usm_soldier_90s_d_l_jav","usm_soldier_90s_d_l_ajav","usm_soldier_90s_d_l_aa","usm_soldier_90s_d_l_crew1","usm_soldier_80s_d_h_rm1","usm_soldier_80s_d_h_off","usm_soldier_80s_d_h_nco","usm_soldier_80s_d_h_ftl","usm_soldier_80s_d_h_rto","usm_soldier_80s_d_h_gr","usm_soldier_80s_d_h_ar","usm_soldier_80s_d_h_mg","usm_soldier_80s_d_h_amg","usm_soldier_80s_d_h_mgab","usm_soldier_80s_d_h_medic","usm_soldier_80s_d_h_at4","usm_soldier_80s_d_pilot","usm_soldier_80s_d_h_jav","usm_soldier_80s_d_h_ajav","usm_soldier_80s_d_h_aa","usm_soldier_80s_d_h_crew1","usm_soldier_80s_d_l_rm1","usm_soldier_80s_d_l_off","usm_soldier_80s_d_l_nco","usm_soldier_80s_d_l_ftl","usm_soldier_80s_d_l_rto","usm_soldier_80s_d_l_gr","usm_soldier_80s_d_l_ar","usm_soldier_80s_d_l_mg","usm_soldier_80s_d_l_amg","usm_soldier_80s_d_l_mgab","usm_soldier_80s_d_l_medic","usm_soldier_80s_d_l_at4","usm_soldier_80s_d_l_jav","usm_soldier_80s_d_l_ajav","usm_soldier_80s_d_l_aa","usm_soldier_80s_d_l_crew1","usm_ranger_w","usm_ranger_90s_d","usm_ranger_90s_w_h_rm1","usm_ranger_90s_w_h_off","usm_ranger_90s_w_h_nco","usm_ranger_90s_w_h_ftl","usm_ranger_90s_w_h_rto","usm_ranger_90s_w_h_gr","usm_ranger_90s_w_h_ar","usm_ranger_90s_w_h_mg","usm_ranger_90s_w_h_amg","usm_ranger_90s_w_h_mgab","usm_ranger_90s_w_h_medic","usm_ranger_90s_w_h_at4","usm_ranger_90s_d_h_rm1","usm_ranger_90s_d_h_off","usm_ranger_90s_d_h_nco","usm_ranger_90s_d_h_ftl","usm_ranger_90s_d_h_rto","usm_ranger_90s_d_h_gr","usm_ranger_90s_d_h_ar","usm_ranger_90s_d_h_mg","usm_ranger_90s_d_h_amg","usm_ranger_90s_d_h_mgab","usm_ranger_90s_d_h_medic","usm_ranger_90s_d_h_at4","usm_ranger_90s_w_l_rm1","usm_ranger_90s_w_l_off","usm_ranger_90s_w_l_nco","usm_ranger_90s_w_l_ftl","usm_ranger_90s_w_l_rto","usm_ranger_90s_w_l_gr","usm_ranger_90s_w_l_ar","usm_ranger_90s_w_l_mg","usm_ranger_90s_w_l_amg","usm_ranger_90s_w_l_mgab","usm_ranger_90s_w_l_medic","usm_ranger_90s_w_l_at4","usm_ranger_90s_d_l_rm1","usm_ranger_90s_d_l_off","usm_ranger_90s_d_l_nco","usm_ranger_90s_d_l_ftl","usm_ranger_90s_d_l_rto","usm_ranger_90s_d_l_gr","usm_ranger_90s_d_l_ar","usm_ranger_90s_d_l_mg","usm_ranger_90s_d_l_amg","usm_ranger_90s_d_l_mgab","usm_ranger_90s_d_l_medic","usm_ranger_90s_d_l_at4","usm_marine","usm_marine_90s_d","usm_marine_90s_w_h_rm1","usm_marine_90s_w_h_off","usm_marine_90s_w_h_nco","usm_marine_90s_w_h_ftl","usm_marine_90s_w_h_rto","usm_marine_90s_w_h_gr","usm_marine_90s_w_h_ar","usm_marine_90s_w_h_mg","usm_marine_90s_w_h_amg","usm_marine_90s_w_h_mgab","usm_marine_90s_w_h_medic","usm_marine_90s_w_h_at4","usm_marine_90s_w_pilot","usm_marine_90s_w_h_jav","usm_marine_90s_w_h_ajav","usm_marine_90s_w_h_aa","usm_marine_90s_w_h_crew1","usm_marine_90s_d_h_rm1","usm_marine_90s_d_h_off","usm_marine_90s_d_h_nco","usm_marine_90s_d_h_ftl","usm_marine_90s_d_h_rto","usm_marine_90s_d_h_gr","usm_marine_90s_d_h_ar","usm_marine_90s_d_h_mg","usm_marine_90s_d_h_amg","usm_marine_90s_d_h_mgab","usm_marine_90s_d_h_medic","usm_marine_90s_d_h_at4","usm_marine_90s_d_pilot","usm_marine_90s_d_h_jav","usm_marine_90s_d_h_ajav","usm_marine_90s_d_h_aa","usm_marine_90s_d_h_crew1","usm_marine_90s_w_l_rm1","usm_marine_90s_w_l_off","usm_marine_90s_w_l_nco","usm_marine_90s_w_l_ftl","usm_marine_90s_w_l_rto","usm_marine_90s_w_l_gr","usm_marine_90s_w_l_ar","usm_marine_90s_w_l_mg","usm_marine_90s_w_l_amg","usm_marine_90s_w_l_mgab","usm_marine_90s_w_l_medic","usm_marine_90s_w_l_at4","usm_marine_90s_w_l_jav","usm_marine_90s_w_l_ajav","usm_marine_90s_w_l_aa","usm_marine_90s_w_l_crew1","usm_marine_90s_d_l_rm1","usm_marine_90s_d_l_off","usm_marine_90s_d_l_nco","usm_marine_90s_d_l_ftl","usm_marine_90s_d_l_rto","usm_marine_90s_d_l_gr","usm_marine_90s_d_l_ar","usm_marine_90s_d_l_mg","usm_marine_90s_d_l_amg","usm_marine_90s_d_l_mgab","usm_marine_90s_d_l_medic","usm_marine_90s_d_l_at4","usm_marine_90s_d_l_jav","usm_marine_90s_d_l_ajav","usm_marine_90s_d_l_aa","usm_marine_90s_d_l_crew1","usm_sailor_w","usm_airman_w","usm_airman_w_sar_rm","usm_airman_w_sar_tl","usm_airman_w_sar_gr","usm_airman_w_sar_medic","usm_airman_w_sar_ms"};
//		weapons[] = {"usm_bdu_test","usm_bdu_w","usm_bdu_w_m","usm_bdu_dcu","usm_bdu_dcu_m","usm_bdu_d","usm_bdu_d_m","usm_bdu_blk","usm_bdu_odg","usm_bdu_ubn","usm_bdu_cap_wdl","usm_bdu_cap_dcu","usm_bdu_cap_des","usm_bdu_cap_blk","usm_bdu_cap_blu","usm_bdu_cap_gry","usm_bdu_cap_odg","usm_bdu_cap_ubn","usm_bdu_cap_ubntgrstp","usm_bdu_cap_tgrstp","usm_bdu_cap_portliz","usm_bdu_cap_erdl","usm_bdu_boonie_wdl","usm_bdu_boonie_dcu","usm_bdu_boonie_des","usm_bdu_boonie_blk","usm_bdu_boonie_blu","usm_bdu_boonie_gry","usm_bdu_boonie_odg","usm_bdu_boonie_ubn","usm_bdu_boonie_ubntgrstp","usm_bdu_boonie_tgrstp","usm_bdu_boonie_portliz","usm_bdu_boonie_erdl","usm_bdu_8point_wdl","usm_bdu_8point_wdl_m","usm_bdu_8point_dcu","usm_bdu_8point_dcu_m","usm_bdu_8point_des","usm_bdu_8point_des_m","usm_bdu_8point_blk","usm_bdu_8point_blu","usm_bdu_8point_gry","usm_bdu_8point_odg","usm_bdu_8point_ubn","usm_bdu_8point_ubntgrstp","usm_bdu_8point_tgrstp","usm_bdu_8point_portliz","usm_bdu_8point_erdl","usm_helmet_pasgt_w","usm_helmet_pasgt_w_m","usm_helmet_pasgt_g_w","usm_helmet_pasgt_g_w_m","usm_helmet_pasgt_dcu","usm_helmet_pasgt_dcu_m","usm_helmet_pasgt_g_dcu","usm_helmet_pasgt_g_dcu_m","usm_helmet_pasgt_d","usm_helmet_pasgt_d_m","usm_helmet_pasgt_g_d","usm_helmet_pasgt_g_d_m","usm_helmet_cvc","usm_vest_lbe_rm","usm_vest_lbe_rmp","usm_vest_lbe_gr","usm_vest_lbe_mg","usm_vest_lbv_rm","usm_vest_lbv_rmp","usm_vest_lbv_gr","usm_vest_lbv_mg","usm_vest_pasgt","usm_vest_pasgt_lbe_rm","usm_vest_pasgt_lbe_rmp","usm_vest_pasgt_lbe_gr","usm_vest_pasgt_lbe_mg","usm_vest_pasgt_lbv_rm","usm_vest_pasgt_lbv_rmp","usm_vest_pasgt_lbv_gr","usm_vest_pasgt_lbv_mg","usm_vest_pasgtdes","usm_vest_pasgtdes_lbe_rm","usm_vest_pasgtdes_lbe_rmp","usm_vest_pasgtdes_lbe_gr","usm_vest_pasgtdes_lbe_mg","usm_vest_pasgtdes_lbv_rm","usm_vest_pasgtdes_lbv_rmp","usm_vest_pasgtdes_lbv_gr","usm_vest_pasgtdes_lbv_mg","usm_vest_pasgtdcu","usm_vest_pasgtdcu_lbe_rm","usm_vest_pasgtdcu_lbe_rmp","usm_vest_pasgtdcu_lbe_gr","usm_vest_pasgtdcu_lbe_mg","usm_vest_pasgtdcu_lbv_rm","usm_vest_pasgtdcu_lbv_rmp","usm_vest_pasgtdcu_lbv_gr","usm_vest_pasgtdcu_lbv_mg","usm_vest_lbe_rm_m","usm_vest_lbe_rmp_m","usm_vest_lbe_gr_m","usm_vest_lbe_mg_m","usm_vest_lbv_rm_m","usm_vest_lbv_rmp_m","usm_vest_lbv_gr_m","usm_vest_lbv_mg_m","usm_vest_pasgt_lbe_rm_m","usm_vest_pasgt_lbe_rmp_m","usm_vest_pasgt_lbe_gr_m","usm_vest_pasgt_lbe_mg_m","usm_vest_pasgt_lbv_rm_m","usm_vest_pasgt_lbv_rmp_m","usm_vest_pasgt_lbv_gr_m","usm_vest_pasgt_lbv_mg_m","usm_vest_pasgtdes_lbe_rm_m","usm_vest_pasgtdes_lbe_rmp_m","usm_vest_pasgtdes_lbe_gr_m","usm_vest_pasgtdes_lbe_mg_m","usm_vest_pasgtdes_lbv_rm_m","usm_vest_pasgtdes_lbv_rmp_m","usm_vest_pasgtdes_lbv_gr_m","usm_vest_pasgtdes_lbv_mg_m","usm_vest_pasgtdcu_lbe_rm_m","usm_vest_pasgtdcu_lbe_rmp_m","usm_vest_pasgtdcu_lbe_gr_m","usm_vest_pasgtdcu_lbe_mg_m","usm_vest_pasgtdcu_lbv_rm_m","usm_vest_pasgtdcu_lbv_rmp_m","usm_vest_pasgtdcu_lbv_gr_m","usm_vest_pasgtdcu_lbv_mg_m","usm_vest_rba","usm_vest_rba_lbe_rm","usm_vest_rba_lbe_rmp","usm_vest_rba_lbe_gr","usm_vest_rba_lbe_mg","usm_vest_rba_lbv_rm","usm_vest_rba_lbv_rmp","usm_vest_rba_lbv_gr","usm_vest_rba_lbv_mg","usm_vest_safety","usm_gear_earmuffs","usm_helmet_safety","usm_90mphtape","usm_550cord","usm_bugrepellant","usm_lc2canteen_full","usm_climbingrope","usm_dogtags","usm_earplugs","usm_etool","usm_fielddressing","usm_flashlight","usm_footpowder","usm_gigloves","usm_socks","usm_hygienekit","usm_isomat","usm_militaryID","usm_mre","usm_notepadpen","usm_playboy","usm_poncho","usm_poncholiner","usm_rifle_cleaning_kit","usm_sleepingbag","usm_bayonet_m7","usm_bayonet_m9"};

		
		
// my detailed classes		
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
class CfgWeapons {
	class Default;
	class ItemCore: Default{};
	class UniformItem;
	class HeadgearItem;
	class VestItem;
	class Uniform_Base;
	
//		#include "CfgProtection.hpp"
		#include "CfgVests.hpp"
		#include "CfgItems.hpp"
	};
};

//class CfgMagazines
class CfgVehicles {
		#include "CfgBackpacks.hpp"
		#include "CfgSupplies.hpp"
};