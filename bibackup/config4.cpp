// this file extracted from bohemia files
//			class PointerSlot: PointerSlot{};

class CfgPatches 
{
			class eurof_BI_equipment_patch
			{
						requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Weapons_F_Acc", "A3_Sounds_F_Mark" };
						units[] = 
						{
/*							// line below is from cfgvests
							"Headgear_H_Beret_Colonel", "Headgear_H_Cap_press", "Headgear_H_Booniehat_oli", "Headgear_H_Bandanna_surfer_blk", "Headgear_H_Bandanna_surfer_grn", "Headgear_H_Bandanna_blu", "Headgear_H_Bandanna_sand", "Headgear_H_Watchcap_cbr", "Headgear_H_Cap_police", "Headgear_H_Cap_surfer", "Headgear_H_Cap_usblack", "Item_U_C_Scientist", "Item_U_C_Journalist", "Item_U_IG_Guerrilla_6_1", "Item_U_BG_Guerrilla_6_1", "Item_U_OG_Guerrilla_6_1", "Item_U_IG_Guerilla1_1", "Item_U_BG_Guerilla1_1", "Item_U_OG_Guerilla1_1", "Item_U_IG_Guerilla2_3", "Item_U_BG_Guerilla2_3", "Item_U_OG_Guerilla2_3", "Item_U_IG_Guerilla3_1", "Item_U_BG_Guerilla3_1", "Item_U_OG_Guerilla3_1", "Item_U_IG_Guerilla2_1", "Item_U_BG_Guerilla2_1", "Item_U_OG_Guerilla2_1", "Item_U_IG_Guerilla2_2", "Item_U_BG_Guerilla2_2", "Item_U_OG_Guerilla2_2", "Item_U_IG_leader", "Item_U_BG_leader", "Item_U_OG_leader", "Item_U_BG_Guerilla3_2", "Vest_V_Press_F", "", "VestItem", "V_Rangemaster_belt", "V_BandollierB_khk", "V_BandollierB_cbr", "V_BandollierB_rgr", "V_BandollierB_blk", "V_BandollierB_oli", "V_PlateCarrier1_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier2_blk", "V_PlateCarrier3_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierGL_blk", "V_PlateCarrierGL_mtp", "V_PlateCarrier1_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_mtp", "V_Chestrig_khk", "V_Chestrig_rgr", "V_Chestrig_blk", "V_Chestrig_oli", "V_TacVest_khk", "V_TacVest_brn", "V_TacVest_oli", "V_TacVest_blk", "V_TacVest_camo", "V_TacVest_blk_POLICE", "V_TacVestIR_blk", "V_TacVestCamo_khk", "V_HarnessO_brn", "V_HarnessOGL_brn", "V_HarnessO_gry", "V_HarnessOGL_gry", "V_HarnessOSpec_brn", "V_HarnessOSpec_gry", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierIAGL_oli", "V_RebreatherB", "V_RebreatherIR", "V_RebreatherIA", "V_PlateCarrier_Kerry", "V_PlateCarrierL_CTRG", "V_PlateCarrierH_CTRG", "V_I_G_resistanceLeader_F", "V_Press_F", "HeadgearItem", "HelmetBase", "H_HelmetB", "H_HelmetB_camo", "H_HelmetB_paint", "H_HelmetB_light", "H_Booniehat_khk", "H_Booniehat_oli", "H_Booniehat_indp", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_Booniehat_tan", "H_Booniehat_dirty", "H_Booniehat_dgtl", "H_Booniehat_khk_hs", "H_HelmetB_plain_mcamo", "H_HelmetB_plain_blk", "H_HelmetSpecB", "H_HelmetSpecB_paint1", "H_HelmetSpecB_paint2", "H_HelmetSpecB_blk", "H_HelmetSpecB_snakeskin", "H_HelmetSpecB_sand", "H_HelmetIA", "H_HelmetIA_net", "H_HelmetIA_camo", "H_Helmet_Kerry", "H_HelmetB_grass", "H_HelmetB_snakeskin", "H_HelmetB_desert", "H_HelmetB_black", "H_HelmetB_sand", "H_Cap_red", "H_Cap_blu", "H_Cap_oli", "H_Cap_headphones", "H_Cap_tan", "H_Cap_blk", "H_Cap_blk_CMMG", "H_Cap_brn_SPECOPS", "H_Cap_tan_specops_US", "H_Cap_khaki_specops_UK", "H_Cap_grn", "H_Cap_grn_BI", "H_Cap_blk_Raven", "H_Cap_blk_ION", "H_Cap_oli_hs", "H_Cap_press", "H_Cap_usblack", "H_Cap_surfer", "H_Cap_police", "H_HelmetCrew_B", "H_HelmetCrew_O", "H_HelmetCrew_I", "H_PilotHelmetFighter_B", "H_PilotHelmetFighter_O", "H_PilotHelmetFighter_I", "H_PilotHelmetHeli_B", "H_PilotHelmetHeli_O", "H_PilotHelmetHeli_I", "H_CrewHelmetHeli_B", "H_CrewHelmetHeli_O", "H_CrewHelmetHeli_I", "H_HelmetO_ocamo", "H_HelmetLeaderO_ocamo", "H_MilCap_ocamo", "H_MilCap_mcamo", "H_MilCap_oucamo", "H_MilCap_rucamo", "H_MilCap_gry", "H_MilCap_dgtl", "H_MilCap_blue", "H_HelmetB_light_grass", "H_HelmetB_light_snakeskin", "H_HelmetB_light_desert", "H_HelmetB_light_black", "H_HelmetB_light_sand", "H_BandMask_blk", "H_BandMask_khk", "H_BandMask_reaper", "H_BandMask_demon", "H_HelmetO_oucamo", "H_HelmetLeaderO_oucamo", "H_HelmetSpecO_ocamo", "H_HelmetSpecO_blk", "H_Bandanna_surfer", "H_Bandanna_khk", "H_Bandanna_khk_hs", "H_Bandanna_cbr", "H_Bandanna_sgg", "H_Bandanna_sand", "H_Bandanna_surfer_blk", "H_Bandanna_surfer_grn", "H_Bandanna_gry", "H_Bandanna_blu", "H_Bandanna_camo", "H_Bandanna_mcamo", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "H_Beret_blk", "H_Beret_blk_POLICE", "H_Beret_red", "H_Beret_grn", "H_Beret_grn_SF", "H_Beret_brn_SF", "H_Beret_ocamo", "H_Beret_02", "H_Beret_Colonel", "H_Watchcap_blk", "H_Watchcap_cbr", "H_Watchcap_khk", "H_Watchcap_camo", "H_Watchcap_sgg", "H_TurbanO_blk", "H_StrawHat", "H_StrawHat_dark", "H_Hat_blue", "H_Hat_brown", "H_Hat_camo", "H_Hat_grey", "H_Hat_checker", "H_Hat_tan", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_orange_F", "H_Cap_marshal",
							"V_DeckCrew_blue_F","V_DeckCrew_green_F","V_DeckCrew_red_F","V_DeckCrew_violet_F", "V_DeckCrew_white_F", "V_DeckCrew_yellow_F", "V_DeckCrew_brown_F",
							
							// lines below is from cfgbackpacks and it works !
							"B_Assault_Diver", "B_AssaultPack_blk","B_AssaultPack_blk_DiverExp","B_AssaultPack_cbr","B_AssaultPack_dgtl","B_AssaultPack_Kerry","B_AssaultPack_khk","B_AssaultPack_mcamo","B_AssaultPack_mcamo_AA","B_AssaultPack_mcamo_AAR","B_AssaultPack_mcamo_Ammo","B_AssaultPack_mcamo_AT","B_AssaultPack_ocamo","B_AssaultPack_rgr","B_AssaultPack_rgr_LAT","B_AssaultPack_rgr_Medic","B_AssaultPack_rgr_ReconExp","B_AssaultPack_rgr_ReconLAT","B_AssaultPack_rgr_ReconMedic","B_AssaultPack_rgr_Repair","B_AssaultPack_sgg","B_AssaultPackG","B_Bergen_blk","B_Bergen_mcamo","B_Bergen_rgr","B_Bergen_sgg","B_BergenC_blu","B_BergenC_grn","B_BergenC_red","B_BergenG","B_BergenG_TEST_B_Soldier_overloaded","B_Carryall_cbr","B_Carryall_cbr_AAT","B_Carryall_khk","B_Carryall_mcamo","B_Carryall_mcamo_AAA","B_Carryall_mcamo_AAT","B_Carryall_ocamo","B_Carryall_ocamo_AAA","B_Carryall_ocamo_AAR","B_Carryall_ocamo_Eng","B_Carryall_ocamo_Exp","B_Carryall_oli","B_Carryall_oucamo","B_Carryall_oucamo_AAA","B_Carryall_oucamo_AAR","B_Carryall_oucamo_AAT","B_Carryall_oucamo_Eng","B_Carryall_oucamo_Exp","B_FieldPack_blk","B_FieldPack_blk_DiverExp","B_FieldPack_cbr","B_FieldPack_cbr_AA","B_FieldPack_cbr_AAA","B_FieldPack_cbr_AAT","B_FieldPack_cbr_Ammo","B_FieldPack_cbr_AT","B_FieldPack_cbr_LAT","B_FieldPack_cbr_Medic","B_FieldPack_cbr_Repair","B_FieldPack_cbr_RPG_AT","B_FieldPack_khk","B_FieldPack_ocamo","B_FieldPack_ocamo_AA","B_FieldPack_ocamo_AAR","B_FieldPack_ocamo_Medic","B_FieldPack_ocamo_ReconExp","B_FieldPack_ocamo_ReconMedic","B_FieldPack_oli","B_FieldPack_oucamo","B_FieldPack_oucamo_AA","B_FieldPack_oucamo_AAR","B_FieldPack_oucamo_Ammo","B_FieldPack_oucamo_AT","B_FieldPack_oucamo_LAT","B_FieldPack_oucamo_Medic","B_FieldPack_oucamo_Repair","B_HuntingBackpack","B_Kitbag_cbr","B_Kitbag_mcamo","B_Kitbag_mcamo_Eng","B_Kitbag_rgr","B_Kitbag_rgr_AAR","B_Kitbag_rgr_Exp","B_Kitbag_sgg","B_OutdoorPack_blk","B_OutdoorPack_blu","B_OutdoorPack_tan","B_Parachute","B_supplyCrate_F","B_TacticalPack_blk","B_TacticalPack_mcamo","B_TacticalPack_ocamo","B_TacticalPack_oli","B_TacticalPack_oli_AAR","B_TacticalPack_rgr","Box_Ammo_F","Box_East_Ammo_F","Box_East_AmmoOrd_F","Box_East_AmmoVeh_F","Box_East_Grenades_F","Box_East_Support_F","Box_East_Wps_F","Box_East_WpsLaunch_F","Box_East_WpsSpecial_F","Box_IND_Ammo_F","Box_IND_AmmoOrd_F","Box_IND_AmmoVeh_F","Box_IND_Grenades_F","Box_IND_Support_F","Box_IND_Wps_F","Box_IND_WpsLaunch_F","Box_IND_WpsSpecial_F","Box_NATO_Ammo_F","Box_NATO_AmmoOrd_F","Box_NATO_AmmoVeh_F","Box_NATO_Grenades_F","Box_NATO_Support_F","Box_NATO_Wps_F","Box_NATO_WpsLaunch_F","Box_NATO_WpsSpecial_F","Box_Wps_F","C_Bergen_blu","C_Bergen_grn","C_Bergen_red","C_supplyCrate_F","G_AssaultPack","G_Bergen","G_Carryall_Ammo","G_Carryall_Exp","G_FieldPack_LAT","G_FieldPack_Medic","G_TacticalPack_Eng","I_Assault_Diver","I_Carryall_oli_AAA","I_Carryall_oli_AAT","I_Carryall_oli_Eng","I_Carryall_oli_Exp","I_Fieldpack_oli_AA","I_Fieldpack_oli_AAR","I_Fieldpack_oli_Ammo","I_Fieldpack_oli_AT","I_Fieldpack_oli_LAT","I_Fieldpack_oli_Medic","I_Fieldpack_oli_Repair","I_supplyCrate_F","IG_supplyCrate_F","Land_Box_AmmoOld_F","O_Assault_Diver","O_supplyCrate_F","ReammoBox_F","WeaponHolderSimulated","WeaponHolderSimulated_Scripted",
							"LandVehicle", "StaticWeapon", "StaticMGWeapon", "StaticATWeapon", "StaticAAWeapon", "StaticCannon", "StaticGrenadeLauncher", "StaticMortar", "StaticSEARCHLight", "B_HMG_01_F", "O_HMG_01_F", "I_HMG_01_F", "B_HMG_01_high_F", "O_HMG_01_high_F", "I_HMG_01_high_F", "B_HMG_01_A_F", "O_HMG_01_A_F", "I_HMG_01_A_F", "GMG_TriPod", "B_GMG_01_F", "O_GMG_01_F", "I_GMG_01_F", "B_GMG_01_high_F", "O_GMG_01_high_F", "I_GMG_01_high_F", "B_GMG_01_A_F", "O_GMG_01_A_F", "I_GMG_01_A_F", "B_HMG_01_support_F", "O_HMG_01_support_F", "I_HMG_01_support_F", "B_HMG_01_support_high_F", "O_HMG_01_support_high_F", "I_HMG_01_support_high_F", "B_HMG_01_weapon_F", "O_HMG_01_weapon_F", "I_HMG_01_weapon_F", "B_HMG_01_A_weapon_F", "O_HMG_01_A_weapon_F", "I_HMG_01_A_weapon_F", "B_GMG_01_weapon_F", "O_GMG_01_weapon_F", "I_GMG_01_weapon_F", "B_GMG_01_A_weapon_F", "O_GMG_01_A_weapon_F", "I_GMG_01_A_weapon_F", "B_HMG_01_high_weapon_F", "O_HMG_01_high_weapon_F", "I_HMG_01_high_weapon_F", "B_GMG_01_high_weapon_F", "O_GMG_01_high_weapon_F", "I_GMG_01_high_weapon_F",
							"B_Bergen_mcamo_F", "B_Bergen_dgtl_F", "B_Bergen_hex_F", "B_Bergen_tna_F", "B_AssaultPack_tna_F", "B_Carryall_ghex_F", "B_FieldPack_ghex_F", "B_ViperHarness_blk_F", "B_ViperHarness_ghex_F", "B_ViperHarness_hex_F", "B_ViperHarness_khk_F", "B_ViperHarness_oli_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_oli_F", "B_Carryall_oli", "B_Carryall_oli_BTAmmo_F", "B_Carryall_oli_BTAAA_F", "B_Carryall_oli_BTAAT_F", "B_AssaultPack_tna_BTMedic_F", "B_Kitbag_rgr", "B_Kitbag_rgr_BTEng_F", "B_Kitbag_rgr_BTExp_F", "B_Kitbag_rgr_BTAA_F", "B_Kitbag_rgr_BTAT_F", "B_AssaultPack_tna_BTRepair_F", "B_AssaultPack_rgr", "B_AssaultPack_rgr_BTLAT_F", "B_Kitbag_rgr_BTReconExp_F", "B_AssaultPack_rgr_BTReconMedic", "I_HMG_01_support_F", "B_HMG_01_support_grn_F", "I_Mortar_01_support_F", "B_Mortar_01_support_grn_F", "I_GMG_01_weapon_F", "B_GMG_01_Weapon_grn_F", "I_HMG_01_weapon_F", "B_HMG_01_Weapon_grn_F", "I_Mortar_01_weapon_F", "B_Mortar_01_Weapon_grn_F", "B_Kitbag_rgr_CTRGExp_F", "B_AssaultPack_rgr_CTRGMedic_F", "B_AssaultPack_rgr_CTRGLAT_F", "B_Carryall_ghex_OTAmmo_F", "B_Carryall_ghex_OTAAR_AAR_F", "B_Carryall_ghex_OTAAA_F", "B_Carryall_ghex_OTAAT_F", "B_FieldPack_ghex_OTMedic_F", "B_Carryall_ghex_OTEng_F", "B_Carryall_ghex_OTExp_F", "B_FieldPack_ghex_OTAA_F", "B_FieldPack_ghex_OTAT_F", "B_FieldPack_ghex_OTRepair_F", "B_FieldPack_ghex_OTLAT_F", "B_Carryall_ghex_OTReconExp_F", "B_FieldPack_ghex_OTReconMedic_F", "B_FieldPack_ghex_OTRPG_AT_F", "B_ViperHarness_hex_TL_F", "B_ViperHarness_ghex_TL_F", "B_ViperHarness_hex_Exp_F", "B_ViperHarness_ghex_Exp_F", "B_ViperHarness_hex_Medic_F", "B_ViperHarness_ghex_Medic_F", "B_ViperHarness_hex_M_F", "B_ViperHarness_ghex_M_F", "B_ViperHarness_hex_LAT_F", "B_ViperHarness_ghex_LAT_F", "B_ViperHarness_hex_JTAC_F", "B_ViperHarness_ghex_JTAC_F", "B_Kitbag_rgr_Para_3_F", "B_Kitbag_cbr", "B_Kitbag_cbr_Para_5_F", "B_Kitbag_rgr_Para_8_F", "B_FieldPack_cbr", "B_FieldPack_cb_Bandit_3_F", "B_Kitbag_cbr_Bandit_2_F", "B_FieldPack_khk", "B_FieldPack_khk_Bandit_1_F", "B_FieldPack_blk", "B_FieldPack_blk_Bandit_8_F", "B_UAV_01_backpack_F", "O_UAV_01_backpack_F", "I_UAV_01_backpack_F", "B_AT_01_weapon_F", "O_AT_01_weapon_F", "I_AT_01_weapon_F"
							
*/
						};
						weapons[] = 
						{		
						
/*						
							// line below is from cfguniforms and it works !
							"Headgear_H_Beret_Colonel", "Headgear_H_Cap_press", "Headgear_H_Booniehat_oli", "Headgear_H_Bandanna_surfer_blk", "Headgear_H_Bandanna_surfer_grn", "Headgear_H_Bandanna_blu", "Headgear_H_Bandanna_sand", "Headgear_H_Watchcap_cbr", "Headgear_H_Cap_police", "Headgear_H_Cap_surfer", "Headgear_H_Cap_usblack", "Item_U_C_Scientist", "Item_U_C_Journalist", "Item_U_IG_Guerrilla_6_1", "Item_U_BG_Guerrilla_6_1", "Item_U_OG_Guerrilla_6_1", "Item_U_IG_Guerilla1_1", "Item_U_BG_Guerilla1_1", "Item_U_OG_Guerilla1_1", "Item_U_IG_Guerilla2_3", "Item_U_BG_Guerilla2_3", "Item_U_OG_Guerilla2_3", "Item_U_IG_Guerilla3_1", "Item_U_BG_Guerilla3_1", "Item_U_OG_Guerilla3_1", "Item_U_IG_Guerilla2_1", "Item_U_BG_Guerilla2_1", "Item_U_OG_Guerilla2_1", "Item_U_IG_Guerilla2_2", "Item_U_BG_Guerilla2_2", "Item_U_OG_Guerilla2_2", "Item_U_IG_leader", "Item_U_BG_leader", "Item_U_OG_leader", "Item_U_BG_Guerilla3_2", "Vest_V_Press_F", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_vest", "U_B_GhillieSuit", "U_B_HeliPilotCoveralls", "U_B_Wetsuit", "U_O_CombatUniform_ocamo", "U_O_GhillieSuit", "U_O_PilotCoveralls", "U_O_Wetsuit", "U_C_Poloshirt_blue", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_stripped", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_salmon", "U_C_Commoner1_1", "U_C_Commoner1_2", "U_C_Commoner1_3", "U_Rangemaster", "U_NikosBody", "U_OrestesBody", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_wdl", "U_B_CombatUniform_wdl_tshirt", "U_B_CombatUniform_wdl_vest", "U_B_CombatUniform_sgg", "U_B_CombatUniform_sgg_tshirt", "U_B_CombatUniform_sgg_vest", "U_B_SpecopsUniform_sgg", "U_B_PilotCoveralls", "U_O_CombatUniform_oucamo", "U_O_SpecopsUniform_ocamo", "U_O_SpecopsUniform_blk", "U_O_OfficerUniform_ocamo", "U_I_CombatUniform", "U_I_CombatUniform_tshirt", "U_I_CombatUniform_shortsleeve", "U_I_pilotCoveralls", "U_I_HeliPilotCoveralls", "U_I_GhillieSuit", "U_I_OfficerUniform", "U_I_Wetsuit", "U_Competitor", "U_MillerBody", "U_KerryBody", "U_AttisBody", "U_AntigonaBody", "U_IG_Menelaos", "U_C_Novak", "U_OI_Scientist", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_IG_Guerilla3_2", "U_IG_leader", "U_BG_Guerilla1_1", "U_BG_Guerilla2_1", "U_BG_Guerilla2_2", "U_BG_Guerilla2_3", "U_BG_Guerilla3_1", "U_BG_Guerilla3_2", "U_BG_leader", "U_OG_Guerilla1_1", "U_OG_Guerilla2_1", "U_OG_Guerilla2_2", "U_OG_Guerilla2_3", "U_OG_Guerilla3_1", "U_OG_Guerilla3_2", "U_OG_leader", "U_C_Poor_1", "U_C_Poor_2", "U_C_Scavenger_1", "U_C_Scavenger_2", "U_C_Farmer", "U_C_Fisherman", "U_C_WorkerOveralls", "U_C_FishermanOveralls", "U_C_WorkerCoveralls", "U_C_HunterBody_grn", "U_C_HunterBody_brn", "U_C_Commoner2_1", "U_C_Commoner2_2", "U_C_Commoner2_3", "U_C_PriestBody", "U_C_Poor_shorts_1", "U_C_Poor_shorts_2", "U_C_Commoner_shorts", "U_C_ShirtSurfer_shorts", "U_C_TeeSurfer_shorts_1", "U_C_TeeSurfer_shorts_2", "U_B_CTRG_1", "U_B_CTRG_2", "U_B_CTRG_3", "U_B_survival_uniform", "U_I_G_Story_Protagonist_F", "U_I_G_resistanceLeader_F", "U_C_Journalist", "U_C_Scientist", "U_NikosAgedBody", "U_B_Protagonist_VR", "U_O_Protagonist_VR", "U_I_Protagonist_VR", "U_IG_Guerrilla_6_1", "U_BG_Guerrilla_6_1", "U_OG_Guerrilla_6_1", "U_B_Soldier_VR", "U_O_Soldier_VR", "U_I_Soldier_VR", "U_C_Soldier_VR", "U_C_Driver_1", "U_C_Driver_2", "U_C_Driver_3", "U_C_Driver_4", "U_Marshal", "U_C_Driver_1_black", "U_C_Driver_1_blue", "U_C_Driver_1_green", "U_C_Driver_1_red", "U_C_Driver_1_yellow", "U_C_Driver_1_orange", "U_B_FullGhillie_lsh", "U_B_FullGhillie_sard", "U_B_FullGhillie_ard", "U_O_FullGhillie_lsh", "U_O_FullGhillie_sard", "U_O_FullGhillie_ard", "U_I_FullGhillie_lsh", "U_I_FullGhillie_sard", "U_I_FullGhillie_ard", "VestItem", "Vest_Camo_Base", "Vest_NoCamo_Base", "V_Rangemaster_belt", "V_BandollierB_khk", "V_BandollierB_cbr", "V_BandollierB_rgr", "V_BandollierB_blk", "V_BandollierB_oli", "V_PlateCarrier1_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier2_blk", "V_PlateCarrier3_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierGL_blk", "V_PlateCarrierGL_mtp", "V_PlateCarrier1_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_mtp", "V_Chestrig_khk", "V_Chestrig_rgr", "V_Chestrig_blk", "V_Chestrig_oli", "V_TacVest_khk", "V_TacVest_brn", "V_TacVest_oli", "V_TacVest_blk", "V_TacVest_camo", "V_TacVest_blk_POLICE", "V_TacVestIR_blk", "V_TacVestCamo_khk", "V_HarnessO_brn", "V_HarnessOGL_brn", "V_HarnessO_gry", "V_HarnessOGL_gry", "V_HarnessOSpec_brn", "V_HarnessOSpec_gry", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierIAGL_oli", "V_RebreatherB", "V_RebreatherIR", "V_RebreatherIA", "V_PlateCarrier_Kerry", "V_PlateCarrierL_CTRG", "V_PlateCarrierH_CTRG", "V_I_G_resistanceLeader_F", "V_Press_F", "HeadgearItem", "HelmetBase", "H_HelmetB", "H_HelmetB_camo", "H_HelmetB_paint", "H_HelmetB_light", "H_Booniehat_khk", "H_Booniehat_oli", "H_Booniehat_indp", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_Booniehat_tan", "H_Booniehat_dirty", "H_Booniehat_dgtl", "H_Booniehat_khk_hs", "H_HelmetB_plain_mcamo", "H_HelmetB_plain_blk", "H_HelmetSpecB", "H_HelmetSpecB_paint1", "H_HelmetSpecB_paint2", "H_HelmetSpecB_blk", "H_HelmetSpecB_snakeskin", "H_HelmetSpecB_sand", "H_HelmetIA", "H_HelmetIA_net", "H_HelmetIA_camo", "H_Helmet_Kerry", "H_HelmetB_grass", "H_HelmetB_snakeskin", "H_HelmetB_desert", "H_HelmetB_black", "H_HelmetB_sand", "H_Cap_red", "H_Cap_blu", "H_Cap_oli", "H_Cap_headphones", "H_Cap_tan", "H_Cap_blk", "H_Cap_blk_CMMG", "H_Cap_brn_SPECOPS", "H_Cap_tan_specops_US", "H_Cap_khaki_specops_UK", "H_Cap_grn", "H_Cap_grn_BI", "H_Cap_blk_Raven", "H_Cap_blk_ION", "H_Cap_oli_hs", "H_Cap_press", "H_Cap_usblack", "H_Cap_surfer", "H_Cap_police", "H_HelmetCrew_B", "H_HelmetCrew_O", "H_HelmetCrew_I", "H_PilotHelmetFighter_B", "H_PilotHelmetFighter_O", "H_PilotHelmetFighter_I", "H_PilotHelmetHeli_B", "H_PilotHelmetHeli_O", "H_PilotHelmetHeli_I", "H_CrewHelmetHeli_B", "H_CrewHelmetHeli_O", "H_CrewHelmetHeli_I", "H_HelmetO_ocamo", "H_HelmetLeaderO_ocamo", "H_MilCap_ocamo", "H_MilCap_mcamo", "H_MilCap_oucamo", "H_MilCap_rucamo", "H_MilCap_gry", "H_MilCap_dgtl", "H_MilCap_blue", "H_HelmetB_light_grass", "H_HelmetB_light_snakeskin", "H_HelmetB_light_desert", "H_HelmetB_light_black", "H_HelmetB_light_sand", "H_BandMask_blk", "H_BandMask_khk", "H_BandMask_reaper", "H_BandMask_demon", "H_HelmetO_oucamo", "H_HelmetLeaderO_oucamo", "H_HelmetSpecO_ocamo", "H_HelmetSpecO_blk", "H_Bandanna_surfer", "H_Bandanna_khk", "H_Bandanna_khk_hs", "H_Bandanna_cbr", "H_Bandanna_sgg", "H_Bandanna_sand", "H_Bandanna_surfer_blk", "H_Bandanna_surfer_grn", "H_Bandanna_gry", "H_Bandanna_blu", "H_Bandanna_camo", "H_Bandanna_mcamo", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "H_Beret_blk", "H_Beret_blk_POLICE", "H_Beret_red", "H_Beret_grn", "H_Beret_grn_SF", "H_Beret_brn_SF", "H_Beret_ocamo", "H_Beret_02", "H_Beret_Colonel", "H_Watchcap_blk", "H_Watchcap_cbr", "H_Watchcap_khk", "H_Watchcap_camo", "H_Watchcap_sgg", "H_TurbanO_blk", "H_StrawHat", "H_StrawHat_dark", "H_Hat_blue", "H_Hat_brown", "H_Hat_camo", "H_Hat_grey", "H_Hat_checker", "H_Hat_tan", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_orange_F", "H_Cap_marshal",
							"U_B_T_Soldier_F", "U_B_T_Soldier_AR_F", "U_B_T_Soldier_SL_F", "U_B_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_3_F", "U_B_GEN_Soldier_F", "U_B_GEN_Commander_F", "U_O_T_Soldier_F", "U_O_T_Officer_F", "U_O_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_O_V_Soldier_Viper_F", "U_O_V_Soldier_Viper_hex_F", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_5_F", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_3_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Camo_F", "U_C_man_sport_1_F", "U_C_man_sport_2_F", "U_C_man_sport_3_F", "U_C_Man_casual_1_F", "U_C_Man_casual_2_F", "U_C_Man_casual_3_F", "U_C_Man_casual_4_F", "U_C_Man_casual_5_F", "U_C_Man_casual_6_F", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_urb_3_F",

							// line below is from cfgweapons
//							"autocannon_30mm","autocannon_30mm_CTWS","autocannon_35mm","autocannon_40mm_CTWS","autocannon_Base_F","BikeHorn","Binocular","Bomb_03_Plane_CAS_02_F","Bomb_04_Plane_CAS_01_F","cannon_105mm","cannon_120mm","cannon_120mm_long","cannon_125mm","Cannon_30mm_Plane_CAS_02_F","CarHorn","CMFlareLauncher","CMFlareLauncher_Singles","CMFlareLauncher_Triples","FakeHorn","FlareLauncher","gatling_20mm","gatling_25mm","gatling_30mm","Gatling_30mm_Plane_CAS_01_F","GBU12BombLauncher","GBU12BombLauncher_Plane_Fighter_03_F","GMG_20mm","GMG_40mm","HandGunBase","HMG_01","HMG_127","HMG_127_APC","HMG_127_MBT","HMG_127_UGV","HMG_M2","HMG_NSVT","HMG_static","Integrated_NVG_F","Integrated_NVG_TI_0_F","Integrated_NVG_TI_1_F","ItemCompass","ItemGPS","ItemMap", "ItemWatch","Laserdesignator","Laserdesignator_mounted","Laserdesignator_pilotCamera","LMG_65mm_body","LMG_coax","LMG_M200","LMG_M200_body","LMG_Minigun","LMG_Minigun2","LMG_Minigun_heli","LMG_Minigun_Transport","LMG_Minigun_Transport2","LMG_RCWS","M134_minigun","M2","MineDetector","MiniCarHorn","Missile_AA_03_Plane_CAS_02_F","Missile_AA_04_Plane_CAS_01_F","Missile_AGM_01_Plane_CAS_02_F","Missile_AGM_02_Plane_CAS_01_F","MissileLauncher","missiles_ASRAAM","missiles_DAGR","missiles_DAR","missiles_SCALPEL","missiles_titan","missiles_titan_static","missiles_Zephyr","Mk82BombLauncher","mortar_155mm_AMOS","mortar_82mm","NVGoggles","NVGoggles_INDEP","NVGoggles_OPFOR","Put","Rangefinder","Rifle","Rocket_03_AP_Plane_CAS_02_F","Rocket_03_HE_Plane_CAS_02_F","Rocket_04_AP_Plane_CAS_01_F","Rocket_04_HE_Plane_CAS_01_F","RocketPods","rockets_230mm_GAT","rockets_Skyfire","SEARCHLIGHT","SmokeLauncher","SportCarHorn","Throw","TruckHorn","TruckHorn2","TruckHorn3","Twin_Cannon_20mm"
							"arfile_mx_gl_f","arifle_MX_F", "srifle_DMR_02_camo_F", "srifle_DMR_03_woodland_F", "Weapon_arifle_MX_khk_F", "arifle_MX_Base_F", "arifle_Katiba_Base_F", "LMG_Mk200_F", "arifle_MX_SW_F", "mk20_base_F", "Tavor_base_F", "DMR_03_base_F", "DMR_06_base_F", "EBR_base_F", "DMR_01_base_F", "arifle_MX_Black_F", "arifle_MX_khk_F", "arifle_MX_khk_ACO_Pointer_F", "arifle_MX_khk_Holo_Pointer_F", "arifle_MX_khk_Hamr_Pointer_F", "arifle_MX_khk_Hamr_Pointer_Snds_F", "arifle_MX_khk_Pointer_F", "arifle_MX_khk_ACO_Pointer_Snds_F", "arifle_MX_GL_Black_F", "arifle_MX_GL_khk_F", "arifle_MX_GL_khk_ACO_F", "arifle_MX_GL_khk_Hamr_Pointer_F", "arifle_MX_GL_khk_Holo_Pointer_Snds_F", "arifle_MX_SW_Black_F", "arifle_MX_SW_khk_F", "arifle_MX_SW_khk_Pointer_F", "arifle_MXC_Black_F", "arifle_MXC_khk_F", "arifle_MXC_khk_Holo_Pointer_F", "arifle_MXC_khk_ACO_F", "arifle_MXC_khk_ACO_Pointer_Snds_F", "arifle_MXM_Black_F", "arifle_MXM_khk_MOS_Pointer_Bipod_F", "arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F", "srifle_LRR_camo_F", "srifle_LRR_tna_F", "srifle_LRR_tna_LRPS_F", "srifle_GM6_F", "srifle_GM6_ghex_F", "srifle_GM6_ghex_LRPS_F", "hgun_P07_F", "hgun_P07_khk_F", "hgun_P07_khk_Snds_F", "SMG_02_base_F", "muzzle_snds_H", "muzzle_snds_H_khk_F", "muzzle_snds_H_snd_F", "muzzle_snds_M", "muzzle_snds_m_khk_F", "muzzle_snds_m_snd_F", "muzzle_snds_58_blk_F", "muzzle_snds_58_wdm_F", "muzzle_snds_58_ghex_F", "muzzle_snds_58_hex_F", "muzzle_snds_B", "muzzle_snds_B_khk_F", "muzzle_snds_B_snd_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_65_TI_hex_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_H_MG", "muzzle_snds_H_MG_blk_F", "muzzle_snds_H_MG_khk_F", "", "optic_Arco", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS", "optic_DMS_ghex_F", "optic_Hamr", "optic_Hamr_khk_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_snd_F", "optic_SOS", "optic_SOS_khk_F", "optic_LRPS", "optic_LRPS_tna_F", "optic_LRPS_ghex_F", "optic_Holosight", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_Holosight_smg_khk_F", "bipod_01_F_snd", "bipod_01_F_khk"
		
							//line below is from cfgweaponitems might be problem with it
//							"ItemGPS", "MineDetector", "Rangefinder", "NVGoggles_OPFOR", "NVGoggles_INDEP", "Integrated_NVG_F", "Integrated_NVG_TI_0_F", "Integrated_NVG_TI_1_F", "Laserdesignator", "Laserdesignator_02", "Laserdesignator_03", "FirstAidKit", "Medikit", "ToolKit", "Zasleh2", "muzzle_snds_L", "muzzle_snds_M", "muzzle_snds_B", "muzzle_snds_H_MG", "muzzle_snds_H_SW", "optic_Arco", "optic_Hamr", "optic_Aco", "optic_ACO_grn", "optic_Aco_smg", "optic_ACO_grn_smg", "optic_Holosight", "optic_Holosight_smg", "optic_SOS", "acc_flashlight", "acc_flashlight_pistol", "acc_pointer_IR", "optic_MRCO", "muzzle_snds_acp", "optic_NVS", "optic_Nightstalker", "optic_tws", "optic_tws_mg", "optic_DMS", "optic_Yorris", "optic_MRD", "optic_LRPS", "B_UavTerminal", "O_UavTerminal", "I_UavTerminal", "muzzle_snds_338_black", "muzzle_snds_338_green", "muzzle_snds_338_sand", "muzzle_snds_93mmg", "muzzle_snds_93mmg_tan", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_KHS_blk", "optic_KHS_hex", "optic_KHS_old", "optic_KHS_tan", "bipod_01_F_snd", "bipod_01_F_blk", "bipod_01_F_mtp", "bipod_02_F_blk", "bipod_02_F_tan", "bipod_02_F_hex", "bipod_03_F_blk", "bipod_03_F_oli", "O_NVGoggles_hex_F", "O_NVGoggles_urb_F", "O_NVGoggles_ghex_F", "NVGoggles_tna_F", "NVGogglesB_blk_F", "NVGogglesB_grn_F", "NVGogglesB_gry_F", "Laserdesignator_01_khk_F", "Laserdesignator_02_ghex_F", "muzzle_snds_H_khk_F", "muzzle_snds_H_snd_F", "muzzle_snds_m_khk_F", "muzzle_snds_m_snd_F", "muzzle_snds_58_blk_F", "muzzle_snds_58_wdm_F", "muzzle_snds_58_ghex_F", "muzzle_snds_58_hex_F", "muzzle_snds_B_khk_F", "muzzle_snds_B_snd_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_65_TI_hex_F", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_H_MG_blk_F", "muzzle_snds_H_MG_khk_F", "optic_Arco_blk_F", "optic_Arco_ghex_F", "optic_DMS_ghex_F", "optic_Hamr_khk_F", "optic_ERCO_blk_F", "optic_ERCO_khk_F", "optic_ERCO_snd_F", "optic_SOS_khk_F", "optic_LRPS_tna_F", "optic_LRPS_ghex_F", "optic_Holosight_blk_F", "optic_Holosight_khk_F", "optic_Holosight_smg_blk_F", "optic_Holosight_smg_khk_F", "bipod_01_F_khk"
*/						
						};
						magazines[] = 
						{
							/*
							// line below is from cfgmagazines, might be a problem with it
							"CfgMagazines", "[", "CA_Magazine", "16Rnd_9x21_Mag", "10Rnd_9x21_Mag", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_Tracer_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_Tracer_F", "20Rnd_650x39_Cased_Mag_F", "10Rnd_50BW_Mag_F", "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_Green_F", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_Green_F", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_545x39_Mag_Tracer_Green_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "200Rnd_556x45_Box_Tracer_F", "200Rnd_556x45_Box_Tracer_Red_F", "200Rnd_65x39_Belt", "500Rnd_65x39_Belt", "500Rnd_65x39_Belt_Tracer_Red_Splash", "500Rnd_65x39_Belt_Tracer_Green_Splash", "500Rnd_65x39_Belt_Tracer_Yellow_Splash", "RPG32_F", "RPG7_F", "4Rnd_Missile_AGM_01_F", "4Rnd_LG_Jian", "1000Rnd_20mm_shells", "4000Rnd_20mm_Tracer_Red_shells", "40Rnd_40mm_APFSDS_Tracer_Red_shells", "160Rnd_40mm_APFSDS_Tracer_Red_shells", "60Rnd_40mm_GPR_Tracer_Red_shells", "240Rnd_40mm_GPR_Tracer_Red_shells", "20Rnd_105mm_HEAT_MP", "100Rnd_105mm_HEAT_MP"
*/														
						};
						version = "V1.0";
						author = "kOepi";
			};
};

/*
class CfgWeapons
{
	class Launcher: LauncherCore
	{
		cursorAim = "EmptyCursor";
		cursor = "rocket";
		textureType = "semi";
		autoAimEnabled = 0;
		opticsDisablePeripherialVision = 1;
		magazines[] = {};
		value = 10;
		nameSound = "atlauncher";
		magazineReloadTime = 12;
		reloadTime = 0;
		initSpeed = 30;
		canLock = 0;
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "LAWSingle";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 500;
		optics = 1;
		primary = 0;
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		maxZeroing = 1000;
		minRange = 20;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 500;
		maxRangeProbab = 0.04;
	};
	class Launcher_Base_F: Launcher
	{
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		dexterity = 1.7;
		reloadAction = "ManActReloadAT";
		recoil = "recoil_default";
		sound[] = {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1.0,1,800};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.31622776,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.56234133,1,20};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.31622776,1.5,700};
		weaponPoolAvailable = 1;
		shotPos = "usti hlavne";
		shotEnd = "konec hlavne";
		class WeaponSlotsInfo
		{
			allowedSlots[] = {};
		};
	};
	class GrenadeCore;
	class GrenadeLauncher: Default
	{
		cursorAim = "gl";
		cursor = "EmptyCursor";
		value = 3;
		type = 0;
		displayName = "$STR_A3_cfgWeapons_GrenadeLauncher0";
		reloadTime = 3;
		reloadAction = "ReloadMagazine";
		magazineReloadTime = 1;
		magazines[] = {};
		initSpeed = 75;
		canLock = 0;
		autoReload = 0;
		autoAimEnabled = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "M240Recoil";
		dispersion = 0.00725;
		aiDispersionCoefY = 6;
		maxLeadSpeed = 15;
		optics = 0;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		cartridgePos = "";
		cartridgeVel = "";
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
		textureType = "semi";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	class UGL_F: GrenadeLauncher
	{
		displayName = "$STR_A3_cfgweapons_eglm0";
		magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.31622776,1,5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",0.56234133,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",0.56234133,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1.0,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.70794576,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.70794576,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			recoil = "M240Recoil";
			recoilProne = "M240Recoil";
			minRange = 30;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		recoil = "recoil_default";
		magazineReloadTime = 0;
		reloadTime = 0.1;
		optics = 1;
		modelOptics = "-";
		cameraDir = "UGL look";
		memoryPointCamera = "UGL eye";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		weaponInfoType = "RscWeaponZeroing";
	};
	class RifleCore: Default{};
	class Rifle: RifleCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		autoFire = 1;
		reloadAction = "ReloadMagazine";
		soundContinuous = 0;
		optics = 0;
		scope = 1;
		cursor = "arifle";
		cursoraim = "CursorAim";
		value = 4;
		displayName = "$STR_DN_RIFLE";
		nameSound = "rifle";
		reloadTime = 0.15;
		modelOptics = "-";
		sound[] = {};
		opticsFlare = 0;
		autoReload = 0;
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 6;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		maxLeadSpeed = 23;
		canLock = 0;
		flash = "gunfire";
		flashSize = 0.5;
		dispersion = 0.00029;
		recoil = "assaultRifleBase";
		recoilProne = "assaultRifleBase";
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 3;
		weaponPoolAvailable = 1;
		maxZeroing = 1000;
		class WeaponSlotsInfo
		{
			mass = 2;
			class MuzzleSlot: MuzzleSlot{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			allowedSlots[] = {901};
		};
		zeroingSound[] = {"A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",0.31622776,1,5};
	};
	class Rifle_Base_F: Rifle
	{
		scope = 0;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		recoil = "recoil_default";
		deployedPivot = "bipod";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {701,901};
		};
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {};
		};
	};
	class HandGunBase: Rifle
	{
		type = 2;
		initSpeed = 315;
		dexterity = 2;
		nameSound = "sidearm";
		cursor = "hgun";
		cursoraim = "CursorAim";
		value = 4;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 10;
		midRangeProbab = 0.58;
		maxRange = 60;
		maxRangeProbab = 0.04;
	};
	class PistolCore: Default{};
	class Pistol: PistolCore
	{
		htMin = 1;
		htMax = 300;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		autoReload = 0;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		maxZeroing = 100;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		magazineReloadTime = 2;
		opticsFlare = 0;
		nameSound = "Pistol";
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo
		{
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg"};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
			};
			allowedSlots[] = {801,701,901};
			holsterOffset = "holster";
			holsterScale = 1;
		};
	};
	class Pistol_Base_F: Pistol
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.56234133,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.56234133,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.56234133,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.56234133,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.56234133,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.56234133,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.56234133,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.56234133,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.56234133,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.56234133,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.56234133,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.56234133,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		optics = 1;
		modelOptics = "-";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		cursor = "hgun";
		cursoraim = "cursorAim";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_default";
		weaponPoolAvailable = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[] = {"muzzle_snds_L"};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
		};
		textureType = "semi";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
	};
	class Throw: GrenadeLauncher
	{
		scope = 1;
		autoAimEnabled = 0;
		cursor = "EmptyCursor";
		cursorAim = "throw";
		value = 0;
		type = 0;
		displayName = "$STR_DN_THROW";
		canDrop = 0;
		textureType = "semi";
		magazineReloadTime = 0.0;
		reloadTime = 0.0;
		muzzles[] = {"HandGrenade_Stone","HandGrenadeMuzzle","MiniGrenadeMuzzle","SmokeShellMuzzle","SmokeShellYellowMuzzle","SmokeShellGreenMuzzle","SmokeShellRedMuzzle","SmokeShellPurpleMuzzle","SmokeShellOrangeMuzzle","SmokeShellBlueMuzzle","ChemlightGreenMuzzle","ChemlightRedMuzzle","ChemlightYellowMuzzle","ChemlightBlueMuzzle","IRGrenade"};
		class ThrowMuzzle: GrenadeLauncher
		{
			cursor = "EmptyCursor";
			cursorAim = "throw";
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 2.5;
			enableAttack = 0;
			showEmpty = 0;
			autoReload = 1;
			modelOptics = "";
			minRange = 10;
			minRangeProbab = 0.2;
			midRange = 45;
			midRangeProbab = 0.9;
			maxRange = 60;
			maxRangeProbab = 0.03;
			keepInInventory = 1;
		};
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"HandGrenade"};
		};
		class MiniGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"MiniGrenade"};
		};
		class HandGrenade_Stone: ThrowMuzzle
		{
			magazines[] = {"HandGrenade_Stone"};
			displayName = "$STR_DN_STONE";
			minRange = 5;
			minRangeProbab = 0.01;
			midRange = 45;
			midRangeProbab = 0.1;
			maxRange = 80;
			maxRangeProbab = 0.01;
		};
		class SmokeShellMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShell"};
		};
		class SmokeShellYellowMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellYellow"};
		};
		class SmokeShellRedMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellRed"};
		};
		class SmokeShellGreenMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellGreen"};
		};
		class SmokeShellPurpleMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellPurple"};
		};
		class SmokeShellBlueMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellBlue"};
		};
		class SmokeShellOrangeMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellOrange"};
		};
		class ChemlightGreenMuzzle: ThrowMuzzle
		{
			displayName = "$STR_cfgWeapons_Throw_ChemlightMuzzle0";
			magazines[] = {"Chemlight_green"};
		};
		class ChemlightRedMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_red"};
		};
		class ChemlightYellowMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_yellow"};
		};
		class ChemlightBlueMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_blue"};
		};
		class IRGrenade: ThrowMuzzle
		{
			displayName = "$STR_A3_cfgWeapons_Throw_IRGrenade0";
			magazines[] = {"B_IR_Grenade","O_IR_Grenade","I_IR_Grenade"};
			cursorSize = 1;
		};
	};
	class Put: Default
	{
		scope = 1;
		value = 0;
		type = 0;
		displayName = "$STR_DN_PUT";
		canDrop = 0;
		muzzles[] = {"TimeBombMuzzle","PipeBombMuzzle","MineMuzzle"};
		class PutMuzzle: Default
		{
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			enableAttack = 0;
			optics = 0;
			showEmpty = 0;
			canLock = 0;
			primary = 10;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 3;
			midRangeProbab = 0.9;
			maxRange = 15;
			maxRangeProbab = 0.04;
			moveToInternal = 0;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.25;
			opticsZoomInit = 0.75;
		};
		class TimeBombMuzzle: PutMuzzle
		{
			displayName = "$STR_A3_cfgWeapons_Put_TimeBombMuzzle0";
			magazines[] = {"SatchelCharge_Remote_Mag"};
			enableAttack = 1;
		};
		class PipeBombMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_PIPE_BOMB";
			magazines[] = {"SatchelCharge_Remote_Mag"};
			enableAttack = 1;
		};
		class MineMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_MINE";
			magazines[] = {"ATMine_Range_Mag"};
		};
	};
	class CarHorn: Default
	{
		cursor = "";
		cursorAim = "";
		scope = 1;
		displayName = "$STR_A3_cfgWeapons_CarHorn0";
		reloadTime = 0;
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",1.0,1,200};
		canLock = 0;
		optics = 0;
		enableAttack = 0;
	};
	class BikeHorn: CarHorn
	{
		drySound[] = {"",1.0,1,200};
	};
	class TruckHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_1",1.0,1,200};
	};
	class TruckHorn2: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_2",1.0,1,250};
	};
	class TruckHorn3: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_3",1.0,1,300};
	};
	class SportCarHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_1",1.0,1,150};
	};
	class MiniCarHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_2",1.0,1,100};
	};
	class FakeHorn: CarHorn
	{
		displayName = "";
	};
	class ItemCore: Default
	{
		type = 131072;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_satchel_CA.paa";
		muzzles[] = {};
		class Armory
		{
			disabled = 1;
		};
	};
	class ItemWatch: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemWatch";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemWatch0";
		simulation = "ItemWatch";
		picture = "\A3\Weapons_F\Data\UI\gear_item_watch_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_watch.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemWatch1";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemWatch0";
		class ItemInfo
		{
			mass = 2;
		};
	};
	class ItemCompass: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemCompass";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemCompass0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemCompass0";
		simulation = "ItemCompass";
		picture = "\A3\Weapons_F\Data\UI\gear_item_compass_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_compass.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemCompass1";
		class ItemInfo
		{
			mass = 2;
		};
	};
	class ItemGPS: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemGPS";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemGPS0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemGPS0";
		simulation = "ItemGPS";
		picture = "\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_gps.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemGPS1";
		class ItemInfo
		{
			mass = 8;
		};
	};
	class ItemRadio: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemRadio";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemRadio0";
		simulation = "ItemRadio";
		picture = "\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_radio.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemRadio1";
		class ItemInfo
		{
			mass = 8;
		};
	};
	class ItemMap: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemMap";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemMap0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemMap0";
		simulation = "ItemMap";
		picture = "\A3\Weapons_F\Data\UI\gear_item_map_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_map.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemMap1";
		class ItemInfo
		{
			mass = 2;
		};
	};
	class DetectorCore;
	class MineDetector: DetectorCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "MineDetector";
		weaponPoolAvailable = 1;
		scope = 2;
		displayName = "$STR_A3_cfgweapons_minedetector0";
		descriptionshort = "$STR_A3_cfgweapons_minedetector1";
		detectRange = 15;
		soundMineDetector[] = {"A3\Sounds_F\sfx\blip1.wss",1,1};
		mineDetectorSoundFrequency = 1;
		mineDetectorPitchStart = 1;
		mineDetectorPitchEnd = 2;
		class ItemInfo
		{
			mass = 20;
		};
		picture = "\A3\Weapons_F\Items\data\UI\gear_MineDetector_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_minedetector.p3d";
	};
	class Binocular: Default
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Binocular";
		opticsDisablePeripherialVision = 1;
		weaponPoolAvailable = 1;
		scope = 2;
		simulation = "Binocular";
		model = "\A3\Weapons_f\binocular\binoculars_proxy";
		modelOptics = "\A3\weapons_f\reticle\optics_binoculars";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		visionMode[] = {"Normal"};
		picture = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
		value = 5;
		type = 4096;
		displayName = "$STR_DN_BINOCULAR";
		nameSound = "binoculars";
		descriptionUse = "$STR_A3_cfgWeapons_Default_Binocular1";
		reloadTime = 0;
		sound[] = {"",0,1};
		canLock = 0;
		optics = 1;
		forceOptics = 0;
		useAsBinocular = 1;
		primary = 0;
		opticsZoomMin = 0.02;
		opticsZoomMax = 0.0625;
		opticsZoomInit = 0.0625;
		minRange = 150;
		midRange = 500;
		maxRange = 2500;
		magazines[] = {};
		class Library
		{
			libTextDesc = "$STR_LIB_BINOCULAR";
		};
		descriptionShort = "$STR_DSS_BINOCULAR";
		class WeaponSlotsInfo
		{
			mass = 10;
		};
	};
	class Rangefinder: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Rangefinder";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_Rangefinder0";
		class Library
		{
			libTextDesc = "$STR_A3_cfgWeapons_Rangefinder_Library0";
		};
		descriptionShort = "$STR_A3_cfgWeapons_Rangefinder1";
		model = "\a3\Weapons_f\Binocular\rangefinder_proxy.p3d";
		modelOptics = "\A3\Weapons_F\Binocular\LRTV_optics.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_rangefinder_CA.paa";
		opticsZoomMin = 0.01;
		opticsZoomMax = 0.05;
		opticsZoomInit = 0.05;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
		weaponInfoType = "RscOptics_Rangefinder";
		visionMode[] = {"Normal","NVG"};
		class WeaponSlotsInfo
		{
			mass = 20;
		};
	};
	class NVGoggles: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles";
		displayName = "$STR_A3_cfgweapons_nvg_brown0";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
		descriptionUse = "$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[] = {"Normal","NVG"};
		class Library
		{
			libTextDesc = "$STR_LIB_NV_GOGGLES";
		};
		descriptionShort = "$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type = 616;
			uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off.p3d";
			mass = 20;
		};
	};
	class NVGoggles_OPFOR: NVGoggles
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles_OPFOR";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy_OPFOR";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_opfor_CA.paa";
		displayName = "$STR_A3_cfgweapons_nvg_black0";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off_OPFOR.p3d";
		};
	};
	class NVGoggles_INDEP: NVGoggles
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles_INDEP";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy_INDEP";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_indep_CA.paa";
		displayName = "$STR_A3_cfgweapons_nvg_green0";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_INDEP.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off_INDEP.p3d";
		};
	};
	class Integrated_NVG_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG"};
		modelOptics = "";
	};
	class Integrated_NVG_TI_0_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0};
		modelOptics = "";
	};
	class Integrated_NVG_TI_1_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {1};
		modelOptics = "";
	};
	class Laserdesignator: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Laserdesignator";
		model = "\A3\Weapons_F_beta\Binocular\ltlm.p3d";
		modelOptics = "\A3\Weapons_F_beta\Binocular\lasermarker_optics";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "$STR_cfgWeapons_Laserdesignator0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_Laserdesignator1";
		picture = "\A3\Weapons_F\Data\UI\gear_lasermarker_CA.paa";
		magazines[] = {"Laserbatteries"};
		cursor = "laserDesignator";
		cursorAim = "EmptyCursor";
		cursorAimOn = "EmptyCursor";
		showSwitchAction = 1;
		simulation = "weapon";
		forceOptics = 0;
		class WeaponSlotsInfo
		{
			mass = 20;
		};
		Laser = 1;
		descriptionShort = "$STR_DSS_Laserdesignator";
		weaponInfoType = "RscOptics_LaserDesignator";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {2};
		opticsZoomMin = 0.01;
		opticsZoomMax = 0.05;
		opticsZoomInit = 0.05;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
		minRange = 150;
		midRange = 500;
		maxRange = 5000;
	};
	class Laserdesignator_02: Laserdesignator{};
	class Laserdesignator_03: Laserdesignator{};
class CfgVehicles
{
	
	*/
