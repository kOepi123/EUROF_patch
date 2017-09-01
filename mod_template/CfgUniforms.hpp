// this files should make two or more uniforms for military and civilians ( size and stamina effect )
// additionally it will create different vests with different armor values: flak vest, bandoleer, heavy armor vest



class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type = 801;
	};
	class Uniform_Base: ItemCore
	{
		scope = 0;
		allowedSlots[] = {901};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class U_BasicBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Underwear1";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\basicbody_grey_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Underwear_F";
			containerClass = "Supply0";
			mass = 5;
		};
	};
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Combat_fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CombatUniform_mcam_tshirt: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Combat_fatigues_tee";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_soldier_AR_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CombatUniform_mcam_vest: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Recon_fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_SL_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_GhillieSuit: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Ghillie_suit";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_sniper_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_HeliPilotCoveralls: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_HELIPILOT_COVERALLS_NATO_0";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_sage_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Helipilot_F";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	class U_B_Wetsuit: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_Wetsuit0";
		picture = "\A3\characters_f\data\ui\icon_U_B_Wetsuit_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A3\Characters_F\Common\Data\diver_suit_nato_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_diver_F";
			containerClass = "Supply80";
			uniformType = "Neopren";
			mass = 60;
		};
	};
	class U_O_CombatUniform_ocamo: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Iran_Fatigues_hex";
		picture = "\A3\characters_f\data\ui\icon_U_OI_CombatUniform_ocamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Soldier_F";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class U_O_GhillieSuit: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Ghillie_suit_Iran";
		picture = "\A3\characters_f\data\ui\icon_U_ghillie_oucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_sniper_F";
			containerClass = "Supply60";
			mass = 100;
		};
	};
	class U_O_PilotCoveralls: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Pilot_coveralls_Iran";
		picture = "\A3\characters_f\data\ui\icon_U_OI_PilotCoveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_iran_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_helipilot_F";
			containerClass = "Supply60";
			mass = 100;
		};
	};
	class U_O_Wetsuit: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_OI_Wetsuit0";
		picture = "\A3\characters_f\data\ui\icon_U_OI_Wetsuit_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\diver_suit_iran_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_diver_f";
			containerClass = "Supply80";
			uniformType = "Neopren";
			mass = 60;
		};
	};
	class U_C_Poloshirt_blue: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_BLUE_0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_blue_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirt_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_polo_1_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_C_Poloshirt_burgundy: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_BURGUNDY_0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_burgundy_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirt_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_polo_2_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_C_Poloshirt_stripped: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_STRIPED_0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirt_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_polo_3_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_C_Poloshirt_tricolour: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_TRICOLOR_0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_tricolour_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirt_4_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_polo_4_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_C_Poloshirt_salmon: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_SALMON_0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_salmon_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirt_5_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_polo_5_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_C_Poloshirt_redwhite: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_COMMONER_CLOTHES_REDWHITE_0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_redwhite_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirt_6_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_polo_6_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_C_Commoner1_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_common_clothes1";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_1_1_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_C_Commoner1_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_common_clothes1";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_1_2_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_C_Commoner1_3: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_common_clothes2";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_1_3_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_Rangemaster: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_rangemaster_suit0";
		picture = "\A3\characters_f\data\ui\icon_U_C_miller_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirtpants_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_RangeMaster_F";
			containerClass = "Supply20";
			mass = 40;
		};
	};
	class U_NikosBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_NIKOS_CLOTHES_0";
		picture = "\A3\characters_f\data\ui\icon_U_Nikos_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\nikos_wear_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Nikos";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class U_OrestesBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_jacket_shorts";
		picture = "\A3\characters_f\data\ui\icon_U_Orestes_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\orestes_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Orestes";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class U_B_CombatUniform_mcam_worn: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_combat_fatigues_worn";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CombatUniform_wdl: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Combat_fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_SoldierW_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CombatUniform_wdl_tshirt: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Combat_fatigues_tee";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_SoldierW_02_f";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CombatUniform_wdl_vest: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Recon_fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_SoldierW_03_f";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CombatUniform_sgg: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Combat_fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_SoldierS_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CombatUniform_sgg_tshirt: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Combat_fatigues_tee";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_soldier_AR_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CombatUniform_sgg_vest: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Recon_fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_SL_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_SpecopsUniform_sgg: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Specop_fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_recon_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_PilotCoveralls: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Pilot_coveralls";
		picture = "\A3\characters_f\data\ui\icon_U_B_PilotCoveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_nato_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Pilot_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class U_O_CombatUniform_oucamo: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Iran_fatigues_urban";
		picture = "\A3\characters_f\data\ui\icon_U_OI_CombatUniform_oucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_soldierU_F";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class U_O_SpecopsUniform_ocamo: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Recon_fatigues_hex";
		picture = "\A3\characters_f\data\ui\icon_U_OI_CombatUniform_ocamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_crew_F";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class U_O_SpecopsUniform_blk: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_recon_fatigues_black";
		picture = "\A3\characters_f\data\ui\icon_U_OI_CombatUniform_oucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_recon_F";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class U_O_OfficerUniform_ocamo: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_officer_uniform";
		picture = "\A3\characters_f\data\ui\icon_U_OI_Officer_ocamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_officer_F";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	class U_I_CombatUniform: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_combat_fatigues_haf0";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_soldier_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_CombatUniform_tshirt: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_combat_fatigues_haf_tee";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CombatUniform_rucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_Soldier_lite_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_CombatUniform_shortsleeve: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_combat_fatigues_haf1";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CombatUniform_rucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_Soldier_lite_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_pilotCoveralls: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_pilot_coveralls_haf";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_PilotCoveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_rus_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_pilot_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class U_I_HeliPilotCoveralls: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_HELIPILOT_COVERALLS_AAF_0";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_PilotCoveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_sand_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_helipilot_F";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	class U_I_GhillieSuit: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_ghillie_suit_haf";
		picture = "\A3\characters_f_beta\data\ui\icon_U_ghillie_woodland_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_sniper_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_I_OfficerUniform: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_combat_fatigues_haf_tee";
		picture = "\A3\characters_f\data\ui\icon_U_IR_Officer_spc_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_officer_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_Wetsuit: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_IA_Wetsuit0";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_Wetsuit_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\diver_suit_rus_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_diver_f";
			containerClass = "Supply80";
			uniformType = "Neopren";
			mass = 60;
		};
	};
	class U_Competitor: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Characters_F_Beta_0";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Civil\Data\c_competitor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Competitor_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_MillerBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_COMBAT_FATIGUES_MILLER_0";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Story_SF_Captain_F";
			containerClass = "Supply0";
			mass = 1;
		};
	};
	class U_KerryBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_COMBAT_FATIGUES_KERRY_0";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Story_Protagonist_F";
			containerClass = "Supply0";
			mass = 1;
		};
	};
	class U_AttisBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_underwear4";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Underwear_F";
			containerClass = "Supply0";
			mass = 1;
		};
	};
	class U_AntigonaBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_underwear5";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Underwear_F";
			containerClass = "Supply0";
			mass = 1;
		};
	};
	class U_IG_Menelaos: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_kaiberoi_leader_outfit";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "IG_Menealos";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Novak: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_novak_leiser_suit";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Underwear_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_OI_Scientist: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_scientist_suit";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_scientist_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Underwear_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_IG_Guerilla1_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_GARMENT";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla1_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_Soldier_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_IG_Guerilla2_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN_DARK";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_Soldier_AR_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_IG_Guerilla2_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PATTERN";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_engineer_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_IG_Guerilla2_3: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla2_3_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_medic_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_IG_Guerilla3_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_SMOCKS";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_Soldier_M_F";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class U_IG_Guerilla3_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_guerilla_smocks0";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_Soldier_LAT_F";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class U_IG_leader: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_UNIFORM";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_ig_leader_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A3\characters_f_beta\indep\data\officer_spc_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_Soldier_TL_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_BG_Guerilla1_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_GUERILLA_GARMENT";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla1_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_G_Soldier_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_BG_Guerilla2_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN_DARK";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_G_Soldier_AR_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_BG_Guerilla2_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PATTERN";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_G_engineer_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_BG_Guerilla2_3: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla2_3_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_G_medic_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_BG_Guerilla3_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_GUERILLA_SMOCKS";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_G_Soldier_M_F";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class U_BG_Guerilla3_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_SMOCKS0";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_G_Soldier_LAT_F";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class U_BG_leader: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_GUERILLA_UNIFORM";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_ig_leader_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A3\characters_f_beta\indep\data\officer_spc_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_G_Soldier_TL_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_OG_Guerilla1_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_GARMENT";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla1_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_G_Soldier_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_OG_Guerilla2_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN_DARK";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_G_Soldier_AR_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_OG_Guerilla2_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PATTERN";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla2_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_G_engineer_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_OG_Guerilla2_3: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla2_3_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_G_medic_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_OG_Guerilla3_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_SMOCKS";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_G_Soldier_M_F";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class U_OG_Guerilla3_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_guerilla_smocks0";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_2_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_G_Soldier_LAT_F";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class U_OG_leader: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_UNIFORM";
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_ig_leader_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"A3\characters_f_beta\indep\data\officer_spc_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_G_Soldier_TL_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_C_Poor_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Worn_clothes0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_p_fugitive_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Poor_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_worn_clothes1";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_cloth1_v2_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_p_beggar_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Scavenger_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_Scavenger_clothes_light";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_p_scavenger_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Scavenger_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_scavenger_clothes_dark";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_p_scavenger_2_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Farmer: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_farmer_clothes";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_w_farmer_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Fisherman: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_fishing_clothes";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_w_fisherman_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_WorkerOveralls: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_worker_clothes";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_dirty_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_w_farmer_2_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_FishermanOveralls: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_fishing_overalls";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_w_fisherman_2_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_WorkerCoveralls: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_worker_overalls";
		picture = "\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_dirty_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_w_worker_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_HunterBody_grn: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_HUNTING_CLOTHES_0";
		picture = "\A3\characters_f\data\ui\icon_U_C_HunterBody_grn_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hunter_bushman_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_hunter_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_HunterBody_brn: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_hunting_clothes_brown";
		picture = "\A3\characters_f\data\ui\icon_U_Citizen_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_hunter_2_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Commoner2_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_common_clothes3";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_2_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Commoner2_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_common_clothes4";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_2_2_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Commoner2_3: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_common_clothes5";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_2_3_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_PriestBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_clerical_robes";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_priest_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Poor_shorts_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_worn_shorts0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_p_shorts_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Poor_shorts_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_worn_shorts1";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_p_shorts_2_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Commoner_shorts: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_common_shorts";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_shorts_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_ShirtSurfer_shorts: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_surfer_outfit0";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_shorts_2_F";
			containerClass = "Supply10";
			mass = 30;
		};
	};
	class U_C_TeeSurfer_shorts_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_surfer_outfit1";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_shorts_3_F";
			containerClass = "Supply10";
			mass = 30;
		};
	};
	class U_C_TeeSurfer_shorts_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_surfer_outfit2";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_stripped_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_shorts_4_F";
			containerClass = "Supply10";
			mass = 30;
		};
	};
	class U_B_CTRG_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_combat_uniform_csat_1";
		picture = "\A3\characters_F_EPA\data\ui\icon_U_B_CTRG_uniform_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_soldier_GL_LAT_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CTRG_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_combat_uniform_csat_2";
		picture = "\A3\characters_F_EPA\data\ui\icon_U_B_CTRG_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_soldier_engineer_exp_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CTRG_3: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_combat_uniform_csat_3";
		picture = "\A3\characters_F_EPA\data\ui\icon_U_B_CTRG_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_soldier_AR_A_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_survival_uniform: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_survival_fatigues_F0";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f\common\data\diver_suit_nato_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "b_soldier_survival_F";
			containerClass = "Supply40";
			uniformType = "Neopren";
			mass = 60;
		};
	};
	class U_I_G_Story_Protagonist_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_uniform_kerry0";
		picture = "\A3\characters_F_EPB\data\ui\icon_U_I_G_Story_Protagonist_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla5_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_Story_Protagonist_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_G_resistanceLeader_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_uniform_stavrou0";
		picture = "\A3\characters_F_EPB\data\ui\icon_U_I_G_resistanceLeader_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_resistanceLeader_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_C_Journalist: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Journalist_clothes";
		picture = "\A3\characters_F_EPC\data\ui\icon_U_Journalist_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epc\civil\data\journalist_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_journalist_F";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class U_C_Scientist: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Scientist_clothes";
		picture = "\A3\characters_F_EPC\data\ui\icon_U_Scientist_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_scientist_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_scientist_F";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class U_NikosAgedBody: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_75";
		picture = "\A3\characters_F_EPC\data\ui\icon_U_Nikos_Formal_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\nikos_wear_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Nikos_aged";
			containerClass = "Supply20";
			mass = 10;
		};
	};
	class U_B_Protagonist_VR: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_VRSUIT_NATO_0";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_B_Protagonist_VR_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Data\UI\icon_U_B_protagonist_VR_ca.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Protagonist_VR_F";
			containerClass = "Supply500";
			mass = 60;
		};
	};
	class U_O_Protagonist_VR: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_VRSUIT_CSAT_0";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_O_Protagonist_VR_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Data\UI\icon_U_O_protagonist_VR_ca.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Protagonist_VR_F";
			containerClass = "Supply500";
			mass = 60;
		};
	};
	class U_I_Protagonist_VR: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_VRSUIT_AAF_0";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_I_Protagonist_VR_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Data\UI\icon_U_I_protagonist_VR_ca.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_Protagonist_VR_F";
			containerClass = "Supply500";
			mass = 60;
		};
	};
	class U_IG_Guerrilla_6_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_RAIMENT";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_G_Soldier_LAT_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_BG_Guerrilla_6_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_GUERILLA_RAIMENT";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_G_Soldier_LAT_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_OG_Guerrilla_6_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_GUERILLA_RAIMENT";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_G_Soldier_LAT_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_B_Soldier_VR: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_CFGVEHICLES_VRSUIT_ENTITY0";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_B_soldier_VR_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_Soldier_VR_F";
			containerClass = "Supply0";
			mass = 0;
		};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.0,0.9,1.0,1,ca)"};
	};
	class U_O_Soldier_VR: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_CFGVEHICLES_VRSUIT_ENTITY0";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_O_soldier_VR_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_Soldier_VR_F";
			containerClass = "Supply0";
			mass = 0;
		};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0.5,0,1,ca)"};
	};
	class U_I_Soldier_VR: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_CFGVEHICLES_VRSUIT_ENTITY0";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_I_soldier_VR_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_Soldier_VR_F";
			containerClass = "Supply0";
			mass = 0;
		};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.0,1.0,0.2,1,ca)"};
	};
	class U_C_Soldier_VR: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		displayName = "$STR_A3_CFGVEHICLES_VRSUIT_ENTITY0";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_C_soldier_VR_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Soldier_VR_F";
			containerClass = "Supply0";
			mass = 0;
		};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.85,0,0.95,1,ca)"};
	};
	class U_C_Driver_1: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform00";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_01_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_01_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_1_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_2: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform01";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_02_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_02_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_2_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_3: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform02";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_03_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_03_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_3_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_4: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform03";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_04_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_04_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_4_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_Marshal: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform12";
		picture = "\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_poloshirtpants_2_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Marshal_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_1_black: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform04";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_base_black_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_black_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_1_black_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_1_blue: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform05";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_base_blue_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_blue_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_1_blue_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_1_green: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform06";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_base_green_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_green_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_1_green_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_1_red: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform07";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_base_red_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_red_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_1_red_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_1_white: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform08";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_base_white_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_white_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_1_white_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_1_yellow: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform09";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_base_yellow_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_yellow_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_1_yellow_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_C_Driver_1_orange: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_Karts_Uniform10";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_base_orange_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_orange_co.paa"};
		DLC = "Kart";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Driver_1_orange_F";
			containerClass = "Supply20";
			mass = 60;
		};
	};
	class U_B_FullGhillie_lsh: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_B_Full_Ghillie_Lush_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_B_FullGhillie_lsh_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_lsh_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class U_B_FullGhillie_sard: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_B_Full_Ghillie_SemiArid_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_B_FullGhillie_sard_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_sard_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class U_B_FullGhillie_ard: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_B_Full_Ghillie_Arid_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_B_FullGhillie_ard_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_ghillie_ard_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class U_O_FullGhillie_lsh: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_O_Full_Ghillie_Lush_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_O_FullGhillie_lsh_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_ghillie_lsh_F";
			containerClass = "Supply60";
			mass = 120;
		};
	};
	class U_O_FullGhillie_sard: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_O_Full_Ghillie_SemiArid_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_O_FullGhillie_sard_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_ghillie_sard_F";
			containerClass = "Supply60";
			mass = 120;
		};
	};
	class U_O_FullGhillie_ard: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_O_Full_Ghillie_Arid_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_O_FullGhillie_ard_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_ghillie_ard_F";
			containerClass = "Supply60";
			mass = 120;
		};
	};
	class U_I_FullGhillie_lsh: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_I_Full_Ghillie_Lush_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_I_FullGhillie_lsh_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_ghillie_lsh_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class U_I_FullGhillie_sard: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_I_Full_Ghillie_SemiArid_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_I_FullGhillie_sard_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_ghillie_sard_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class U_I_FullGhillie_ard: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_I_Full_Ghillie_Arid_F0";
		picture = "\A3\characters_f_mark\data\ui\icon_U_I_FullGhillie_ard_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_ghillie_ard_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class VestItem: InventoryItem_Base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "VestItem";
		type = 701;
		uniformType = "Default";
		hiddenSelections[] = {};
		class HitpointsProtectionInfo
		{
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 1;
			};
		};
		overlaySelectionsInfo[] = {"Ghillie_hide"};
		showHolsteredPistol = 0;
	};
	class Vest_Camo_Base: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Vest_Camo_Base";
		scope = 0;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Weapons_F\Ammo\mag_univ.p3d";
		hiddenSelections[] = {"camo"};
		descriptionShort = "$STR_A3_SP_NOARMOR";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			hiddenSelections[] = {"camo"};
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class Vest_NoCamo_Base: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Vest_NoCamo_Base";
		scope = 0;
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Weapons_F\Ammo\mag_univ.p3d";
		hiddenSelections[] = {};
		descriptionShort = "$STR_A3_SP_NOARMOR";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			hiddenSelections[] = {};
			containerClass = "Supply0";
			mass = 0;
		};
	};
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_Rangemaster_belt";
		scope = 2;
		displayName = "$STR_V_Rangemaster_belt0";
		picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_belt";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
			containerClass = "Supply40";
			mass = 5;
		};
	};
	class V_BandollierB_khk: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_BandollierB_khk";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_A3_V_BandollierB_khk0";
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
			containerClass = "Supply80";
			mass = 10;
		};
	};
	class V_BandollierB_cbr: V_BandollierB_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_BandollierB_cbr";
		displayName = "$STR_A3_V_BandollierB_cbr0";
		picture = "\A3\Characters_F\data\ui\icon_V_bandollier_cbr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		};
	};
	class V_BandollierB_rgr: V_BandollierB_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_BandollierB_rgr";
		displayName = "$STR_A3_V_BandollierB_rgr0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_rgr_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		};
	};
	class V_BandollierB_blk: V_BandollierB_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_BandollierB_blk";
		displayName = "$STR_A3_V_BandollierB_blk0";
		picture = "\A3\characters_f\Data\UI\icon_V_bandollier_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
		};
	};
	class V_BandollierB_oli: V_BandollierB_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_BandollierB_oli";
		picture = "\A3\Characters_F_Beta\Data\ui\icon_V_Bandolier_oli_ca.paa";
		displayName = "$STR_A3_V_BANDOLLIERB_OLI0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\vests_oli_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\vests_oli_co.paa"};
		};
	};
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrier1_rgr";
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrier1_rgr0";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		descriptionShort = "$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrier2_rgr";
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrier2_rgr0";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class V_PlateCarrier2_blk: V_PlateCarrier2_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrier2_blk";
		scope = 2;
		displayName = "$STR_A3_V_PLATECARRIER2_BLK0";
		picture = "\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	class V_PlateCarrier3_rgr: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrier3_rgr";
		scope = 1;
		displayName = "$STR_A3_V_PlateCarrier2_rgr0";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			containerClass = "Supply140";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class V_PlateCarrierGL_rgr: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierGL_rgr";
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrierGL_rgr0";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_gl_rig_grn.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		overviewName = "$STR_B_SOLDIER_GL_F0";
		overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page09_ca.paa";
		descriptionShort = "$STR_A3_SP_ER";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\carrier_gl_rig_grn_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
			containerClass = "Supply140";
			mass = 100;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierGL_blk";
		displayName = "$STR_A3_V_PlateCarrierGL_blk0";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_gl_rig_blk.paa";
		DLC = "Mark";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\carrier_gl_rig_blk_co.paa"};
	};
	class V_PlateCarrierGL_mtp: V_PlateCarrierGL_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierGL_mtp";
		displayName = "$STR_A3_V_PlateCarrierGL_mtp0";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_gl_rig_mtp.paa";
		DLC = "Mark";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\carrier_gl_rig_mtp_co.paa"};
	};
	class V_PlateCarrier1_blk: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrier1_blk";
		scope = 2;
		picture = "\A3\Characters_F\data\ui\icon_V_PlateCarrier1_blk_ca.paa";
		displayName = "$STR_A3_V_PlateCarrier1_blk0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		descriptionShort = "$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass = "Supply140";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierSpec_rgr";
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrierSpec_rgr0";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_grn.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		DLC = "Mark";
		descriptionShort = "$STR_A3_SP_AL_V";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\carrier_gl_rig_grn_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			containerClass = "Supply100";
			mass = 120;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierSpec_blk";
		displayName = "$STR_A3_V_PlateCarrierSpec_blk0";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		DLC = "Mark";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\carrier_gl_rig_blk_co.paa"};
	};
	class V_PlateCarrierSpec_mtp: V_PlateCarrierSpec_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierSpec_mtp";
		displayName = "$STR_A3_V_PlateCarrierSpec_mtp0";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_mtp.paa";
		DLC = "Mark";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\carrier_gl_rig_mtp_co.paa"};
	};
	class V_Chestrig_khk: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_Chestrig_khk";
		scope = 2;
		displayName = "$STR_A3_V_Chestrig_khk0";
		picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_khk_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_khk_co.paa","\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"camo1","camo2"};
		};
	};
	class V_Chestrig_rgr: V_Chestrig_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_Chestrig_rgr";
		scope = 2;
		displayName = "$STR_A3_V_Chestrig_rgr0";
		picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_rgr_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_rgr_co.paa","\A3\Characters_f\BLUFOR\data\armor1_co.paa"};
	};
	class V_Chestrig_blk: V_Chestrig_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_Chestrig_blk";
		scope = 2;
		displayName = "$STR_A3_V_ChestrigF_blk0";
		picture = "\A3\characters_F\data\ui\icon_V_FChestrig_blk_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_blk_co.paa","\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
	};
	class V_Chestrig_oli: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_Chestrig_oli";
		scope = 2;
		displayName = "$STR_A3_ChestrigF_oli";
		picture = "\A3\Characters_F\data\ui\icon_V_FChestrig_oli_CA.paa";
		model = "\A3\Characters_F\Common\equip_chestrig";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_oli_co.paa","\A3\Characters_F_Beta\INDEP\Data\armor1_oli_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
			containerClass = "Supply140";
			mass = 20;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	class V_TacVest_khk: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_TacVest_khk";
		scope = 2;
		displayName = "$STR_A3_V_TacVest_khk0";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_khaki_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			containerClass = "Supply100";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 8;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class V_TacVest_brn: V_TacVest_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_TacVest_brn";
		displayName = "$STR_A3_V_TacVest_brn0";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_brn_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_brown_co.paa"};
	};
	class V_TacVest_oli: V_TacVest_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_TacVest_oli";
		displayName = "$STR_V_TacVest_oli0";
		picture = "\A3\Characters_F\data\ui\icon_V_TacVest_oli_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_olive_co.paa"};
	};
	class V_TacVest_blk: V_TacVest_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_TacVest_blk";
		displayName = "$STR_A3_V_TacVest_blk0";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_black_co.paa"};
	};
	class V_TacVest_camo: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_TacVest_camo";
		scope = 2;
		displayName = "$STR_A3_V_TacVest_camo0";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		picture = "\A3\Characters_F\data\ui\icon_V_TacVest_camo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Common\Data\tacticalvest_camo_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			containerClass = "Supply100";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 8;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class V_TacVest_blk_POLICE: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_TacVest_blk_POLICE";
		scope = 2;
		displayName = "$STR_A3_V_TacVest_blk_POLICE0";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_police_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_police_co.paa"};
		model = "A3\Characters_F\Common\equip_tacticalvest";
		descriptionShort = "$STR_A3_SP_AL_II";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			containerClass = "Supply100";
			mass = 50;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 12;
					passThrough = 0.4;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 12;
					passThrough = 0.4;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.4;
				};
			};
		};
	};
	class V_TacVestIR_blk: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_TacVestIR_blk";
		scope = 2;
		displayName = "$STR_A3_V_TacVestIR_blk0";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
			containerClass = "Supply140";
			mass = 50;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 8;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class V_TacVestCamo_khk: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_TacVestCamo_khk";
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_A3_V_TacVestCamo_khk0";
		picture = "\A3\characters_f\Data\UI\icon_V_TacVest_Camo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Common\Data\tacticalvest_camo_co.paa"};
		model = "A3\Characters_F\Common\equip_tacticalvest";
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Common\Data\tacticalvest_camo_co.paa"};
			containerClass = "Supply100";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 8;
					passThrough = 0.5;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class V_HarnessO_brn: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_HarnessO_brn";
		scope = 2;
		displayName = "$STR_A3_V_HarnessO_brn0";
		picture = "\A3\characters_f\Data\UI\icon_V_HarnessO_brn_CA.paa";
		model = "\A3\Characters_F\OPFOR\equip_o_vest01";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass = "Supply160";
			mass = 30;
		};
	};
	class V_HarnessOGL_brn: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_HarnessOGL_brn";
		scope = 2;
		displayName = "$STR_A3_V_HarnessOGL_brn0";
		picture = "\A3\characters_f\Data\UI\icon_V_HarnessOGL_brn_CA.paa";
		model = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class V_HarnessO_gry: V_HarnessO_brn
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_HarnessO_gry";
		picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName = "$STR_A3_V_HarnessO_gry0";
		model = "\A3\Characters_F\OPFOR\equip_o_vest01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_co"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass = "Supply160";
			mass = 30;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	class V_HarnessOGL_gry: V_HarnessO_gry
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_HarnessOGL_gry";
		picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOUGL_gry_CA.paa";
		displayName = "$STR_A3_V_HarnessOGL_gry0";
		model = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
			containerClass = "Supply120";
			mass = 15;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	class V_HarnessOSpec_brn: V_HarnessO_brn
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_HarnessOSpec_brn";
		scope = 1;
		displayName = "$STR_A3_V_HarnessOSpec_brn0";
		picture = "\A3\characters_f\Data\UI\icon_V_HarnessO_brn_CA.paa";
		model = "\A3\Characters_F\OPFOR\equip_o_vest01";
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass = "Supply160";
			mass = 30;
		};
	};
	class V_HarnessOSpec_gry: V_HarnessO_gry
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_HarnessOSpec_gry";
		scope = 1;
		picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName = "$STR_A3_V_HarnessOSpec_gry0";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass = "Supply160";
			mass = 30;
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierIA1_dgtl";
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrierIA1_dgtl0";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		descriptionShort = "$STR_A3_SP_AL_III";
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierIA2_dgtl";
		displayName = "$STR_A3_V_PlateCarrierIA2_dgtl0";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		descriptionShort = "$STR_A3_SP_AL_III";
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierIAGL_dgtl";
		scope = 2;
		displayName = "$STR_A3_V_PlateCarrierIAGL_dgtl0";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_ga_carrier_gl_rig_digi.paa";
		model = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
		DLC = "Mark";
		descriptionShort = "$STR_A3_SP_ER";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\equip_ia_vest01_co.paa","\A3\Characters_F_Mark\INDEP\Data\ga_carrier_gl_rig_digi_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass = "Supply120";
			mass = 80;
			hiddenSelections[] = {"camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	class V_PlateCarrierIAGL_oli: V_PlateCarrierIAGL_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierIAGL_oli";
		displayName = "$STR_A3_V_PlateCarrierIAGL_oli0";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_ga_carrier_gl_rig_oli.paa";
		DLC = "Mark";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa","\A3\Characters_F_Mark\INDEP\Data\ga_carrier_gl_rig_oli_co.paa"};
	};
	class V_RebreatherB: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_RebreatherB";
		scope = 2;
		displayName = "$STR_A3_cfgvests_rebreather_nato0";
		picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
		model = "\A3\Characters_F\Common\equip_rebreather";
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			containerClass = "Supply0";
			mass = 80;
			vestType = "Rebreather";
			hiddenUnderwaterSelections[] = {"hide"};
			shownUnderwaterSelections[] = {"unhide","unhide2"};
			hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 8;
					passThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 8;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class V_RebreatherIR: V_RebreatherB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_RebreatherIR";
		displayName = "$STR_A3_cfgvests_rebreather_csat0";
		picture = "\A3\characters_f\Data\UI\icon_V_RebreatherIR_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_iran_co.paa"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_iran_co.paa","\A3\characters_f\common\data\diver_equip_iran_co.paa","\A3\characters_f\data\visors_ca.paa"};
	};
	class V_RebreatherIA: V_RebreatherB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_RebreatherIA";
		displayName = "$STR_A3_cfgvests_rebreather_aaf0";
		picture = "\A3\characters_f\Data\UI\icon_V_RebreatherRU_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_rus_co.paa"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_rus_co.paa","\A3\characters_f\common\data\diver_equip_rus_co.paa","\A3\characters_f\data\visors_ca.paa"};
	};
	class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrier_Kerry";
		scope = 2;
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		displayName = "$STR_A3_V_PlateCarrier1_rgr_V_PlateCarrier_Kerry0";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
		};
	};
	class V_PlateCarrierL_CTRG: V_PlateCarrier1_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierL_CTRG";
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		displayName = "$STR_A3_V_PlateCarrierL_CTRG0";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\vests_snake_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			hiddenSelections[] = {"camo"};
		};
	};
	class V_PlateCarrierH_CTRG: V_PlateCarrier2_rgr
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierH_CTRG";
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
		displayName = "$STR_A3_V_PlateCarrierH_CTRG0";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\vests_snake_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
			hiddenSelections[] = {"camo"};
		};
	};
	class V_I_G_resistanceLeader_F: V_TacVest_camo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_I_G_resistanceLeader_F";
		picture = "\A3\Characters_F_EPB\data\ui\icon_V_I_G_resistanceLeader_F_ca.paa";
		displayName = "$STR_A3_V_I_G_resistanceLeader_F0";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Common\Data\tacticalvest_camo_dark_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
		};
	};
	class V_Press_F: Vest_Camo_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_Press_F";
		scope = 2;
		picture = "\A3\Characters_F_EPC\Data\UI\icon_V_PressVest_CA.paa";
		displayName = "$STR_A3_V_Press_F0";
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPC\Civil\Data\equip_press_vest_01_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_II";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
			containerClass = "Supply40";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 12;
					passThrough = 0.4;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 12;
					passThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 12;
					passThrough = 0.4;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 12;
					passThrough = 0.4;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.4;
				};
			};
		};
	};
	class HeadgearItem: InventoryItem_Base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "HeadgearItem";
		allowedSlots[] = {901,605};
		type = 605;
		hiddenSelections[] = {};
	};
	class HelmetBase: ItemCore
	{
		weaponPoolAvailable = 1;
		scope = 0;
		displayName = "$STR_A3_H_HelmetB0";
		picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
		descriptionShort = "$STR_A3_SP_NOARMOR";
		class ItemInfo: HeadgearItem
		{
			mass = 0;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class H_HelmetB: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_A3_H_HelmetB0";
		picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_II";
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
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
	class H_HelmetB_camo: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_camo";
		displayName = "$STR_A3_H_HelmetB_camo0";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_camo_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_f\BLUFOR\Data\equip1_co.paa","\A3\characters_f\common\data\ghillie2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo1","camo2"};
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
	class H_HelmetB_paint: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_paint";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_snake_co.paa"};
		displayName = "$STR_A3_H_HelmetB_paint0";
	};
	class H_HelmetB_light: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_light";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		displayName = "$STR_A3_H_HelmetB_light0";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
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
	class H_Booniehat_khk: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_khk";
		scope = 2;
		displayName = "$STR_A3_H_Booniehat_khk0_boot";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_khk_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {6};
		};
	};
	class H_Booniehat_oli: H_Booniehat_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_oli";
		displayName = "$STR_A3_H_Booniehat_oli0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_grn_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Booniehat_indp: H_Booniehat_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_indp";
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_A3_H_Booniehat_khk0";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\booniehat_indp_co.paa"};
	};
	class H_Booniehat_mcamo: H_Booniehat_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_mcamo";
		displayName = "$STR_A3_H_Booniehat_mcamo0";
		picture = "\A3\Characters_F\data\ui\icon_H_booniehat_mcamo_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\booniehat_mcamo_co.paa"};
	};
	class H_Booniehat_grn: H_Booniehat_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_grn";
		scope = 1;
		displayName = "$STR_A3_H_Booniehat_grn0";
	};
	class H_Booniehat_tan: H_Booniehat_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_tan";
		scope = 2;
		displayName = "$STR_A3_H_Booniehat_tan0_boot";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_tan_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_tan_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Booniehat_dirty: H_Booniehat_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_dirty";
		scope = 1;
		displayName = "$STR_A3_H_Booniehat_dirty0";
	};
	class H_Booniehat_dgtl: H_Booniehat_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_dgtl";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\booniehat_indp_co.paa"};
		displayName = "$STR_A3_H_Booniehat_dgtl0";
		allowedFacewear[] = {"",6,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Booniehat_khk_hs: H_Booniehat_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Booniehat_khk_hs";
		picture = "\A3\characters_f_EPB\Data\UI\icon_booniehat_hs_ca.paa";
		displayName = "$STR_A3_H_Booniehat_khk_hs0";
		model = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_HelmetB_plain_mcamo: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_plain_mcamo";
		scope = 1;
		displayName = "$STR_A3_H_HelmetB_plain_mcamo0";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
		};
	};
	class H_HelmetB_plain_blk: H_HelmetB_plain_mcamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_plain_blk";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_black_co.paa"};
		displayName = "$STR_A3_H_HelmetB_plain_blk0";
	};
	class H_HelmetSpecB: H_HelmetB_plain_mcamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetSpecB";
		scope = 2;
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		displayName = "$STR_A3_H_HelmetSpecB0";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: ItemInfo
		{
			mass = 50;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetSpecB_paint1: H_HelmetSpecB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetSpecB_paint1";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetSpecB_paint1_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_grass_co.paa"};
		displayName = "$STR_A3_H_HelmetSpecB_paint10";
	};
	class H_HelmetSpecB_paint2: H_HelmetSpecB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetSpecB_paint2";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetSpecB_paint2_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_desert_co.paa"};
		displayName = "$STR_A3_H_HelmetSpecB_paint20";
	};
	class H_HelmetSpecB_blk: H_HelmetSpecB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetSpecB_blk";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetSpecB_blk_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_black_co.paa"};
		displayName = "$STR_A3_H_HelmetSpecB_blk0";
	};
	class H_HelmetSpecB_snakeskin: H_HelmetSpecB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetSpecB_snakeskin";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetSpecB_snakeskin_ca.paa";
		displayName = "$STR_A3_H_HELMETSPECB_SNAKE0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_snake_co.paa"};
	};
	class H_HelmetSpecB_sand: H_HelmetSpecB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetSpecB_sand";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetSpecB_sand_ca.paa";
		displayName = "$STR_A3_H_HELMETSPECB_SAND0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_sand_co.paa"};
	};
	class H_HelmetIA: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetIA";
		displayName = "$STR_A3_H_HelmetIA0";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\headgear_helmet_canvas_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			allowedSlots[] = {901,605};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			modelSides[] = {2,3};
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
	class H_HelmetIA_net: H_HelmetIA
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetIA_net";
		scope = 1;
		displayName = "$STR_A3_H_HelmetIA_net0";
	};
	class H_HelmetIA_camo: H_HelmetIA
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetIA_camo";
		scope = 1;
		displayName = "$STR_A3_H_HelmetIA_camo0";
	};
	class H_Helmet_Kerry: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Helmet_Kerry";
		scope = 1;
		displayName = "$STR_A3_H_HelmetB_plain_kerry0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_CA.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
		};
	};
	class H_HelmetB_grass: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_grass";
		displayName = "$STR_A3_H_HelmetB_grass0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_grass_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_grass_co.paa"};
	};
	class H_HelmetB_snakeskin: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_snakeskin";
		displayName = "$STR_A3_H_HelmetB_snakeskin0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_snakeskin_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_snake_co.paa"};
	};
	class H_HelmetB_desert: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_desert";
		displayName = "$STR_A3_H_HelmetB_desert0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_desert_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_desert_co.paa"};
	};
	class H_HelmetB_black: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_black";
		displayName = "$STR_A3_H_HelmetB_black0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_black_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_black_co.paa"};
	};
	class H_HelmetB_sand: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_sand";
		displayName = "$STR_A3_H_HelmetB_sand0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_sand_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_sand_co.paa"};
	};
	class H_Cap_red: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_red";
		scope = 2;
		displayName = "$STR_A3_H_Cap_red0";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_red_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 4;
			uniformModel = "\A3\Characters_F\common\capb.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
		};
	};
	class H_Cap_blu: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_blu";
		displayName = "$STR_A3_H_Cap_blu0";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blu_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_blue_co.paa"};
		allowedFacewear[] = {"",12,"G_Aviator",1,"G_Balaclava_blk",1,"G_Balaclava_oli",1,"G_Bandanna_aviator",1,"G_Bandanna_blk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Cap_oli: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_oli";
		displayName = "$STR_A3_H_Cap_oli0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_oli_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_olive_co.paa"};
		allowedFacewear[] = {"",5,"G_Aviator",1,"G_Balaclava_blk",1,"G_Balaclava_oli",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Cap_headphones: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_headphones";
		scope = 2;
		displayName = "$STR_H_Cap_headphones0";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\capb_headphones_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 8;
			uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {};
			allowedSlots[] = {801,901,701,605};
		};
	};
	class H_Cap_tan: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_tan";
		displayName = "$STR_A3_H_Cap_tan0";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_tan_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_tan_co.paa"};
		allowedFacewear[] = {"",7.5,"G_Aviator",1,"G_Balaclava_blk",1,"G_Balaclava_oli",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Cap_blk: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_blk";
		displayName = "$STR_A3_H_Cap_blk0";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_black_co.paa"};
		allowedFacewear[] = {"",7.5,"G_Aviator",1,"G_Balaclava_blk",1,"G_Balaclava_oli",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Cap_blk_CMMG: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_blk_CMMG";
		displayName = "$STR_A3_H_Cap_blk_CMMG0";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_blk_CMMG_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_cmmg_co.paa"};
	};
	class H_Cap_brn_SPECOPS: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_brn_SPECOPS";
		displayName = "$STR_A3_H_Cap_brn_SPECOPS0_boot";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_brn_SPECOPS_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_iran_co.paa"};
	};
	class H_Cap_tan_specops_US: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_tan_specops_US";
		displayName = "$STR_A3_H_Cap_tan_specops_US0_boot";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_tan_specops_US_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_us_co.paa"};
	};
	class H_Cap_khaki_specops_UK: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_khaki_specops_UK";
		displayName = "$STR_A3_H_Cap_khaki_specops_UK0_boot";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_khaki_specops_UK_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_uk_co.paa"};
	};
	class H_Cap_grn: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_grn";
		displayName = "$STR_A3_H_Cap_grn0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_grn_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_green_co.paa"};
		allowedFacewear[] = {"",5,"G_Aviator",1,"G_Balaclava_blk",1,"G_Balaclava_oli",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Cap_grn_BI: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_grn_BI";
		displayName = "$STR_A3_H_Cap_grn_BI0";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_grn_BI_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_bis_co.paa"};
	};
	class H_Cap_blk_Raven: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_blk_Raven";
		displayName = "$STR_A3_H_Cap_blk_Raven0_boot";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_blk_Raven_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_raven_co.paa"};
		allowedFacewear[] = {"",5.5,"G_Aviator",1,"G_Balaclava_blk",1,"G_Balaclava_oli",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Cap_blk_ION: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_blk_ION";
		displayName = "$STR_A3_H_Cap_blk_ION0";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_ION_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_ion_co.paa"};
	};
	class H_Cap_oli_hs: H_Cap_oli
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_oli_hs";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_oli_hs_ca.paa";
		displayName = "$STR_A3_H_Cap_oli_hs0";
		model = "A3\Characters_F_EPB\common\capb_hs.p3d";
		allowedFacewear[] = {"",5,"G_Aviator",1,"G_Balaclava_blk",1,"G_Balaclava_oli",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_EPB\common\capb_hs.p3d";
		};
	};
	class H_Cap_press: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_press";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_press_ca.paa";
		displayName = "$STR_A3_H_Cap_press0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPC\Civil\Data\Headgear_capb_press_co.paa"};
	};
	class H_Cap_usblack: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_usblack";
		displayName = "$STR_A3_H_Cap_usblack0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_usblack_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_usblack_co.paa"};
	};
	class H_Cap_surfer: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_surfer";
		displayName = "$STR_A3_H_Cap_surfer0_boot";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_surfer_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\capb_surf_co.paa"};
	};
	class H_Cap_police: H_Cap_red
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_police";
		displayName = "$STR_A3_H_Cap_police0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Cap_police_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_police_co.paa"};
	};
	class H_HelmetCrew_B: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetCrew_B";
		displayName = "$STR_A3_H_HelmetCrewB0";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetCrewB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\armor1_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			mass = 40;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetCrew_O: H_HelmetCrew_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetCrew_O";
		displayName = "$STR_A3_H_HelmetCrew_O0";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetCrewO_ocamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\helmet_crew_ocamo_co.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] = {0,3};
		};
	};
	class H_HelmetCrew_I: H_HelmetCrew_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetCrew_I";
		displayName = "$STR_A3_H_HelmetCrewIA0";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] = {2,3};
			uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		};
	};
	class H_PilotHelmetFighter_B: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_PilotHelmetFighter_B";
		displayName = "$STR_A3_H_PilotHelmetFighter_B0";
		picture = "\A3\characters_f\Data\UI\icon_H_PilotHelmetFighter_B_CA.paa";
		model = "A3\Characters_F\Common\headgear_helmet_pilot";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_helmet_nato_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			mass = 60;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_pilot";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
		subItems[] = {"Integrated_NVG_F"};
	};
	class H_PilotHelmetFighter_O: H_PilotHelmetFighter_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_PilotHelmetFighter_O";
		displayName = "$STR_A3_H_PilotHelmetFighter_OI0";
		picture = "\A3\Characters_F\data\ui\icon_H_PilotHelmetFighter_OI_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_helmet_iran_co.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] = {0,3};
		};
	};
	class H_PilotHelmetFighter_I: H_PilotHelmetFighter_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_PilotHelmetFighter_I";
		displayName = "$STR_A3_H_PilotHelmetFighter_IA0";
		picture = "\A3\characters_f\Data\UI\icon_H_PilotHelmetFighter_IR_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_helmet_rus_co.paa"};
		class ItemInfo: ItemInfo
		{
			modelSides[] = {2,3};
		};
	};
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_PilotHelmetHeli_B";
		displayName = "$STR_A3_H_PilotHelmetHeli_B0";
		picture = "\A3\characters_f\Data\UI\icon_H_Pilot_Helmet_Heli_B_CA.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {3,1};
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
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_PilotHelmetHeli_O";
		displayName = "$STR_A3_H_PilotHelmetHeli_O0";
		picture = "\A3\Characters_F\data\ui\icon_H_Pilot_Helmet_Heli_OI_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {0,3};
		};
	};
	class H_PilotHelmetHeli_I: H_PilotHelmetHeli_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_PilotHelmetHeli_I";
		displayName = "$STR_A3_H_PilotHelmetHeli_IA0";
		picture = "\A3\characters_f_beta\Data\UI\icon_H_I_helmet_heli_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\helmet_heli_spc_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {2,3};
		};
	};
	class H_CrewHelmetHeli_B: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_CrewHelmetHeli_B";
		displayName = "$STR_A3_H_CrewHelmetHeli_B0";
		picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli_shield";
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\helmet_heli_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 50;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_CrewHelmetHeli_O";
		displayName = "$STR_A3_H_CrewHelmetHeli_O0";
		picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_OI_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {0,3};
		};
	};
	class H_CrewHelmetHeli_I: H_CrewHelmetHeli_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_CrewHelmetHeli_I";
		displayName = "$STR_A3_H_CrewHelmetHeli_IA0";
		picture = "\A3\characters_f_beta\Data\UI\icon_H_I_helmet_heliShield_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\helmet_heli_spc_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {2,3};
		};
	};
	class H_HelmetO_ocamo: H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetO_ocamo";
		displayName = "$STR_A3_H_HelmetO_ocamo0";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetO_ocamo_CA.paa";
		model = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic";
		hiddenSelectionsTextures[] = {"\A3\characters_f\OPFOR\data\tech_CO.paa"};
		descriptionShort = "$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			mass = 40;
			uniformModel = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic";
			modelSides[] = {0,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetLeaderO_ocamo";
		displayname = "$STR_A3_H_HelmetLeaderO_ocamo0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetLeaderO_ocamo_ca.paa";
		model = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic_hud";
		hiddenSelectionsTextures[] = {"\A3\characters_f\OPFOR\data\tech_CO.paa"};
		descriptionShort = "$STR_A3_SP_AL_V";
		class ItemInfo: ItemInfo
		{
			mass = 60;
			uniformModel = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic_hud";
			modelSides[] = {0,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_MilCap_ocamo: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_MilCap_ocamo";
		scope = 2;
		displayName = "$STR_A3_H_MilCap_ocamo0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_ocamo_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cappatrol_ocamo_co.paa"};
		model = "\A3\Characters_F\Common\cappatrol";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {901,701,605};
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {6};
		};
	};
	class H_MilCap_mcamo: H_MilCap_ocamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_MilCap_mcamo";
		displayName = "$STR_A3_H_MilCap_mcamo0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_mcamo_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cappatrol_multicam_co.paa"};
	};
	class H_MilCap_oucamo: H_MilCap_ocamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_MilCap_oucamo";
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_A3_H_MilCap_oucamo0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cappatrol_tan_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\cappatrol.p3d";
		};
	};
	class H_MilCap_rucamo: H_MilCap_oucamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_MilCap_rucamo";
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_A3_H_MilCap_rucamo0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cappatrol_ocamo_co.paa"};
	};
	class H_MilCap_gry: H_MilCap_oucamo
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_MilCap_gry";
		displayName = "$STR_A3_H_MilCap_gry0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cappatrol_grey_co.paa"};
	};
	class H_MilCap_dgtl: H_MilCap_oucamo
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_MilCap_dgtl";
		displayName = "$STR_A3_H_MilCap_dgtl0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_dgtl_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cappatrol_indp_co.paa"};
	};
	class H_MilCap_blue: H_MilCap_oucamo
	{
		scope = 2;
		scopeCurator = 2;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_MilCap_blue";
		displayName = "$STR_A3_H_MilCap_blue0_boot";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_blue_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\cappatrol_blue_co.paa"};
	};
	class H_HelmetB_light_grass: H_HelmetB_light
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_light_grass";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_grass_ca.paa";
		displayName = "$STR_A3_H_HelmetB_light_H_HelmetB_light_grass0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_grass_co.paa"};
	};
	class H_HelmetB_light_snakeskin: H_HelmetB_light
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_light_snakeskin";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_snakeskin_ca.paa";
		displayName = "$STR_A3_H_HelmetB_light_snakeskin0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_snake_co.paa"};
	};
	class H_HelmetB_light_desert: H_HelmetB_light
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_light_desert";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_desert_ca.paa";
		displayName = "$STR_A3_H_HelmetB_light_desert0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_desert_co.paa"};
	};
	class H_HelmetB_light_black: H_HelmetB_light
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_light_black";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_black_ca.paa";
		displayName = "$STR_A3_H_HelmetB_light_black0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_black_co.paa"};
	};
	class H_HelmetB_light_sand: H_HelmetB_light
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB_light_sand";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_sand_ca.paa";
		displayName = "$STR_A3_H_HelmetB_light_black_sand0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\equip1_sand_co.paa"};
	};
	class H_BandMask_blk: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_BandMask_blk";
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_A3_H_BandMask_blk0";
		picture = "\A3\characters_f\Data\UI\icon_H_PilotHelmetFighter_B_CA.paa";
		model = "\A3\Characters_F\Civil\headgear_c_capbandana01";
		hiddenSelectionsTextures[] = {"\A3\characters_f\Civil\data\c_cap1_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 8;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F\Civil\headgear_c_capbandana01.p3d";
			modelSides[] = {6};
		};
	};
	class H_BandMask_khk: H_BandMask_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_BandMask_khk";
		displayName = "$STR_A3_H_BandMask_khk0";
		model = "\A3\Characters_F\Common\headgear_placeholder";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_placeholder";
		};
	};
	class H_BandMask_reaper: H_BandMask_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_BandMask_reaper";
		displayName = "$STR_A3_H_BandMask_reaper0";
		model = "\A3\Characters_F\Common\headgear_placeholder";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_placeholder";
		};
	};
	class H_BandMask_demon: H_BandMask_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_BandMask_demon";
		displayName = "$STR_A3_H_BandMask_demon0";
		model = "\A3\Characters_F\Common\headgear_placeholder";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\headgear_placeholder";
		};
	};
	class H_HelmetO_oucamo: H_HelmetO_ocamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetO_oucamo";
		displayName = "$STR_A3_H_HelmetO_oucamo0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetO_oucamo_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\characters_f\OPFOR\data\tech_oucamo_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic";
		};
	};
	class H_HelmetLeaderO_oucamo: H_HelmetLeaderO_ocamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetLeaderO_oucamo";
		displayName = "$STR_A3_H_HelmetLeaderO_mcamo_urban0";
		model = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic_hud";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetLeaderO_oucamo_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\characters_f\OPFOR\data\tech_oucamo_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic_hud";
		};
	};
	class H_HelmetSpecO_ocamo: H_HelmetO_ocamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetSpecO_ocamo";
		displayName = "$STR_A3_H_HelmetSpecO_ocamo0";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetO_ocamo_CA.paa";
		model = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic_spec";
		hiddenSelectionsTextures[] = {"\A3\characters_f\OPFOR\data\tech_CO.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: ItemInfo
		{
			mass = 50;
			uniformModel = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic_spec";
			modelSides[] = {0,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetSpecO_blk: H_HelmetSpecO_ocamo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetSpecO_blk";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetO_spec_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\characters_f\OPFOR\data\tech_rus_CO.paa"};
		displayName = "$STR_A3_H_HelmetSpecO_blk0";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic_spec.p3d";
		};
	};
	class H_Bandanna_surfer: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_surfer";
		scope = 2;
		displayName = "$STR_A3_H_Bandanna_surfer0";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_surfer_CA.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_surfer_co.paa"};
		allowedFacewear[] = {"",4,"G_Aviator",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			mass = 8;
			allowedSlots[] = {901,701,605};
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1.p3d";
			modelSides[] = {6};
		};
	};
	class H_Bandanna_khk: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_khk";
		displayName = "$STR_A3_H_Bandanna_khk0";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_khk_co.paa"};
		allowedFacewear[] = {"",6,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_khk_hs: H_Bandanna_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_khk_hs";
		picture = "\A3\characters_f_EPB\Data\UI\icon_bandana_green_hs_ca.paa";
		displayName = "$STR_A3_H_Bandanna_khk_hs0";
		model = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		allowedFacewear[] = {"",6,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		};
	};
	class H_Bandanna_cbr: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_cbr";
		displayName = "$STR_A3_H_Bandanna_cbr0";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_cbr_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_cbr_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_sgg: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_sgg";
		displayName = "$STR_A3_H_Bandanna_sgg0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Bandanna_sgg_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_sgg_co.paa"};
		allowedFacewear[] = {"",4,"G_Aviator",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_sand: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_sand";
		displayName = "$STR_A3_H_Bandanna_sand0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Bandanna_sand_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_sand_co.paa"};
		allowedFacewear[] = {"",4.5,"G_Aviator",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_surfer_blk: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_surfer_blk";
		displayName = "$STR_A3_H_Bandanna_surfer_blk0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Bandanna_surfer_blk_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_surfblk_co.paa"};
		allowedFacewear[] = {"",5.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_surfer_grn: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_surfer_grn";
		displayName = "$STR_A3_H_Bandanna_surfer_grn0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_bandana_surfer_grn_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_surfgrn_co.paa"};
		allowedFacewear[] = {"",4.5,"G_Aviator",1,"G_Bandanna_blk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_gry: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_gry";
		displayName = "$STR_A3_H_Bandanna_gry0_boot";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_gry_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_gry_co.paa"};
		allowedFacewear[] = {"",6,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_blu: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_blu";
		displayName = "$STR_A3_H_Bandanna_blu0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Bandanna_blu_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_blu_co.paa"};
		allowedFacewear[] = {"",5.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_camo: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_camo";
		displayName = "$STR_A3_H_Bandanna_camo0_boot";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Bandanna_camo_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_woodland_co.paa"};
		allowedFacewear[] = {"",5.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Bandanna_mcamo: H_Bandanna_surfer
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Bandanna_mcamo";
		displayName = "$STR_A3_H_Bandanna_mcamo0";
		picture = "\A3\characters_f\Data\UI\icon_H_Bandanna_mcamo_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_bandana_mcamo_co.paa"};
	};
	class H_Shemag_khk: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Shemag_khk";
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_A3_H_Shemag_khk0";
		picture = "\A3\characters_f_gamma\Guerrilla\Data\UI\icon_H_Shemag_basic_CA.paa";
		model = "\A3\Characters_F_Gamma\Guerrilla\headgear_shemagmask";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\headgear_shemagmask";
			modelSides[] = {6};
		};
	};
	class H_Shemag_tan: H_Shemag_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Shemag_tan";
		scope = 1;
		displayName = "$STR_A3_H_Shemag_tan0";
	};
	class H_Shemag_olive: H_Shemag_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Shemag_olive";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Shemag_olive0";
		picture = "\A3\characters_F_Gamma\Guerrilla\Data\ui\icon_H_Shemag_olive_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\characters_F_Gamma\Guerrilla\Data\h_shemag_olive_co.paa"};
		allowedFacewear[] = {"",2,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Shemag_olive_hs: H_Shemag_olive
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Shemag_olive_hs";
		picture = "\A3\characters_f_EPB\Data\UI\icon_shemagmask_hs_ca.paa";
		displayName = "$STR_A3_H_Shemag_olive_hs0";
		model = "A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		allowedFacewear[] = {"",2,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		};
	};
	class H_ShemagOpen_khk: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_ShemagOpen_khk";
		scope = 2;
		displayName = "$STR_A3_H_ShemagOpen_khk0_boot";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_ShemagOpen_khk_ca.paa";
		model = "\A3\Characters_F\Civil\headgear_shemagopen";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_shemag_basic_co.paa"};
		allowedFacewear[] = {"",2,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F_Gamma\Guerrilla\headgear_shemagmask";
			hiddenSelections[] = {"camo"};
			modelSides[] = {6};
		};
	};
	class H_ShemagOpen_tan: H_ShemagOpen_khk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_ShemagOpen_tan";
		scope = 2;
		displayName = "$STR_A3_H_ShemagOpen_tan0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_ShemagOpen_tan_ca.paa";
		model = "\A3\Characters_F_Gamma\Guerrilla\headgear_shemagmask";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\h_shemag_brn_co.paa"};
		allowedFacewear[] = {"",2,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Beret_blk: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_blk";
		scope = 2;
		displayName = "$STR_A3_H_Beret_blk0";
		picture = "\A3\characters_f\Data\UI\icon_H_Beret_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\headgear_beret01_co.paa"};
		model = "\A3\Characters_F\Common\headgear_beret01";
		allowedFacewear[] = {"",7.5,"G_Aviator",1,"G_Balaclava_blk",1,"G_Balaclava_oli",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F\Common\headgear_beret01";
			modelSides[] = {6};
		};
	};
	class H_Beret_blk_POLICE: H_Beret_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_blk_POLICE";
		scope = 1;
		displayName = "$STR_A3_H_Beret_blk_POLICE0";
	};
	class H_Beret_red: H_Beret_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_red";
		scope = 1;
		displayName = "$STR_A3_H_Beret_red0";
	};
	class H_Beret_grn: H_Beret_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_grn";
		scope = 1;
		displayName = "$STR_A3_H_Beret_grn0";
	};
	class H_Beret_grn_SF: H_Beret_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_grn_SF";
		scope = 1;
		displayName = "$STR_A3_H_Beret_grn_SF0";
	};
	class H_Beret_brn_SF: H_Beret_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_brn_SF";
		scope = 1;
		displayName = "$STR_A3_H_Beret_brn_SF0";
	};
	class H_Beret_ocamo: H_Beret_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_ocamo";
		scope = 1;
		displayName = "$STR_A3_H_Beret_ocamo0";
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\headgear_beret01_ocamo_co.paa"};
	};
	class H_Beret_02: H_Beret_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_02";
		displayName = "$STR_A3_H_Beret_020";
		picture = "\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca.paa";
		model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\BLUFOR\Data\headgear_beret02_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			modelSides[] = {6};
		};
	};
	class H_Beret_Colonel: H_Beret_02
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Beret_Colonel";
		displayName = "$STR_A3_H_Beret_Colonel0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPC\BLUFOR\Data\headgear_beret02_colonel_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Characters_F_EPC\BLUFOR\Data\headgear_beret02_colonel.rvmat"};
	};
	class H_Watchcap_blk: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Watchcap_blk";
		scope = 2;
		displayName = "$STR_A3_H_Watchcap_blk0";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model = "\A3\Characters_F\Civil\headgear_beaniehat01";
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\woolhat_black_co.paa"};
		allowedFacewear[] = {"",6,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[] = {6};
		};
	};
	class H_Watchcap_cbr: H_Watchcap_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Watchcap_cbr";
		displayName = "$STR_A3_H_Watchcap_cbr0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_cbr_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_brown_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Watchcap_khk: H_Watchcap_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Watchcap_khk";
		displayName = "$STR_A3_H_Watchcap_khk0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_khk_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_khk_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Watchcap_camo: H_Watchcap_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Watchcap_camo";
		displayName = "$STR_A3_H_Watchcap_camo0_boot";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_camo_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_green_co.paa"};
		allowedFacewear[] = {"",6,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	class H_Watchcap_sgg: H_Watchcap_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Watchcap_sgg";
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_A3_H_Watchcap_sgg0";
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\woolhat_blue_co.paa"};
	};
	class H_TurbanO_blk: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_TurbanO_blk";
		scope = 1;
		scopeCurator = 1;
		displayName = "$STR_A3_H_TurbanO_blk0";
		picture = "\A3\characters_f\Data\UI\icon_H_Cap_red_CA.paa";
		model = "\A3\Characters_F\Civil\headgear_turban.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 8;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F\Civil\headgear_turban.p3d";
			modelSides[] = {6};
		};
	};
	class H_StrawHat: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_StrawHat";
		scope = 2;
		displayName = "$STR_A3_H_StrawHat0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_StrawHat_ca.paa";
		model = "\A3\Characters_F\Civil\hat_straw.p3d";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hat_straw_light_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {901,701,605};
			uniformModel = "\A3\Characters_F\Civil\hat_straw.p3d";
			modelSides[] = {6};
		};
	};
	class H_StrawHat_dark: H_StrawHat
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_StrawHat_dark";
		displayName = "$STR_A3_H_StrawHat_dark0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_StrawHat_dark_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hat_straw_dark_co.paa"};
	};
	class H_Hat_blue: HelmetBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Hat_blue";
		scope = 2;
		displayName = "$STR_A3_H_Hat_blue0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Hat_blue_ca.paa";
		model = "\A3\Characters_F\Civil\hat";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hat_blue_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 6;
			allowedSlots[] = {901,701,605};
			uniformModel = "\A3\Characters_F\Civil\hat";
			modelSides[] = {6};
		};
	};
	class H_Hat_brown: H_Hat_blue
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Hat_brown";
		displayName = "$STR_A3_H_Hat_brown0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Hat_brown_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hat_brown_co.paa"};
	};
	class H_Hat_camo: H_Hat_blue
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Hat_camo";
		displayName = "$STR_A3_H_Hat_camo0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Hat_camo_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hat_camo_co.paa"};
	};
	class H_Hat_grey: H_Hat_blue
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Hat_grey";
		displayName = "$STR_A3_H_Hat_grey0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Hat_grey_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hat_grey_co.paa"};
	};
	class H_Hat_checker: H_Hat_blue
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Hat_checker";
		displayName = "$STR_A3_H_Hat_checker0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Hat_checker_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hat_checker_co.paa"};
	};
	class H_Hat_tan: H_Hat_blue
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Hat_tan";
		displayName = "$STR_A3_H_Hat_tan0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Hat_tan_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hat_tan_co.paa"};
	};
	class H_RacingHelmet_1_F: H_HelmetB_camo
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_1_F";
		DLC = "Kart";
		displayName = "$STR_A3_H_RacingHelmet_1_F0";
		model = "\A3\Characters_F_Kart\Civil\C_RacingHelmet_F.p3d";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_01_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_kart\civil\data\c_racinghelmet_01_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"\a3\characters_f_kart\civil\data\c_racinghelmet.rvmat","\a3\characters_f_kart\civil\data\c_RacingHelmet_VisorEffectBlack.rvmat"};
		descriptionShort = "$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			mass = 40;
			uniformModel = "\A3\Characters_F_Kart\Civil\C_RacingHelmet_F.p3d";
			modelSides[] = {3};
			hiddenSelections[] = {"camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_RacingHelmet_2_F: H_RacingHelmet_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_2_F";
		displayName = "$STR_A3_H_RacingHelmet_2_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_02_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_02_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"\a3\characters_f_kart\civil\data\c_racinghelmet.rvmat","\a3\characters_f_kart\civil\data\c_RacingHelmet_VisorEffectBlue.rvmat"};
	};
	class H_RacingHelmet_3_F: H_RacingHelmet_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_3_F";
		displayName = "$STR_A3_H_RacingHelmet_3_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_03_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_03_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"\a3\characters_f_kart\civil\data\c_racinghelmet_gold.rvmat","\a3\characters_f_kart\civil\data\c_RacingHelmet_VisorEffectBlack.rvmat"};
	};
	class H_RacingHelmet_4_F: H_RacingHelmet_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_4_F";
		displayName = "$STR_A3_H_RacingHelmet_4_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_04_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_04_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"\a3\characters_f_kart\civil\data\c_racinghelmet.rvmat","\a3\characters_f_kart\civil\data\c_RacingHelmet_VisorEffectMetalic.rvmat"};
	};
	class H_RacingHelmet_1_black_F: H_RacingHelmet_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_1_black_F";
		displayName = "$STR_A3_H_RacingHelmet_1_black_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_base_black_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_base_black_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"\a3\characters_f_kart\civil\data\c_racinghelmet.rvmat","\a3\characters_f_kart\civil\data\c_RacingHelmet_Visor_nontrans.rvmat"};
	};
	class H_RacingHelmet_1_blue_F: H_RacingHelmet_1_black_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_1_blue_F";
		displayName = "$STR_A3_H_RacingHelmet_1_blue_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_base_blue_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_base_blue_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
	};
	class H_RacingHelmet_1_green_F: H_RacingHelmet_1_black_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_1_green_F";
		displayName = "$STR_A3_H_RacingHelmet_1_green_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_base_green_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_base_green_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
	};
	class H_RacingHelmet_1_red_F: H_RacingHelmet_1_black_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_1_red_F";
		displayName = "$STR_A3_H_RacingHelmet_1_red_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_base_red_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_base_red_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
	};
	class H_RacingHelmet_1_white_F: H_RacingHelmet_1_black_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_1_white_F";
		displayName = "$STR_A3_H_RacingHelmet_1_white_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_base_white_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_base_white_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
	};
	class H_RacingHelmet_1_yellow_F: H_RacingHelmet_1_black_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_1_yellow_F";
		displayName = "$STR_A3_H_RacingHelmet_1_yellow_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_base_yellow_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_base_yellow_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
	};
	class H_RacingHelmet_1_orange_F: H_RacingHelmet_1_black_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_RacingHelmet_1_orange_F";
		displayName = "$STR_A3_H_RacingHelmet_1_orange_F0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_RacingHelmet_base_orange_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_RacingHelmet_base_orange_co.paa","a3\characters_f_kart\civil\data\c_racinghelmet_visor_co.paa"};
	};
	class H_Cap_marshal: H_Cap_headphones
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_Cap_marshal";
		DLC = "Kart";
		displayName = "$STR_A3_H_Cap_marshal0";
		picture = "\A3\Characters_F_Kart\Data\UI\icon_H_Cap_headphones_red_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\capb_marshal_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	class H_FakeHeadgear
	{
		scope = 0;
		allowedFacewear[] = {"","G_Aviator","G_Balaclava_blk","G_Balaclava_oli","G_Bandanna_aviator","G_Bandanna_beast","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_shades","G_Bandanna_sport","G_Bandanna_tan","G_Shades_Black","G_Shades_Blue","G_Shades_Red","G_Shades_Green"};
	};
};
class CfgGlasses
{
	class None;
	class G_Spectacles: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Spectacles";
		displayname = "$STR_A3_CfgGlasses_G_Spectacles0";
		model = "\A3\characters_f_beta\heads\glasses\g_spectacles";
		picture = "\A3\Characters_F\data\ui\icon_g_spectacles_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\spectacles_brown_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",10,"G_CIVIL_male",20};
		mass = 2;
	};
	class G_Spectacles_Tinted: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Spectacles_Tinted";
		displayname = "$STR_A3_CfgGlasses_G_Spectacles_Tinted0";
		model = "\A3\characters_f_beta\heads\glasses\g_spectacles_tinted";
		picture = "\A3\Characters_F\data\ui\icon_g_spectacles_tinted_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\spectacles_black_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",10,"G_CIVIL_male",20};
		mass = 2;
	};
	class G_Combat: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Combat";
		displayname = "$STR_A3_CfgGlasses_G_Combat0";
		model = "\A3\characters_f_beta\heads\glasses\g_combat";
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",300,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",300,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 4;
	};
	class G_Lowprofile: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Lowprofile";
		displayname = "$STR_A3_CfgGlasses_G_Lowprofile0";
		model = "\A3\characters_f_beta\heads\glasses\g_lowprofile";
		picture = "\A3\Characters_F\data\ui\icon_g_lowprofile_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",150,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0};
		mass = 2;
	};
	class G_Shades_Black: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Shades_Black";
		displayname = "$STR_A3_CfgGlasses_G_Shades_Black0";
		model = "\A3\characters_f\Heads\glasses\g_shades_black";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_black_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",10,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",20,"G_HAF_default",20,"G_CIVIL_female",10,"G_CIVIL_male",20,"G_Competitor",10};
		mass = 2;
	};
	class G_Shades_Green: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Shades_Green";
		displayname = "$STR_A3_CfgGlasses_G_Shades_Green0";
		model = "\A3\characters_f_beta\heads\glasses\g_shades_green";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_green_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_green_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",10,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",20,"G_HAF_default",20,"G_CIVIL_female",10,"G_CIVIL_male",20,"G_Competitor",10};
		mass = 2;
	};
	class G_Shades_Red: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Shades_Red";
		displayname = "$STR_A3_CfgGlasses_G_Shades_Red0";
		model = "\A3\characters_f_beta\heads\glasses\g_shades_red";
		picture = "\A3\Characters_F\data\ui\icon_g_shades_red_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\joeyx_red_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",10,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",20,"G_HAF_default",20,"G_CIVIL_female",10,"G_CIVIL_male",20,"G_Competitor",10};
		mass = 2;
	};
	class G_Squares: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Squares";
		displayname = "$STR_A3_CfgGlasses_G_Squares0";
		model = "\A3\characters_f_beta\heads\glasses\g_squares";
		picture = "\A3\Characters_F\data\ui\icon_g_squares_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\civil\data\nikos_wear_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",10,"G_CIVIL_male",15};
		mass = 2;
	};
	class G_Squares_Tinted: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Squares_Tinted";
		displayname = "$STR_A3_CfgGlasses_G_Squares_Tinted0";
		model = "\A3\characters_f_beta\heads\glasses\g_squares_tinted";
		picture = "\A3\Characters_F\data\ui\icon_g_squares_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\civil\data\nikos_wear_co.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",10,"G_CIVIL_male",15};
		mass = 2;
	};
	class G_Sport_BlackWhite: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Sport_BlackWhite";
		displayname = "$STR_A3_CfgGlasses_G_Sport_BlackWhite0";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_blackWhite";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackwhite_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_1_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",15,"G_CIVIL_male",25};
		mass = 2;
	};
	class G_Sport_Blackyellow: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Sport_Blackyellow";
		displayname = "$STR_A3_CfgGlasses_G_Sport_Blackyellow0";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_blackyellow";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_blackyellow_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_2_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",15,"G_CIVIL_male",25};
		mass = 2;
	};
	class G_Sport_Greenblack: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Sport_Greenblack";
		displayname = "$STR_A3_CfgGlasses_G_Sport_Greenblack0";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_greenblack";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_greenblack_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_3_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",15,"G_CIVIL_male",25};
		mass = 2;
	};
	class G_Sport_Checkered: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Sport_Checkered";
		displayname = "$STR_A3_CfgGlasses_G_Sport_Checkered0";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_checkered";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_checkered_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\sunglasses_sport_6_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",10,"G_HAF_default",10,"G_CIVIL_female",15,"G_CIVIL_male",25};
		mass = 2;
	};
	class G_Sport_Red: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Sport_Red";
		displayname = "$STR_A3_CfgGlasses_G_Sport_Red0";
		model = "\A3\characters_f_beta\heads\glasses\g_sport_red";
		picture = "\A3\Characters_F\data\ui\icon_g_sport_red_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",5,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",10,"G_CIVIL_female",15,"G_CIVIL_male",25};
		mass = 2;
	};
	class G_Tactical_Black: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Tactical_Black";
		displayname = "$STR_A3_CfgGlasses_G_Tactical_Black0";
		model = "\A3\characters_f_beta\heads\glasses\g_tactical_black";
		picture = "\A3\Characters_F\data\ui\icon_g_tactical_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\tactical_3_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",100,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",50,"G_NATO_SF",100,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",50,"G_CIVIL_female",0,"G_CIVIL_male",0,"G_Competitor",10};
		mass = 2;
	};
	class G_Aviator: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Aviator";
		displayname = "$STR_A3_CfgGlasses_G_Aviator0";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_aviators";
		picture = "\A3\Characters_F\data\ui\icon_g_aviators_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\glass_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",50,"G_NATO_casual",450,"G_NATO_pilot",0,"G_NATO_recon",15,"G_NATO_SF",50,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",25,"G_HAF_default",25,"G_CIVIL_female",15,"G_CIVIL_male",30,"G_IRAN_officer",500};
		mass = 2;
	};
	class G_Lady_Mirror: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Lady_Mirror";
		scope = 1;
		displayname = "$STR_A3_CfgGlasses_G_Lady_Mirror0";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_mirror";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",40,"G_CIVIL_male",0};
		mass = 2;
	};
	class G_Lady_Dark: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Lady_Dark";
		scope = 1;
		displayname = "$STR_A3_CfgGlasses_G_Lady_Dark0";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_dark";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",40,"G_CIVIL_male",0};
		mass = 2;
	};
	class G_Lady_Red: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Lady_Red";
		scope = 1;
		displayname = "$STR_A3_CfgGlasses_G_Lady_Red0";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_red";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",40,"G_CIVIL_male",0};
		mass = 2;
	};
	class G_Lady_Blue: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Lady_Blue";
		displayname = "$STR_A3_CfgGlasses_G_Lady_Blue0";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_lady_blue";
		picture = "\A3\Characters_F\data\ui\icon_g_lady_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\heads\glasses\data\glass_ca.paa"};
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",40,"G_CIVIL_male",0};
		mass = 2;
	};
	class G_Diving;
	class G_B_Diving: G_Diving
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_B_Diving";
		displayname = "$STR_A3_CfgGlasses_G_B_Diving0";
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_b_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_nato_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_nato_ca.paa"};
		mass = 4;
	};
	class G_O_Diving: G_Diving
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_O_Diving";
		displayname = "$STR_A3_CfgGlasses_G_O_Diving0";
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_o_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_iran_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_iran_ca.paa"};
		mass = 4;
	};
	class G_I_Diving: G_Diving
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_I_Diving";
		displayname = "$STR_A3_CfgGlasses_G_I_Diving0";
		model = "\A3\Characters_F_EPB\Heads\Glasses\g_i_diving.p3d";
		picture = "\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_rus_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_epb\heads\glasses\data\g_diving_rus_ca.paa"};
		mass = 4;
	};
	class G_Goggles_VR: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Goggles_VR";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "$STR_A3_CFGGLASSES_G_Goggles_VR0";
		model = "\A3\Characters_F_Bootcamp\Common\G_vr.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Goggles_VR_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\common\data\g_vr_co.paa"};
		identityTypes[] = {};
		mass = 6;
	};
	class G_Balaclava_blk: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Balaclava_blk";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "$STR_A3_CFGGLASSES_G_Balaclava_clean0";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa"};
		identityTypes[] = {};
		mass = 6;
	};
	class G_Balaclava_oli: G_Balaclava_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Balaclava_oli";
		displayName = "$STR_A3_CFGGLASSES_G_Balaclava_oli0";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_olive_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_balaclava_grn_co.paa"};
		identityTypes[] = {};
	};
	class G_Balaclava_combat: G_Balaclava_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Balaclava_combat";
		displayName = "$STR_A3_CFGGLASSES_G_Balaclava_combat0";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_combat.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_combat_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa","\a3\characters_f\heads\glasses\data\g_combat_ca.paa"};
		mass = 10;
	};
	class G_Balaclava_lowprofile: G_Balaclava_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Balaclava_lowprofile";
		displayName = "$STR_A3_CFGGLASSES_G_Balaclava_lowprofile0";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_lowprofile.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_lowprofile_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa","\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"};
		mass = 8;
	};
	class G_Bandanna_blk: G_Balaclava_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Bandanna_blk";
		displayName = "$STR_A3_CFGGLASSES_G_Bandana_clean0";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_clean_ca.paa";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa"};
		mass = 4;
	};
	class G_Bandanna_oli: G_Bandanna_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Bandanna_oli";
		displayName = "$STR_A3_CFGGLASSES_G_Bandanna_oli0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_olive_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_grn_co.paa"};
	};
	class G_Bandanna_khk: G_Bandanna_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Bandanna_khk";
		displayName = "$STR_A3_CFGGLASSES_G_Bandanna_khk0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_khaki_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_khk_co.paa"};
	};
	class G_Bandanna_tan: G_Bandanna_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Bandanna_tan";
		displayName = "$STR_A3_CFGGLASSES_G_Bandanna_tan0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_tan_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_tan_co.paa"};
	};
	class G_Bandanna_beast: G_Bandanna_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Bandanna_beast";
		displayName = "$STR_A3_CFGGLASSES_G_Bandanna_beast0";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_beast_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_beast_co.paa"};
	};
	class G_Bandanna_shades: G_Bandanna_blk
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Bandanna_shades";
		displayName = "$STR_A3_CFGGLASSES_G_Bandana_shades0";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_shades.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_shades_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa","\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"};
		mass = 6;
	};
	class G_Bandanna_sport: G_Bandanna_shades
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Bandanna_sport";
		displayName = "$STR_A3_CFGGLASSES_G_Bandana_sport0";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_sport_ca.paa";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa","\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"};
	};
	class G_Bandanna_aviator: G_Bandanna_shades
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Bandanna_aviator";
		displayName = "$STR_A3_CFGGLASSES_G_Bandana_aviator0";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_aviator.p3d";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_aviator_ca.paa";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co.paa","\a3\characters_f\heads\glasses\data\glass_ca.paa"};
	};
};
//};
