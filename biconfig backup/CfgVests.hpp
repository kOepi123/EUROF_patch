// this file handles masses and loads of the carriers, vests and helmets
// part of cfgweapons
// also it sets armor values for helmets and vests


class usm_helmet_pasgt_w: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Helmet, PASGT, woodland";
		descriptionshort = "Size: Large. Ranger Body Armor. Level III-A rated kevlar helmet";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_w_ca.paa";
		model = "\us_military_units\usm_helmet_pasgt.p3d";
		hiddenSelections[] = {"6_helmet","6_goggles_swd"};
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_co.paa",""};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			allowedSlots[] = {701,901};
			uniformModel = "\us_military_units\usm_helmet_pasgt.p3d";
			modelSides[] = {"TCivilian","TWest"};
			hiddenSelections[] = {"6_helmet","6_goggles_swd"};
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_co.paa",""};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class usm_helmet_pasgt_w_m: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, woodland (Marines)";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_w_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_m_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_m_co.paa",""};
		};
	};
	class usm_helmet_pasgt_g_w: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, woodland";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_w_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_co.paa","us_military_units\textures\helmet_wood_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_co.paa","us_military_units\textures\helmet_wood_co.paa"};
		};
	};
	class usm_helmet_pasgt_g_w_m: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, woodland (Marines)";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_w_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_m_co.paa","us_military_units\textures\helmet_wood_m_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_wood_m_co.paa","us_military_units\textures\helmet_wood_m_co.paa"};
		};
	};
	class usm_helmet_pasgt_dcu: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, DCU";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_dcu_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_co.paa",""};
		};
	};
	class usm_helmet_pasgt_dcu_m: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, DCU (Marines)";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_dcu_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_m_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_m_co.paa",""};
		};
	};
	class usm_helmet_pasgt_g_dcu: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, DCU";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_dcu_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_co.paa","us_military_units\textures\helmet_dcu_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_co.paa","us_military_units\textures\helmet_dcu_co.paa"};
		};
	};
	class usm_helmet_pasgt_g_dcu_m: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, DCU (Marines)";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_dcu_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_m_co.paa","us_military_units\textures\helmet_dcu_m_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_dcu_m_co.paa","us_military_units\textures\helmet_dcu_m_co.paa"};
		};
	};
	class usm_helmet_pasgt_d: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, Desert";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_d_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_co.paa",""};
		};
	};
	class usm_helmet_pasgt_d_m: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT, Desert (Marines)";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_d_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_m_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_m_co.paa",""};
		};
	};
	class usm_helmet_pasgt_g_d: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, Desert";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_d_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_co.paa","us_military_units\textures\helmet_d_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_co.paa","us_military_units\textures\helmet_d_co.paa"};
		};
	};
	class usm_helmet_pasgt_g_d_m: usm_helmet_pasgt_w
	{
		author = "Delta Hawk";
		displayName = "Helmet, PASGT w/ SWD goggles, Desert (Marines)";
		picture = "\US_Military_Units\icons\pic_helmet_pasgt_g_d_m_ca.paa";
		hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_m_co.paa","us_military_units\textures\helmet_d_m_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"us_military_units\textures\helmet_d_m_co.paa","us_military_units\textures\helmet_d_m_co.paa"};
		};
	};
	class usm_helmet_cvc: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Helmet, CVC";
		picture = "\US_Military_Units\icons\pic_helmet_cvc_ca.paa";
		model = "\us_military_units\usm_helmet_cvc.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 25;
			allowedSlots[] = {701,901};
			uniformModel = "\us_military_units\usm_helmet_cvc.p3d";
			modelSides[] = {"TCivilian","TWest"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	class usm_helmet_safety: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Helmet, safety";
		picture = "\US_Military_Units\icons\pic_helmet_safety_ca.paa";
		model = "\us_military_units\usm_helmet_safety.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			allowedSlots[] = {701,901};
			uniformModel = "\us_military_units\usm_helmet_safety.p3d";
			modelSides[] = {"TCivilian","TWest"};
			armor = 1;
			passThrough = 0.5;
		};
	};
	class usm_vest_LBE_rm: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Gear, Load Bearing Equipment, rifleman";
		descriptionshort = "Size: Large. Standalone PASGT Vest. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_LBE_rm_ca.paa";
		model = "\us_military_units\usm_vest_light.p3d";
		hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem
		{
			uniformModel = "\us_military_units\usm_vest_light.p3d";
			hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 70;
			armor = 2;
			passThrough = 1;
		};
	};
	class usm_vest_LBE_rmp: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Equipment, rifleman w/ pistol";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_LBE_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 80;
		};
	};
	class usm_vest_LBE_gr: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, grenadier";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_LBE_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 80;
		};
	};
	class usm_vest_LBE_mg: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, machinegunner";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_LBE_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 90;
		};
	};
	class usm_vest_lbv_rm: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, rifleman, woodland";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_lbv_rm_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 70;
		};
	};
	class usm_vest_lbv_rmp: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, rifleman w/ pistol, woodland";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_lbv_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 70;
		};
	};
	class usm_vest_lbv_gr: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, grenadier, woodland";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_lbv_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 70;
		};
	};
	class usm_vest_lbv_mg: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, assistant machine gunner, woodland";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_lbv_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply240";
			mass = 90;
		};
	};
	class usm_vest_LBE_rm_m: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Equipment, rifleman (Marine 782)";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_LBE_rm_m_ca.paa";
		hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 80;
		};
	};
	class usm_vest_LBE_rmp_m: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Equipment, rifleman w/ pistol (Marine 782)";
		descriptionshort = "Size: Large. PASGT Vest with Carrier. Level II-A rated soft armor.";
		picture = "\US_Military_Units\icons\pic_vest_LBE_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 80;
		};
	};
	class usm_vest_LBE_gr_m: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, grenadier (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_LBE_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 80;
		};
	};
	class usm_vest_LBE_mg_m: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, machinegunner (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_LBE_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 90;
		};
	};
	class usm_vest_lbv_rm_m: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, rifleman, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_lbv_rm_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 70;
		};
	};
	class usm_vest_lbv_rmp_m: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, rifleman w/ pistol, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_lbv_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 70;
		};
	};
	class usm_vest_lbv_gr_m: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, grenadier, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_lbv_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 70;
		};
	};
	class usm_vest_lbv_mg_m: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, machine gunner, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_lbv_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply240";
			mass = 90;
		};
	};
	class usm_vest_pasgt: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_ca.paa";
		model = "\us_military_units\usm_vest_pasgt.p3d";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem
		{
			uniformModel = "\us_military_units\usm_vest_pasgt.p3d";
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply20";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.9;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.9;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.9;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.9;
				};
			};
		};
	};
	class usm_vest_pasgt_lbe_rm: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgt_lbe_rmp: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgt_lbe_gr: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_gr_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 150;
		};
	};
	class usm_vest_pasgt_lbe_mg: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_mg_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgt_lbv_rm: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_rm_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgt_lbv_rmp: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgt_lbv_gr: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgt_lbv_mg: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, machine gunner, woodland";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgt_lbe_rm_m: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_rm_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgt_lbe_rmp_m: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_rmp_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgt_lbe_gr_m: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_gr_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 150;
		};
	};
	class usm_vest_pasgt_lbe_mg_m: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbe_mg_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgt_lbv_rm_m: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_rm_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgt_lbv_rmp_m: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgt_lbv_gr_m: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgt_lbv_mg_m: usm_vest_pasgt
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, machine gunner, woodland (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgt_lbv_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdes: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_ca.paa";
		model = "\us_military_units\usm_vest_pasgtdes.p3d";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem
		{
			uniformModel = "\us_military_units\usm_vest_pasgtdes.p3d";
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply20";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.9;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.9;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.9;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.9;
				};
			};
		};
	};
	class usm_vest_pasgtdes_lbe_rm: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbe_rmp: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbe_gr: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_gr_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 150;
		};
	};
	class usm_vest_pasgtdes_lbe_mg: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_mg_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdes_lbv_rm: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_rm_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgtdes_lbv_rmp: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbv_gr: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbv_mg: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, machine gunner, Desert cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdes_lbe_rm_m: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, Desert cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_rm_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbe_rmp_m: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, Desert cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_rmp_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbe_gr_m: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, Desert cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_gr_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 150;
		};
	};
	class usm_vest_pasgtdes_lbe_mg_m: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, Desert cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbe_mg_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdes_lbv_rm_m: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, Desert cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_rm_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgtdes_lbv_rmp_m: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, Desert cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbv_gr_m: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, Desert cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdes_lbv_mg_m: usm_vest_pasgtdes
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, machine gunner, Desert cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdes_lbv_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, DCU cover2";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_ca.paa";
		model = "\us_military_units\usm_vest_pasgtdcu.p3d";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem
		{
			uniformModel = "\us_military_units\usm_vest_pasgtdcu.p3d";
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_belt","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_LC2_universal","3_LC2_ystrap","3_M7","3_M9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply20";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.9;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 3;
					passThrough = 0.9;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.9;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.9;
				};
			};
		};
	};
	class usm_vest_pasgtdcu_lbe_rm: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, DCU cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbe_rmp: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, DCU cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbe_gr: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, DCU cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_gr_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu_lbe_mg: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, DCU cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_mg_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu_lbv_rm: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, DCU cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_rm_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgtdcu_lbv_rmp: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, DCU cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_rmp_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbv_gr: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, DCU cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbv_mg: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, machine gunner, DCU cover";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_mg_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_ystrap","3_M7","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu_lbe_rm_m: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman, DCU cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_rm_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbe_rmp_m: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, rifleman w/ pistol, DCU cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_rmp_m_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbe_gr_m: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, grenadier, DCU cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_gr_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_mgpouch","3_m9","4_vest_lbv"};
			containerClass = "Supply200";
			mass = 150;
		};
	};
	class usm_vest_pasgtdcu_lbe_mg_m: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBE, machine gunner, DCU cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbe_mg_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_m9","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_pasgtdcu_lbv_rm_m: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman, DCU cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_rm_m_ca.paa";
		hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 130;
		};
	};
	class usm_vest_pasgtdcu_lbv_rmp_m: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, rifleman w/ pistol, DCU cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_rmp_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch3","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbv_gr_m: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, grenadier, DCU cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_gr_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_mgpouch","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply200";
			mass = 120;
		};
	};
	class usm_vest_pasgtdcu_lbv_mg_m: usm_vest_pasgtdcu
	{
		author = "Delta Hawk";
		displayName = "Vest, PASGT/LBV, machine gunner, DCU cover (Marine 782)";
		picture = "\US_Military_Units\icons\pic_vest_pasgtdcu_lbv_mg_m_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_med1","3_LC2_ystrap","3_m9","7_vest_m203"};
			containerClass = "Supply240";
			mass = 160;
		};
	};
	class usm_vest_rba: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, RBA, woodland";
		descriptionshort = "Size: Large. standalone Ranger Body Armor. Level III-A rated soft armor and two level III rifle plate inserts.";
		picture = "\US_Military_Units\icons\pic_vest_rba_ca.paa";
		model = "\us_military_units\usm_vest_rba.p3d";
		hiddenSelections[] = {"3_LC2_belt","3_LC2_ystrap","3_LC2_universal","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m91","3_m92","3_flashlight","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: VestItem
		{
			uniformModel = "\us_military_units\usm_vest_rba.p3d";
			hiddenSelections[] = {"3_LC2_belt","3_LC2_ystrap","3_LC2_universal","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m91","3_m92","3_flashlight","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply20";
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 40;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					passThrough = 0.2;
				};
			};
		};
	};
	class usm_vest_rba_lbe_rm: usm_vest_rba
	{
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, rifleman, woodland";
		descriptionshort = "Size: Large. Ranger Body Armor with Carrier. Level III-A rated soft armor and two level III rifle plate inserts";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbe_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m91","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m91","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply200";
			mass = 140;
		};
	};
	class usm_vest_rba_lbe_rmp: usm_vest_rba
	{
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, rifleman w/ pistol, woodland";
		descriptionshort = "Size: Large. Ranger Body Armor with Carrier. Level III-A rated soft armor and two level III rifle plate inserts";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbe_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m92","3_flashlight","4_vest_lbv","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m92","3_flashlight","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply200";
			mass = 140;
		};
	};
	class usm_vest_rba_lbe_gr: usm_vest_rba
	{
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, grenadier, woodland";
		descriptionshort = "Size: Large. Ranger Body Armor with Carrier. Level III-A rated soft armor and two level III rifle plate inserts";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbe_gr_ca.paa";
		hiddenSelections[] = {"3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m91","3_flashlight","4_vest_lbv","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m91","3_flashlight","4_vest_lbv","12_radio_saber1","m9pistol"};
			containerClass = "Supply200";
			mass = 140;
		};
	};
	class usm_vest_rba_lbe_mg: usm_vest_rba
	{
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBE, machine gunner, woodland";
		descriptionshort = "Size: Large. Ranger Body Armor with Carrier. Level III-A rated soft armor and two level III rifle plate inserts";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbe_mg_ca.paa";
		hiddenSelections[] = {"3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_m92","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_m92","4_vest_lbv","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply240";
			mass = 140;
		};
	};
	class usm_vest_rba_lbv_rm: usm_vest_rba
	{
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBV, rifleman, woodland";
		descriptionshort = "Size: Large. Ranger Body Armor with Carrier. Level III-A rated soft armor and two level III rifle plate inserts";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbv_rm_ca.paa";
		hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m91","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m91","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply200";
			mass = 140;
		};
	};
	class usm_vest_rba_lbv_rmp: usm_vest_rba
	{
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBV, rifleman w/ pistol, woodland";
		descriptionshort = "Size: Large. standalone Ranger Body Armor. Level III-A rated soft armor and two level III rifle plate inserts.";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbv_rmp_ca.paa";
		hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m92","3_flashlight","7_vest_m203"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_ammopouchpistol","3_LC2_mgpouch","3_m92","3_flashlight","7_vest_m203"};
			containerClass = "Supply200";
			mass = 140;
		};
	};
	class usm_vest_rba_lbv_gr: usm_vest_rba
	{
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBV, grenadier, woodland";
		descriptionshort = "Size: Large. standalone Ranger Body Armor. Level III-A rated soft armor and two level III rifle plate inserts.";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbv_gr_ca.paa";
		hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m92","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_holster","3_LC2_ammopouchpistol","3_LC2_medpouch1","3_LC2_mgpouch","3_m92","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply200";
			mass = 140;
		};
	};
	class usm_vest_rba_lbv_mg: usm_vest_rba
	{
		author = "Delta Hawk";
		displayName = "Vest, RBA/LBV, machine gunner, woodland";
		descriptionshort = "Size: Large. standalone Ranger Body Armor. Level III-A rated soft armor and two level III rifle plate inserts.";
		picture = "\US_Military_Units\icons\pic_vest_rba_lbv_mg_ca.paa";
		hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_m91","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"3_LC2_ystrap","3_LC2_ammopouch1","3_LC2_ammopouch2","3_LC2_holster","3_LC2_ammopouchpistol","3_m91","3_flashlight","7_vest_m203","12_radio_saber1","m9pistol"};
			containerClass = "Supply240";
			mass = 140;
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
	