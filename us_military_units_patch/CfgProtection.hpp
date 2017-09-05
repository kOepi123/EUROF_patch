// handles the armor values for helmets and vests

	class usm_bdu_w: Uniform_Base
	{
		displayName = "BDUs, blouse/trousers, woodland";
		class ItemInfo: UniformItem
		{
			mass = 31;
		};
	};
	class usm_bdu_cap_wdl: ItemCore	{
		weaponPoolAvailable = 1;
		displayName = "BDU cover, woodland";
		class ItemInfo: HeadgearItem {
			mass = 3.1;
			allowedSlots[] = {701,801,901};
			armor = 0;
			passThrough = 1;
		};
	};
	class usm_bdu_boonie_wdl: ItemCore {
		weaponPoolAvailable = 1;
		displayName = "BDU boonie, woodland";
		class ItemInfo: HeadgearItem {
			mass = 3.1;
			allowedSlots[] = {701,801,901};
			armor = 0;
			passThrough = 1;
		};
	};
	class usm_helmet_pasgt_w: ItemCore {
		weaponPoolAvailable = 1;
		displayName = "Helmet, PASGT, woodland";
		descriptionshort = "Size: Large. Level III-A rated protection";
		class ItemInfo: HeadgearItem {
			mass = 40;
			allowedSlots[] = {701,901};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class usm_helmet_cvc: ItemCore
	{
		weaponPoolAvailable = 1;
		displayName = "Helmet, CVC";
		descriptionshort = "Size: Large. Level III-A rated protections";
		class ItemInfo: HeadgearItem
		{
			mass = 50;
			allowedSlots[] = {701,901};
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
		weaponPoolAvailable = 1;
		displayName = "Helmet, safety";
		class ItemInfo: HeadgearItem
		{
			mass = 9;
			allowedSlots[] = {701,901};
			armor = 0;
			passThrough = 1;
		};
	};
	class usm_vest_pasgt: ItemCore
	{
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, woodland";
		descriptionshort = "Size: Large. Level II-A rated protection";
		class ItemInfo: VestItem
		{
			containerClass = "Supply20";
			mass = 131.3;
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
	class usm_vest_pasgtdes: ItemCore
	{
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, Desert cover";
		descriptionshort = "Size: Large. Level II-A rated protection";
		class ItemInfo: VestItem
		{
			containerClass = "Supply100";
			mass = 101.3;
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
	class usm_vest_pasgtdcu: ItemCore
	{
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, DCU cover2";
		descriptionshort = "Size: Large. Level II-A rated protection";
		class ItemInfo: VestItem
		{
			containerClass = "Supply100";
			mass = 101.3;							// equals 4.6 kg
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
		class usm_vest_LBE_rm: ItemCore
	{
		author = "Delta Hawk";
		scope = 2;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Gear, Load Bearing Equipment, rifleman";
//		picture = "\US_Military_Units\icons\pic_vest_LBE_rm_ca.paa";
//		model = "\us_military_units\usm_vest_light.p3d";
		hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
		class ItemInfo: VestItem
		{
//			uniformModel = "\us_military_units\usm_vest_light.p3d";
			hiddenSelections[] = {"camo","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_mgpouch","3_M7","4_vest_lbv","7_vest_m203"};
			containerClass = "Supply100";
			mass = 30;
			armor = 0;
			passThrough = 1;
		};
	};
	class usm_vest_LBE_gr: usm_vest_LBE_rm
	{
		author = "Delta Hawk";
		displayName = "Gear, Load Bearing Vest, grenadier";
		descriptionshort = "Size: Large. Ranger Body Armor. Level III-A rated soft armor and two level III rifle plate inserts";
//		picture = "\US_Military_Units\icons\pic_vest_LBE_gr_ca.paa";
		hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","3_flashlight","3_LC2_ammopouch2","3_LC2_ammopouch3","3_LC2_ammopouchpistol","3_LC2_holster","3_LC2_ifak","3_LC2_med1","3_LC2_mgpouch","3_M7","4_vest_lbv"};
			containerClass = "Supply200";			// holds 24 203s and 4 magazines
			mass = 60;
		};
	};
	class usm_vest_rba: ItemCore
	{
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, RBA, woodland";
		descriptionshort = "Size: Large. Ranger Body Armor. Level III-A rated soft armor and two level III rifle plate inserts";
		class ItemInfo: VestItem
		{
			containerClass = "Supply100";			//equals 6x 30 round magazines, two grenades and small stuff	
			mass = 253.4;								// equals 11.5 kg with aluminmoxyd rifle plates
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