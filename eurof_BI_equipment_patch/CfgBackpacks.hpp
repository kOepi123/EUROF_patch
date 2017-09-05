// 	vehicleClass = "Container";
//		vehicleClass = "Ammo";
// 		vehicleClass = "Backpacks";
//{ weaponPoolAvailable  = 0; };

	class B_AssaultPack_Base: Bag_Base {};
	class B_AssaultPack_khk: B_AssaultPack_Base { scopearsenal = 0; };
	class B_AssaultPack_dgtl: B_AssaultPack_Base { scopearsenal = 0; };
	class B_AssaultPack_rgr: B_AssaultPack_Base { scopearsenal = 0; };
	class B_AssaultPack_sgg: B_AssaultPack_Base { scopearsenal = 0; };
	class B_AssaultPack_blk: B_AssaultPack_Base { scopearsenal = 0; };
	class B_AssaultPack_cbr: B_AssaultPack_Base { scopearsenal = 0; };
	class B_AssaultPack_mcamo: B_AssaultPack_Base { scopearsenal = 0; };
	class B_AssaultPack_ocamo: B_AssaultPack_Base { scopearsenal = 0; };
	class B_Kitbag_Base: Bag_Base { scopearsenal = 0; };
	class B_Kitbag_rgr: B_Kitbag_Base { scopearsenal = 0; };
	class B_Kitbag_mcamo: B_Kitbag_Base { scopearsenal = 0; };
	class B_Kitbag_sgg: B_Kitbag_Base { scopearsenal = 0; };
	class B_Kitbag_cbr: B_Kitbag_Base { scopearsenal = 0; };
	class B_TacticalPack_Base: Bag_Base {};
	class B_TacticalPack_rgr: B_TacticalPack_Base { scopearsenal = 0; };
	class B_TacticalPack_mcamo: B_TacticalPack_Base { scopearsenal = 0; };
	class B_TacticalPack_ocamo: B_TacticalPack_Base { scopearsenal = 0; };
	class B_TacticalPack_blk: B_TacticalPack_Base { scopearsenal = 0; };
	class B_TacticalPack_oli: B_TacticalPack_Base { scopearsenal = 0; };
	class B_FieldPack_Base: Bag_Base {};
	class B_FieldPack_khk: B_FieldPack_Base { scopearsenal = 0; };
	class B_FieldPack_ocamo: B_FieldPack_Base { scopearsenal = 0; };
	class B_FieldPack_oucamo: B_FieldPack_Base { scopearsenal = 0; };
	class B_FieldPack_cbr: B_FieldPack_Base { scopearsenal = 0; };
	class B_FieldPack_blk: B_FieldPack_Base { scopearsenal = 0; };
	class B_Carryall_Base: Bag_Base {};
	class B_Carryall_ocamo: B_Carryall_Base { scopearsenal = 0; };
	class B_Carryall_oucamo: B_Carryall_Base { scopearsenal = 0; };
	class B_Carryall_mcamo: B_Carryall_Base { scopearsenal = 0; };
	class B_Carryall_khk: B_Carryall_Base { scopearsenal = 0; };
	class B_Carryall_cbr: B_Carryall_Base { scopearsenal = 0; };
	class B_Bergen_Base: Bag_Base {};
	class B_Bergen_sgg: B_Bergen_Base { scopearsenal = 0; };
	class B_Bergen_mcamo: B_Bergen_Base { scopearsenal = 0; };
	class B_Bergen_rgr: B_Bergen_Base { scopearsenal = 0; };
	class B_Bergen_blk: B_Bergen_Base { scopearsenal = 0; };
	class B_OutdoorPack_Base: Bag_Base {};
	class B_OutdoorPack_blk: B_OutdoorPack_Base { scopearsenal = 0; };
	class B_OutdoorPack_tan: B_OutdoorPack_Base { scopearsenal = 0; };
	class B_OutdoorPack_blu: B_OutdoorPack_Base { scopearsenal = 0; };
	class B_HuntingBackpack: Bag_Base { scopearsenal = 0; };
	class B_AssaultPackG: Bag_Base { scopearsenal = 0; };
	class B_BergenG: Bag_Base { scopearsenal = 0; };
	class B_BergenC_Base: Bag_Base {};
	class B_BergenC_red: B_BergenC_Base { scopearsenal = 0; };
	class B_BergenC_grn: B_BergenC_Base { scopearsenal = 0; };
	class B_BergenC_blu: B_BergenC_Base { scopearsenal = 0; };
	
	class B_FieldPack_oli: B_FieldPack_Base { scopearsenal = 0; };
	class B_Carryall_oli: B_Carryall_Base { scopearsenal = 0; };
	class G_AssaultPack: B_AssaultPackG { scopearsenal = 0; };
	class G_Bergen: B_BergenG { scopearsenal = 0; };
	class C_Bergen_Base: B_BergenC_Base {};
	class C_Bergen_red: C_Bergen_Base { scopearsenal = 0; };
	class C_Bergen_grn: C_Bergen_Base { scopearsenal = 0; };
	class C_Bergen_blu: C_Bergen_Base { scopearsenal = 0; };
	class B_AssaultPack_Kerry: B_AssaultPack_mcamo { scopearsenal = 0; };
	class B_AssaultPack_rgr_LAT: B_AssaultPack_rgr { scopearsenal = 0; };
	class B_AssaultPack_rgr_Medic: B_AssaultPack_rgr { scopearsenal = 0; };
	class B_AssaultPack_rgr_Repair: B_AssaultPack_rgr { scopearsenal = 0; };
	class B_Assault_Diver: B_AssaultPack_blk { scopearsenal = 0; };
	class B_AssaultPack_blk_DiverExp: B_AssaultPack_blk { scopearsenal = 0; };
	class B_Kitbag_rgr_Exp: B_Kitbag_rgr { scopearsenal = 0; };
	class B_AssaultPack_mcamo_AT: B_Kitbag_rgr { scopearsenal = 0; };
	class B_AssaultPack_rgr_ReconMedic: B_AssaultPack_rgr { scopearsenal = 0; };
	class B_AssaultPack_rgr_ReconExp: B_Kitbag_rgr { scopearsenal = 0; };
	class B_AssaultPack_rgr_ReconLAT: B_AssaultPack_rgr { scopearsenal = 0; };
	class B_AssaultPack_mcamo_AA: B_Kitbag_rgr { scopearsenal = 0; };
	class B_AssaultPack_mcamo_AAR: B_TacticalPack_mcamo { scopearsenal = 0; };
	class B_AssaultPack_mcamo_Ammo: B_Carryall_mcamo { scopearsenal = 0; };
	class B_Kitbag_mcamo_Eng: B_Kitbag_mcamo { scopearsenal = 0; };
	class B_Carryall_mcamo_AAA: B_Carryall_mcamo { scopearsenal = 0; };
	class B_Carryall_mcamo_AAT: B_Carryall_mcamo { scopearsenal = 0; };
	class B_Kitbag_rgr_AAR: B_Kitbag_rgr { scopearsenal = 0; };
	class B_FieldPack_blk_DiverExp: B_FieldPack_blk { scopearsenal = 0; };
	class O_Assault_Diver: B_FieldPack_blk { scopearsenal = 0; };
	class B_FieldPack_ocamo_Medic: B_FieldPack_ocamo { scopearsenal = 0; };
	class B_FieldPack_cbr_LAT: B_FieldPack_ocamo { scopearsenal = 0; };
	class B_FieldPack_cbr_Repair: B_FieldPack_ocamo { scopearsenal = 0; };
	class B_Carryall_ocamo_Exp: B_Carryall_ocamo { scopearsenal = 0; };
	class B_FieldPack_ocamo_AA: B_FieldPack_ocamo { scopearsenal = 0; };
	class B_FieldPack_ocamo_AAR: B_Carryall_ocamo { scopearsenal = 0; };
	class B_FieldPack_ocamo_ReconMedic: B_FieldPack_ocamo { scopearsenal = 0; };
	class B_FieldPack_cbr_AT: B_FieldPack_cbr { scopearsenal = 0; };
	class B_FieldPack_cbr_AAT: B_FieldPack_cbr { scopearsenal = 0; };
	class B_FieldPack_cbr_AA: B_FieldPack_cbr { scopearsenal = 0; };
	class B_FieldPack_cbr_AAA: B_FieldPack_cbr { scopearsenal = 0; };
	class B_FieldPack_cbr_Medic: B_FieldPack_cbr { scopearsenal = 0; };
	class B_FieldPack_ocamo_ReconExp: B_Carryall_ocamo { scopearsenal = 0; };
	class B_FieldPack_cbr_Ammo: B_Carryall_ocamo { scopearsenal = 0; };
	class B_FieldPack_cbr_RPG_AT: B_FieldPack_cbr { scopearsenal = 0; };
	class B_Carryall_ocamo_AAA: B_Carryall_ocamo { scopearsenal = 0; };
	class B_Carryall_ocamo_Eng: B_Carryall_ocamo { scopearsenal = 0; };
	class B_Carryall_cbr_AAT: B_Carryall_cbr { scopearsenal = 0; };
	class B_FieldPack_oucamo_AT: B_FieldPack_oucamo { scopearsenal = 0; };
	class B_FieldPack_oucamo_LAT: B_FieldPack_oucamo { scopearsenal = 0; };
	class B_Carryall_oucamo_AAT: B_Carryall_oucamo { scopearsenal = 0; };
	class B_FieldPack_oucamo_AA: B_FieldPack_oucamo { scopearsenal = 0; };
	class B_Carryall_oucamo_AAA: B_Carryall_oucamo { scopearsenal = 0; };
	class B_FieldPack_oucamo_AAR: B_Carryall_oucamo { scopearsenal = 0; };
	class B_FieldPack_oucamo_Medic: B_FieldPack_oucamo { scopearsenal = 0; };
	class B_FieldPack_oucamo_Ammo: B_Carryall_oucamo { scopearsenal = 0; };
	class B_FieldPack_oucamo_Repair: B_FieldPack_oucamo { scopearsenal = 0; };
	class B_Carryall_oucamo_Exp: B_Carryall_oucamo { scopearsenal = 0; };
	class B_Carryall_oucamo_Eng: B_Carryall_oucamo { scopearsenal = 0; };
	class B_Carryall_ocamo_AAR: B_Carryall_ocamo { scopearsenal = 0; };
	class B_Carryall_oucamo_AAR: B_Carryall_oucamo { scopearsenal = 0; };
	class I_Fieldpack_oli_AA: B_FieldPack_oli { scopearsenal = 0; };
	class I_Assault_Diver: B_FieldPack_blk { scopearsenal = 0; };
	class I_Fieldpack_oli_Ammo: B_Carryall_oli { scopearsenal = 0; };
	class I_Fieldpack_oli_Medic: B_FieldPack_oli { scopearsenal = 0; };
	class I_Fieldpack_oli_Repair: B_FieldPack_oli { scopearsenal = 0; };
	class I_Fieldpack_oli_LAT: B_AssaultPack_dgtl { scopearsenal = 0; };
	class I_Fieldpack_oli_AT: B_FieldPack_oli { scopearsenal = 0; };
	class I_Fieldpack_oli_AAR: B_TacticalPack_oli { scopearsenal = 0; };
	class I_Carryall_oli_AAT: B_Carryall_oli { scopearsenal = 0; };
	class I_Carryall_oli_Exp: B_Carryall_oli { scopearsenal = 0; };
	class I_Carryall_oli_AAA: B_Carryall_oli { scopearsenal = 0; };
	class I_Carryall_oli_Eng: B_Carryall_oli { scopearsenal = 0; };
	class G_TacticalPack_Eng: B_Carryall_oli { scopearsenal = 0; };
	class G_FieldPack_Medic: B_TacticalPack_blk { scopearsenal = 0; };
	class G_FieldPack_LAT: B_TacticalPack_blk { scopearsenal = 0; };
	class G_Carryall_Ammo: B_Carryall_oli { scopearsenal = 0; };
	class G_Carryall_Exp: B_Carryall_oli { scopearsenal = 0; };
	class B_TacticalPack_oli_AAR: B_TacticalPack_oli { scopearsenal = 0; };
	class B_BergenG_TEST_B_Soldier_overloaded: B_Carryall_oli { scopearsenal = 0; };
	
//	class B_Parachute: Bag_Base { class WeaponSlotsInfo : WeaponSlotsInfo { mass = 434; }; };			// this line makes the parachute dissappear for some reason
	
//	DLC content etc. --------------------------------------------------------------------


 	class B_Bergen_Base_F: Bag_Base {};
	class B_Bergen_mcamo_F: B_Bergen_Base_F { scopearsenal = 0;};
	class B_Bergen_dgtl_F: B_Bergen_Base_F { scopearsenal = 0;};
	class B_Bergen_hex_F: B_Bergen_Base_F { scopearsenal = 0;};
	class B_Bergen_tna_F: B_Bergen_Base_F { scopearsenal = 0;};
	class B_AssaultPack_tna_F: B_AssaultPack_Base { scopearsenal = 0;};
	class B_Carryall_ghex_F: B_Carryall_Base { scopearsenal = 0;};
	class B_FieldPack_ghex_F: B_FieldPack_Base { scopearsenal = 0;};
	class B_ViperHarness_base_F: Bag_Base {};
	class B_ViperHarness_blk_F: B_ViperHarness_base_F { scopearsenal = 0;};
	class B_ViperHarness_ghex_F: B_ViperHarness_base_F { scopearsenal = 0;};
	class B_ViperHarness_hex_F: B_ViperHarness_base_F { scopearsenal = 0;};
	class B_ViperHarness_khk_F: B_ViperHarness_base_F { scopearsenal = 0;};
	class B_ViperHarness_oli_F: B_ViperHarness_base_F { scopearsenal = 0;};
	class B_ViperLightHarness_base_F: Bag_Base {};
	class B_ViperLightHarness_blk_F: B_ViperLightHarness_base_F { scopearsenal = 0;};
	class B_ViperLightHarness_ghex_F: B_ViperLightHarness_base_F { scopearsenal = 0;};
	class B_ViperLightHarness_hex_F: B_ViperLightHarness_base_F { scopearsenal = 0;};
	class B_ViperLightHarness_khk_F: B_ViperLightHarness_base_F { scopearsenal = 0;};
	class B_ViperLightHarness_oli_F: B_ViperLightHarness_base_F { scopearsenal = 0;};
	class B_Carryall_oli_BTAmmo_F: B_Carryall_oli { scopearsenal = 0;};
	class B_Carryall_oli_BTAAA_F: B_Carryall_oli { scopearsenal = 0;};
	class B_Carryall_oli_BTAAT_F: B_Carryall_oli { scopearsenal = 0;};
	class B_AssaultPack_tna_BTMedic_F: B_AssaultPack_tna_F { scopearsenal = 0;};
	class B_Kitbag_rgr_BTEng_F: B_Kitbag_rgr { scopearsenal = 0;};
	class B_Kitbag_rgr_BTExp_F: B_Kitbag_rgr { scopearsenal = 0;};
	class B_Kitbag_rgr_BTAA_F: B_Kitbag_rgr { scopearsenal = 0;};
	class B_Kitbag_rgr_BTAT_F: B_Kitbag_rgr { scopearsenal = 0;};
	class B_AssaultPack_tna_BTRepair_F: B_AssaultPack_tna_F { scopearsenal = 0;};
	class B_AssaultPack_rgr_BTLAT_F: B_AssaultPack_rgr { scopearsenal = 0;};
	class B_Kitbag_rgr_BTReconExp_F: B_Kitbag_rgr { scopearsenal = 0;};
	class B_AssaultPack_rgr_BTReconMedic: B_AssaultPack_rgr { scopearsenal = 0;};

	class B_Kitbag_rgr_CTRGExp_F: B_Kitbag_rgr { scopearsenal = 0;};
	class B_AssaultPack_rgr_CTRGMedic_F: B_AssaultPack_rgr { scopearsenal = 0;};
	class B_AssaultPack_rgr_CTRGLAT_F: B_AssaultPack_rgr { scopearsenal = 0;};
	class B_Carryall_ghex_OTAmmo_F: B_Carryall_ghex_F { scopearsenal = 0;};
	class B_Carryall_ghex_OTAAR_AAR_F: B_Carryall_ghex_F { scopearsenal = 0;};
	class B_Carryall_ghex_OTAAA_F: B_Carryall_ghex_F { scopearsenal = 0;};
	class B_Carryall_ghex_OTAAT_F: B_Carryall_ghex_F { scopearsenal = 0;};
	class B_FieldPack_ghex_OTMedic_F: B_FieldPack_ghex_F { scopearsenal = 0;};
	class B_Carryall_ghex_OTEng_F: B_Carryall_ghex_F { scopearsenal = 0;};
	class B_Carryall_ghex_OTExp_F: B_Carryall_ghex_F { scopearsenal = 0;};
	class B_FieldPack_ghex_OTAA_F: B_FieldPack_ghex_F { scopearsenal = 0;};
	class B_FieldPack_ghex_OTAT_F: B_FieldPack_ghex_F { scopearsenal = 0;};
	class B_FieldPack_ghex_OTRepair_F: B_FieldPack_ghex_F { scopearsenal = 0;};
	class B_FieldPack_ghex_OTLAT_F: B_FieldPack_ghex_F { scopearsenal = 0;};
	class B_Carryall_ghex_OTReconExp_F: B_Carryall_ghex_F { scopearsenal = 0;};
	class B_FieldPack_ghex_OTReconMedic_F: B_FieldPack_ghex_F { scopearsenal = 0;};
	class B_FieldPack_ghex_OTRPG_AT_F: B_FieldPack_ghex_F { scopearsenal = 0;};
	class B_ViperHarness_hex_TL_F: B_ViperHarness_hex_F { scopearsenal = 0;};
	class B_ViperHarness_ghex_TL_F: B_ViperHarness_ghex_F { scopearsenal = 0;};
	class B_ViperHarness_hex_Exp_F: B_ViperHarness_hex_F { scopearsenal = 0;};
	class B_ViperHarness_ghex_Exp_F: B_ViperHarness_ghex_F { scopearsenal = 0;};
	class B_ViperHarness_hex_Medic_F: B_ViperHarness_hex_F { scopearsenal = 0;};
	class B_ViperHarness_ghex_Medic_F: B_ViperHarness_ghex_F { scopearsenal = 0;};
	class B_ViperHarness_hex_M_F: B_ViperHarness_hex_F { scopearsenal = 0;};
	class B_ViperHarness_ghex_M_F: B_ViperHarness_ghex_F { scopearsenal = 0;};
	class B_ViperHarness_hex_LAT_F: B_ViperHarness_hex_F { scopearsenal = 0;};
	class B_ViperHarness_ghex_LAT_F: B_ViperHarness_ghex_F { scopearsenal = 0;};
	class B_ViperHarness_hex_JTAC_F: B_ViperHarness_hex_F { scopearsenal = 0;};
	class B_ViperHarness_ghex_JTAC_F: B_ViperHarness_ghex_F { scopearsenal = 0;};
	class B_Kitbag_rgr_Para_3_F: B_Kitbag_rgr { scopearsenal = 0;};
	class B_Kitbag_cbr_Para_5_F: B_Kitbag_cbr { scopearsenal = 0;};
	class B_Kitbag_rgr_Para_8_F: B_Kitbag_rgr { scopearsenal = 0;};
	class B_FieldPack_cb_Bandit_3_F: B_FieldPack_cbr { scopearsenal = 0;};
	class B_Kitbag_cbr_Bandit_2_F: B_Kitbag_cbr { scopearsenal = 0;};
	class B_FieldPack_khk_Bandit_1_F: B_FieldPack_khk { scopearsenal = 0;};
	class B_FieldPack_blk_Bandit_8_F: B_FieldPack_blk { scopearsenal = 0;};
	
	
	
//----------------------------- base classes defintion -------------------------------------------------
	
	class Land;
	class LandVehicle: Land {};
	class StaticWeapon: LandVehicle {};
	class StaticMGWeapon: StaticWeapon {};
	class StaticATWeapon: StaticWeapon {};
	class StaticAAWeapon: StaticWeapon {};
	class StaticCannon: StaticWeapon {};
	class StaticGrenadeLauncher: StaticWeapon {};
	class StaticMortar: StaticWeapon {};
	class StaticSEARCHLight: StaticWeapon {};
	class Weapon_Bag_Base: Bag_Base {};
//	class GMG_TriPod: StaticGrenadeLauncher { mass = 1732; };
	class GMG_TriPod;

	class HMG_01_base_F: StaticMGWeapon {};
	class GMG_01_base_F: GMG_TriPod {};
	class HMG_01_high_base_F: HMG_01_base_F {};
	class HMG_01_A_base_F: HMG_01_base_F {};
	class GMG_01_high_base_F: GMG_01_base_F {};
	class GMG_01_A_base_F: GMG_01_base_F {};
	
// ------------------- AT, AA and UAV backpacks --------------------------------------------	
		
	class B_UAV_01_backpack_F: Weapon_Bag_Base { scopearsenal = 0;};
	class O_UAV_01_backpack_F: B_UAV_01_backpack_F { scopearsenal = 0;};
	class I_UAV_01_backpack_F: B_UAV_01_backpack_F { scopearsenal = 0;};
	class B_AT_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	class O_AT_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	class I_AT_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	class I_AA_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	class B_AA_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	class O_Static_Designator_02_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	class B_Static_Designator_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	class O_AA_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	
	// 60 mm mortar weight per backpack with 8 rounds ammo : 93,5 pounds => 42,4 kg / 2 => 467,7 points per backpack
	// .5 cal HMG weight per backpack with 600 rounds ammo ( mk30 ingame ) 128 pounds + 1200 rounds (133kg ) => 191 kg / 2 => 2104.5  per backpack
	// Mk 19 GMG weight per backpack with  140,6 pounds + (160 rounds ( 206 lb ) => 157 kg / 2 => 1731.8 per backpack
	
//---------------------------------------- new setup ---------------------------------------------------------	
	
			class B_HMG_01_high_weapon_F: Weapon_Bag_Base { scopearsenal = 0;
//			mass = 2105; 
			};				// this section is fine
			class O_HMG_01_high_weapon_F: B_HMG_01_high_weapon_F { scopearsenal = 0; 
//			mass = 2105; 
			};
			class I_HMG_01_high_weapon_F: B_HMG_01_high_weapon_F { scopearsenal = 0; 
//			mass = 2105; 
			};
			class B_GMG_01_high_weapon_F: B_HMG_01_high_weapon_F { scopearsenal = 0; 
//			mass = 1732; 
			};
			class O_GMG_01_high_weapon_F: B_GMG_01_high_weapon_F { scopearsenal = 0; 
//			mass = 1732; 
			};
			class I_GMG_01_high_weapon_F: B_GMG_01_high_weapon_F { scopearsenal = 0; 
//			mass = 1732; 
			};
			class B_HMG_01_support_high_F: Bag_Base { scopearsenal = 0; 
//			mass = 2105; 
			};
			class O_HMG_01_support_high_F: B_HMG_01_support_high_F { scopearsenal = 0; 
//			mass = 2105; 
			};
			class I_HMG_01_support_high_F: B_HMG_01_support_high_F { scopearsenal = 0; 
//			mass = 2105; 
			};
	
	
		
//------------------ crew served backpacks ---------------------------------	the aircraft mount should even be 20 pounds heavier
	
	

//------------------------------ available crew served weapons with mass adjustment -------------------------------------------



//	class I_Mortar_01_weapon_F: Weapon_Bag_Base { mass = 467.5; };				// weight is correct
//	class I_Mortar_01_support_F: Bag_Base { mass = 467.5; };					// weight is correct

	class I_HMG_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;
	//mass = 2104; 
	};
	class I_HMG_01_support_F: Bag_Base { scopearsenal = 0;
	//mass = 2104; 
	};
	
	class I_GMG_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;
//	mass = 1732; 
	};
	class B_HMG_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0;};
	class O_HMG_01_weapon_F: B_HMG_01_weapon_F { scopearsenal = 0;};

	

//---------------------- below are not to be used, but mass adjusted ----------------------------

	class O_Mortar_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0; 
//	mass = 467.5; 
	};
	class O_Mortar_01_support_F: Bag_Base { scopearsenal = 0;
//	mass = 467.5;
	};
	
	
	
	
	
//	class B_Mortar_01_support_F: Bag_Base { scopearsenal = 0;					// enabling this this line bugs leaves two tubes left
//	mass = 467.5;
//	};

	
//	class B_Mortar_01_weapon_F: Weapon_Bag_Base { scopearsenal = 0; 			// this line seem faulty
//	mass = 467.5; 
//	};
// test to see if I can remove these backpacks with usmilitary modf

//	class B_Mortar_01_weapon_F: Weapon_Bag_Base {};


// ------------------------- below are autonomous weapons, weight must be heavier, it is not ( already too heavy ) ------------------------------------------


	class B_HMG_01_support_F: Bag_Base { scopearsenal = 0;
//	mass = 2104; 
	};
	class O_HMG_01_support_F: B_HMG_01_support_F { scopearsenal = 0;
//	mass = 2104; 
	};
		class B_GMG_01_A_weapon_F: Weapon_Bag_Base { scopearsenal = 0; 
//	mass = 1732; 
	};
	class O_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F { scopearsenal = 0;
//	mass = 1732; 
	};
	class I_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F { scopearsenal = 0;
//	mass = 1732; 
	};
	
	class B_HMG_01_A_weapon_F: Weapon_Bag_Base { scopearsenal = 0; 
//	mass = 2104; 
	};
	class O_HMG_01_A_weapon_F: B_HMG_01_A_weapon_F { scopearsenal = 0; 
//	mass = 2104; 
	};
	class I_HMG_01_A_weapon_F: B_HMG_01_A_weapon_F { scopearsenal = 0;
//	mass = 2104; 
	};