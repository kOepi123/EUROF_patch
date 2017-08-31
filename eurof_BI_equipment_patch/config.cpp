// this file extracted from bohemia files
//			class PointerSlot: PointerSlot{};

class CfgPatches 
{
			class eurof_BI_equipment_patch
			{
						requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Weapons_F_Acc", "A3_Sounds_F_Mark" };
						units[] = 
						{
							// line below is from cfguniforms
// enabled had no influence							"Headgear_Base_F", "Item_Base_F", "Vest_Base_F", "Weapon_Base_F", "Headgear_H_Beret_Colonel", "Headgear_H_Cap_press", "Headgear_H_Booniehat_oli", "Headgear_H_Bandanna_surfer_blk", "Headgear_H_Bandanna_surfer_grn", "Headgear_H_Bandanna_blu", "Headgear_H_Bandanna_sand", "Headgear_H_Watchcap_cbr", "Headgear_H_Cap_police", "Headgear_H_Cap_surfer", "Headgear_H_Cap_usblack", "Item_U_C_Scientist", "Item_U_C_Journalist", "Item_U_IG_Guerrilla_6_1", "Item_U_BG_Guerrilla_6_1", "Item_U_OG_Guerrilla_6_1", "Item_U_IG_Guerilla1_1", "Item_U_BG_Guerilla1_1", "Item_U_OG_Guerilla1_1", "Item_U_IG_Guerilla2_3", "Item_U_BG_Guerilla2_3", "Item_U_OG_Guerilla2_3", "Item_U_IG_Guerilla3_1", "Item_U_BG_Guerilla3_1", "Item_U_OG_Guerilla3_1", "Item_U_IG_Guerilla2_1", "Item_U_BG_Guerilla2_1", "Item_U_OG_Guerilla2_1", "Item_U_IG_Guerilla2_2", "Item_U_BG_Guerilla2_2", "Item_U_OG_Guerilla2_2", "Item_U_IG_leader", "Item_U_BG_leader", "Item_U_OG_leader", "Item_U_BG_Guerilla3_2", "Vest_V_Press_F",  "InventoryItem_Base_F", "ItemCore", "UniformItem", "Uniform_Base", "U_BasicBody", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_vest", "U_B_GhillieSuit", "U_B_HeliPilotCoveralls", "U_B_Wetsuit", "U_O_CombatUniform_ocamo", "U_O_GhillieSuit", "U_O_PilotCoveralls", "U_O_Wetsuit", "U_C_Poloshirt_blue", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_stripped", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_salmon", "U_C_Commoner1_1", "U_C_Commoner1_2", "U_C_Commoner1_3", "U_Rangemaster", "U_NikosBody", "U_OrestesBody", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_wdl", "U_B_CombatUniform_wdl_tshirt", "U_B_CombatUniform_wdl_vest", "U_B_CombatUniform_sgg", "U_B_CombatUniform_sgg_tshirt", "U_B_CombatUniform_sgg_vest", "U_B_SpecopsUniform_sgg", "U_B_PilotCoveralls", "U_O_CombatUniform_oucamo", "U_O_SpecopsUniform_ocamo", "U_O_SpecopsUniform_blk", "U_O_OfficerUniform_ocamo", "U_I_CombatUniform", "U_I_CombatUniform_tshirt", "U_I_CombatUniform_shortsleeve", "U_I_pilotCoveralls", "U_I_HeliPilotCoveralls", "U_I_GhillieSuit", "U_I_OfficerUniform", "U_I_Wetsuit", "U_Competitor", "U_MillerBody", "U_KerryBody", "U_AttisBody", "U_AntigonaBody", "U_IG_Menelaos", "U_C_Novak", "U_OI_Scientist", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_IG_Guerilla3_2", "U_IG_leader", "U_BG_Guerilla1_1", "U_BG_Guerilla2_1", "U_BG_Guerilla2_2", "U_BG_Guerilla2_3", "U_BG_Guerilla3_1", "U_BG_Guerilla3_2", "U_BG_leader", "U_OG_Guerilla1_1", "U_OG_Guerilla2_1", "U_OG_Guerilla2_2", "U_OG_Guerilla2_3", "U_OG_Guerilla3_1", "U_OG_Guerilla3_2", "U_OG_leader", "U_C_Poor_1", "U_C_Poor_2", "U_C_Scavenger_1", "U_C_Scavenger_2", "U_C_Farmer", "U_C_Fisherman", "U_C_WorkerOveralls", "U_C_FishermanOveralls", "U_C_WorkerCoveralls", "U_C_HunterBody_grn", "U_C_HunterBody_brn", "U_C_Commoner2_1", "U_C_Commoner2_2", "U_C_Commoner2_3", "U_C_PriestBody", "U_C_Poor_shorts_1", "U_C_Poor_shorts_2", "U_C_Commoner_shorts", "U_C_ShirtSurfer_shorts", "U_C_TeeSurfer_shorts_1", "U_C_TeeSurfer_shorts_2", "U_B_CTRG_1", "U_B_CTRG_2", "U_B_CTRG_3", "U_B_survival_uniform", "U_I_G_Story_Protagonist_F", "U_I_G_resistanceLeader_F", "U_C_Journalist", "U_C_Scientist", "U_NikosAgedBody", "U_B_Protagonist_VR", "U_O_Protagonist_VR", "U_I_Protagonist_VR", "U_IG_Guerrilla_6_1", "U_BG_Guerrilla_6_1", "U_OG_Guerrilla_6_1", "U_B_Soldier_VR", "U_O_Soldier_VR", "U_I_Soldier_VR", "U_C_Soldier_VR", "U_C_Driver_1", "U_C_Driver_2", "U_C_Driver_3", "U_C_Driver_4", "U_Marshal", "U_C_Driver_1_black", "U_C_Driver_1_blue", "U_C_Driver_1_green", "U_C_Driver_1_red", "U_C_Driver_1_yellow", "U_C_Driver_1_orange", "U_B_FullGhillie_lsh", "U_B_FullGhillie_sard", "U_B_FullGhillie_ard", "U_O_FullGhillie_lsh", "U_O_FullGhillie_sard", "U_O_FullGhillie_ard", "U_I_FullGhillie_lsh", "U_I_FullGhillie_sard", "U_I_FullGhillie_ard", "VestItem", "Vest_Camo_Base", "Vest_NoCamo_Base", "V_Rangemaster_belt", "V_BandollierB_khk", "V_BandollierB_cbr", "V_BandollierB_rgr", "V_BandollierB_blk", "V_BandollierB_oli", "V_PlateCarrier1_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier2_blk", "V_PlateCarrier3_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierGL_blk", "V_PlateCarrierGL_mtp", "V_PlateCarrier1_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_mtp", "V_Chestrig_khk", "V_Chestrig_rgr", "V_Chestrig_blk", "V_Chestrig_oli", "V_TacVest_khk", "V_TacVest_brn", "V_TacVest_oli", "V_TacVest_blk", "V_TacVest_camo", "V_TacVest_blk_POLICE", "V_TacVestIR_blk", "V_TacVestCamo_khk", "V_HarnessO_brn", "V_HarnessOGL_brn", "V_HarnessO_gry", "V_HarnessOGL_gry", "V_HarnessOSpec_brn", "V_HarnessOSpec_gry", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierIAGL_oli", "V_RebreatherB", "V_RebreatherIR", "V_RebreatherIA", "V_PlateCarrier_Kerry", "V_PlateCarrierL_CTRG", "V_PlateCarrierH_CTRG", "V_I_G_resistanceLeader_F", "V_Press_F", "HeadgearItem", "HelmetBase", "H_HelmetB", "H_HelmetB_camo", "H_HelmetB_paint", "H_HelmetB_light", "H_Booniehat_khk", "H_Booniehat_oli", "H_Booniehat_indp", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_Booniehat_tan", "H_Booniehat_dirty", "H_Booniehat_dgtl", "H_Booniehat_khk_hs", "H_HelmetB_plain_mcamo", "H_HelmetB_plain_blk", "H_HelmetSpecB", "H_HelmetSpecB_paint1", "H_HelmetSpecB_paint2", "H_HelmetSpecB_blk", "H_HelmetSpecB_snakeskin", "H_HelmetSpecB_sand", "H_HelmetIA", "H_HelmetIA_net", "H_HelmetIA_camo", "H_Helmet_Kerry", "H_HelmetB_grass", "H_HelmetB_snakeskin", "H_HelmetB_desert", "H_HelmetB_black", "H_HelmetB_sand", "H_Cap_red", "H_Cap_blu", "H_Cap_oli", "H_Cap_headphones", "H_Cap_tan", "H_Cap_blk", "H_Cap_blk_CMMG", "H_Cap_brn_SPECOPS", "H_Cap_tan_specops_US", "H_Cap_khaki_specops_UK", "H_Cap_grn", "H_Cap_grn_BI", "H_Cap_blk_Raven", "H_Cap_blk_ION", "H_Cap_oli_hs", "H_Cap_press", "H_Cap_usblack", "H_Cap_surfer", "H_Cap_police", "H_HelmetCrew_B", "H_HelmetCrew_O", "H_HelmetCrew_I", "H_PilotHelmetFighter_B", "H_PilotHelmetFighter_O", "H_PilotHelmetFighter_I", "H_PilotHelmetHeli_B", "H_PilotHelmetHeli_O", "H_PilotHelmetHeli_I", "H_CrewHelmetHeli_B", "H_CrewHelmetHeli_O", "H_CrewHelmetHeli_I", "H_HelmetO_ocamo", "H_HelmetLeaderO_ocamo", "H_MilCap_ocamo", "H_MilCap_mcamo", "H_MilCap_oucamo", "H_MilCap_rucamo", "H_MilCap_gry", "H_MilCap_dgtl", "H_MilCap_blue", "H_HelmetB_light_grass", "H_HelmetB_light_snakeskin", "H_HelmetB_light_desert", "H_HelmetB_light_black", "H_HelmetB_light_sand", "H_BandMask_blk", "H_BandMask_khk", "H_BandMask_reaper", "H_BandMask_demon", "H_HelmetO_oucamo", "H_HelmetLeaderO_oucamo", "H_HelmetSpecO_ocamo", "H_HelmetSpecO_blk", "H_Bandanna_surfer", "H_Bandanna_khk", "H_Bandanna_khk_hs", "H_Bandanna_cbr", "H_Bandanna_sgg", "H_Bandanna_sand", "H_Bandanna_surfer_blk", "H_Bandanna_surfer_grn", "H_Bandanna_gry", "H_Bandanna_blu", "H_Bandanna_camo", "H_Bandanna_mcamo", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "H_Beret_blk", "H_Beret_blk_POLICE", "H_Beret_red", "H_Beret_grn", "H_Beret_grn_SF", "H_Beret_brn_SF", "H_Beret_ocamo", "H_Beret_02", "H_Beret_Colonel", "H_Watchcap_blk", "H_Watchcap_cbr", "H_Watchcap_khk", "H_Watchcap_camo", "H_Watchcap_sgg", "H_TurbanO_blk", "H_StrawHat", "H_StrawHat_dark", "H_Hat_blue", "H_Hat_brown", "H_Hat_camo", "H_Hat_grey", "H_Hat_checker", "H_Hat_tan", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_orange_F", "H_Cap_marshal",
							
							// line below is from cfgbackpacks
							"B_Assault_Diver","B_AssaultPack_Base","B_AssaultPack_blk","B_AssaultPack_blk_DiverExp","B_AssaultPack_cbr","B_AssaultPack_dgtl","B_AssaultPack_Kerry","B_AssaultPack_khk","B_AssaultPack_mcamo","B_AssaultPack_mcamo_AA","B_AssaultPack_mcamo_AAR","B_AssaultPack_mcamo_Ammo","B_AssaultPack_mcamo_AT","B_AssaultPack_ocamo","B_AssaultPack_rgr","B_AssaultPack_rgr_LAT","B_AssaultPack_rgr_Medic","B_AssaultPack_rgr_ReconExp","B_AssaultPack_rgr_ReconLAT","B_AssaultPack_rgr_ReconMedic","B_AssaultPack_rgr_Repair","B_AssaultPack_sgg","B_AssaultPackG","B_Bergen_Base","B_Bergen_blk","B_Bergen_mcamo","B_Bergen_rgr","B_Bergen_sgg","B_BergenC_Base","B_BergenC_blu","B_BergenC_grn","B_BergenC_red","B_BergenG","B_BergenG_TEST_B_Soldier_overloaded","B_Carryall_Base","B_Carryall_cbr","B_Carryall_cbr_AAT","B_Carryall_khk","B_Carryall_mcamo","B_Carryall_mcamo_AAA","B_Carryall_mcamo_AAT","B_Carryall_ocamo","B_Carryall_ocamo_AAA","B_Carryall_ocamo_AAR","B_Carryall_ocamo_Eng","B_Carryall_ocamo_Exp","B_Carryall_oli","B_Carryall_oucamo","B_Carryall_oucamo_AAA","B_Carryall_oucamo_AAR","B_Carryall_oucamo_AAT","B_Carryall_oucamo_Eng","B_Carryall_oucamo_Exp","B_FieldPack_Base","B_FieldPack_blk","B_FieldPack_blk_DiverExp","B_FieldPack_cbr","B_FieldPack_cbr_AA","B_FieldPack_cbr_AAA","B_FieldPack_cbr_AAT","B_FieldPack_cbr_Ammo","B_FieldPack_cbr_AT","B_FieldPack_cbr_LAT","B_FieldPack_cbr_Medic","B_FieldPack_cbr_Repair","B_FieldPack_cbr_RPG_AT","B_FieldPack_khk","B_FieldPack_ocamo","B_FieldPack_ocamo_AA","B_FieldPack_ocamo_AAR","B_FieldPack_ocamo_Medic","B_FieldPack_ocamo_ReconExp","B_FieldPack_ocamo_ReconMedic","B_FieldPack_oli","B_FieldPack_oucamo","B_FieldPack_oucamo_AA","B_FieldPack_oucamo_AAR","B_FieldPack_oucamo_Ammo","B_FieldPack_oucamo_AT","B_FieldPack_oucamo_LAT","B_FieldPack_oucamo_Medic","B_FieldPack_oucamo_Repair","B_HuntingBackpack","B_Kitbag_Base","B_Kitbag_cbr","B_Kitbag_mcamo","B_Kitbag_mcamo_Eng","B_Kitbag_rgr","B_Kitbag_rgr_AAR","B_Kitbag_rgr_Exp","B_Kitbag_sgg","B_OutdoorPack_Base","B_OutdoorPack_blk","B_OutdoorPack_blu","B_OutdoorPack_tan","B_Parachute","B_supplyCrate_F","B_TacticalPack_Base","B_TacticalPack_blk","B_TacticalPack_mcamo","B_TacticalPack_ocamo","B_TacticalPack_oli","B_TacticalPack_oli_AAR","B_TacticalPack_rgr","Bag_Base","Box_Ammo_F","Box_East_Ammo_F","Box_East_AmmoOrd_F","Box_East_AmmoVeh_F","Box_East_Grenades_F","Box_East_Support_F","Box_East_Wps_F","Box_East_WpsLaunch_F","Box_East_WpsSpecial_F","Box_IND_Ammo_F","Box_IND_AmmoOrd_F","Box_IND_AmmoVeh_F","Box_IND_Grenades_F","Box_IND_Support_F","Box_IND_Wps_F","Box_IND_WpsLaunch_F","Box_IND_WpsSpecial_F","Box_NATO_Ammo_F","Box_NATO_AmmoOrd_F","Box_NATO_AmmoVeh_F","Box_NATO_Grenades_F","Box_NATO_Support_F","Box_NATO_Wps_F","Box_NATO_WpsLaunch_F","Box_NATO_WpsSpecial_F","Box_Wps_F","C_Bergen_Base","C_Bergen_blu","C_Bergen_grn","C_Bergen_red","C_supplyCrate_F","G_AssaultPack","G_Bergen","G_Carryall_Ammo","G_Carryall_Exp","G_FieldPack_LAT","G_FieldPack_Medic","G_TacticalPack_Eng","GroundWeaponHolder","GroundWeaponHolder_Scripted","I_Assault_Diver","I_Carryall_oli_AAA","I_Carryall_oli_AAT","I_Carryall_oli_Eng","I_Carryall_oli_Exp","I_Fieldpack_oli_AA","I_Fieldpack_oli_AAR","I_Fieldpack_oli_Ammo","I_Fieldpack_oli_AT","I_Fieldpack_oli_LAT","I_Fieldpack_oli_Medic","I_Fieldpack_oli_Repair","I_supplyCrate_F","IG_supplyCrate_F","Land_Box_AmmoOld_F","O_Assault_Diver","O_supplyCrate_F","ReammoBox_F","WeaponHolderSimulated","WeaponHolderSimulated_Scripted"
						
						};
						weapons[] = 
						{			
							// line below is from cfguniforms
							"Headgear_Base_F", "Item_Base_F", "Vest_Base_F", "Weapon_Base_F", "Headgear_H_Beret_Colonel", "Headgear_H_Cap_press", "Headgear_H_Booniehat_oli", "Headgear_H_Bandanna_surfer_blk", "Headgear_H_Bandanna_surfer_grn", "Headgear_H_Bandanna_blu", "Headgear_H_Bandanna_sand", "Headgear_H_Watchcap_cbr", "Headgear_H_Cap_police", "Headgear_H_Cap_surfer", "Headgear_H_Cap_usblack", "Item_U_C_Scientist", "Item_U_C_Journalist", "Item_U_IG_Guerrilla_6_1", "Item_U_BG_Guerrilla_6_1", "Item_U_OG_Guerrilla_6_1", "Item_U_IG_Guerilla1_1", "Item_U_BG_Guerilla1_1", "Item_U_OG_Guerilla1_1", "Item_U_IG_Guerilla2_3", "Item_U_BG_Guerilla2_3", "Item_U_OG_Guerilla2_3", "Item_U_IG_Guerilla3_1", "Item_U_BG_Guerilla3_1", "Item_U_OG_Guerilla3_1", "Item_U_IG_Guerilla2_1", "Item_U_BG_Guerilla2_1", "Item_U_OG_Guerilla2_1", "Item_U_IG_Guerilla2_2", "Item_U_BG_Guerilla2_2", "Item_U_OG_Guerilla2_2", "Item_U_IG_leader", "Item_U_BG_leader", "Item_U_OG_leader", "Item_U_BG_Guerilla3_2", "Vest_V_Press_F",  "InventoryItem_Base_F", "ItemCore", "UniformItem", "Uniform_Base", "U_BasicBody", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_vest", "U_B_GhillieSuit", "U_B_HeliPilotCoveralls", "U_B_Wetsuit", "U_O_CombatUniform_ocamo", "U_O_GhillieSuit", "U_O_PilotCoveralls", "U_O_Wetsuit", "U_C_Poloshirt_blue", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_stripped", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_salmon", "U_C_Commoner1_1", "U_C_Commoner1_2", "U_C_Commoner1_3", "U_Rangemaster", "U_NikosBody", "U_OrestesBody", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_wdl", "U_B_CombatUniform_wdl_tshirt", "U_B_CombatUniform_wdl_vest", "U_B_CombatUniform_sgg", "U_B_CombatUniform_sgg_tshirt", "U_B_CombatUniform_sgg_vest", "U_B_SpecopsUniform_sgg", "U_B_PilotCoveralls", "U_O_CombatUniform_oucamo", "U_O_SpecopsUniform_ocamo", "U_O_SpecopsUniform_blk", "U_O_OfficerUniform_ocamo", "U_I_CombatUniform", "U_I_CombatUniform_tshirt", "U_I_CombatUniform_shortsleeve", "U_I_pilotCoveralls", "U_I_HeliPilotCoveralls", "U_I_GhillieSuit", "U_I_OfficerUniform", "U_I_Wetsuit", "U_Competitor", "U_MillerBody", "U_KerryBody", "U_AttisBody", "U_AntigonaBody", "U_IG_Menelaos", "U_C_Novak", "U_OI_Scientist", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla3_1", "U_IG_Guerilla3_2", "U_IG_leader", "U_BG_Guerilla1_1", "U_BG_Guerilla2_1", "U_BG_Guerilla2_2", "U_BG_Guerilla2_3", "U_BG_Guerilla3_1", "U_BG_Guerilla3_2", "U_BG_leader", "U_OG_Guerilla1_1", "U_OG_Guerilla2_1", "U_OG_Guerilla2_2", "U_OG_Guerilla2_3", "U_OG_Guerilla3_1", "U_OG_Guerilla3_2", "U_OG_leader", "U_C_Poor_1", "U_C_Poor_2", "U_C_Scavenger_1", "U_C_Scavenger_2", "U_C_Farmer", "U_C_Fisherman", "U_C_WorkerOveralls", "U_C_FishermanOveralls", "U_C_WorkerCoveralls", "U_C_HunterBody_grn", "U_C_HunterBody_brn", "U_C_Commoner2_1", "U_C_Commoner2_2", "U_C_Commoner2_3", "U_C_PriestBody", "U_C_Poor_shorts_1", "U_C_Poor_shorts_2", "U_C_Commoner_shorts", "U_C_ShirtSurfer_shorts", "U_C_TeeSurfer_shorts_1", "U_C_TeeSurfer_shorts_2", "U_B_CTRG_1", "U_B_CTRG_2", "U_B_CTRG_3", "U_B_survival_uniform", "U_I_G_Story_Protagonist_F", "U_I_G_resistanceLeader_F", "U_C_Journalist", "U_C_Scientist", "U_NikosAgedBody", "U_B_Protagonist_VR", "U_O_Protagonist_VR", "U_I_Protagonist_VR", "U_IG_Guerrilla_6_1", "U_BG_Guerrilla_6_1", "U_OG_Guerrilla_6_1", "U_B_Soldier_VR", "U_O_Soldier_VR", "U_I_Soldier_VR", "U_C_Soldier_VR", "U_C_Driver_1", "U_C_Driver_2", "U_C_Driver_3", "U_C_Driver_4", "U_Marshal", "U_C_Driver_1_black", "U_C_Driver_1_blue", "U_C_Driver_1_green", "U_C_Driver_1_red", "U_C_Driver_1_yellow", "U_C_Driver_1_orange", "U_B_FullGhillie_lsh", "U_B_FullGhillie_sard", "U_B_FullGhillie_ard", "U_O_FullGhillie_lsh", "U_O_FullGhillie_sard", "U_O_FullGhillie_ard", "U_I_FullGhillie_lsh", "U_I_FullGhillie_sard", "U_I_FullGhillie_ard", "VestItem", "Vest_Camo_Base", "Vest_NoCamo_Base", "V_Rangemaster_belt", "V_BandollierB_khk", "V_BandollierB_cbr", "V_BandollierB_rgr", "V_BandollierB_blk", "V_BandollierB_oli", "V_PlateCarrier1_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier2_blk", "V_PlateCarrier3_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierGL_blk", "V_PlateCarrierGL_mtp", "V_PlateCarrier1_blk", "V_PlateCarrierSpec_rgr", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_mtp", "V_Chestrig_khk", "V_Chestrig_rgr", "V_Chestrig_blk", "V_Chestrig_oli", "V_TacVest_khk", "V_TacVest_brn", "V_TacVest_oli", "V_TacVest_blk", "V_TacVest_camo", "V_TacVest_blk_POLICE", "V_TacVestIR_blk", "V_TacVestCamo_khk", "V_HarnessO_brn", "V_HarnessOGL_brn", "V_HarnessO_gry", "V_HarnessOGL_gry", "V_HarnessOSpec_brn", "V_HarnessOSpec_gry", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierIAGL_oli", "V_RebreatherB", "V_RebreatherIR", "V_RebreatherIA", "V_PlateCarrier_Kerry", "V_PlateCarrierL_CTRG", "V_PlateCarrierH_CTRG", "V_I_G_resistanceLeader_F", "V_Press_F", "HeadgearItem", "HelmetBase", "H_HelmetB", "H_HelmetB_camo", "H_HelmetB_paint", "H_HelmetB_light", "H_Booniehat_khk", "H_Booniehat_oli", "H_Booniehat_indp", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_Booniehat_tan", "H_Booniehat_dirty", "H_Booniehat_dgtl", "H_Booniehat_khk_hs", "H_HelmetB_plain_mcamo", "H_HelmetB_plain_blk", "H_HelmetSpecB", "H_HelmetSpecB_paint1", "H_HelmetSpecB_paint2", "H_HelmetSpecB_blk", "H_HelmetSpecB_snakeskin", "H_HelmetSpecB_sand", "H_HelmetIA", "H_HelmetIA_net", "H_HelmetIA_camo", "H_Helmet_Kerry", "H_HelmetB_grass", "H_HelmetB_snakeskin", "H_HelmetB_desert", "H_HelmetB_black", "H_HelmetB_sand", "H_Cap_red", "H_Cap_blu", "H_Cap_oli", "H_Cap_headphones", "H_Cap_tan", "H_Cap_blk", "H_Cap_blk_CMMG", "H_Cap_brn_SPECOPS", "H_Cap_tan_specops_US", "H_Cap_khaki_specops_UK", "H_Cap_grn", "H_Cap_grn_BI", "H_Cap_blk_Raven", "H_Cap_blk_ION", "H_Cap_oli_hs", "H_Cap_press", "H_Cap_usblack", "H_Cap_surfer", "H_Cap_police", "H_HelmetCrew_B", "H_HelmetCrew_O", "H_HelmetCrew_I", "H_PilotHelmetFighter_B", "H_PilotHelmetFighter_O", "H_PilotHelmetFighter_I", "H_PilotHelmetHeli_B", "H_PilotHelmetHeli_O", "H_PilotHelmetHeli_I", "H_CrewHelmetHeli_B", "H_CrewHelmetHeli_O", "H_CrewHelmetHeli_I", "H_HelmetO_ocamo", "H_HelmetLeaderO_ocamo", "H_MilCap_ocamo", "H_MilCap_mcamo", "H_MilCap_oucamo", "H_MilCap_rucamo", "H_MilCap_gry", "H_MilCap_dgtl", "H_MilCap_blue", "H_HelmetB_light_grass", "H_HelmetB_light_snakeskin", "H_HelmetB_light_desert", "H_HelmetB_light_black", "H_HelmetB_light_sand", "H_BandMask_blk", "H_BandMask_khk", "H_BandMask_reaper", "H_BandMask_demon", "H_HelmetO_oucamo", "H_HelmetLeaderO_oucamo", "H_HelmetSpecO_ocamo", "H_HelmetSpecO_blk", "H_Bandanna_surfer", "H_Bandanna_khk", "H_Bandanna_khk_hs", "H_Bandanna_cbr", "H_Bandanna_sgg", "H_Bandanna_sand", "H_Bandanna_surfer_blk", "H_Bandanna_surfer_grn", "H_Bandanna_gry", "H_Bandanna_blu", "H_Bandanna_camo", "H_Bandanna_mcamo", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "H_Beret_blk", "H_Beret_blk_POLICE", "H_Beret_red", "H_Beret_grn", "H_Beret_grn_SF", "H_Beret_brn_SF", "H_Beret_ocamo", "H_Beret_02", "H_Beret_Colonel", "H_Watchcap_blk", "H_Watchcap_cbr", "H_Watchcap_khk", "H_Watchcap_camo", "H_Watchcap_sgg", "H_TurbanO_blk", "H_StrawHat", "H_StrawHat_dark", "H_Hat_blue", "H_Hat_brown", "H_Hat_camo", "H_Hat_grey", "H_Hat_checker", "H_Hat_tan", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_orange_F", "H_Cap_marshal",
						

							// line below is from cfgweapons
							"autocannon_30mm","autocannon_30mm_CTWS","autocannon_35mm","autocannon_40mm_CTWS","autocannon_Base_F","BikeHorn","Binocular","Bomb_03_Plane_CAS_02_F","Bomb_04_Plane_CAS_01_F","cannon_105mm","cannon_120mm","cannon_120mm_long","cannon_125mm","Cannon_30mm_Plane_CAS_02_F","CarHorn","CMFlareLauncher","CMFlareLauncher_Singles","CMFlareLauncher_Triples","FakeHorn","FlareLauncher","gatling_20mm","gatling_25mm","gatling_30mm","Gatling_30mm_Plane_CAS_01_F","GBU12BombLauncher","GBU12BombLauncher_Plane_Fighter_03_F","GMG_20mm","GMG_40mm","HandGunBase","HMG_01","HMG_127","HMG_127_APC","HMG_127_MBT","HMG_127_UGV","HMG_M2","HMG_NSVT","HMG_static","Integrated_NVG_F","Integrated_NVG_TI_0_F","Integrated_NVG_TI_1_F","ItemCompass","ItemGPS","ItemMap","ItemRadio","ItemWatch","Laserdesignator","Laserdesignator_mounted","Laserdesignator_pilotCamera","LMG_65mm_body","LMG_coax","LMG_M200","LMG_M200_body","LMG_Minigun","LMG_Minigun2","LMG_Minigun_heli","LMG_Minigun_Transport","LMG_Minigun_Transport2","LMG_RCWS","M134_minigun","M2","MineDetector","MiniCarHorn","Missile_AA_03_Plane_CAS_02_F","Missile_AA_04_Plane_CAS_01_F","Missile_AGM_01_Plane_CAS_02_F","Missile_AGM_02_Plane_CAS_01_F","MissileLauncher","missiles_ASRAAM","missiles_DAGR","missiles_DAR","missiles_SCALPEL","missiles_titan","missiles_titan_static","missiles_Zephyr","Mk82BombLauncher","mortar_155mm_AMOS","mortar_82mm","NVGoggles","NVGoggles_INDEP","NVGoggles_OPFOR","Put","Rangefinder","Rifle","Rocket_03_AP_Plane_CAS_02_F","Rocket_03_HE_Plane_CAS_02_F","Rocket_04_AP_Plane_CAS_01_F","Rocket_04_HE_Plane_CAS_01_F","RocketPods","rockets_230mm_GAT","rockets_Skyfire","SEARCHLIGHT","SmokeLauncher","SportCarHorn","Throw","TruckHorn","TruckHorn2","TruckHorn3","Twin_Cannon_20mm"
		
						};
						magazines[] = {};
						version = "V1.0";
						author = "kOepi";
			};
};


class CfgWeapons
{
	class ItemCore;
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class MuzzleSlot;
	class Rifle;
	class Rifle_Base_F: Rifle {};
	class Rifle_Short_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F {};

	
			#include "CfgWeapons.hpp"
//			#include "CfgWeaponitems.hpp"

//			#include "CfgMagazines.hpp"
};

class CfgVehicles
{
	class ItemCore;
	class Headgear_Base_F;
	class Vest_Base_F;
	class InventoryItem_Base_F;
	class ReammoBox;
	class ThingX;
	class WeaponHolder;
	class ContainerSupply;
	class Item_Base_F;
	
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class MuzzleSlot;
	class Rifle;
	class Rifle_Base_F: Rifle {};
	class Rifle_Short_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F {};

			#include "CfgBackpacks.hpp"
			#include "CfgUniforms.hpp"
			#include "CfgWeapons.hpp"
	
};