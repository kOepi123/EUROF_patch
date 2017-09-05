// this file handles masses and loads of the carriers, vests and helmets
// part of cfgweapons
// also it sets armor values for helmets and vests


class usm_helmet_pasgt_w: ItemCore {
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Helmet, PASGT, woodland";
		descriptionshort = 
		"Size: Large. Personnel Armor System for Ground Troops helmet<br/>Level III-A rated kevlar helmet";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_w_ca.paa";
		model = "\us_military_units\usm_helmet_pasgt.p3d";
		hiddenSelections[] = {"6_helmet","6_goggles_swd"};
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_co.paa",""};
		class ItemInfo: HeadgearItem {
			mass = 40;
			allowedSlots[] = {701,901};
			uniformModel = "\us_military_units\usm_helmet_pasgt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"6_helmet","6_goggles_swd"};
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_co.paa",""};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class usm_helmet_pasgt_w_m: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, woodland (Marines)";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_w_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_m_co.paa",""};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_m_co.paa",""};
		};
	};
	class usm_helmet_pasgt_g_w: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, woodland";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_w_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_co.paa","us_military_units\textures\helmet_wood_co.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_co.paa","us_military_units\textures\helmet_wood_co.paa"};
		};
	};
	class usm_helmet_pasgt_g_w_m: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, woodland (Marines)";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_w_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_m_co.paa","us_military_units\textures\helmet_wood_m_co.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_m_co.paa","us_military_units\textures\helmet_wood_m_co.paa"};
		};
	};
	class usm_helmet_pasgt_dcu: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, DCU";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_dcu_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_co.paa",""};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_co.paa",""};
		};
	};
	class usm_helmet_pasgt_dcu_m: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, DCU (Marines)";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_dcu_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_m_co.paa",""};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_m_co.paa",""};
		};
	};
	class usm_helmet_pasgt_g_dcu: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, DCU";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_dcu_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_co.paa","us_military_units\textures\helmet_dcu_co.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_co.paa","us_military_units\textures\helmet_dcu_co.paa"};
		};
	};
	class usm_helmet_pasgt_g_dcu_m: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, DCU (Marines)";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_dcu_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_m_co.paa","us_military_units\textures\helmet_dcu_m_co.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_m_co.paa","us_military_units\textures\helmet_dcu_m_co.paa"};
		};
	};
	class usm_helmet_pasgt_d: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, Desert";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_d_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_co.paa",""};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_co.paa",""};
		};
	};
	class usm_helmet_pasgt_d_m: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, Desert (Marines)";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_d_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_m_co.paa",""};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_m_co.paa",""};
		};
	};
	class usm_helmet_pasgt_g_d: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, Desert";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_d_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_co.paa","us_military_units\textures\helmet_d_co.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_co.paa","us_military_units\textures\helmet_d_co.paa"};
		};
	};
	class usm_helmet_pasgt_g_d_m: usm_helmet_pasgt_w {
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, Desert (Marines)";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_d_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_m_co.paa","us_military_units\textures\helmet_d_m_co.paa"};
		class ItemInfo: ItemInfo {
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_m_co.paa","us_military_units\textures\helmet_d_m_co.paa"};
		};
	};
	class usm_helmet_cvc: ItemCore {
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Helmet, CVC";
		picture = "\US_Military_Units\icons\pic_helmet_cvc_ca.paa";
		model = "\us_military_units\usm_helmet_cvc.p3d";
		class ItemInfo: HeadgearItem {
			mass = 51;
			allowedSlots[] = {701,901};
			uniformModel = "\us_military_units\usm_helmet_cvc.p3d";
			modelSides[] = {"TCivilian","TWest"};
			class HitpointsProtectionInfo {
				class Head
				{
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	class usm_helmet_safety: ItemCore {
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Helmet, safety";
		picture = "\US_Military_Units\icons\pic_helmet_safety_ca.paa";
		model = "\us_military_units\usm_helmet_safety.p3d";
		class ItemInfo: HeadgearItem {
			mass = 20;
			allowedSlots[] = {701,901};
			uniformModel = "\us_military_units\usm_helmet_safety.p3d";
			modelSides[] = {"TCivilian","TWest"};
			armor = 1;
			passThrough = 0.5;
		};
	};
	class usm_vest_LBE_rm: ItemCore {			// 6,9 : 1,76
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Gear, LBE, rifleman";
		descriptionshort =
		"Belt Size: Large. Load Bearing Equipment Carrier<br/>no protection <br/>9 magazines, 4 grenades";
		picture = "\US_Military_Units\icons\pic_vest_LBE_rm_ca.paa";
		model = "\us_military_units\usm_vest_light.p3d";
		hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem {
			uniformModel = "\us_military_units\usm_vest_light.p3d";
			hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply180";
			mass = 38.8;
			armor = 2;
			passThrough = 1;
		};
	};
	class usm_vest_LBE_rmp: usm_vest_LBE_rm	{		// 7,2 : 1,92
		author = "Delta Hawk";
		displayName = "Gear, LBE, rifleman w/ pistol";
		descriptionshort =
		"Belt Size: Large. Load Bearing Equipment Carrier<br/>no protection <br/>6 magazines, 4 grenades, 1 pistol magazines";
		picture = "\US_Military_Units\icons\pic_vest_LBE_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_LC2_ammopouch3","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_LC2_ammopouch3","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply190";
			mass = 42.3;
		};
	};
	class usm_vest_LBE_gr: usm_vest_LBE_rm {		// 10,5 : 2,73
		author = "Delta Hawk";
		displayName = "Gear, LBE, grenadier";
		descriptionshort =
		"Belt Size: Large. Load Bearing Equipment Carrier<br/>no protection <br/>6 magazines, 4 grenades, 24 M203s";
		picture = "\US_Military_Units\icons\pic_vest_LBE_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply250";
			mass = 60.2;
		};
	};
	class usm_vest_LBE_mg: usm_vest_LBE_rm {		// 6,82 : 1,76	
		author = "Delta Hawk";
		displayName = "Gear, LBV, machinegunner";
		descriptionshort =
		"Belt Size: Large. Load Bearing Equipment Carrier<br/>no protection <br/>2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_LBE_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply180";
			mass = 38.8;
		};
	};
	class usm_vest_lbv_rm: usm_vest_LBE_rm	{			// 10,4 kg : 2,73
		author = "Delta Hawk";
		displayName = "Gear, LBV, rifleman, woodland";
		descriptionshort = 
		"Size: Large. Load Bearing Vest<br/>no protection<br/>12 Magazines, 6 Grenades";
		picture = "\US_Military_Units\icons\pic_vest_lbv_rm_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply250";
			mass = 60.2;
		};
	};
	class usm_vest_lbv_rmp: usm_vest_LBE_rm	{			// 8,3 kg : 2,7 kg
		author = "Delta Hawk";
		displayName = "Gear, LBV, rifleman w/ pistol, woodland";
		descriptionshort = 
		"Size: Large. Load Bearing Vest<br/>no protection<br/>9 Magazines, 4 Grenades, 1 pistol magazines";
		picture = "\US_Military_Units\icons\pic_vest_lbv_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply210";
			mass = 59.2;
		};
	};
	class usm_vest_lbv_gr: usm_vest_LBE_rm {		// 9,59 : 2,73
		author = "Delta Hawk";
		displayName = "Gear, LBV, grenadier, woodland";
		descriptionshort = 
		"Size: Large. Load Bearing Vest<br/>no protection<br/>6 Magazines, 4 Grenades, 18 M203s";
		picture = "\US_Military_Units\icons\pic_vest_lbv_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply240";
			mass = 60.2;
		};
	};
	class usm_vest_lbv_mg: usm_vest_LBE_rm {		//11,9 : 2,84
		author = "Delta Hawk";
		displayName = "Gear, LBV, assistant machine gunner, woodland";
		descriptionshort = 
		"Size: Large. Load Bearing Vest<br/>no protection<br/>6 Magazines, 2 Grenades, 2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_lbv_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply280";
			mass = 62.5;
		};
	};
	class usm_vest_LBE_rm_m: usm_vest_LBE_rm {		//5,3 kg : 1,76
		author = "Delta Hawk";
		displayName = "Corps Gear, LBE, rifleman (Marine 782)";
		descriptionshort = 
		"Size: Large. Load Bearing Equipment Carrier<br/>no protection<br/>6 Magazines, 4 Grenades";
		picture = "\US_Military_Units\icons\pic_vest_LBE_rm_m_ca.paa";
		hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply140";
			mass = 38.8;
		};
	};
	class usm_vest_LBE_rmp_m: usm_vest_LBE_rm {		// 5,6 kg : 1,92
		author = "Delta Hawk";
		displayName = "Corps Gear, LBE, rifleman w/ pistol (Marine 782)";
		descriptionshort = 
		"Size: Large. Load Bearing Equipment Carrier<br/>no protection<br/>4 Magazines, 4 Grenades, 2 pistol mgazines";
		picture = "\US_Military_Units\icons\pic_vest_LBE_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply150";
			mass = 42.3;
		};
	};
	class usm_vest_LBE_gr_m: usm_vest_LBE_rm {		// 10,53 kg : 1,87 kg
		author = "Delta Hawk";
		displayName = "Corps Gear, LBE, grenadier (Marine 782)";
		descriptionshort = 
		"Size: Large. Load Bearing Equipment Carrier<br/>no protection<br/>6 Magazines, 4 Grenades, 24 M203s";
		picture = "\US_Military_Units\icons\pic_vest_LBE_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
			containerClass = "Supply250";
			mass = 60.2;
		};
	};
	class usm_vest_LBE_mg_m: usm_vest_LBE_rm {		// 6,53 kg : 1,48 kg
		author = "Delta Hawk";
		displayName = "Corps Gear, LBE, machinegunner (Marine 782)";
		descriptionshort = 
		"Size: Large. Load Bearing Carrier<br/>no protection<br/>2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_LBE_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply170";
			mass = 32.5;
		};
	};
	class usm_vest_lbv_rm_m: usm_vest_LBE_rm {		// 10,4 : 2,73
		author = "Delta Hawk";
		displayName = "Corps Gear, LBV, rifleman, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Load Bearing Vest<br/>no protection<br/>12 Magazines, 6 Grenades";
		picture = "\US_Military_Units\icons\pic_vest_lbv_rm_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply250";
			mass = 60.2;
		};
	};
	class usm_vest_lbv_rmp_m: usm_vest_LBE_rm {		// 8,28 kg : 2,89
		author = "Delta Hawk";
		displayName = "Corps Gear, LBV, rifleman w/ pistol, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Load Bearing Vest<br/>no protection<br/>9 Magazines, 4 Grenades, 1 pistol magazine";
		picture = "\US_Military_Units\icons\pic_vest_lbv_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply210";
			mass = 59.2;
		};
	};
	class usm_vest_lbv_gr_m: usm_vest_LBE_rm {		// 10,52 kg : 2,73
		author = "Delta Hawk";
		displayName = "Corps Gear, LBV, grenadier, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Load Bearing Vest<br/>no protection<br/>6 Magazines, 4 Grenades, 18 M203s";
		picture = "\US_Military_Units\icons\pic_vest_lbv_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply250";
			mass = 60.2;
		};
	};
	class usm_vest_lbv_mg_m: usm_vest_LBE_rm {		//11,9 kg : 2,84
		author = "Delta Hawk";
		displayName = "Corps Gear, LBV, assistant machine gunner, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Load Bearing Vest<br/>no protection<br/>6 Magazines, 2 Grenades, 2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_lbv_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply290";
			mass = 62.5;
		};
	};
	class usm_vest_pasgt: ItemCore {		// 0,2 kg : 4,6
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest<br/>Level II-A rated soft armor vest<br/>no attachments";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_ca.paa";
		model = "\us_military_units\usm_vest_pasgt.p3d";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem {
			uniformModel = "\us_military_units\usm_vest_pasgt.p3d";
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply5";
			mass = 101.3;
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.9;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.9;
				};
				class Diaphragm	{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.9;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.9;
				};
			};
		};
	};
	class usm_vest_pasgt_lbe_rm: usm_vest_pasgt {			// 6,9 : 6,36
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>9 Magazines, 4 Grenades";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply180";
			mass = 140.1;
		};
	};
	class usm_vest_pasgt_lbe_rmp: usm_vest_pasgt {			//7,2 : 6,52
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>9 Magazines, 4 Grenades, 1 pistol magazines";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply190";
			mass = 143.6;
		};
	};
	class usm_vest_pasgt_lbe_gr: usm_vest_pasgt	{		// 10,53 kg : 6,47
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 Magazines, 4 Grenades, 24 M203s";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_gr_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply250";
			mass = 161.5;
		};
	};
	class usm_vest_pasgt_lbe_mg: usm_vest_pasgt {		// 6,53 kg : 6,1
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_mg_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply170";
			mass = 133.8;
		};
	};
	class usm_vest_pasgt_lbv_rm: usm_vest_pasgt {			// 10,4 : 7,33
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>10 magazines, 6 grenades";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_rm_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply250";
			mass = 161.5;
		};
	};
	class usm_vest_pasgt_lbv_rmp: usm_vest_pasgt {			// 8,3 : 7,3
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>8 magazines, 4 grenades, 2 pistol ammo pouches";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply210";
			mass = 160.5;
		};
	};
	class usm_vest_pasgt_lbv_gr: usm_vest_pasgt {			// 10,5 : 7,33
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 magazines, 4 grenades, 18 M203s";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply250";
			mass = 161.5;
		};
	};
	class usm_vest_pasgt_lbv_mg: usm_vest_pasgt	{			//11,9 : 7,44
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, assistant machine gunner, woodland";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 magazines, 2 grenades, 2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply290";
			mass = 163.8;
		};
	};
	class usm_vest_pasgt_lbe_rm_m: usm_vest_pasgt {			// 5,3 : 6,36
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, rifleman, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 Magazines, 4 Grenades";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_rm_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply140";
			mass = 140.1;
		};
	};
	class usm_vest_pasgt_lbe_rmp_m: usm_vest_pasgt {		// 5,2 kg : 6,52
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, rifleman w/ pistol, woodland (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 Magazines, 4 grenades, 1 pistol magazines";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_rmp_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply140";
			mass = 143.6;
		};
	};
	class usm_vest_pasgt_lbe_gr_m: usm_vest_pasgt {			// 10,5 kg : 7,33
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, grenadier, woodland (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 magazines, 4 grenades, 24 M203s";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_gr_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
			containerClass = "Supply250";
			mass = 161.5;
		};
	};
	class usm_vest_pasgt_lbe_mg_m: usm_vest_pasgt {			// 6,5 : 6.08
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, machine gunner, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_mg_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply170";
			mass = 133.8;
		};
	};
	class usm_vest_pasgt_lbv_rm_m: usm_vest_pasgt {			// 10,4 kg : 7,3
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, rifleman, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>12 magazines, 6 grenades";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_rm_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply250";
			mass = 161.5;
		};
	};
	class usm_vest_pasgt_lbv_rmp_m: usm_vest_pasgt {		// 8,3 : 7,3
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, rifleman w/ pistol, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>8 magazines, 2 grenades, 1 pistol magazines";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply210";
			mass = 160.5;
		};
	};
	class usm_vest_pasgt_lbv_gr_m: usm_vest_pasgt {			// 8,1 : 5,96
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, grenadier, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 Magazines, 6 Grenades, 18 M203s";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 131.3;
		};
	};
	class usm_vest_pasgt_lbv_mg_m: usm_vest_pasgt {			// 11,9 : 7,44
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, assistant machine gunner, woodland (Marine 782)";
		descriptionshort = 
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 Magazines, 2 Grenades, 2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply290";
			mass = 163.8;
		};
	};
	class usm_vest_pasgtdes: ItemCore {
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, Desert cover";
		scopearsenal = 0;
		descriptionshort = 
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_ca.paa";
		model = "\us_military_units\usm_vest_pasgtdes.p3d";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem {
			uniformModel = "\us_military_units\usm_vest_pasgtdes.p3d";
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply5";
			mass = 60;
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.9;
				};
				class Chest	{
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.9;
				};
				class Diaphragm	{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.9;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.9;
				};
			};
		};
	};
	class usm_vest_pasgtdes_lbe_rm: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, Desert cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbe_rmp: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, Desert cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbe_gr: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, Desert cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_gr_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 150;
		};
	};
	class usm_vest_pasgtdes_lbe_mg: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, Desert cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_mg_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdes_lbv_rm: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, Desert cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_rm_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgtdes_lbv_rmp: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, Desert cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbv_gr: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, Desert cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbv_mg: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, machine gunner, Desert cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdes_lbe_rm_m: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, rifleman, Desert cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_rm_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbe_rmp_m: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, rifleman w/ pistol, Desert cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_rmp_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbe_gr_m: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, grenadier, Desert cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_gr_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 150;
		};
	};
	class usm_vest_pasgtdes_lbe_mg_m: usm_vest_pasgtdes	{
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, machine gunner, Desert cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_mg_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdes_lbv_rm_m: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, rifleman, Desert cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_rm_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgtdes_lbv_rmp_m: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, rifleman w/ pistol, Desert cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbv_gr_m: usm_vest_pasgtdes {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, grenadier, Desert cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbv_mg_m: usm_vest_pasgtdes	{
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, machine gunner, Desert cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu: ItemCore {
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, DCU cover";
		descriptionshort =
		"Size: Large.  Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_ca.paa";
		model = "\us_military_units\usm_vest_pasgtdcu.p3d";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem {
			uniformModel = "\us_military_units\usm_vest_pasgtdcu.p3d";
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply5";
			mass = 60;
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.9;
				};
				class Chest	{
					hitpointName = "HitChest";
					armor = 3;
					passThrough = 0.9;
				};
				class Diaphragm	{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.9;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.9;
				};
			};
		};
	};
	class usm_vest_pasgtdcu_lbe_rm: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, DCU cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 Mgazines, 4 Grenades";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbe_rmp: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, DCU cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 Magazines, 4 Grenades, 1 pistol magazines";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbe_gr: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, DCU cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 Magazines, 4 Grenades";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_gr_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu_lbe_mg: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, DCU cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>2 MG pouches";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_mg_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu_lbv_rm: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, DCU cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_rm_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgtdcu_lbv_rmp: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, DCU cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbv_gr: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, DCU cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 magazines, 4 grenades, 18 M203s";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight",
//		"3_LC2_ammopouch1",
		"3_LC2_ammopouchpistol","3_LC2_holster",
		"3_LC2_mgpouch",
		"3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight",
//			"3_LC2_ammopouch1",
			"3_LC2_ammopouchpistol","3_LC2_holster",
			"3_LC2_mgpouch",
			"3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbv_mg: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, assistant machine gunner, DCU cover";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>6 magazines, 2 grenades, 2 MG pouches";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu_lbe_rm_m: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, rifleman, DCU cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>4 magazines, 4 Grenades";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_rm_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbe_rmp_m: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, rifleman w/ pistol, DCU cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>4 Magazines, 4 Grenades, 1 pistol magazines";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_rmp_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbe_gr_m: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, grenadier, DCU cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>4 Magazines, 4 Grenades, 24 M203s";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_gr_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
			containerClass = "Supply230";
			mass = 0;
		};
	};
	class usm_vest_pasgtdcu_lbe_mg_m: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBE, machine gunner, DCU cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>2 MG pouches";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_mg_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu_lbv_rm_m: usm_vest_pasgtdcu	{
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, rifleman, DCU cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>10 magazines, 4 grenades";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_rm_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgtdcu_lbv_rmp_m: usm_vest_pasgtdcu {
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, rifleman w/ pistol, DCU cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>10 magazines, 4 grenades, 1 pistol magazines";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbv_gr_m: usm_vest_pasgtdcu	{
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, grenadier, DCU cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>18 M203s";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbv_mg_m: usm_vest_pasgtdcu	{
		author = "Delta Hawk";
		displayName = "Corps Vest, PASGT/LBV, machine gunner, DCU cover (Marine 782)";
		descriptionshort =
		"Size: Large. Personnel Armor System for Ground Troops vest with Carrier<br/>Level II-A rated soft armor vest<br/>2 MG pouches";
		scopearsenal = 0;
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_rba: ItemCore {			// 0,2 : 11,4
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, RBA, woodland";
		descriptionshort =
		"Size: Large. Ranger Body Armor vest<br/> Level III-A rated soft armor with two level III rifle plate inserts<br/>no attachments";
		picture = "\US_Military_Units\icons\pic_vest_rba_ca.paa";
		model = "\us_military_units\usm_vest_rba.p3d";
		hiddenSelections[] = {"3_LC2_belt","3_LC2_ystrap","3_LC2_universal","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m91","3_m92","3_flashlight","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: VestItem {
			uniformModel = "\us_military_units\usm_vest_rba.p3d";
			hiddenSelections[] = {"3_LC2_belt","3_LC2_ystrap","3_LC2_universal","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m91","3_m92","3_flashlight","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply5";
			mass = 251.2;
			class HitpointsProtectionInfo {
				class Chest	{
					hitpointName = "HitChest";
					armor = 40;
					passThrough = 0.2;
				};
				class Diaphragm	{
					hitpointName = "HitDiaphragm";
					armor = 40;
					passThrough = 0.2;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 40;
					passThrough = 0.2;
				};
			};
		};
	};
	class usm_vest_rba_lbe_rm: usm_vest_rba	{			// 8,5 : 13,2
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, rifleman, woodland";
		descriptionshort =
		"Size: Large. Ranger Body Armor vest<br/> Level III-A rated soft armor with two level III rifle plate inserts<br/>12 magazines, 4 Grenades";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbe_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m91","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m91","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply210";
			mass = 289.9;
		};
	};
	class usm_vest_rba_lbe_rmp: usm_vest_rba {			// 7,4 : 13
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, rifleman w/ pistol, woodland";
		descriptionshort = 
		"Size: Large. Ranger Body Armor with Carrier<br/>III-A rated soft armor and two level III rifle plate inserts<br/>12 magazines, 3 Grenades, 1 pistol magazines, radio";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbe_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m92","3_flashlight","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m92","3_flashlight","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply190";
			mass = 287.2;
		};
	};
	class usm_vest_rba_lbe_gr: usm_vest_rba {			// 13,8 : 14,6
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, grenadier, woodland";
		descriptionshort = 
		"Size: Large. Ranger Body Armor with Carrier<br/>Level III-A rated soft armor and two level III rifle plate inserts<br/>12 magazines, 4 Grenades, 24 M203s";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbe_gr_ca.paa";
		hiddenSelections[] = {"3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m91","3_flashlight","4_vest_lbv","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m91","3_flashlight","4_vest_lbv","12_radio_saber1","m9pistol"};
			containerClass = "Supply330";
			mass = 320.3;
		};
	};
	class usm_vest_rba_lbe_mg: usm_vest_rba	{			// 6,53 : 12,88
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, machine gunner, woodland";
		descriptionshort = 
		"Size: Large. Ranger Body Armor with Carrier<br/>Level III-A rated soft armor and two level III rifle plate inserts<br/>2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbe_mg_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_m92","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_m92","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply170";
			mass = 283.7;
		};
	};
	class usm_vest_rba_lbv_rm: usm_vest_rba	{			// 12,8 : 14,3
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, rifleman, woodland";
		descriptionshort = 
		"Size: Large. Ranger Body Armor with Carrier<br/>Level III-A rated soft armor and two level III rifle plate inserts<br/>18 magazines, 4 grenades";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbv_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_ystrap","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m91","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ystrap","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m91","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply310";
			mass = 313.6;
		};
	};
	class usm_vest_rba_lbv_rmp: usm_vest_rba {			// 12 kg : 14.5
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBV, rifleman w/ pistol, woodland";
		descriptionshort = 
		"Size: Large. Ranger Body Armor with Carrier<br/>Level III-A rated soft armor and two level III rifle plate inserts<br/>12 magazines, 5 grenades, 1 pistol magazines, radio";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbv_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m92","3_flashlight","7_vest_m203"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m92","3_flashlight","7_vest_m203"};
			containerClass = "Supply290";
			mass = 319.3;
		};
	};
	class usm_vest_rba_lbv_gr: usm_vest_rba	{		// 13.8 :  14,5
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBV, grenadier, woodland";
		descriptionshort = 
		"Size: Large. Ranger Body Armor with Carrier<br/>Level III-A rated soft armor and two level III rifle plate inserts<br/>12 Magazines, 4 Grenades, 18 M203s";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbv_gr_ca.paa";
		hiddenSelections[] = {"3_LC2_ystrap","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m92","3_flashlight","7_vest_m203","4_vest_lbv","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m92","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply330";
			mass = 320.3;
		};
	};
	class usm_vest_rba_lbv_mg: usm_vest_rba {			// 11,9 : 14,3
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBV, assistant machine gunner, woodland";
		descriptionshort = 
		"Size: Large. Ranger Body Armor with Carrier<br/>Level III-A rated soft armor and two level III rifle plate inserts<br/>6 magazines, 2 grenades, 2 MG pouches";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbv_mg_ca.paa";
		hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_m91","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_m91","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply290";
			mass = 313.2;
		};
	};
	class usm_vest_safety: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, safety, reflective";
		picture = "\US_Military_Units\icons\pic_vest_safety_ca.paa";
		model = "\us_military_units\usm_vest_safety.p3d";
		class ItemInfo: VestItem
		{
			uniformModel = "\us_military_units\usm_vest_safety.p3d";
			containerClass = "Supply1";
			mass = 5;
			armor = 0;
			passThrough = 1;
		};	