////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Fri Aug 11 17:49:58 2017 : 'file' last modified on Tue Jun 13 12:55:12 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class characters_f : config.bin{
class CfgPatches
{
	class A3_Characters_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Alpha - Characters and Clothing";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {"B_Competitor_F","B_crew_F","B_CTRG_Sharphooter_F","B_CTRG_soldier_AR_A_F","B_CTRG_soldier_engineer_exp_F","B_CTRG_soldier_GL_LAT_F","B_CTRG_soldier_M_medic_F","B_diver_exp_F","B_diver_F","B_diver_TL_F","B_engineer_F","B_G_engineer_F","B_G_medic_F","B_G_officer_F","B_G_Sharpshooter_F","B_G_Soldier_A_F","B_G_Soldier_AR_F","B_G_Soldier_exp_F","B_G_Soldier_F","B_G_Soldier_GL_F","B_G_Soldier_LAT_F","B_G_Soldier_lite_F","B_G_Soldier_M_F","B_G_Soldier_SL_F","B_G_Soldier_TL_F","B_G_Soldier_unarmed_F","B_G_Soldier_universal_F","B_G_Survivor_F","B_ghillie_ard_F","B_ghillie_lsh_F","B_ghillie_sard_F","B_HeavyGunner_F","B_helicrew_F","B_Helipilot_F","B_medic_F","B_officer_F","B_Pilot_F","B_Protagonist_VR_F","B_RangeMaster_F","B_recon_exp_F","B_recon_F","B_recon_JTAC_F","B_recon_LAT_F","B_recon_M_F","B_recon_medic_F","B_Recon_Sharpshooter_F","B_recon_TL_F","B_Sharpshooter_F","B_sniper_F","B_Soldier_A_F","B_soldier_AA_F","B_soldier_AAA_F","B_soldier_AAR_F","B_soldier_AAT_F","B_soldier_AR_F","B_soldier_AT_F","B_soldier_exp_F","B_Soldier_F","B_Soldier_GL_F","B_soldier_LAT_F","B_Soldier_lite_F","B_soldier_M_F","B_soldier_PG_F","B_soldier_repair_F","B_Soldier_SL_F","b_soldier_survival_F","B_Soldier_TL_F","B_soldier_UAV_F","B_Soldier_unarmed_F","B_Soldier_universal_F","B_Soldier_VR_F","B_spotter_F","B_Story_Colonel_F","B_Story_Engineer_F","B_Story_Pilot_F","B_Story_Protagonist_F","B_Story_SF_Captain_F","B_Story_Tank_Commander_F","B_support_AMG_F","B_support_AMort_F","B_support_GMG_F","B_support_MG_F","B_support_Mort_F","B_Survivor_F","C_Driver_1_black_F","C_Driver_1_blue_F","C_Driver_1_F","C_Driver_1_green_F","C_Driver_1_orange_F","C_Driver_1_random_base_F","C_Driver_1_red_F","C_Driver_1_white_F","C_Driver_1_yellow_F","C_Driver_2_F","C_Driver_3_F","C_Driver_4_F","C_journalist_F","C_man_1","C_man_1_1_F","C_man_1_2_F","C_man_1_3_F","C_man_hunter_1_F","C_man_p_beggar_F","C_man_p_beggar_F_afro","C_man_p_beggar_F_asia","C_man_p_beggar_F_euro","C_man_p_fugitive_F","C_man_p_fugitive_F_afro","C_man_p_fugitive_F_asia","C_man_p_fugitive_F_euro","C_man_p_shorts_1_F","C_man_p_shorts_1_F_afro","C_man_p_shorts_1_F_asia","C_man_p_shorts_1_F_euro","C_man_pilot_F","C_man_polo_1_F","C_man_polo_1_F_afro","C_man_polo_1_F_asia","C_man_polo_1_F_euro","C_man_polo_2_F","C_man_polo_2_F_afro","C_man_polo_2_F_asia","C_man_polo_2_F_euro","C_man_polo_3_F","C_man_polo_3_F_afro","C_man_polo_3_F_asia","C_man_polo_3_F_euro","C_man_polo_4_F","C_man_polo_4_F_afro","C_man_polo_4_F_asia","C_man_polo_4_F_euro","C_man_polo_5_F","C_man_polo_5_F_afro","C_man_polo_5_F_asia","C_man_polo_5_F_euro","C_man_polo_6_F","C_man_polo_6_F_afro","C_man_polo_6_F_asia","C_man_polo_6_F_euro","C_man_shorts_1_F","C_man_shorts_1_F_afro","C_man_shorts_1_F_asia","C_man_shorts_1_F_euro","C_man_shorts_2_F","C_man_shorts_2_F_afro","C_man_shorts_2_F_asia","C_man_shorts_2_F_euro","C_man_shorts_3_F","C_man_shorts_3_F_afro","C_man_shorts_3_F_asia","C_man_shorts_3_F_euro","C_man_shorts_4_F","C_man_shorts_4_F_afro","C_man_shorts_4_F_asia","C_man_shorts_4_F_euro","C_man_w_worker_F","C_Marshal_F","C_Nikos","C_Nikos_aged","C_Orestes","C_scientist_F","C_Soldier_VR_F","HeadlessClient_F","I_crew_F","I_diver_exp_F","I_diver_F","I_diver_TL_F","I_engineer_F","I_G_engineer_F","I_G_medic_F","I_G_officer_F","I_G_resistanceCommander_F","I_G_resistanceLeader_F","I_G_Sharpshooter_F","I_G_Soldier_A_F","I_G_Soldier_AR_F","I_G_Soldier_exp_F","I_G_Soldier_F","I_G_Soldier_GL_F","I_G_Soldier_LAT_F","I_G_Soldier_lite_F","I_G_Soldier_M_F","I_G_Soldier_SL_F","I_G_Soldier_TL_F","I_G_Soldier_unarmed_F","I_G_Soldier_universal_F","I_G_Story_Protagonist_F","I_G_Story_SF_Captain_F","I_G_Survivor_F","I_ghillie_ard_F","I_ghillie_lsh_F","I_ghillie_sard_F","I_helicrew_F","I_helipilot_F","I_medic_F","I_officer_F","I_pilot_F","I_Protagonist_VR_F","I_Sniper_F","I_Soldier_A_F","I_Soldier_AA_F","I_Soldier_AAA_F","I_Soldier_AAR_F","I_Soldier_AAT_F","I_Soldier_AR_F","I_Soldier_AT_F","I_Soldier_exp_F","I_soldier_F","I_Soldier_GL_F","I_Soldier_LAT_F","I_Soldier_lite_F","I_Soldier_M_F","I_Soldier_repair_F","I_Soldier_SL_F","I_Soldier_TL_F","I_soldier_UAV_F","I_Soldier_unarmed_F","I_Soldier_universal_F","I_Soldier_VR_F","I_Spotter_F","I_Story_Colonel_F","I_support_AMG_F","I_support_AMort_F","I_support_GMG_F","I_support_MG_F","I_support_Mort_F","I_Survivor_F","Item_U_BG_Guerrilla_6_1","Item_U_C_Journalist","Item_U_C_Scientist","Item_U_IG_Guerrilla_6_1","Item_U_OG_Guerrilla_6_1","O_crew_F","O_diver_exp_F","O_diver_F","O_diver_TL_F","O_engineer_F","O_engineer_U_F","O_G_engineer_F","O_G_medic_F","O_G_officer_F","O_G_Sharpshooter_F","O_G_Soldier_A_F","O_G_Soldier_AR_F","O_G_Soldier_exp_F","O_G_Soldier_F","O_G_Soldier_GL_F","O_G_Soldier_LAT_F","O_G_Soldier_lite_F","O_G_Soldier_M_F","O_G_Soldier_SL_F","O_G_Soldier_TL_F","O_G_Soldier_unarmed_F","O_G_Soldier_universal_F","O_G_Survivor_F","O_ghillie_ard_F","O_ghillie_lsh_F","O_ghillie_sard_F","O_HeavyGunner_F","O_helicrew_F","O_helipilot_F","O_medic_F","O_officer_F","O_Pathfinder_F","O_Pilot_F","O_Protagonist_VR_F","O_recon_exp_F","O_recon_F","O_recon_JTAC_F","O_recon_LAT_F","O_recon_M_F","O_recon_medic_F","O_recon_TL_F","O_Sharpshooter_F","O_sniper_F","O_Soldier_A_F","O_Soldier_AA_F","O_Soldier_AAA_F","O_Soldier_AAR_F","O_Soldier_AAT_F","O_Soldier_AR_F","O_Soldier_AT_F","O_soldier_exp_F","O_Soldier_F","O_Soldier_GL_F","O_Soldier_LAT_F","O_Soldier_lite_F","O_soldier_M_F","O_soldier_PG_F","O_soldier_repair_F","O_Soldier_SL_F","O_Soldier_TL_F","O_soldier_UAV_F","O_Soldier_unarmed_F","O_Soldier_universal_F","O_Soldier_VR_F","O_soldierU_A_F","O_soldierU_AA_F","O_soldierU_AAA_F","O_soldierU_AAR_F","O_soldierU_AAT_F","O_soldierU_AR_F","O_soldierU_AT_F","O_soldierU_exp_F","O_soldierU_F","O_SoldierU_GL_F","O_soldierU_LAT_F","O_soldierU_M_F","O_soldierU_medic_F","O_soldierU_repair_F","O_SoldierU_SL_F","O_soldierU_TL_F","O_SoldierU_unarmed_F","O_spotter_F","O_Story_CEO_F","O_Story_Colonel_F","O_support_AMG_F","O_support_AMort_F","O_support_GMG_F","O_support_MG_F","O_support_Mort_F","O_Survivor_F","O_Urban_HeavyGunner_F","O_Urban_Sharpshooter_F","Supply0","Supply1","Supply10","Supply100","Supply110","Supply120","Supply130","Supply140","Supply150","Supply160","Supply170","Supply180","Supply190","Supply2","Supply20","Supply200","Supply210","Supply220","Supply230","Supply240","Supply250","Supply3","Supply30","Supply300","Supply350","Supply380","Supply4","Supply40","Supply400","Supply420","Supply440","Supply450","Supply480","Supply5","Supply50","Supply500","Supply6","Supply60","Supply7","Supply70","Supply8","Supply80","Supply9","Supply90","Vest_V_Press_F","VirtualMan_F"};
		weapons[] = {"H_Bandanna_blu","H_Bandanna_camo","H_Bandanna_cbr","H_Bandanna_gry","H_Bandanna_khk","H_Bandanna_khk_hs","H_Bandanna_mcamo","H_Bandanna_sand","H_Bandanna_sgg","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_BandMask_blk","H_BandMask_demon","H_BandMask_khk","H_BandMask_reaper","H_Beret_02","H_Beret_blk","H_Beret_blk_POLICE","H_Beret_brn_SF","H_Beret_Colonel","H_Beret_grn","H_Beret_grn_SF","H_Beret_ocamo","H_Beret_red","H_Booniehat_dgtl","H_Booniehat_dirty","H_Booniehat_grn","H_Booniehat_indp","H_Booniehat_khk","H_Booniehat_khk_hs","H_Booniehat_mcamo","H_Booniehat_oli","H_Booniehat_tan","H_Cap_blk","H_Cap_blk_CMMG","H_Cap_blk_ION","H_Cap_blk_Raven","H_Cap_blu","H_Cap_brn_SPECOPS","H_Cap_grn","H_Cap_grn_BI","H_Cap_headphones","H_Cap_khaki_specops_UK","H_Cap_marshal","H_Cap_oli","H_Cap_oli_hs","H_Cap_police","H_Cap_press","H_Cap_red","H_Cap_surfer","H_Cap_tan","H_Cap_tan_specops_US","H_Cap_usblack","H_CrewHelmetHeli_B","H_CrewHelmetHeli_I","H_CrewHelmetHeli_O","H_Hat_blue","H_Hat_brown","H_Hat_camo","H_Hat_checker","H_Hat_grey","H_Hat_tan","H_Helmet_Kerry","H_HelmetB","H_HelmetB_black","H_HelmetB_camo","H_HelmetB_desert","H_HelmetB_grass","H_HelmetB_light","H_HelmetB_light_black","H_HelmetB_light_desert","H_HelmetB_light_grass","H_HelmetB_light_sand","H_HelmetB_light_snakeskin","H_HelmetB_paint","H_HelmetB_plain_blk","H_HelmetB_plain_mcamo","H_HelmetB_sand","H_HelmetB_snakeskin","H_HelmetCrew_B","H_HelmetCrew_I","H_HelmetCrew_O","H_HelmetIA","H_HelmetIA_camo","H_HelmetIA_net","H_HelmetLeaderO_ocamo","H_HelmetLeaderO_oucamo","H_HelmetO_ocamo","H_HelmetO_oucamo","H_HelmetSpecB","H_HelmetSpecB_blk","H_HelmetSpecB_paint1","H_HelmetSpecB_paint2","H_HelmetSpecB_sand","H_HelmetSpecB_snakeskin","H_HelmetSpecO_blk","H_HelmetSpecO_ocamo","H_MilCap_blue","H_MilCap_dgtl","H_MilCap_gry","H_MilCap_mcamo","H_MilCap_ocamo","H_MilCap_oucamo","H_MilCap_rucamo","H_PilotHelmetFighter_B","H_PilotHelmetFighter_I","H_PilotHelmetFighter_O","H_PilotHelmetHeli_B","H_PilotHelmetHeli_I","H_PilotHelmetHeli_O","H_RacingHelmet_1_black_F","H_RacingHelmet_1_blue_F","H_RacingHelmet_1_F","H_RacingHelmet_1_green_F","H_RacingHelmet_1_orange_F","H_RacingHelmet_1_red_F","H_RacingHelmet_1_white_F","H_RacingHelmet_1_yellow_F","H_RacingHelmet_2_F","H_RacingHelmet_3_F","H_RacingHelmet_4_F","H_Shemag_khk","H_Shemag_olive","H_Shemag_olive_hs","H_Shemag_tan","H_ShemagOpen_khk","H_ShemagOpen_tan","H_StrawHat","H_StrawHat_dark","H_TurbanO_blk","H_Watchcap_blk","H_Watchcap_camo","H_Watchcap_cbr","H_Watchcap_khk","H_Watchcap_sgg","U_AntigonaBody","U_AttisBody","U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_tshirt","U_B_CombatUniform_mcam_vest","U_B_CombatUniform_mcam_worn","U_B_CombatUniform_sgg","U_B_CombatUniform_sgg_tshirt","U_B_CombatUniform_sgg_vest","U_B_CombatUniform_wdl","U_B_CombatUniform_wdl_tshirt","U_B_CombatUniform_wdl_vest","U_B_CTRG_1","U_B_CTRG_2","U_B_CTRG_3","U_B_FullGhillie_ard","U_B_FullGhillie_lsh","U_B_FullGhillie_sard","U_B_GhillieSuit","U_B_HeliPilotCoveralls","U_B_PilotCoveralls","U_B_Protagonist_VR","U_B_Soldier_VR","U_B_SpecopsUniform_sgg","U_B_survival_uniform","U_B_Wetsuit","U_BasicBody","U_BG_Guerilla1_1","U_BG_Guerilla2_1","U_BG_Guerilla2_2","U_BG_Guerilla2_3","U_BG_Guerilla3_1","U_BG_Guerilla3_2","U_BG_Guerrilla_6_1","U_BG_leader","U_C_Commoner1_1","U_C_Commoner1_2","U_C_Commoner1_3","U_C_Commoner2_1","U_C_Commoner2_2","U_C_Commoner2_3","U_C_Commoner_shorts","U_C_Driver_1","U_C_Driver_1_black","U_C_Driver_1_blue","U_C_Driver_1_green","U_C_Driver_1_orange","U_C_Driver_1_red","U_C_Driver_1_white","U_C_Driver_1_yellow","U_C_Driver_2","U_C_Driver_3","U_C_Driver_4","U_C_Farmer","U_C_Fisherman","U_C_FishermanOveralls","U_C_HunterBody_brn","U_C_HunterBody_grn","U_C_Journalist","U_C_Novak","U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_redwhite","U_C_Poloshirt_salmon","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poor_1","U_C_Poor_2","U_C_Poor_shorts_1","U_C_Poor_shorts_2","U_C_PriestBody","U_C_Scavenger_1","U_C_Scavenger_2","U_C_Scientist","U_C_ShirtSurfer_shorts","U_C_Soldier_VR","U_C_TeeSurfer_shorts_1","U_C_TeeSurfer_shorts_2","U_C_WorkerCoveralls","U_C_WorkerOveralls","U_Competitor","U_I_CombatUniform","U_I_CombatUniform_shortsleeve","U_I_CombatUniform_tshirt","U_I_FullGhillie_ard","U_I_FullGhillie_lsh","U_I_FullGhillie_sard","U_I_G_resistanceLeader_F","U_I_G_Story_Protagonist_F","U_I_GhillieSuit","U_I_HeliPilotCoveralls","U_I_OfficerUniform","U_I_pilotCoveralls","U_I_Protagonist_VR","U_I_Soldier_VR","U_I_Wetsuit","U_IG_Guerilla1_1","U_IG_Guerilla2_1","U_IG_Guerilla2_2","U_IG_Guerilla2_3","U_IG_Guerilla3_1","U_IG_Guerilla3_2","U_IG_Guerrilla_6_1","U_IG_leader","U_IG_Menelaos","U_KerryBody","U_Marshal","U_MillerBody","U_NikosAgedBody","U_NikosBody","U_O_CombatUniform_ocamo","U_O_CombatUniform_oucamo","U_O_FullGhillie_ard","U_O_FullGhillie_lsh","U_O_FullGhillie_sard","U_O_GhillieSuit","U_O_OfficerUniform_ocamo","U_O_PilotCoveralls","U_O_Protagonist_VR","U_O_Soldier_VR","U_O_SpecopsUniform_blk","U_O_SpecopsUniform_ocamo","U_O_Wetsuit","U_OG_Guerilla1_1","U_OG_Guerilla2_1","U_OG_Guerilla2_2","U_OG_Guerilla2_3","U_OG_Guerilla3_1","U_OG_Guerilla3_2","U_OG_Guerrilla_6_1","U_OG_leader","U_OI_Scientist","U_OrestesBody","U_Rangemaster","V_BandollierB_blk","V_BandollierB_cbr","V_BandollierB_khk","V_BandollierB_oli","V_BandollierB_rgr","V_Chestrig_blk","V_Chestrig_khk","V_Chestrig_oli","V_Chestrig_rgr","V_HarnessO_brn","V_HarnessO_gry","V_HarnessOGL_brn","V_HarnessOGL_gry","V_HarnessOSpec_brn","V_HarnessOSpec_gry","V_I_G_resistanceLeader_F","V_PlateCarrier1_blk","V_PlateCarrier1_rgr","V_PlateCarrier2_blk","V_PlateCarrier2_rgr","V_PlateCarrier3_rgr","V_PlateCarrier_Kerry","V_PlateCarrierGL_blk","V_PlateCarrierGL_mtp","V_PlateCarrierGL_rgr","V_PlateCarrierH_CTRG","V_PlateCarrierIA1_dgtl","V_PlateCarrierIA2_dgtl","V_PlateCarrierIAGL_dgtl","V_PlateCarrierIAGL_oli","V_PlateCarrierL_CTRG","V_PlateCarrierSpec_blk","V_PlateCarrierSpec_mtp","V_PlateCarrierSpec_rgr","V_Press_F","V_Rangemaster_belt","V_RebreatherB","V_RebreatherIA","V_RebreatherIR","V_TacVest_blk","V_TacVest_blk_POLICE","V_TacVest_brn","V_TacVest_camo","V_TacVest_khk","V_TacVest_oli","V_TacVestCamo_khk","V_TacVestIR_blk"};
	};
};
class DefaultEventHandlers;
class CfgCoreData
{
	footStepL = "A3\characters_f\footstep_L.p3d";
	footStepR = "A3\characters_f\footstep_R.p3d";
	slopBlood = "A3\characters_F\blood_splash.p3d";
	footStepBleeding0 = "A3\characters_f\data\slop_00.p3d";
	footStepBleeding1 = "A3\characters_f\data\slop_00.p3d";
};
class CfgFSMs
{
	class Formation
	{
		class States
		{
			class Init
			{
				name = "Init";
				class Init
				{
					function = "formationInit";
					parameters[] = {};
					thresholds[] = {{0,0.5,0.5}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Combat
			{
				name = "Combat";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Leader_near_tgt
					{
						priority = 1;
						to = "Leader";
						class Condition
						{
							function = "formationIsLeader";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0;
						to = "Search_path__Covering";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Test_reload
			{
				name = "Test_reload";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Reload
					{
						priority = 3;
						to = "Drop_to_ground";
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_cover
					{
						priority = 1;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Search_path__Covering
			{
				name = "Search_path__Covering";
				class Init
				{
					function = "searchPath";
					parameters[] = {10,5};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4;
						to = "Provide_cover__Out";
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_cover
					{
						priority = 1;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Next_target__Out
			{
				name = "Next_target__Out";
				class Init
				{
					function = "formationNextTarget";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_Vehicle
					{
						priority = 3;
						to = "Clean_up";
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Abort_No_combat
					{
						priority = 3;
						to = "Clean_up";
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Reload
					{
						priority = 2;
						to = "Drop_to_ground_1";
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Stop_covering
					{
						priority = 1;
						to = "Clean_up";
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Random_delay
					{
						priority = 0;
						to = "Hide_or_Out_";
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Start
			{
				name = "Start";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Vehicle
					{
						priority = 2;
						to = "Excluded";
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Combat
					{
						priority = 1;
						to = "Combat";
						class Condition
						{
							function = "behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_combat
					{
						priority = 0;
						to = "Excluded";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Provide_cover__Out
			{
				name = "Provide_cover__Out";
				class Init
				{
					function = "formationProvideCover";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_Vehicle
					{
						priority = 3;
						to = "Clean_up";
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Abort_No_combat
					{
						priority = 3;
						to = "Clean_up";
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Reload
					{
						priority = 2;
						to = "Drop_to_ground_1";
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Stop_covering
					{
						priority = 1;
						to = "Clean_up";
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Random_delay
					{
						priority = 0;
						to = "Hide_or_Out_";
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Clean_up
			{
				name = "Clean_up";
				class Init
				{
					function = "formationCleanUp";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Leader
			{
				name = "Leader";
				class Init
				{
					function = "formationLeader";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Search_path__No";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Search_path__No
			{
				name = "Search_path__No";
				class Init
				{
					function = "searchPath";
					parameters[] = {0,0};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4;
						to = "Provide_cover__Out";
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_cover
					{
						priority = 1;
						to = "Test_reload";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Drop_to_ground
			{
				name = "Drop_to_ground";
				class Init
				{
					function = "setUnitPosToDown";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Reload";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Reload
			{
				name = "Reload";
				class Init
				{
					function = "reload";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class No_cover
					{
						priority = 1;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Excluded
			{
				name = "Excluded";
				class Init
				{
					function = "formationExcluded";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Search_path__No_1";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Reload__Hiden_
			{
				name = "Reload__Hiden_";
				class Init
				{
					function = "reload";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Provide_cover__Out";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Search_path__No_1
			{
				name = "Search_path__No_1";
				class Init
				{
					function = "searchPath";
					parameters[] = {0,0};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4;
						to = "Provide_cover__Out";
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_cover
					{
						priority = 1;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Hide_in_cover__Hidden
			{
				name = "Hide_in_cover__Hidden";
				class Init
				{
					function = "formationHideInCover";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_Vehicle
					{
						priority = 3;
						to = "Clean_up";
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Abort_No_combat
					{
						priority = 3;
						to = "Clean_up";
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Reload
					{
						priority = 2;
						to = "Drop_to_ground_1";
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Stop_covering
					{
						priority = 1;
						to = "Clean_up";
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Random_delay
					{
						priority = 0;
						to = "Hide_or_Out_";
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Hide_or_Out_
			{
				name = "Hide_or_Out_";
				class Init
				{
					function = "formationInit";
					parameters[] = {};
					thresholds[] = {{1,0.2,1.2}};
				};
				class Links
				{
					class Random
					{
						priority = 1;
						to = "Next_target__Out";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Otherwise
					{
						priority = 0;
						to = "Hide_in_cover__Hidden";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Drop_to_ground_1
			{
				name = "Drop_to_ground_1";
				class Init
				{
					function = "setUnitPosToDown";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Reload__Hiden_";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
		};
		initState = "Init";
		finalStates[] = {};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicleClasses
{
	class MenArmy
	{
		displayName = "$STR_DN_MenArmy";
	};
	class MenSLA
	{
		displayName = "$STR_DN_MenSLA";
	};
	class MenRACS
	{
		displayName = "$STR_DN_MenRACS";
	};
	class MenCIV
	{
		displayName = "$STR_DN_MenCIV";
	};
};
class CfgMovesFatigue
{
	staminaDuration = 60;
	staminaCooldown = 10;
	staminaRestoration = 30;
	aimPrecisionSpeedCoef = 5;
	terrainDrainSprint = -1;
	terrainDrainRun = -1;
	terrainSpeedCoef = 0.9;
};
class CfgVehicles
{
	class Land;
	class Man: Land
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_s"};
				speechPlural[] = {"veh_infantry_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_p";
		nameSound = "veh_infantry_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
		_generalMacro = "Man";
		class ViewPilot;
		accuracy = 0.25;
		camouflage = 2;
		sensitivityEar = 0.125;
		sensitivity = 1.75;
		minFireTime = 5;
		extCameraPosition[] = {0.15,0,-2};
		class EventHandlers;
		keepHorizontalPlacement = 1;
		insideSoundCoef = 0.3;
		weight = 100;
		role = "Default";
		class HitPoints
		{
			class HitHead
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0;
			};
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0.15;
				explosionShielding = 10;
				visual = "injury_body";
				minimalHit = 0;
			};
			class HitHands
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0;
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0;
			};
		};
	};
	class CAManBase: Man
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "CAManBase";
		picture = "";
		Icon = "iconMan";
		fsmDanger = "-";
		moves = "CfgMovesMaleSdr";
		gestures = "CfgGesturesMale";
		bonePrimaryWeapon = "weapon";
		formationTimeDiving = 2;
		formationTimeSwimming = 3;
		movesFatigue = "CfgMovesFatigue";
		AnimEffectShortExhaust = 0.005;
		AnimEffectShortRest = 0.05;
		oxygenCapacity = 80;
		triggerAnim = "A3\anims_f\data\Anim\sdr\trigger.rtm";
		woman = 0;
		faceType = "Man_A3";
		minGunElev = -80;
		maxGunElev = 60;
		minGunTurn = -1;
		maxGunTurn = 1;
		minGunTurnAI = -30;
		maxGunTurnAI = 30;
		extCameraPosition[] = {0.22,0.05,-2.2};
		class HeadLimits;
		boneHead = "head";
		boneHeadCutScene = "headcutscene";
		boneLEye = "eyeleft";
		boneREye = "eyeright";
		boneLEyelidUp = "face_eyelidupperleft";
		boneREyelidUp = "face_eyelidupperright";
		boneLEyelidDown = "face_eyelidlowerleft";
		boneREyelidDown = "face_eyelidlowerright";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		minHeadTurnAI = -60;
		maxHeadTurnAI = 60;
		class ViewPilot: ViewPilot
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 0.75;
			initAngleX = 8;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		ISangleMod[] = {0.1,0.03,0.1};
		ISrecoilMod[] = {0,0,0.2};
		ISspeedMod[] = {0.0001,0.0001,0};
		ISmaxTurn = 0.5;
		ISanimMod[] = {0.03,0.06,0.04};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 3;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 3;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 3;
		explosionShielding = 0.3;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		selectionHeadWound = "head_injury";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		selectionLArmWound1 = "injury_hands";
		selectionRArmWound1 = "injury_hands";
		selectionLLegWound1 = "injury_legs";
		selectionRLegWound1 = "injury_legs";
		selectionLArmWound2 = "hl";
		selectionRArmWound2 = "hl";
		selectionLLegWound2 = "hl";
		selectionRLegWound2 = "hl";
		selectionHeadHide = "";
		selectionNeckHide = "";
		memoryPointLStep = "footstepL";
		memoryPointRStep = "footstepR";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		memoryPointCommonDamage = "l_femur_hit";
		memoryPointLeaningAxis = "leaning_axis";
		memoryPointAimingAxis = "aiming_axis";
		memoryPointHeadAxis = "head_axis";
		memoryPointWaterSurface = "water_surface";
		selectionLBrow = "lBrow";
		selectionMBrow = "mBrow";
		selectionRBrow = "rBrow";
		selectionLMouth = "lMouth";
		selectionMMouth = "mMouth";
		selectionRMouth = "rMouth";
		selectionEyelid = "Eyelids";
		selectionLip = "LLip";
		useInternalLODInVehicles = 1;
		accuracy = 0;
		vehicleClass = "Men";
		editorSubcategory = "EdSubcat_Personnel";
		type = 0;
		threat[] = {1,0.05,0.05};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 	4096	 + 	2	 + 8*	16  + 12*131072";
		fsmFormation = "Formation";
		leftArmToElbow[] = {"LeftArm",0.5,"LeftArmRoll",0};
		leftArmFromElbow[] = {"LeftForeArm",0,"LeftForeArmRoll",0.5};
		leftWrist = "LeftHand";
		leftShoulder = "LeftShoulder";
		leftHand[] = {"LeftHandThumb3","LeftHandThumb2","LeftHandThumb1","LeftHandIndex3","LeftHandIndex2","LeftHandIndex1","LeftHandMiddle3","LeftHandMiddle2","LeftHandMiddle1","LeftHandRing3","LeftHandRing2","LeftHandRing1","LeftHandRing","LeftHandPinky3","LeftHandPinky2","LeftHandPinky1"};
		leftArmPoints[] = {"LeftShoulder","lelbow","lelbow_axis","lwrist"};
		rightArmToElbow[] = {"rightArm",0.5,"rightArmRoll",0};
		rightArmFromElbow[] = {"rightForeArm",0,"rightForeArmRoll",0.5};
		rightWrist = "rightHand";
		rightShoulder = "rightShoulder";
		rightHand[] = {"rightHandThumb3","rightHandThumb2","rightHandThumb1","rightHandIndex3","rightHandIndex2","rightHandIndex1","rightHandMiddle3","rightHandMiddle2","rightHandMiddle1","rightHandRing3","rightHandRing2","rightHandRing1","rightHandRing","rightHandPinky3","rightHandPinky2","rightHandPinky1"};
		rightArmPoints[] = {"rightShoulder","relbow","relbow_axis","rwrist"};
		leftLegToKnee[] = {"LeftUpLeg",0.5,"LeftUpLegRoll",0};
		leftLegFromKnee[] = {"LeftLeg",0,"LeftLegRoll",0.5};
		leftHeel = "leftFoot";
		leftHip = "pelvis";
		leftFoot[] = {"LeftToeBase"};
		leftLegPoints[] = {"lfemur","lknee","lknee_axis","lankle"};
		rightLegToKnee[] = {"rightUpLeg",0.5,"rightUpLegRoll",0};
		rightLegFromKnee[] = {"rightLeg",0,"rightLegRoll",0.5};
		rightHeel = "rightFoot";
		rightHip = "pelvis";
		rightFoot[] = {"RightToeBase"};
		rightLegPoints[] = {"rfemur","rknee","rknee_axis","rankle"};
		launcherBone = "launcher";
		handGunBone = "RightHand";
		weaponBone = "weapon";
		impactEffectsSea = "ImpactEffectsSeaMen";
		canCarryBackPack = 1;
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		grenadeThrowDir[] = {0,0.2,1};
	};
	class Civilian: CAManBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_civilian_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_civilian_p";
		nameSound = "veh_infantry_civilian_s";
		_generalMacro = "Civilian";
		side = 3;
		scope = 0;
		displayName = "$STR_DN_CIVILIAN";
		accuracy = 1.6;
		camouflage = 1.2;
		threat[] = {0,0,0};
		magazines[] = {};
		cost = 100000;
		role = "Unarmed";
		minHeadTurnAI = -50;
		maxHeadTurnAI = 50;
		formationX = 2;
		formationZ = 5;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class EventHandlers;
		primaryAmmoCoef = 0.0;
		secondaryAmmoCoef = 0.0;
		handgunAmmoCoef = 0.0;
	};
	class Civilian_F: Civilian
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Civilian_F";
		class NewTurret;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};
		faceType = "Man_A3";
		faction = "CIV_F";
		genericNames = "GreekMen";
		vehicleClass = "Men";
		editorSubcategory = "EdSubcat_Personnel";
		model = "\A3\Characters_F\Civil\c_poloshirt";
		modelSides[] = {3};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_C_Commoner1_1";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		fsmFormation = "A3\characters_f\scripts\formationC.fsm";
		fsmDanger = "A3\characters_f\scripts\formationCDanger.fsm";
	};
	class C_man_1: Civilian_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1.jpg";
		_generalMacro = "C_man_1";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_C_man_10";
		hiddenSelections[] = {"Camo","insignia"};
		uniformClass = "U_C_Poloshirt_stripped";
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
		};
		headgearList[] = {"H_Cap_tan",0.25,"H_Cap_blk",0.25,"H_Cap_blk_CMMG",0.25,"H_Cap_brn_SPECOPS",0.25,"H_Cap_tan_specops_US",0.25,"H_Cap_khaki_specops_UK",0.25,"H_Cap_red",0.25,"H_Cap_grn",0.25,"H_Cap_blu",0.25,"H_Cap_grn_BI",0.25,"H_Cap_blk_Raven",0.25,"H_Cap_blk_ION",0.25,"H_Bandanna_khk",0.25,"H_Bandanna_sgg",0.25,"H_Bandanna_cbr",0.25,"H_Bandanna_gry",0.25,"H_Bandanna_camo",0.25,"H_Bandanna_mcamo",0.25,"H_Bandanna_surfer",0.25,"H_Beret_blk",0.25,"H_Beret_red",0.25,"H_Beret_grn",0.25,"H_TurbanO_blk",0.25,"H_StrawHat",0.25,"H_StrawHat_dark",0.25,"H_Hat_blue",0.25,"H_Hat_brown",0.25,"H_Hat_camo",0.25,"H_Hat_grey",0.25,"H_Hat_checker",0.25,"H_Hat_tan",0.25,"",1};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_cloth1.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth2.rvmat","A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth3.rvmat","A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\characters_f\civil\data\c_poloshirt.rvmat","A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Civil\Data\hunter.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Civil\Data\priest.rvmat","A3\Characters_F\Civil\Data\priest_injury.rvmat","A3\Characters_F\Civil\Data\priest_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class SoldierWB: CAManBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SoldierWB";
		threat[] = {1,0.1,0.1};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,1};
		picture = "";
		Icon = "iconMan";
		role = "Rifleman";
		displayName = "$STR_DN_RIFLEMAN";
		side = 1;
		accuracy = 1.6;
		weapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnWeapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {};
		class HeadLimits: HeadLimits
		{
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -60;
			maxAngleY = 60;
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		cost = 80000;
	};
	class SoldierEB: CAManBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SoldierEB";
		side = 0;
		displayName = "$STR_DN_RIFLEMAN";
		model = "\A3\Characters_F\OPFOR\o_soldier_01.p3d";
		modelSides[] = {0,3};
		picture = "";
		Icon = "iconMan";
		role = "Rifleman";
		hiddenSelections[] = {"medic","insignia"};
		accuracy = 1.6;
		weapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnWeapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {};
		class HeadLimits: HeadLimits
		{
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -60;
			maxAngleY = 60;
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		cost = 80000;
		threat[] = {1,0.1,0.1};
	};
	class SoldierGB: CAManBase
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SoldierGB";
		side = 2;
		displayName = "$STR_DN_RIFLEMAN";
		model = "\A3\Characters_F\OPFOR\o_soldier_01.p3d";
		modelSides[] = {2,3};
		picture = "";
		Icon = "iconMan";
		role = "Rifleman";
		accuracy = 1.6;
		weapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnWeapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {};
		class HeadLimits: HeadLimits
		{
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -60;
			maxAngleY = 60;
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.2;
		handgunAmmoCoef = 0.1;
		cost = 40000;
		threat[] = {1,0.1,0.1};
	};
	class VirtualMan_F: Civilian_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 1;
		_generalMacro = "VirtualMan_F";
		scope = 1;
		scopeCurator = 0;
		isPlayableLogic = 1;
		side = 7;
		sideVirtual = 3;
		displayName = "$STR_A3_CfgVehicles_VirtualMan_F";
		faction = "Virtual_F";
		vehicleClass = "Virtual";
		model = "\A3\characters_F\Common\invisibleMan.p3d";
		icon = "iconManVirtual";
		role = "Default";
		uniformClass = "";
		nakedUniform = "U_VirtualMan_F";
		weapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		extCameraPosition[] = {0,-2,0};
		class ViewPilot
		{
			initAngleX = 0;
			initAngleY = 0;
			initFov = 0.75;
			maxAngleX = 0;
			maxAngleY = 0;
			maxFov = 0.75;
			maxMoveX = 0;
			maxMoveY = 0;
			maxMoveZ = 0;
			minAngleX = 0;
			minAngleY = 0;
			minFov = 0.75;
			minMoveX = 0;
			minMoveY = 0;
			minMoveZ = 0;
		};
		class NewTurret: NewTurret
		{
			minElev = 0;
			maxElev = 0;
			minTurn = 0;
			maxTurn = 0;
			maxHorizontalRotSpeed = 0;
			maxVerticalRotSpeed = 0;
		};
		class EventHandlers
		{
			init = "_this call bis_fnc_initVirtualUnit;";
		};
	};
	class HeadlessClient_F: VirtualMan_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "HeadlessClient_F";
		scope = 2;
		displayName = "$STR_A3_CFGVEHICLES_HEADLESSCLIENT";
		simulation = "headlessclient";
		icon = "iconVirtual";
	};
	class ContainerSupply;
	class Supply0: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply0";
		maximumLoad = 0;
	};
	class Supply1: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply1";
		maximumLoad = 1;
	};
	class Supply2: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply2";
		maximumLoad = 2;
	};
	class Supply3: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply3";
		maximumLoad = 3;
	};
	class Supply4: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply4";
		maximumLoad = 4;
	};
	class Supply5: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply5";
		maximumLoad = 5;
	};
	class Supply6: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply6";
		maximumLoad = 6;
	};
	class Supply7: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply7";
		maximumLoad = 7;
	};
	class Supply8: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply8";
		maximumLoad = 8;
	};
	class Supply9: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply9";
		maximumLoad = 9;
	};
	class Supply10: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply10";
		maximumLoad = 10;
	};
	class Supply20: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply20";
		maximumLoad = 20;
	};
	class Supply30: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply30";
		maximumLoad = 30;
	};
	class Supply40: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply40";
		maximumLoad = 40;
	};
	class Supply50: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply50";
		maximumLoad = 50;
	};
	class Supply60: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply60";
		maximumLoad = 60;
	};
	class Supply70: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply70";
		maximumLoad = 70;
	};
	class Supply80: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply80";
		maximumLoad = 80;
	};
	class Supply90: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply90";
		maximumLoad = 90;
	};
	class Supply100: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply100";
		maximumLoad = 100;
	};
	class Supply110: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply110";
		maximumLoad = 110;
	};
	class Supply120: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply120";
		maximumLoad = 120;
	};
	class Supply130: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply130";
		maximumLoad = 130;
	};
	class Supply140: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply140";
		maximumLoad = 140;
	};
	class Supply150: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply150";
		maximumLoad = 150;
	};
	class Supply160: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply160";
		maximumLoad = 160;
	};
	class Supply170: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply170";
		maximumLoad = 170;
	};
	class Supply180: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply180";
		maximumLoad = 180;
	};
	class Supply190: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply190";
		maximumLoad = 190;
	};
	class Supply200: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply200";
		maximumLoad = 200;
	};
	class Supply210: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply210";
		maximumLoad = 210;
	};
	class Supply220: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply220";
		maximumLoad = 220;
	};
	class Supply230: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply230";
		maximumLoad = 230;
	};
	class Supply240: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply240";
		maximumLoad = 240;
	};
	class Supply250: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply250";
		maximumLoad = 250;
	};
	class Supply300: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply300";
		maximumLoad = 300;
	};
	class Supply350: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply350";
		maximumLoad = 350;
	};
	class Supply380: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply380";
		maximumLoad = 380;
	};
	class Supply400: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply400";
		maximumLoad = 400;
	};
	class Supply420: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply420";
		maximumLoad = 420;
	};
	class Supply440: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply440";
		maximumLoad = 440;
	};
	class Supply450: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply450";
		maximumLoad = 450;
	};
	class Supply480: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply480";
		maximumLoad = 480;
	};
	class Supply500: ContainerSupply
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Supply500";
		maximumLoad = 500;
	};
	class B_Soldier_base_F: SoldierWB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Soldier_base_F";
		expansion = 1;
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};
		faceType = "Man_A3";
		side = 1;
		faction = "BLU_F";
		genericNames = "NATOMen";
		vehicleClass = "Men";
		editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 100000;
		canCarryBackPack = 1;
		scope = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		modelSides[] = {3,1};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_B_CombatUniform_mcam";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		armor = 2;
		armorStructural = 3;
		explosionShielding = 0.3;
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\blufor\data\clothing1_co.paa"};
		class EventHandlers;
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_Soldier_02_f: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Soldier_02_f";
		scope = 0;
		displayName = "Rifleman 2";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,1};
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class B_Soldier_03_f: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Soldier_03_f";
		scope = 0;
		displayName = "Rifleman 3";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		modelSides[] = {3,1};
		uniformClass = "U_B_CombatUniform_mcam_vest";
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class B_Soldier_04_f: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Soldier_04_f";
		scope = 0;
		displayName = "Rifleman 4";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		modelSides[] = {3,1};
		uniformClass = "U_B_HeliPilotCoveralls";
		role = "Crewman";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_sage_co.paa"};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 5;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 5;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 2;
		explosionShielding = 0.2;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\common\data\pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat"};
		};
	};
	class B_Soldier_05_f: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Soldier_05_f";
		scope = 0;
		displayName = "Rifleman 5";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		modelSides[] = {3,1};
		uniformClass = "U_B_PilotCoveralls";
		role = "Crewman";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_nato_co.paa","\A3\Characters_F\Common\Data\pilot_helmet_nato_co.paa"};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 5;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 5;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 0.6;
		explosionShielding = 0.06;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\common\data\pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat"};
		};
	};
	class B_Soldier_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_F.jpg";
		_generalMacro = "B_Soldier_F";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_B_CombatUniform_mcam";
		role = "Rifleman";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
	};
	class B_RangeMaster_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_RangeMaster_F.jpg";
		_generalMacro = "B_RangeMaster_F";
		scope = 2;
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		modelSides[] = {3,1};
		displayName = "$STR_A3_CfgVehicles_B_RangeMaster_F0";
		identityTypes[] = {"Head_Rangemaster","G_Rangemaster"};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_Rangemaster";
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		class EventHandlers: EventHandlers
		{
			init = "";
		};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirtpants_1_co.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		role = "Unarmed";
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"H_Cap_headphones","V_Rangemaster_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] = {"H_Cap_headphones","V_Rangemaster_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	class B_Soldier_lite_F: B_Soldier_03_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_lite_F.jpg";
		_generalMacro = "B_Soldier_lite_F";
		scope = 2;
		displayName = "$STR_B_Soldier_lite_F0";
		uniformClass = "U_B_CombatUniform_mcam_vest";
		weapons[] = {"arifle_MX_ACO_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		camouflage = 1.2;
		cost = 90000;
		role = "Rifleman";
		linkedItems[] = {"V_BandollierB_rgr","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_Soldier_GL_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_GL_F.jpg";
		_generalMacro = "B_Soldier_GL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F","Throw","Put"};
		overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page09_ca.paa";
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		cost = 130000;
		role = "Grenadier";
		threat[] = {1,0.3,0.1};
		linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_soldier_AR_F: B_Soldier_02_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_AR_F.jpg";
		_generalMacro = "B_soldier_AR_F";
		scope = 2;
		displayName = "$STR_B_soldier_AR_F0";
		weapons[] = {"arifle_MX_SW_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_SW_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		role = "MachineGunner";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_Soldier_SL_F: B_Soldier_03_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_SL_F.jpg";
		_generalMacro = "B_Soldier_SL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		uniformClass = "U_B_CombatUniform_mcam_vest";
		weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		cost = 500000;
		camouflage = 1.4;
		icon = "iconManLeader";
		role = "Rifleman";
		linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetB_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetB_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_Soldier_TL_F: B_Soldier_03_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_TL_F.jpg";
		_generalMacro = "B_Soldier_TL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		uniformClass = "U_B_CombatUniform_mcam_vest";
		weapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		cost = 450000;
		camouflage = 1.4;
		icon = "iconManLeader";
		role = "Grenadier";
		linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_soldier_M_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_M_F.jpg";
		_generalMacro = "B_soldier_M_F";
		scope = 2;
		displayName = "$STR_B_soldier_M_F0";
		weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 150000;
		role = "Marksman";
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_soldier_LAT_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_LAT_F.jpg";
		_generalMacro = "B_soldier_LAT_F";
		scope = 2;
		displayName = "$STR_B_soldier_LAT_F0";
		backpack = "B_AssaultPack_rgr_LAT";
		weapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		secondaryAmmoCoef = 0.5;
	};
	class B_medic_F: B_Soldier_02_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_medic_F.jpg";
		_generalMacro = "B_medic_F";
		scope = 2;
		displayName = "$STR_B_medic_F0";
		attendant = 1;
		weapons[] = {"arifle_MX_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		cost = 300000;
		camouflage = 1.6;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		backpack = "B_AssaultPack_rgr_Medic";
		linkedItems[] = {"V_PlateCarrierSpec_rgr","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierSpec_rgr","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		picture = "pictureHeal";
	};
	class B_soldier_repair_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_repair_F.jpg";
		_generalMacro = "B_soldier_repair_F";
		scope = 2;
		displayName = "$STR_B_soldier_repair_F0";
		engineer = 1;
		detectSkill = 40;
		cost = 220000;
		camouflage = 1.6;
		backpack = "B_AssaultPack_rgr_Repair";
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class B_soldier_exp_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_exp_F.jpg";
		_generalMacro = "B_soldier_exp_F";
		scope = 2;
		displayName = "$STR_B_soldier_exp_F0";
		cost = 115000;
		camouflage = 1.6;
		backpack = "B_Kitbag_rgr_Exp";
		weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Helipilot_F.jpg";
		_generalMacro = "B_Helipilot_F";
		scope = 2;
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};
		modelSides[] = {3,1};
		uniformClass = "U_B_HeliPilotCoveralls";
		displayName = "$STR_B_Helipilot_F0";
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		cost = 160000;
		role = "Crewman";
		camouflage = 2.0;
	};
	class B_Soldier_A_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_A_F.jpg";
		_generalMacro = "B_Soldier_A_F";
		scope = 2;
		displayName = "$STR_B_Soldier_A_F0";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		cost = 110000;
		role = "Rifleman";
		camouflage = 1.5;
		backpack = "B_AssaultPack_mcamo_Ammo";
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_grass","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_soldier_AT_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_AT_F.jpg";
		_generalMacro = "B_soldier_AT_F";
		scope = 2;
		displayName = "$STR_B_soldier_AT_F0";
		backpack = "B_AssaultPack_mcamo_AT";
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		secondaryAmmoCoef = 0.5;
	};
	class B_soldier_AA_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_AA_F.jpg";
		_generalMacro = "B_soldier_AA_F";
		scope = 2;
		displayName = "$STR_B_soldier_AA_F0";
		backpack = "B_AssaultPack_mcamo_AA";
		weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		secondaryAmmoCoef = 0.5;
	};
	class B_engineer_F: B_Soldier_03_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_engineer_F.jpg";
		_generalMacro = "B_engineer_F";
		scope = 2;
		displayName = "$STR_B_engineer_F0";
		cost = 220000;
		camouflage = 1.6;
		uniformClass = "U_B_CombatUniform_mcam_vest";
		backpack = "B_Kitbag_mcamo_Eng";
		weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		linkedItems[] = {"V_Chestrig_rgr","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class B_crew_F: B_Soldier_03_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_crew_F.jpg";
		_generalMacro = "B_crew_F";
		uniformClass = "U_B_CombatUniform_mcam_vest";
		class UniformInfo
		{
			class SlotsInfo
			{
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		scope = 2;
		displayName = "$STR_B_crew_F0";
		weapons[] = {"arifle_MXC_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 90000;
		role = "Crewman";
		camouflage = 1.6;
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_officer_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_officer_F.jpg";
		_generalMacro = "B_officer_F";
		scope = 2;
		displayName = "$STR_B_officer_F0";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_casual"};
		weapons[] = {"arifle_MXC_Aco_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_Aco_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 600000;
		camouflage = 1.6;
		icon = "iconManOfficer";
		role = "Rifleman";
		linkedItems[] = {"V_BandollierB_rgr","H_MilCap_mcamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_MilCap_mcamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_Competitor_F: B_RangeMaster_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Competitor_F.jpg";
		_generalMacro = "B_Competitor_F";
		identityTypes[] = {"Head_Rangemaster","G_Competitor"};
		uniformClass = "U_Competitor";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\Civil\Data\c_competitor_co.paa"};
		displayName = "$STR_A3_Characters_F_Beta_B_Competitor_F0";
	};
	class B_Pilot_F: B_Soldier_05_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Pilot_F.jpg";
		_generalMacro = "B_Pilot_F";
		scope = 2;
		displayName = "$STR_B_Pilot_F0";
		modelSides[] = {3,1};
		uniformClass = "U_B_PilotCoveralls";
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShell","SmokeShellBlue","Chemlight_green"};
		backpack = "B_Parachute";
		linkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 165000;
		role = "Crewman";
	};
	class B_helicrew_F: B_Helipilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_helicrew_F.jpg";
		_generalMacro = "B_helicrew_F";
		displayName = "$STR_B_helicrew_F0";
		modelSides[] = {3,1};
		uniformClass = "U_B_HeliPilotCoveralls";
		cost = 80000;
		role = "Crewman";
		weapons[] = {"arifle_MXC_Holo_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_soldier_PG_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_PG_F.jpg";
		_generalMacro = "B_soldier_PG_F";
		scope = 2;
		displayName = "$STR_B_soldier_PG_F0";
		linkedItems[] = {"V_PlateCarrierSpec_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierSpec_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		backpack = "B_Parachute";
		cost = 120000;
		role = "SpecialOperative";
	};
	class B_soldier_UAV_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_UAV_F.jpg";
		_generalMacro = "B_soldier_UAV_F";
		scope = 2;
		displayName = "$STR_A3_B_SOLDIER_UAV_F0";
		linkedItems[] = {"V_PlateCarrierSpec_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierSpec_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
		backpack = "B_UAV_01_backpack_F";
		cost = 150000;
		role = "SpecialOperative";
		uavHacker = 1;
	};
	class B_Soldier_universal_F: B_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		_generalMacro = "B_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class B_Survivor_F: B_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Survivor_F.jpg";
		_generalMacro = "B_Survivor_F";
		displayName = "$STR_A3_CfgVehicles_b_survivor_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		items[] = {};
		respawnItems[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		role = "Unarmed";
	};
	class B_Soldier_unarmed_F: B_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_unarmed_F.jpg";
		_generalMacro = "B_Soldier_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
	};
	class B_Soldier_diver_base_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_diver_s"};
				speechPlural[] = {"veh_infantry_diver_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_diver_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_diver_p";
		nameSound = "veh_infantry_diver_s";
		_generalMacro = "B_Soldier_diver_base_F";
		scope = 0;
		displayName = "$STR_B_Soldier_diver_base_F0";
		vehicleClass = "MenDiver";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		uniformClass = "U_B_Wetsuit";
		role = "SpecialOperative";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\diver_suit_nato_co.paa","\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Common\Data\diver_suit.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat"};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		selectionPersonality = "personality";
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_diver"};
		linkedItems[] = {"V_RebreatherB","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherB","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_SDAR_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.1;
		handgunAmmoCoef = 0.2;
	};
	class B_diver_F: B_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_diver_F.jpg";
		_generalMacro = "B_diver_F";
		scope = 2;
		displayName = "$STR_B_diver_F0";
		backpack = "B_Assault_Diver";
		model = "\A3\characters_F\Common\diver_slotable";
		modelSides[] = {3,1};
		cost = 70000;
		role = "SpecialOperative";
		camouflage = 2.0;
	};
	class B_diver_TL_F: B_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_diver_TL_F.jpg";
		_generalMacro = "B_diver_TL_F";
		scope = 2;
		displayName = "$STR_B_diver_TL_F0";
		linkedItems[] = {"V_RebreatherB","G_B_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherB","G_B_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManLeader";
		role = "SpecialOperative";
		cost = 430000;
		camouflage = 2.0;
	};
	class B_diver_exp_F: B_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_diver_exp_F.jpg";
		_generalMacro = "B_diver_exp_F";
		scope = 2;
		backpack = "B_AssaultPack_blk_DiverExp";
		displayName = "$STR_B_diver_exp_F0";
		canDeactivateMines = 1;
		cost = 90000;
		camouflage = 2.0;
		icon = "iconManExplosive";
		role = "SpecialOperative";
	};
	class B_Soldier_recon_base: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";
		_generalMacro = "B_Soldier_recon_base";
		scope = 0;
		displayName = "$STR_B_Soldier_recon_base0";
		vehicleClass = "MenRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		role = "Rifleman";
		camouflage = 0.6;
		detectSkill = 30;
	};
	class B_recon_F: B_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_recon_F.jpg";
		_generalMacro = "B_recon_F";
		scope = 2;
		displayName = "$STR_B_recon_F0";
		uniformClass = "U_B_CombatUniform_mcam_vest";
		weapons[] = {"arifle_MX_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 100000;
		role = "Rifleman";
		linkedItems[] = {"V_Chestrig_rgr","H_Watchcap_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_Watchcap_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_recon_LAT_F: B_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_recon_LAT_F.jpg";
		_generalMacro = "B_recon_LAT_F";
		scope = 2;
		displayName = "$STR_B_recon_LAT_F0";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		backpack = "B_AssaultPack_rgr_ReconLAT";
		weapons[] = {"arifle_MX_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_snds_F","launch_NLAW_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		threat[] = {1,0.6,0.1};
		cost = 150000;
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_Chestrig_rgr","H_HelmetB_plain_mcamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_HelmetB_plain_mcamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		secondaryAmmoCoef = 0.5;
	};
	class B_recon_exp_F: B_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_recon_exp_F.jpg";
		_generalMacro = "B_recon_exp_F";
		scope = 2;
		displayName = "$STR_B_recon_exp_F0";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		backpack = "B_AssaultPack_rgr_ReconExp";
		weapons[] = {"arifle_MX_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		canDeactivateMines = 1;
		detectSkill = 80;
		cost = 115000;
		linkedItems[] = {"V_Chestrig_rgr","H_Booniehat_mcamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_Booniehat_mcamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
	};
	class B_recon_medic_F: B_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_recon_medic_F.jpg";
		_generalMacro = "B_recon_medic_F";
		scope = 2;
		displayName = "$STR_B_recon_medic_F0";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		attendant = 1;
		weapons[] = {"arifle_MXC_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		cost = 290000;
		backpack = "B_AssaultPack_rgr_ReconMedic";
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_Chestrig_rgr","H_HelmetB_light","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_HelmetB_light","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		picture = "pictureHeal";
	};
	class B_recon_TL_F: B_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_recon_TL_F.jpg";
		_generalMacro = "B_recon_TL_F";
		scope = 2;
		displayName = "$STR_B_recon_TL_F0";
		uniformClass = "U_B_CombatUniform_mcam_vest";
		weapons[] = {"arifle_MX_RCO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_RCO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		cost = 440000;
		icon = "iconManLeader";
		role = "Grenadier";
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_Chestrig_rgr","H_MilCap_mcamo","G_Shades_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_MilCap_mcamo","G_Shades_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_recon_M_F: B_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_recon_M_F.jpg";
		_generalMacro = "B_recon_M_F";
		scope = 2;
		displayName = "$STR_B_recon_M_F0";
		uniformClass = "U_B_CombatUniform_mcam";
		weapons[] = {"arifle_MXM_DMS_LP_BI_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_DMS_LP_BI_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 140000;
		role = "Marksman";
		linkedItems[] = {"V_Chestrig_rgr","H_Booniehat_mcamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_Booniehat_mcamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
	};
	class B_recon_JTAC_F: B_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_recon_JTAC_F.jpg";
		_generalMacro = "B_recon_JTAC_F";
		scope = 2;
		displayName = "$STR_B_recon_JTAC_F0";
		uniformClass = "U_B_CombatUniform_mcam";
		weapons[] = {"arifle_MX_GL_Holo_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_GL_Holo_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		cost = 200000;
		role = "SpecialOperative";
		linkedItems[] = {"V_Chestrig_rgr","H_Watchcap_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_Watchcap_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_Soldier_sniper_base_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Soldier_sniper_base_F";
		scope = 0;
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_sniper"};
		displayName = "$STR_B_Soldier_sniper_base_F0";
		vehicleClass = "MenSniper";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		role = "Marksman";
		uniformClass = "U_B_GhillieSuit";
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
		linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
	};
	class B_spotter_F: B_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_spotter_F.jpg";
		_generalMacro = "B_spotter_F";
		scope = 2;
		displayName = "$STR_B_spotter_F0";
		cost = 250000;
		role = "Marksman";
		threat[] = {1,0.3,0.3};
		camouflage = 0.6;
		weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_sniper_F: B_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_sniper_F.jpg";
		_generalMacro = "B_sniper_F";
		scope = 2;
		displayName = "$STR_B_sniper_F0";
		weapons[] = {"srifle_LRR_camo_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_camo_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		cost = 350000;
		role = "Marksman";
		threat[] = {1,0.3,0.3};
		camouflage = 0.6;
	};
	class B_Story_SF_Captain_F: B_Soldier_02_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Story_SF_Captain_F.jpg";
		_generalMacro = "B_Story_SF_Captain_F";
		scope = 2;
		modelSides[] = {3,1};
		displayName = "$STR_A3_CfgVehicles_B_Miller0";
		identityTypes[] = {"Miller","G_NATO_default"};
		uniformClass = "U_B_CTRG_2";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		role = "Rifleman";
		linkedItems[] = {"V_PlateCarrierL_CTRG","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_cloth4.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""EPA_B_Miller""";
		};
	};
	class B_Story_Protagonist_F: B_Soldier_02_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Story_Protagonist_F.jpg";
		_generalMacro = "B_Story_Protagonist_F";
		scope = 2;
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		modelSides[] = {3,1,2};
		displayName = "$STR_A3_CfgVehicles_B_Story_Protagonist_F0";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		role = "Grenadier";
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		weapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put"};
		respawnweapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","3Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","3Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		linkedItems[] = {"V_PlateCarrier_Kerry","H_Helmet_Kerry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnlinkedItems[] = {"V_PlateCarrier_Kerry","H_Helmet_Kerry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		identityTypes[] = {"Kerry","G_NATO_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""EPA_B_Kerry""";
		};
	};
	class B_Story_Engineer_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Story_Engineer_F";
		displayName = "$STR_A3_B_Story_Engineer_F0";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		role = "Sapper";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""EPA_B_Kerry""";
		};
		scope = 1;
		scopeCurator = 0;
	};
	class B_Story_Colonel_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Story_Colonel_F";
		displayName = "$STR_A3_B_Story_Colonel_F0";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		scope = 1;
		scopeCurator = 0;
	};
	class B_Story_Pilot_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Story_Pilot_F.jpg";
		_generalMacro = "B_Story_Pilot_F";
		scope = 2;
		displayName = "$STR_A3_B_Story_Pilot_F0";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""EPA_B_Larkin""";
		};
		role = "Crewman";
	};
	class B_Story_Tank_Commander_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Story_Tank_Commander_F";
		displayName = "$STR_A3_B_Story_Tank_Commander_F0";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		scope = 1;
		scopeCurator = 0;
	};
	class b_soldier_survival_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_diver_s"};
				speechPlural[] = {"veh_infantry_diver_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_diver_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_diver_p";
		nameSound = "veh_infantry_diver_s";
		_generalMacro = "b_soldier_survival_F";
		scope = 1;
		displayName = "$STR_A3_survival_fatigues_F0";
		model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
		modelSides[] = {3,1};
		uniformClass = "U_B_survival_uniform";
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
	};
	class B_CTRG_soldier_GL_LAT_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_CTRG_soldier_GL_LAT_F.jpg";
		_generalMacro = "B_CTRG_soldier_GL_LAT_F";
		scope = 2;
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "$STR_A3_B_CTRG_soldier_GL_LAT_F0";
		backpack = "B_AssaultPack_rgr_LAT";
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		cost = 300000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetB_light_snakeskin","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetB_light_snakeskin","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "U_B_CTRG_1";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa"};
		identityTypes[] = {"EPA_B_Northgate","G_NATO_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""EPA_B_Northgate""";
		};
	};
	class B_CTRG_soldier_engineer_exp_F: B_Soldier_02_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_CTRG_soldier_engineer_exp_F.jpg";
		_generalMacro = "B_CTRG_soldier_engineer_exp_F";
		scope = 2;
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "$STR_A3_B_CTRG_soldier_engineer_exp_F0";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "B_Kitbag_rgr_Exp";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 200000;
		threat[] = {1,0.7,0.3};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		linkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "U_B_CTRG_2";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa"};
		identityTypes[] = {"EPA_B_Hardy","G_NATO_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""EPA_B_Hardy""";
		};
	};
	class B_CTRG_soldier_M_medic_F: B_Soldier_03_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_CTRG_soldier_M_medic_F.jpg";
		_generalMacro = "B_CTRG_soldier_M_medic_F";
		scope = 2;
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "$STR_A3_B_CTRG_soldier_M_medic_F0";
		attendant = 1;
		weapons[] = {"srifle_EBR_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"srifle_EBR_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		cost = 300000;
		camouflage = 1.6;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		backpack = "B_AssaultPack_rgr_Medic";
		linkedItems[] = {"V_PlateCarrierH_CTRG","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		picture = "pictureHeal";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "U_B_CTRG_3";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa"};
		identityTypes[] = {"EPA_B_James","G_NATO_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""EPA_B_James""";
		};
	};
	class B_CTRG_soldier_AR_A_F: B_Soldier_03_f
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_CTRG_soldier_AR_A_F.jpg";
		_generalMacro = "B_CTRG_soldier_AR_A_F";
		scope = 2;
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "$STR_A3_B_CTRG_soldier_AR_A_F0";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
		backpack = "B_AssaultPack_mcamo_Ammo";
		magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 200000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		role = "MachineGunner";
		linkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetB_light_snakeskin","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetB_light_snakeskin","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "U_B_CTRG_3";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa"};
		identityTypes[] = {"EPA_B_McKay","G_NATO_default"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""EPA_B_McKay""";
		};
	};
	class B_Soldier_support_base_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_Soldier_support_base_F";
		scope = 0;
		camouflage = 1.5;
		displayName = "$STR_B_Soldier_support_base_F0";
		vehicleClass = "MenSupport";
		editorSubcategory = "EdSubcat_Personnel";
		role = "Assistant";
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		weapons[] = {"arifle_MX_Aco_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_Aco_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_Chestrig_rgr","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_soldier_AAR_F: B_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_AAR_F.jpg";
		_generalMacro = "B_soldier_AAR_F";
		scope = 2;
		displayName = "$STR_O_SOLDIERU_AAR_F0";
		cost = 95000;
		backpack = "B_Kitbag_rgr_AAR";
		role = "Assistant";
	};
	class B_soldier_AAT_F: B_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_AAT_F.jpg";
		_generalMacro = "B_soldier_AAT_F";
		scope = 2;
		displayName = "$STR_B_soldier_AAT_F0";
		cost = 93000;
		role = "Assistant";
		backpack = "B_Carryall_mcamo_AAT";
	};
	class B_soldier_AAA_F: B_soldier_AAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_soldier_AAA_F.jpg";
		_generalMacro = "B_soldier_AAA_F";
		scope = 2;
		displayName = "$STR_B_soldier_AAA_F0";
		cost = 94000;
		role = "Assistant";
		backpack = "B_Carryall_mcamo_AAA";
	};
	class B_support_MG_F: B_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_support_MG_F.jpg";
		_generalMacro = "B_support_MG_F";
		scope = 2;
		displayName = "$STR_B_support_MG_F0";
		backpack = "B_HMG_01_weapon_F";
		weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		threat[] = {1,0.3,0.3};
		cost = 460000;
		role = "Assistant";
	};
	class B_support_GMG_F: B_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_support_GMG_F.jpg";
		_generalMacro = "B_support_GMG_F";
		scope = 2;
		displayName = "$STR_B_support_GMG_F0";
		backpack = "B_GMG_01_weapon_F";
		weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		threat[] = {1,0.6,0.1};
		cost = 470000;
		role = "Assistant";
	};
	class B_support_Mort_F: B_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_support_Mort_F.jpg";
		_generalMacro = "B_support_Mort_F";
		scope = 2;
		displayName = "$STR_B_support_Mort_F0";
		backpack = "B_Mortar_01_weapon_F";
		weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		threat[] = {1,0.8,0.1};
		cost = 480000;
		role = "Assistant";
	};
	class B_support_AMG_F: B_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_support_AMG_F.jpg";
		_generalMacro = "B_support_AMG_F";
		scope = 2;
		displayName = "$STR_B_support_AMG_F0";
		backpack = "B_HMG_01_support_F";
		weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		cost = 91000;
		role = "Assistant";
	};
	class B_support_AMort_F: B_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_support_AMort_F.jpg";
		_generalMacro = "B_support_AMort_F";
		scope = 2;
		displayName = "$STR_B_support_AMort_F0";
		backpack = "B_Mortar_01_support_F";
		weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		cost = 81000;
		role = "Assistant";
	};
	class C_man_1_1_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_civilian_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_civilian_p";
		nameSound = "veh_infantry_civilian_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_1_F.jpg";
		_generalMacro = "C_man_1_1_F";
		model = "\A3\characters_F\civil\c_citizen1";
		modelSides[] = {3};
		uniformClass = "U_C_Commoner1_1";
		displayName = "$STR_A3_C_man_1_1_F0";
	};
	class C_man_1_2_F: C_man_1_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_2_F.jpg";
		_generalMacro = "C_man_1_2_F";
		displayName = "$STR_A3_C_man_1_2_F0";
	};
	class C_man_1_3_F: C_man_1_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_1_3_F.jpg";
		_generalMacro = "C_man_1_3_F";
		displayName = "$STR_A3_C_man_1_3_F0";
	};
	class C_man_polo_1_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_1_F.jpg";
		_generalMacro = "C_man_polo_1_F";
		uniformClass = "U_C_Poloshirt_blue";
		displayName = "$STR_A3_C_man_polo_1_F0";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"A3\Characters_F\Civil\Data\c_poloshirt_1_co.paa"};
	};
	class C_man_polo_1_F_afro: C_man_polo_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_1_F_afro.jpg";
		_generalMacro = "C_man_polo_1_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_polo_1_F_euro: C_man_polo_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_1_F_euro.jpg";
		_generalMacro = "C_man_polo_1_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_polo_1_F_asia: C_man_polo_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_1_F_asia.jpg";
		_generalMacro = "C_man_polo_1_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_polo_2_F: C_man_polo_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_2_F.jpg";
		_generalMacro = "C_man_polo_2_F";
		uniformClass = "U_C_Poloshirt_burgundy";
		displayName = "$STR_A3_C_man_polo_2_F0";
		hiddenSelectionsTextures[] = {"A3\Characters_F\Civil\Data\c_poloshirt_2_co.paa"};
	};
	class C_man_polo_2_F_afro: C_man_polo_2_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_2_F_afro.jpg";
		_generalMacro = "C_man_polo_2_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_polo_2_F_euro: C_man_polo_2_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_2_F_euro.jpg";
		_generalMacro = "C_man_polo_2_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_polo_2_F_asia: C_man_polo_2_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_2_F_asia.jpg";
		_generalMacro = "C_man_polo_2_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_polo_3_F: C_man_polo_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_3_F.jpg";
		_generalMacro = "C_man_polo_3_F";
		uniformClass = "U_C_Poloshirt_stripped";
		displayName = "$STR_A3_C_man_polo_3_F0";
		hiddenSelectionsTextures[] = {"A3\Characters_F\Civil\Data\c_poloshirt_3_co.paa"};
	};
	class C_man_polo_3_F_afro: C_man_polo_3_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_3_F_afro.jpg";
		_generalMacro = "C_man_polo_3_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_polo_3_F_euro: C_man_polo_3_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_3_F_euro.jpg";
		_generalMacro = "C_man_polo_3_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_polo_3_F_asia: C_man_polo_3_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_3_F_asia.jpg";
		_generalMacro = "C_man_polo_3_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_polo_4_F: C_man_polo_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_4_F.jpg";
		_generalMacro = "C_man_polo_4_F";
		uniformClass = "U_C_Poloshirt_tricolour";
		displayName = "$STR_A3_C_man_polo_4_F0";
		hiddenSelectionsTextures[] = {"A3\Characters_F\Civil\Data\c_poloshirt_4_co.paa"};
	};
	class C_man_polo_4_F_afro: C_man_polo_4_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_4_F_afro.jpg";
		_generalMacro = "C_man_polo_4_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_polo_4_F_euro: C_man_polo_4_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_4_F_euro.jpg";
		_generalMacro = "C_man_polo_4_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_polo_4_F_asia: C_man_polo_4_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_4_F_asia.jpg";
		_generalMacro = "C_man_polo_4_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_polo_5_F: C_man_polo_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_5_F.jpg";
		_generalMacro = "C_man_polo_5_F";
		uniformClass = "U_C_Poloshirt_salmon";
		displayName = "$STR_A3_C_man_polo_5_F0";
		hiddenSelectionsTextures[] = {"A3\Characters_F\Civil\Data\c_poloshirt_5_co.paa"};
	};
	class C_man_polo_5_F_afro: C_man_polo_5_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_5_F_afro.jpg";
		_generalMacro = "C_man_polo_5_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_polo_5_F_euro: C_man_polo_5_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_5_F_euro.jpg";
		_generalMacro = "C_man_polo_5_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_polo_5_F_asia: C_man_polo_5_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_5_F_asia.jpg";
		_generalMacro = "C_man_polo_5_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_polo_6_F: C_man_polo_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_6_F.jpg";
		_generalMacro = "C_man_polo_6_F";
		uniformClass = "U_C_Poloshirt_redwhite";
		displayName = "$STR_A3_C_man_polo_6_F0";
		hiddenSelectionsTextures[] = {"A3\Characters_F\Civil\Data\c_poloshirt_6_co.paa"};
	};
	class C_man_polo_6_F_afro: C_man_polo_6_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_6_F_afro.jpg";
		_generalMacro = "C_man_polo_6_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_polo_6_F_euro: C_man_polo_6_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_6_F_euro.jpg";
		_generalMacro = "C_man_polo_6_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_polo_6_F_asia: C_man_polo_6_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_6_F_asia.jpg";
		_generalMacro = "C_man_polo_6_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_p_fugitive_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_fugitive_F.jpg";
		_generalMacro = "C_man_p_fugitive_F";
		model = "\A3\characters_F\civil\c_poor";
		modelSides[] = {3};
		uniformClass = "U_C_Poor_1";
		displayName = "$STR_A3_C_man_p_fugitive_F0";
		hiddenSelections[] = {"insignia"};
	};
	class C_man_p_fugitive_F_afro: C_man_p_fugitive_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_fugitive_F_afro.jpg";
		_generalMacro = "C_man_p_fugitive_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_p_fugitive_F_euro: C_man_p_fugitive_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_fugitive_F_euro.jpg";
		_generalMacro = "C_man_p_fugitive_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_p_fugitive_F_asia: C_man_p_fugitive_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_fugitive_F_asia.jpg";
		_generalMacro = "C_man_p_fugitive_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_p_beggar_F: C_man_p_fugitive_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_beggar_F.jpg";
		_generalMacro = "C_man_p_beggar_F";
		model = "\A3\characters_F\civil\c_poor";
		modelSides[] = {3};
		uniformClass = "U_C_Poor_2";
		displayName = "$STR_A3_C_man_p_beggar_F0";
		hiddenSelections[] = {"camo1","insignia"};
		hiddenSelectionsTextures[] = {"A3\characters_f\civil\data\c_cloth1_v2_co.paa"};
	};
	class C_man_p_beggar_F_afro: C_man_p_beggar_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_beggar_F_afro.jpg";
		_generalMacro = "C_man_p_beggar_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_p_beggar_F_euro: C_man_p_beggar_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_beggar_F_euro.jpg";
		_generalMacro = "C_man_p_beggar_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_p_beggar_F_asia: C_man_p_beggar_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_beggar_F_asia.jpg";
		_generalMacro = "C_man_p_beggar_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_w_worker_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_w_worker_F.jpg";
		_generalMacro = "C_man_w_worker_F";
		model = "\A3\characters_F\common\coveralls";
		modelSides[] = {3};
		uniformClass = "U_C_WorkerCoveralls";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_dirty_co.paa"};
		displayName = "$STR_A3_C_man_w_worker_F0";
	};
	class C_scientist_F: C_man_w_worker_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_scientist_F.jpg";
		_generalMacro = "C_scientist_F";
		modelSides[] = {3};
		uniformClass = "U_C_Scientist";
		displayName = "$STR_A3_C_scientist_F0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPC\Civil\Data\scientist_02_co.paa"};
		class EventHandlers{};
	};
	class C_man_hunter_1_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_hunter_1_F.jpg";
		_generalMacro = "C_man_hunter_1_F";
		model = "\A3\characters_F\civil\c_hunter_f";
		modelSides[] = {3};
		uniformClass = "U_C_HunterBody_grn";
		displayName = "$STR_A3_C_man_hunter_1_F0";
		linkedItems[] = {"H_Booniehat_grn","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"H_Booniehat_grn","ItemMap","ItemCompass","ItemWatch"};
		class EventHandlers: EventHandlers
		{
			init = "";
		};
		hiddenSelections[] = {"insignia"};
	};
	class C_man_p_shorts_1_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_shorts_1_F.jpg";
		_generalMacro = "C_man_p_shorts_1_F";
		uniformClass = "U_C_Poor_shorts_1";
		displayName = "$STR_A3_C_man_p_shorts_1_F0";
	};
	class C_man_p_shorts_1_F_afro: C_man_p_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_shorts_1_F_afro.jpg";
		_generalMacro = "C_man_p_shorts_1_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_p_shorts_1_F_euro: C_man_p_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_shorts_1_F_euro.jpg";
		_generalMacro = "C_man_p_shorts_1_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_p_shorts_1_F_asia: C_man_p_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_p_shorts_1_F_asia.jpg";
		_generalMacro = "C_man_p_shorts_1_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_shorts_1_F: C_man_p_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_1_F.jpg";
		_generalMacro = "C_man_shorts_1_F";
		uniformClass = "U_C_Commoner_shorts";
		displayName = "$STR_A3_C_man_shorts_1_F0";
	};
	class C_man_shorts_1_F_afro: C_man_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_1_F_afro.jpg";
		_generalMacro = "C_man_shorts_1_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_shorts_1_F_euro: C_man_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_1_F_euro.jpg";
		_generalMacro = "C_man_shorts_1_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_shorts_1_F_asia: C_man_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_1_F_asia.jpg";
		_generalMacro = "C_man_shorts_1_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_shorts_2_F: C_man_p_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_2_F.jpg";
		_generalMacro = "C_man_shorts_2_F";
		uniformClass = "U_C_ShirtSurfer_shorts";
		displayName = "$STR_A3_C_man_shorts_2_F0";
	};
	class C_man_shorts_2_F_afro: C_man_shorts_2_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_2_F_afro.jpg";
		_generalMacro = "C_man_shorts_2_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_shorts_2_F_euro: C_man_shorts_2_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_2_F_euro.jpg";
		_generalMacro = "C_man_shorts_2_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_shorts_2_F_asia: C_man_shorts_2_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_2_F_asia.jpg";
		_generalMacro = "C_man_shorts_2_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_shorts_3_F: C_man_p_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_3_F.jpg";
		_generalMacro = "C_man_shorts_3_F";
		uniformClass = "U_C_TeeSurfer_shorts_1";
		displayName = "$STR_A3_C_man_shorts_3_F0";
	};
	class C_man_shorts_3_F_afro: C_man_shorts_3_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_3_F_afro.jpg";
		_generalMacro = "C_man_shorts_3_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_shorts_3_F_euro: C_man_shorts_3_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_3_F_euro.jpg";
		_generalMacro = "C_man_shorts_3_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_shorts_3_F_asia: C_man_shorts_3_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_3_F_asia.jpg";
		_generalMacro = "C_man_shorts_3_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_shorts_4_F: C_man_p_shorts_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_4_F.jpg";
		_generalMacro = "C_man_shorts_4_F";
		uniformClass = "U_C_TeeSurfer_shorts_2";
		displayName = "$STR_A3_C_man_shorts_4_F0";
	};
	class C_man_shorts_4_F_afro: C_man_shorts_4_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_4_F_afro.jpg";
		_generalMacro = "C_man_shorts_4_F_afro";
		vehicleClass = "Afroamerican";
		editorSubcategory = "EdSubcat_Personnel_African";
		identityTypes[] = {"Head_African","G_CIVIL_male"};
		genericNames = "AfroMen";
	};
	class C_man_shorts_4_F_euro: C_man_shorts_4_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_4_F_euro.jpg";
		_generalMacro = "C_man_shorts_4_F_euro";
		vehicleClass = "European";
		editorSubcategory = "EdSubcat_Personnel_European";
		identityTypes[] = {"Head_Euro","G_CIVIL_male"};
		genericNames = "NATOMen";
	};
	class C_man_shorts_4_F_asia: C_man_shorts_4_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_shorts_4_F_asia.jpg";
		_generalMacro = "C_man_shorts_4_F_asia";
		vehicleClass = "Asian";
		editorSubcategory = "EdSubcat_Personnel_Asian";
		identityTypes[] = {"Head_Asian","G_CIVIL_male"};
		genericNames = "AsianMen";
	};
	class C_man_pilot_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_man_pilot_F.jpg";
		_generalMacro = "C_man_pilot_F";
		model = "\A3\characters_F\common\coveralls";
		modelSides[] = {3};
		uniformClass = "U_C_WorkerCoveralls";
		displayName = "$STR_A3_C_man_pilot_F0";
		class EventHandlers: EventHandlers
		{
			init = "";
		};
		backpack = "B_Parachute";
		role = "Crewman";
	};
	class C_journalist_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_journalist_F.jpg";
		_generalMacro = "C_journalist_F";
		model = "\A3\Characters_F_EPC\Civil\c_journalist";
		modelSides[] = {3};
		uniformClass = "U_C_Journalist";
		displayName = "$STR_A3_C_journalist_F0";
		linkedItems[] = {"H_Cap_press","V_Press_F","ItemMap","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"H_Cap_press","V_Press_F","ItemMap","ItemCompass","ItemWatch"};
		hiddenSelections[] = {};
		class EventHandlers{};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f_epc\civil\data\journalist.rvmat","a3\characters_f_epc\civil\data\journalist_injury.rvmat","a3\characters_f_epc\civil\data\journalist_injury.rvmat"};
		};
	};
	class C_Orestes: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Orestes.jpg";
		_generalMacro = "C_Orestes";
		model = "\A3\characters_F\civil\c_orestes";
		allowedUniformSides[] = {"U_OrestesBody"};
		displayName = "$STR_A3_CFGIDENTITIES_ORESTES";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		uniformClass = "U_OrestesBody";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\orestes.rvmat","A3\Characters_F\Civil\Data\orestes_injury.rvmat","A3\Characters_F\Civil\Data\orestes_injury.rvmat"};
		};
	};
	class C_Nikos: C_Orestes
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Nikos.jpg";
		_generalMacro = "C_Nikos";
		model = "\A3\characters_F\civil\c_Nikos";
		displayName = "$STR_A3_CFGFACES_MAN_A3_NIKOS0";
		identityTypes[] = {"Nikos","NoGlasses"};
		uniformClass = "U_NikosBody";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""Nikos""";
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\nikos.rvmat","A3\Characters_F\Civil\Data\nikos_injury.rvmat","A3\Characters_F\Civil\Data\nikos_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat"};
		};
	};
	class C_Nikos_aged: C_Nikos
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Nikos_aged.jpg";
		_generalMacro = "C_Nikos_aged";
		model = "\A3\Characters_F_EPC\Civil\c_nikos_aged.p3d";
		displayName = "$STR_A3_C_Nikos_aged0";
		identityTypes[] = {"Nikos","NoGlasses"};
		uniformClass = "U_NikosAgedBody";
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f_epc\civil\data\nikos_aged.rvmat","a3\characters_f_epc\civil\data\nikos_aged_injury.rvmat","a3\characters_f_epc\civil\data\nikos_aged_injury.rvmat"};
		};
	};
	class I_G_Soldier_base_F: SoldierGB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_G_Soldier_base_F";
		expansion = 1;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};
		faceType = "Man_A3";
		side = 2;
		faction = "IND_G_F";
		genericNames = "GreekMen";
		vehicleClass = "Men";
		editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 3.9;
		threat[] = {1,0.1,0.1};
		camouflage = 1.1;
		minFireTime = 10;
		cost = 100000;
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		modelSides[] = {2,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_IG_Guerilla1_1";
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_cloth1.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth2.rvmat","A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth3.rvmat","A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","a3\characters_f_epb\blufor\data\clothing1_dirty.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\characters_f\civil\data\c_poloshirt.rvmat","A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat","A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Civil\Data\hunter.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","a3\characters_f_beta\indep\data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","a3\characters_f_gamma\guerrilla\data\ig_guerrilla2_1.rvmat","A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat","A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_injury.rvmat","a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","A3\Characters_F\Civil\Data\hunter_injury.rvmat","a3\characters_f_epb\guerrilla\data\ig_guerrilla4_1.rvmat","A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat","A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_injury.rvmat","a3\characters_f_bootcamp\guerrilla\data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat","A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_injury.rvmat","a3\characters_f_beta\indep\data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		items[] = {"FirstAidKit"};
		respawnitems[] = {"FirstAidKit"};
		weapons[] = {"arifle_TRG21_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_G_Soldier_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_F.jpg";
		_generalMacro = "I_G_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		role = "Rifleman";
		headgearList[] = {"H_Bandanna_gry",1,"H_Bandanna_blu",1,"H_Bandanna_cbr",1,"H_Bandanna_khk_hs",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_surfer_grn",1,"H_Bandanna_camo",1,"H_Watchcap_blk",1,"H_Watchcap_cbr",1,"H_Watchcap_camo",1,"H_Watchcap_khk",1,"H_Booniehat_khk_hs",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1,"H_Booniehat_dgtl",1,"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Shemag_olive",1,"H_Shemag_olive_hs",1,"H_ShemagOpen_tan",1,"H_ShemagOpen_khk",1};
	};
	class I_G_Soldier_lite_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_lite_F.jpg";
		_generalMacro = "I_G_Soldier_lite_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_lite_F0";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		cost = 90000;
		role = "Rifleman";
		camouflage = 1.2;
		weapons[] = {"arifle_TRG20_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		linkedItems[] = {"V_BandollierB_blk","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_blk","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",1,"H_Bandanna_blu",1,"H_Bandanna_cbr",1,"H_Bandanna_khk_hs",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_surfer_grn",1,"H_Bandanna_camo",1,"H_Watchcap_blk",1,"H_Watchcap_cbr",1,"H_Watchcap_camo",1,"H_Watchcap_khk",1,"H_Booniehat_khk_hs",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1,"H_Booniehat_dgtl",1,"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Shemag_olive",1,"H_Shemag_olive_hs",1,"H_ShemagOpen_tan",1,"H_ShemagOpen_khk",1};
	};
	class I_G_Soldier_SL_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_SL_F.jpg";
		_generalMacro = "I_G_Soldier_SL_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		cost = 500000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Rifleman";
		weapons[] = {"arifle_TRG20_ACO_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_TRG20_ACO_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		linkedItems[] = {"V_Chestrig_blk","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		uniformClass = "U_IG_leader";
		headgearProbability = 50;
		allowedHeadgear[] = {"H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven"};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Cap_blk",0.5,"H_Cap_grn",0.5,"H_Cap_oli",0.5,"H_Cap_oli_hs",0.5,"H_Cap_tan",0.5,"H_Cap_blk_Raven",0.5,"H_Bandanna_gry",0.125,"H_Bandanna_blu",0.125,"H_Bandanna_cbr",0.125,"H_Bandanna_khk_hs",0.125,"H_Bandanna_khk",0.125,"H_Bandanna_sgg",0.125,"H_Bandanna_sand",0.125,"H_Bandanna_surfer",0.125,"H_Bandanna_surfer_blk",0.125,"H_Bandanna_surfer_grn",0.125,"H_Bandanna_camo",0.125,"H_Watchcap_blk",0.125,"H_Watchcap_cbr",0.125,"H_Watchcap_camo",0.125,"H_Watchcap_khk",0.125,"H_Booniehat_khk_hs",0.125,"H_Booniehat_khk",0.125,"H_Booniehat_oli",0.125,"H_Booniehat_tan",0.125,"H_Booniehat_dgtl",0.125,"H_Shemag_olive",0.125,"H_Shemag_olive_hs",0.125,"H_ShemagOpen_tan",0.125,"H_ShemagOpen_khk",0.125};
	};
	class I_G_Soldier_TL_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_TL_F.jpg";
		_generalMacro = "I_G_Soldier_TL_F";
		scope = 2;
		scopeCurator = 2;
		cost = 450000;
		threat[] = {1,0.3,0.1};
		icon = "iconManLeader";
		role = "Grenadier";
		displayName = "$STR_B_Soldier_TL_F0";
		weapons[] = {"arifle_Mk20_GL_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_GL_ACO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		linkedItems[] = {"V_TacVest_blk","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		uniformClass = "U_IG_leader";
		headgearProbability = 60;
		allowedHeadgear[] = {"H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven"};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",0.15,"H_Bandanna_blu",0.15,"H_Bandanna_cbr",0.15,"H_Bandanna_khk_hs",0.15,"H_Bandanna_khk",0.15,"H_Bandanna_sgg",0.15,"H_Bandanna_sand",0.15,"H_Bandanna_surfer",0.15,"H_Bandanna_surfer_blk",0.15,"H_Bandanna_surfer_grn",0.15,"H_Bandanna_camo",0.15,"H_Watchcap_blk",0.15,"H_Watchcap_cbr",0.15,"H_Watchcap_camo",0.15,"H_Watchcap_khk",0.15,"H_Booniehat_khk_hs",0.15,"H_Booniehat_khk",0.15,"H_Booniehat_oli",0.15,"H_Booniehat_tan",0.15,"H_Booniehat_dgtl",0.15,"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Shemag_olive",0.15,"H_Shemag_olive_hs",0.15,"H_ShemagOpen_tan",0.15,"H_ShemagOpen_khk",0.15};
	};
	class I_G_Soldier_AR_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_AR_F.jpg";
		_generalMacro = "I_G_Soldier_AR_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_AR_F0";
		weapons[] = {"LMG_Mk200_BI_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_BI_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		cost = 120000;
		icon = "iconManMG";
		role = "MachineGunner";
		linkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","D efaultManGuerillaLinkedItems"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass = "U_IG_Guerilla2_1";
		headgearProbability = 60;
		allowedHeadgear[] = {"H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk"};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",0.15,"H_Bandanna_blu",0.15,"H_Bandanna_cbr",0.15,"H_Bandanna_khk_hs",0.15,"H_Bandanna_khk",0.15,"H_Bandanna_sgg",0.15,"H_Bandanna_sand",0.15,"H_Bandanna_surfer",0.15,"H_Bandanna_surfer_blk",0.15,"H_Bandanna_surfer_grn",0.15,"H_Bandanna_camo",0.15,"H_Watchcap_blk",1,"H_Watchcap_cbr",1,"H_Watchcap_camo",1,"H_Watchcap_khk",1,"H_Booniehat_khk_hs",0.15,"H_Booniehat_khk",0.15,"H_Booniehat_oli",0.15,"H_Booniehat_tan",0.15,"H_Booniehat_dgtl",0.15,"H_Cap_blk",0.15,"H_Cap_grn",0.15,"H_Cap_oli",0.15,"H_Cap_oli_hs",0.15,"H_Cap_tan",0.15,"H_Cap_blk_Raven",0.15,"H_Shemag_olive",0.15,"H_Shemag_olive_hs",0.15,"H_ShemagOpen_tan",0.15,"H_ShemagOpen_khk",0.15};
	};
	class I_G_medic_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_medic_F.jpg";
		_generalMacro = "I_G_medic_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_medic_F0";
		backpack = "G_FieldPack_Medic";
		weapons[] = {"arifle_Mk20_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		linkedItems[] = {"V_TacVest_blk","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		attendant = 1;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass = "U_IG_Guerilla2_3";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"};
		cost = 300000;
		headgearProbability = 50;
		allowedHeadgear[] = {"H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven"};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",0.15,"H_Bandanna_blu",0.15,"H_Bandanna_cbr",0.15,"H_Bandanna_khk_hs",0.15,"H_Bandanna_khk",0.15,"H_Bandanna_sgg",0.15,"H_Bandanna_sand",0.15,"H_Bandanna_surfer",0.15,"H_Bandanna_surfer_blk",0.15,"H_Bandanna_surfer_grn",0.15,"H_Bandanna_camo",0.15,"H_Watchcap_blk",0.15,"H_Watchcap_cbr",0.15,"H_Watchcap_camo",0.15,"H_Watchcap_khk",0.15,"H_Booniehat_khk_hs",0.15,"H_Booniehat_khk",0.15,"H_Booniehat_oli",0.15,"H_Booniehat_tan",0.15,"H_Booniehat_dgtl",0.15,"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Shemag_olive",0.15,"H_Shemag_olive_hs",0.15,"H_ShemagOpen_tan",0.15,"H_ShemagOpen_khk",0.15};
	};
	class I_G_engineer_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_engineer_F.jpg";
		_generalMacro = "I_G_engineer_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_engineer_F0";
		backpack = "G_TacticalPack_Eng";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 70;
		weapons[] = {"arifle_TRG20_ACO_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_ACO_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		cost = 220000;
		linkedItems[] = {"V_Chestrig_blk","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass = "U_IG_Guerilla2_2";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla2_2_co.paa"};
		headgearProbability = 50;
		allowedHeadgear[] = {"H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven"};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",0.15,"H_Bandanna_blu",0.15,"H_Bandanna_cbr",0.15,"H_Bandanna_khk_hs",0.15,"H_Bandanna_khk",0.15,"H_Bandanna_sgg",0.15,"H_Bandanna_sand",0.15,"H_Bandanna_surfer",0.15,"H_Bandanna_surfer_blk",0.15,"H_Bandanna_surfer_grn",0.15,"H_Bandanna_camo",0.15,"H_Watchcap_blk",0.15,"H_Watchcap_cbr",0.15,"H_Watchcap_camo",0.15,"H_Watchcap_khk",0.15,"H_Booniehat_khk_hs",0.15,"H_Booniehat_khk",0.15,"H_Booniehat_oli",0.15,"H_Booniehat_tan",0.15,"H_Booniehat_dgtl",0.15,"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Shemag_olive",0.15,"H_Shemag_olive_hs",0.15,"H_ShemagOpen_tan",0.15,"H_ShemagOpen_khk",0.15};
	};
	class I_G_Soldier_exp_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_exp_F.jpg";
		_generalMacro = "I_G_Soldier_exp_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_exp_F0";
		cost = 115000;
		camouflage = 1.6;
		backpack = "G_Carryall_Exp";
		weapons[] = {"arifle_Mk20C_ACO_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		linkedItems[] = {"V_Chestrig_blk","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass = "U_IG_Guerilla2_1";
		headgearProbability = 60;
		allowedHeadgear[] = {"H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk"};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",0.125,"H_Bandanna_blu",0.125,"H_Bandanna_cbr",0.125,"H_Bandanna_khk_hs",0.125,"H_Bandanna_khk",0.125,"H_Bandanna_sgg",0.125,"H_Bandanna_sand",0.125,"H_Bandanna_surfer",0.125,"H_Bandanna_surfer_blk",0.125,"H_Bandanna_surfer_grn",0.125,"H_Bandanna_camo",0.125,"H_Watchcap_blk",1,"H_Watchcap_cbr",1,"H_Watchcap_camo",1,"H_Watchcap_khk",1,"H_Booniehat_khk_hs",0.125,"H_Booniehat_khk",0.125,"H_Booniehat_oli",0.125,"H_Booniehat_tan",0.125,"H_Booniehat_dgtl",0.125,"H_Cap_blk",0.125,"H_Cap_grn",0.125,"H_Cap_oli",0.125,"H_Cap_oli_hs",0.125,"H_Cap_tan",0.125,"H_Cap_blk_Raven",0.125,"H_Shemag_olive",0.125,"H_Shemag_olive_hs",0.125,"H_ShemagOpen_tan",0.125,"H_ShemagOpen_khk",0.125};
	};
	class I_G_Soldier_GL_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_GL_F.jpg";
		_generalMacro = "I_G_Soldier_GL_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		weapons[] = {"arifle_TRG21_GL_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_GL_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		cost = 130000;
		role = "Grenadier";
		linkedItems[] = {"V_Chestrig_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		uniformClass = "U_IG_Guerilla2_3";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"};
		headgearProbability = 50;
		allowedHeadgear[] = {};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"",1,"H_Bandanna_gry",0.125,"H_Bandanna_blu",0.125,"H_Bandanna_cbr",0.125,"H_Bandanna_khk_hs",0.125,"H_Bandanna_khk",0.125,"H_Bandanna_sgg",0.125,"H_Bandanna_sand",0.125,"H_Bandanna_surfer",0.125,"H_Bandanna_surfer_blk",0.125,"H_Bandanna_surfer_grn",0.125,"H_Bandanna_camo",0.125,"H_Watchcap_blk",0.125,"H_Watchcap_cbr",0.125,"H_Watchcap_camo",0.125,"H_Watchcap_khk",0.125,"H_Booniehat_khk_hs",0.125,"H_Booniehat_khk",0.125,"H_Booniehat_oli",0.125,"H_Booniehat_tan",0.125,"H_Booniehat_dgtl",0.125,"H_Cap_blk",0.125,"H_Cap_grn",0.125,"H_Cap_oli",0.125,"H_Cap_oli_hs",0.125,"H_Cap_tan",0.125,"H_Cap_blk_Raven",0.125,"H_Shemag_olive",0.125,"H_Shemag_olive_hs",0.125,"H_ShemagOpen_tan",0.125,"H_ShemagOpen_khk",0.125};
	};
	class I_G_Soldier_M_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_M_F.jpg";
		_generalMacro = "I_G_Soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_M_F0";
		weapons[] = {"arifle_Mk20_MRCO_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Mk20_MRCO_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		cost = 150000;
		role = "Marksman";
		linkedItems[] = {"V_BandollierB_khk","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		uniformClass = "U_IG_Guerilla3_1";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_co.paa"};
		headgearProbability = 60;
		allowedHeadgear[] = {"H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl"};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",0.15,"H_Bandanna_blu",0.15,"H_Bandanna_cbr",0.15,"H_Bandanna_khk_hs",0.15,"H_Bandanna_khk",0.15,"H_Bandanna_sgg",0.15,"H_Bandanna_sand",0.15,"H_Bandanna_surfer",0.15,"H_Bandanna_surfer_blk",0.15,"H_Bandanna_surfer_grn",0.15,"H_Bandanna_camo",0.15,"H_Watchcap_blk",0.15,"H_Watchcap_cbr",0.15,"H_Watchcap_camo",0.15,"H_Watchcap_khk",0.15,"H_Booniehat_khk_hs",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1,"H_Booniehat_dgtl",1,"H_Cap_blk",0.15,"H_Cap_grn",0.15,"H_Cap_oli",0.15,"H_Cap_oli_hs",0.15,"H_Cap_tan",0.15,"H_Cap_blk_Raven",0.15,"H_Shemag_olive",0.15,"H_Shemag_olive_hs",0.15,"H_ShemagOpen_tan",0.15,"H_ShemagOpen_khk",0.15};
	};
	class I_G_Soldier_LAT_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_LAT_F.jpg";
		_generalMacro = "I_G_Soldier_LAT_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_LAT_F0";
		backpack = "G_FieldPack_LAT";
		weapons[] = {"arifle_TRG21_F","launch_RPG32_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_F","launch_RPG32_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		threat[] = {1,0.6,0.1};
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		uniformClass = "U_IG_Guerrilla_6_1";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",1,"H_Bandanna_blu",1,"H_Bandanna_cbr",1,"H_Bandanna_khk_hs",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_surfer_grn",1,"H_Bandanna_camo",1,"H_Watchcap_blk",1,"H_Watchcap_cbr",1,"H_Watchcap_camo",1,"H_Watchcap_khk",1,"H_Booniehat_khk_hs",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1,"H_Booniehat_dgtl",1,"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Shemag_olive",1,"H_Shemag_olive_hs",1,"H_ShemagOpen_tan",1,"H_ShemagOpen_khk",1};
	};
	class I_G_Soldier_A_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_A_F.jpg";
		_generalMacro = "I_G_Soldier_A_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_Soldier_A_F0";
		cost = 110000;
		role = "Rifleman";
		backpack = "G_Carryall_Ammo";
		weapons[] = {"arifle_TRG20_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa","a3\characters_f_beta\indep\data\ia_soldier_01_clothing_co.paa"};
		headgearProbability = 60;
		allowedHeadgear[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo"};
		allowedHeadgearB[] = {"H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Bandanna_gry",1,"H_Bandanna_blu",1,"H_Bandanna_cbr",1,"H_Bandanna_khk_hs",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_surfer_grn",1,"H_Bandanna_camo",1,"H_Watchcap_blk",0.125,"H_Watchcap_cbr",0.125,"H_Watchcap_camo",0.125,"H_Watchcap_khk",0.125,"H_Booniehat_khk_hs",0.125,"H_Booniehat_khk",0.125,"H_Booniehat_oli",0.125,"H_Booniehat_tan",0.125,"H_Booniehat_dgtl",0.125,"H_Cap_blk",0.125,"H_Cap_grn",0.125,"H_Cap_oli",0.125,"H_Cap_oli_hs",0.125,"H_Cap_tan",0.125,"H_Cap_blk_Raven",0.125,"H_Shemag_olive",0.125,"H_Shemag_olive_hs",0.125,"H_ShemagOpen_tan",0.125,"H_ShemagOpen_khk",0.125};
	};
	class I_G_officer_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_officer_F.jpg";
		_generalMacro = "I_G_officer_F";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		cost = 600000;
		camouflage = 1.6;
		icon = "iconManOfficer";
		role = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_B_officer_F0";
		weapons[] = {"arifle_TRG21_MRCO_F","hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_MRCO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		linkedItems[] = {"V_Chestrig_oli","H_Watchcap_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Watchcap_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		uniformClass = "U_IG_Guerilla2_3";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla2_3_co.paa"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Beret_blk"};
		headgearList[] = {"H_Beret_blk",1};
	};
	class B_G_Soldier_F: I_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_F.jpg";
		_generalMacro = "B_G_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla1_1";
	};
	class O_G_Soldier_F: I_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_F.jpg";
		_generalMacro = "O_G_Soldier_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla1_1";
	};
	class B_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_lite_F.jpg";
		_generalMacro = "B_G_Soldier_lite_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla1_1";
	};
	class O_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_lite_F.jpg";
		_generalMacro = "O_G_Soldier_lite_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla1_1";
	};
	class B_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_SL_F.jpg";
		_generalMacro = "B_G_Soldier_SL_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_leader";
	};
	class O_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_SL_F.jpg";
		_generalMacro = "O_G_Soldier_SL_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_leader";
	};
	class B_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_TL_F.jpg";
		_generalMacro = "B_G_Soldier_TL_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_leader";
	};
	class O_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_TL_F.jpg";
		_generalMacro = "O_G_Soldier_TL_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_leader";
	};
	class B_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_AR_F.jpg";
		_generalMacro = "B_G_Soldier_AR_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla2_1";
	};
	class O_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_AR_F.jpg";
		_generalMacro = "O_G_Soldier_AR_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla2_1";
	};
	class B_G_medic_F: I_G_medic_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_medic_F.jpg";
		_generalMacro = "B_G_medic_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla2_3";
	};
	class O_G_medic_F: I_G_medic_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_medic_F.jpg";
		_generalMacro = "O_G_medic_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla2_3";
	};
	class B_G_engineer_F: I_G_engineer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_engineer_F.jpg";
		_generalMacro = "B_G_engineer_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla2_2";
	};
	class O_G_engineer_F: I_G_engineer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_engineer_F.jpg";
		_generalMacro = "O_G_engineer_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla2_2";
	};
	class B_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_exp_F.jpg";
		_generalMacro = "B_G_Soldier_exp_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla2_1";
	};
	class O_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_exp_F.jpg";
		_generalMacro = "O_G_Soldier_exp_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla2_1";
	};
	class B_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_GL_F.jpg";
		_generalMacro = "B_G_Soldier_GL_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla2_3";
	};
	class O_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_GL_F.jpg";
		_generalMacro = "O_G_Soldier_GL_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla2_3";
	};
	class B_G_Soldier_M_F: I_G_Soldier_M_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_M_F.jpg";
		_generalMacro = "B_G_Soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla3_1";
	};
	class O_G_Soldier_M_F: I_G_Soldier_M_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_M_F.jpg";
		_generalMacro = "O_G_Soldier_M_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla3_1";
	};
	class B_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_LAT_F.jpg";
		_generalMacro = "B_G_Soldier_LAT_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerrilla_6_1";
	};
	class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_LAT_F.jpg";
		_generalMacro = "O_G_Soldier_LAT_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerrilla_6_1";
	};
	class B_G_Soldier_A_F: I_G_Soldier_A_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_A_F.jpg";
		_generalMacro = "B_G_Soldier_A_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla1_1";
	};
	class O_G_Soldier_A_F: I_G_Soldier_A_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_A_F.jpg";
		_generalMacro = "O_G_Soldier_A_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla1_1";
	};
	class B_G_officer_F: I_G_officer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_officer_F.jpg";
		_generalMacro = "B_G_officer_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_Guerilla2_3";
	};
	class O_G_officer_F: I_G_officer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_officer_F.jpg";
		_generalMacro = "O_G_officer_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_Guerilla2_3";
	};
	class I_G_Soldier_unarmed_F: I_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Soldier_unarmed_F.jpg";
		_generalMacro = "I_G_Soldier_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Bandanna_gry",1,"H_Bandanna_blu",1,"H_Bandanna_cbr",1,"H_Bandanna_khk_hs",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_surfer_grn",1,"H_Bandanna_camo",1,"H_Watchcap_blk",1,"H_Watchcap_cbr",1,"H_Watchcap_camo",1,"H_Watchcap_khk",1,"H_Booniehat_khk_hs",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1,"H_Booniehat_dgtl",1,"H_Shemag_olive",1,"H_Shemag_olive_hs",1,"H_ShemagOpen_tan",1,"H_ShemagOpen_khk",1};
	};
	class B_G_Soldier_unarmed_F: B_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Soldier_unarmed_F.jpg";
		_generalMacro = "B_G_Soldier_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Bandanna_gry",1,"H_Bandanna_blu",1,"H_Bandanna_cbr",1,"H_Bandanna_khk_hs",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_surfer_grn",1,"H_Bandanna_camo",1,"H_Watchcap_blk",1,"H_Watchcap_cbr",1,"H_Watchcap_camo",1,"H_Watchcap_khk",1,"H_Booniehat_khk_hs",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1,"H_Booniehat_dgtl",1,"H_Shemag_olive",1,"H_Shemag_olive_hs",1,"H_ShemagOpen_tan",1,"H_ShemagOpen_khk",1};
	};
	class O_G_Soldier_unarmed_F: O_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Soldier_unarmed_F.jpg";
		_generalMacro = "O_G_Soldier_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		headgearList[] = {"H_Cap_blk",1,"H_Cap_grn",1,"H_Cap_oli",1,"H_Cap_oli_hs",1,"H_Cap_tan",1,"H_Cap_blk_Raven",1,"H_Bandanna_gry",1,"H_Bandanna_blu",1,"H_Bandanna_cbr",1,"H_Bandanna_khk_hs",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_surfer_grn",1,"H_Bandanna_camo",1,"H_Watchcap_blk",1,"H_Watchcap_cbr",1,"H_Watchcap_camo",1,"H_Watchcap_khk",1,"H_Booniehat_khk_hs",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1,"H_Booniehat_dgtl",1,"H_Shemag_olive",1,"H_Shemag_olive_hs",1,"H_ShemagOpen_tan",1,"H_ShemagOpen_khk",1};
	};
	class I_G_Survivor_F: I_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Survivor_F.jpg";
		_generalMacro = "I_G_Survivor_F";
		displayName = "$STR_A3_CfgVehicles_b_survivor_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		items[] = {};
		respawnItems[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		role = "Unarmed";
		headgearProbability = 100;
		allowedHeadgear[] = {};
		headgearList[] = {};
	};
	class B_G_Survivor_F: B_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Survivor_F.jpg";
		_generalMacro = "B_G_Survivor_F";
		displayName = "$STR_A3_CfgVehicles_b_survivor_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		items[] = {};
		respawnItems[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		role = "Unarmed";
		headgearProbability = 100;
		allowedHeadgear[] = {};
		headgearList[] = {};
	};
	class O_G_Survivor_F: O_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Survivor_F.jpg";
		_generalMacro = "O_G_Survivor_F";
		displayName = "$STR_A3_CfgVehicles_b_survivor_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		items[] = {};
		respawnItems[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		role = "Unarmed";
		headgearProbability = 100;
		allowedHeadgear[] = {};
		headgearList[] = {};
	};
	class B_G_Soldier_universal_F: B_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		_generalMacro = "B_G_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class O_G_Soldier_universal_F: O_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		_generalMacro = "O_G_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class I_G_Soldier_universal_F: I_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		_generalMacro = "I_G_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class I_G_Story_Protagonist_F: B_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Story_Protagonist_F.jpg";
		_generalMacro = "I_G_Story_Protagonist_F";
		scope = 2;
		displayName = "$STR_A3_character_Kerry";
		nakedUniform = "U_I_G_Story_Protagonist_F";
		uniformClass = "U_I_G_Story_Protagonist_F";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		role = "Grenadier";
		Items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		weapons[] = {"arifle_TRG21_GL_MRCO_F","hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla5_1_co.paa"};
		linkedItems[] = {"V_TacVest_blk","H_Bandanna_khk_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] = {"V_TacVest_blk","H_Bandanna_khk_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identityTypes[] = {"kerry_B2"};
		class EventHandlers: EventHandlers
		{
			init = "";
		};
	};
	class I_G_Story_SF_Captain_F: B_G_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Story_SF_Captain_F.jpg";
		_generalMacro = "I_G_Story_SF_Captain_F";
		scope = 2;
		modelSides[] = {3,1,2};
		displayName = "$STR_A3_CFGFACES_MAN_A3_MILLER0";
		identityTypes[] = {"Miller","G_NATO_default"};
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		role = "Rifleman";
		linkedItems[] = {"V_Chestrig_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Civil\Data\c_cloth4.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat"};
		};
		hiddenSelections[] = {"insignia"};
		class EventHandlers: EventHandlers
		{
			init = "";
		};
	};
	class I_G_resistanceLeader_F: I_G_Story_Protagonist_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_resistanceLeader_F.jpg";
		_generalMacro = "I_G_resistanceLeader_F";
		scope = 2;
		displayName = "$STR_A3_I_G_resistanceLeader_F0";
		nakedUniform = "U_I_G_resistanceLeader_F";
		uniformClass = "U_I_G_resistanceLeader_F";
		identityTypes[] = {"IG_Leader"};
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla4_1.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla4_1_co.paa"};
		linkedItems[] = {"V_I_G_resistanceLeader_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers: EventHandlers
		{
			init = "";
		};
	};
	class I_G_resistanceCommander_F: I_G_Story_Protagonist_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_G_resistanceCommander_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_I_G_resistanceCommander_F0";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_BG_Guerilla1_1";
	};
	class I_Soldier_base_F: SoldierGB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_Soldier_base_F";
		scope = 0;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};
		faceType = "Man_A3";
		side = 2;
		faction = "IND_F";
		genericNames = "GreekMen";
		vehicleClass = "Men";
		editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 3.9;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 10;
		cost = 40000;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_co.paa"};
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		modelSides[] = {2,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_I_CombatUniform";
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		class EventHandlers;
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_02_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_Soldier_02_F";
		scope = 0;
		displayName = "$STR_A3_CfgVehicles_I_Soldier_02_F0";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "U_I_CombatUniform_shortsleeve";
	};
	class I_Soldier_03_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_Soldier_03_F";
		scope = 0;
		model = "\A3\characters_F\Common\coveralls.p3d";
		modelSides[] = {2,3};
		uniformClass = "U_I_HeliPilotCoveralls";
		role = "Crewman";
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 5;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 5;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 2;
		explosionShielding = 0.2;
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_sand_co.paa"};
	};
	class I_Soldier_04_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_Soldier_04_F";
		scope = 0;
		displayName = "$STR_B_pilot_F0";
		uniformClass = "U_I_pilotCoveralls";
		model = "\A3\characters_F\Common\pilot_f.p3d";
		modelSides[] = {2,3};
		role = "Crewman";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_rus_co.paa"};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 2;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 2;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 2;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 5;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 5;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 5;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 0.6;
		explosionShielding = 0.06;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\common\data\pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat"};
		};
	};
	class I_soldier_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_s"};
				speechPlural[] = {"veh_infantry_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_p";
		nameSound = "veh_infantry_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_soldier_F.jpg";
		_generalMacro = "I_soldier_F";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		cost = 100000;
		role = "Rifleman";
		uniformClass = "U_I_CombatUniform";
	};
	class I_Soldier_lite_F: I_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_lite_F.jpg";
		_generalMacro = "I_Soldier_lite_F";
		scope = 2;
		displayName = "$STR_B_Soldier_lite_F0";
		cost = 90000;
		role = "Rifleman";
		camouflage = 1.2;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		weapons[] = {"arifle_Mk20_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_A_F: I_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_A_F.jpg";
		_generalMacro = "I_Soldier_A_F";
		scope = 2;
		displayName = "$STR_B_Soldier_A_F0";
		cost = 110000;
		role = "Rifleman";
		camouflage = 1.5;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "I_Fieldpack_oli_Ammo";
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA_net","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA_net","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_GL_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_GL_F.jpg";
		_generalMacro = "I_Soldier_GL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		weapons[] = {"arifle_Mk20_GL_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_GL_ACO_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		cost = 130000;
		role = "Grenadier";
		threat[] = {1,0.3,0.1};
		linkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetIA_net","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetIA_net","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_AR_F: I_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_AR_F.jpg";
		_generalMacro = "I_Soldier_AR_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AR_F0";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		weapons[] = {"LMG_Mk200_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 110000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		role = "MachineGunner";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_SL_F: I_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_SL_F.jpg";
		_generalMacro = "I_Soldier_SL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		weapons[] = {"arifle_Mk20_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		cost = 500000;
		camouflage = 1.4;
		icon = "iconManLeader";
		role = "Rifleman";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_TL_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_TL_F.jpg";
		_generalMacro = "I_Soldier_TL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		weapons[] = {"arifle_Mk20_GL_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Mk20_GL_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		cost = 450000;
		camouflage = 1.4;
		icon = "iconManLeader";
		role = "Grenadier";
		linkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_M_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_M_F.jpg";
		_generalMacro = "I_Soldier_M_F";
		scope = 2;
		displayName = "$STR_B_Soldier_M_F0";
		weapons[] = {"srifle_EBR_MRCO_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"srifle_EBR_MRCO_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 150000;
		role = "Marksman";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_LAT_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_LAT_F.jpg";
		_generalMacro = "I_Soldier_LAT_F";
		scope = 2;
		displayName = "$STR_B_Soldier_LAT_F0";
		backpack = "I_Fieldpack_oli_LAT";
		weapons[] = {"arifle_Mk20_ACO_pointer_F","launch_NLAW_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","launch_NLAW_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		secondaryAmmoCoef = 0.5;
	};
	class I_Soldier_AT_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_AT_F.jpg";
		_generalMacro = "I_Soldier_AT_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AT_F0";
		backpack = "I_Fieldpack_oli_AT";
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_short_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_short_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 190000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		secondaryAmmoCoef = 0.5;
	};
	class I_Soldier_AA_F: I_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_AA_F.jpg";
		_generalMacro = "I_Soldier_AA_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AA_F0";
		backpack = "I_Fieldpack_oli_AA";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 200000;
		threat[] = {1,0.7,0.3};
		icon = "iconManAT";
		role = "MissileSpecialist";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		secondaryAmmoCoef = 0.5;
	};
	class I_medic_F: I_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_medic_F.jpg";
		_generalMacro = "I_medic_F";
		scope = 2;
		displayName = "$STR_B_medic_F0";
		attendant = 1;
		cost = 300000;
		camouflage = 1.6;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "I_Fieldpack_oli_Medic";
		weapons[] = {"arifle_Mk20_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_pointer_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		picture = "pictureHeal";
	};
	class I_Soldier_repair_F: I_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_repair_F.jpg";
		_generalMacro = "I_Soldier_repair_F";
		scope = 2;
		displayName = "$STR_B_Soldier_repair_F0";
		engineer = 1;
		detectSkill = 40;
		cost = 220000;
		camouflage = 1.6;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "I_Fieldpack_oli_Repair";
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA_net","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA_net","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class I_Soldier_exp_F: I_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_exp_F.jpg";
		_generalMacro = "I_Soldier_exp_F";
		scope = 2;
		displayName = "$STR_B_Soldier_exp_F0";
		cost = 115000;
		camouflage = 1.6;
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "I_Carryall_oli_Exp";
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		linkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
	};
	class I_engineer_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_engineer_F.jpg";
		_generalMacro = "I_engineer_F";
		scope = 2;
		displayName = "$STR_B_engineer_F0";
		engineer = 1;
		cost = 220000;
		camouflage = 1.6;
		uniformClass = "U_I_CombatUniform";
		backpack = "I_Carryall_oli_Eng";
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		canDeactivateMines = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class I_crew_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_crew_F.jpg";
		_generalMacro = "I_crew_F";
		scope = 2;
		displayName = "$STR_B_crew_F0";
		weapons[] = {"arifle_Mk20C_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		camouflage = 1.6;
		linkedItems[] = {"V_BandollierB_oli","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_TacVestIR_blk","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		cost = 90000;
		role = "Crewman";
	};
	class I_helipilot_F: I_Soldier_03_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_helipilot_F.jpg";
		_generalMacro = "I_helipilot_F";
		scope = 2;
		displayName = "$STR_B_helipilot_F0";
		uniformClass = "U_I_HeliPilotCoveralls";
		weapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		cost = 160000;
		role = "Crewman";
		camouflage = 2.0;
		linkedItems[] = {"H_PilotHelmetHeli_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"H_PilotHelmetHeli_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_pilot_F: I_Soldier_04_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_pilot_F.jpg";
		_generalMacro = "I_pilot_F";
		scope = 2;
		displayName = "$STR_B_pilot_F0";
		uniformClass = "U_I_pilotCoveralls";
		cost = 165000;
		role = "Crewman";
		camouflage = 2.0;
		weapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","SmokeShell","SmokeShellGreen","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","SmokeShell","SmokeShellGreen","Chemlight_green"};
		linkedItems[] = {"H_PilotHelmetFighter_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "B_Parachute";
	};
	class I_helicrew_F: I_helipilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_helicrew_F.jpg";
		_generalMacro = "I_helicrew_F";
		displayName = "$STR_B_helicrew_F0";
		weapons[] = {"arifle_Mk20C_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_CrewHelmetHeli_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"H_CrewHelmetHeli_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		cost = 80000;
		role = "Crewman";
	};
	class I_officer_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_officer_F.jpg";
		_generalMacro = "I_officer_F";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\officer_spc_co.paa"};
		uniformClass = "U_I_OfficerUniform";
		scope = 2;
		displayName = "$STR_B_officer_F0";
		identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_casual"};
		weapons[] = {"arifle_Mk20C_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_F","hgun_ACPC2_F","Throw","Put"};
		modelSides[] = {2,3};
		cost = 600000;
		camouflage = 1.6;
		icon = "iconManOfficer";
		role = "Rifleman";
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_BandollierB_oli","H_MilCap_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","H_MilCap_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_Story_Colonel_F: I_officer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Story_Colonel_F.jpg";
		_generalMacro = "I_Story_Colonel_F";
		scope = 2;
		displayName = "$STR_A3_I_Story_Colonel_F0";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		identityTypes[] = {"LanguageGRE_F","Head_Rangemaster","G_NATO_casual"};
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		magazines[] = {"SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_Beret_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_soldier_UAV_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_soldier_UAV_F.jpg";
		_generalMacro = "I_soldier_UAV_F";
		scope = 2;
		displayName = "$STR_A3_B_SOLDIER_UAV_F0";
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};
		backpack = "I_UAV_01_backpack_F";
		cost = 150000;
		role = "SpecialOperative";
		uavHacker = 1;
	};
	class I_Soldier_universal_F: I_soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		_generalMacro = "I_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class I_Survivor_F: I_soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Survivor_F.jpg";
		_generalMacro = "I_Survivor_F";
		displayName = "$STR_A3_CfgVehicles_b_survivor_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		items[] = {};
		respawnItems[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		role = "Unarmed";
	};
	class I_Soldier_unarmed_F: I_soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_unarmed_F.jpg";
		_generalMacro = "I_Soldier_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
	};
	class I_Soldier_diver_base_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_diver_s"};
				speechPlural[] = {"veh_infantry_diver_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_diver_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_diver_p";
		nameSound = "veh_infantry_diver_s";
		_generalMacro = "I_Soldier_diver_base_F";
		scope = 0;
		displayName = "$STR_B_Soldier_diver_base_F0";
		vehicleClass = "MenDiver";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		role = "SpecialOperative";
		uniformClass = "U_I_Wetsuit";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\diver_suit_rus_co.paa","\A3\Characters_F\Common\Data\diver_equip_rus_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Common\Data\diver_suit.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat"};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		selectionPersonality = "personality";
		identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_diver"};
		linkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green"};
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.1;
		handgunAmmoCoef = 0.2;
	};
	class I_diver_F: I_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_diver_F.jpg";
		_generalMacro = "I_diver_F";
		scope = 2;
		displayName = "$STR_B_diver_F0";
		backpack = "I_Assault_Diver";
		model = "\A3\characters_F\Common\diver_slotable";
		modelSides[] = {2,3};
		cost = 70000;
		role = "SpecialOperative";
		camouflage = 2.0;
	};
	class I_diver_exp_F: I_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_diver_exp_F.jpg";
		_generalMacro = "I_diver_exp_F";
		scope = 2;
		displayName = "$STR_B_diver_exp_F0";
		cost = 90000;
		camouflage = 2.0;
		canDeactivateMines = 1;
		backpack = "B_FieldPack_blk_DiverExp";
		icon = "iconManExplosive";
		role = "SpecialOperative";
	};
	class I_diver_TL_F: I_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_diver_TL_F.jpg";
		_generalMacro = "I_diver_TL_F";
		scope = 2;
		displayName = "$STR_B_diver_TL_F0";
		linkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManLeader";
		role = "SpecialOperative";
		cost = 430000;
		camouflage = 2.0;
	};
	class I_Soldier_sniper_base_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		_generalMacro = "I_Soldier_sniper_base_F";
		scope = 0;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_sniper"};
		displayName = "$STR_B_Soldier_sniper_base_F0";
		vehicleClass = "MenSniper";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		role = "Marksman";
		model = "A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
		uniformClass = "U_I_GhillieSuit";
		weapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
	};
	class I_Spotter_F: I_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Spotter_F.jpg";
		_generalMacro = "I_Spotter_F";
		scope = 2;
		displayName = "$STR_B_Spotter_F0";
		cost = 250000;
		role = "Marksman";
		threat[] = {1,0.3,0.3};
		camouflage = 0.6;
		weapons[] = {"arifle_Mk20_MRCO_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_Mk20_MRCO_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Sniper_F: I_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Sniper_F.jpg";
		_generalMacro = "I_Sniper_F";
		scope = 2;
		displayName = "$STR_B_Sniper_F0";
		weapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		cost = 350000;
		role = "Marksman";
		threat[] = {1,0.3,0.3};
		camouflage = 0.6;
	};
	class I_Soldier_support_base_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_Soldier_support_base_F";
		scope = 0;
		camouflage = 1.5;
		displayName = "$STR_B_Soldier_support_base_F0";
		vehicleClass = "MenSupport";
		editorSubcategory = "EdSubcat_Personnel";
		role = "Assistant";
		uniformClass = "U_I_CombatUniform_tshirt";
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_AAR_F: I_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_AAR_F.jpg";
		_generalMacro = "I_Soldier_AAR_F";
		scope = 2;
		displayName = "$STR_O_SOLDIERU_AAR_F0";
		cost = 95000;
		backpack = "B_TacticalPack_oli_AAR";
		role = "Assistant";
	};
	class I_Soldier_AAT_F: I_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_AAT_F.jpg";
		_generalMacro = "I_Soldier_AAT_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AAT_F0";
		cost = 93000;
		role = "Assistant";
		backpack = "I_Carryall_oli_AAT";
	};
	class I_Soldier_AAA_F: I_Soldier_AAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_AAA_F.jpg";
		_generalMacro = "I_Soldier_AAA_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AAA_F0";
		cost = 94000;
		role = "Assistant";
		backpack = "I_Carryall_oli_AAA";
	};
	class I_support_MG_F: I_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_support_MG_F.jpg";
		_generalMacro = "I_support_MG_F";
		scope = 2;
		displayName = "$STR_B_support_MG_F0";
		backpack = "I_HMG_01_weapon_F";
		weapons[] = {"arifle_Mk20C_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_F","hgun_ACPC2_F","Throw","Put"};
		threat[] = {1.0,0.3,0.3};
		cost = 460000;
		role = "Assistant";
	};
	class I_support_GMG_F: I_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_support_GMG_F.jpg";
		_generalMacro = "I_support_GMG_F";
		scope = 2;
		displayName = "$STR_B_support_GMG_F0";
		backpack = "I_GMG_01_weapon_F";
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		threat[] = {1,0.6,0.1};
		cost = 470000;
		role = "Assistant";
	};
	class I_support_Mort_F: I_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_support_Mort_F.jpg";
		_generalMacro = "I_support_Mort_F";
		scope = 2;
		displayName = "$STR_B_support_Mort_F0";
		backpack = "I_Mortar_01_weapon_F";
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		threat[] = {1,0.8,0.1};
		cost = 480000;
		role = "Assistant";
	};
	class I_support_AMG_F: I_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_support_AMG_F.jpg";
		_generalMacro = "I_support_AMG_F";
		scope = 2;
		displayName = "$STR_B_support_AMG_F0";
		backpack = "I_HMG_01_support_F";
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		cost = 91000;
		role = "Assistant";
	};
	class I_support_AMort_F: I_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_support_AMort_F.jpg";
		_generalMacro = "I_support_AMort_F";
		scope = 2;
		displayName = "$STR_B_support_AMort_F0";
		backpack = "I_Mortar_01_support_F";
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
		cost = 81000;
		role = "Assistant";
	};
	class O_Soldier_base_F: SoldierEB
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Soldier_base_F";
		expansion = 1;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		faceType = "Man_A3";
		side = 0;
		faction = "OPF_F";
		genericNames = "TakistaniMen";
		vehicleClass = "Men";
		editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 40000;
		canCarryBackPack = 1;
		scope = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\OPFOR\Data\clothing.rvmat","A3\Characters_F\OPFOR\Data\clothing_injury.rvmat","A3\Characters_F\OPFOR\Data\clothing_injury.rvmat"};
		};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 4;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.33;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 6;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 0.9;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 0.9;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 0.9;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "U_O_CombatUniform_ocamo";
		class UniformInfo
		{
			class SlotsInfo
			{
				class NVG: UniformSlotInfo
				{
					slotType = 602;
				};
				class Scuba: UniformSlotInfo
				{
					slotType = 604;
				};
				class Googles: UniformSlotInfo
				{
					slotType = 603;
				};
				class Headgear: UniformSlotInfo
				{
					slotType = 605;
				};
			};
		};
		class EventHandlers;
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_co.paa","\A3\Characters_F\OPFOR\Data\tech_CO.paa"};
	};
	class O_Soldier_02_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Soldier_02_F";
		scope = 0;
		model = "\A3\characters_F\Common\pilot_f.p3d";
		modelSides[] = {0,3};
		uniformClass = "U_O_PilotCoveralls";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_suit_iran_co.paa"};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 4;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.33;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 6;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1.5;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 0.9;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 0.9;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 0.9;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 1.2;
		explosionShielding = 0.12;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f\common\data\pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat"};
		};
	};
	class O_Soldier_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_F.jpg";
		_generalMacro = "O_Soldier_F";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_F0";
		cost = 100000;
		role = "Rifleman";
	};
	class O_officer_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_officer_F.jpg";
		_generalMacro = "O_officer_F";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		modelSides[] = {0,3};
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\officer_hex_co.paa"};
		scope = 2;
		displayName = "$STR_B_officer_F0";
		uniformClass = "U_O_OfficerUniform_ocamo";
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_officer"};
		weapons[] = {"arifle_Katiba_C_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 600000;
		camouflage = 1.6;
		icon = "iconManOfficer";
		role = "Rifleman";
		linkedItems[] = {"V_BandollierB_khk","H_Beret_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_Beret_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 3;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 0.9;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\OPFOR\Data\officer.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat"};
		};
	};
	class O_Soldier_lite_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_lite_F.jpg";
		_generalMacro = "O_Soldier_lite_F";
		scope = 2;
		displayName = "$STR_B_Soldier_lite_F0";
		weapons[] = {"arifle_Katiba_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		camouflage = 1.2;
		linkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 90000;
		role = "Rifleman";
	};
	class O_Soldier_GL_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_GL_F.jpg";
		_generalMacro = "O_Soldier_GL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		weapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		cost = 130000;
		role = "Grenadier";
		threat[] = {1,0.3,0.1};
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_AR_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_AR_F.jpg";
		_generalMacro = "O_Soldier_AR_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AR_F0";
		weapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 125000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		role = "MachineGunner";
		linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_SL_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_SL_F.jpg";
		_generalMacro = "O_Soldier_SL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.4;
		icon = "iconManLeader";
		role = "Rifleman";
		linkedItems[] = {"V_TacVest_khk","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_TL_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_TL_F.jpg";
		_generalMacro = "O_Soldier_TL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_TL_F0";
		weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		cost = 450000;
		camouflage = 1.4;
		icon = "iconManLeader";
		role = "Grenadier";
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldier_M_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldier_M_F.jpg";
		_generalMacro = "O_soldier_M_F";
		scope = 2;
		displayName = "$STR_B_Soldier_M_F0";
		weapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 150000;
		role = "Marksman";
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_LAT_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_LAT_F.jpg";
		_generalMacro = "O_Soldier_LAT_F";
		scope = 2;
		displayName = "$STR_B_Soldier_LAT_F0";
		backpack = "B_FieldPack_cbr_LAT";
		weapons[] = {"arifle_Katiba_ACO_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 180000;
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
	};
	class O_medic_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_medic_F.jpg";
		_generalMacro = "O_medic_F";
		scope = 2;
		displayName = "$STR_B_medic_F0";
		attendant = 1;
		weapons[] = {"arifle_Katiba_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_ocamo_Medic";
		cost = 300000;
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		camouflage = 1.6;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
	};
	class O_soldier_repair_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldier_repair_F.jpg";
		_generalMacro = "O_soldier_repair_F";
		scope = 2;
		displayName = "$STR_B_Soldier_repair_F0";
		cost = 220000;
		camouflage = 1.6;
		backpack = "B_FieldPack_cbr_Repair";
		engineer = 1;
		detectSkill = 40;
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class O_soldier_exp_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldier_exp_F.jpg";
		_generalMacro = "O_soldier_exp_F";
		scope = 2;
		displayName = "$STR_B_Soldier_exp_F0";
		cost = 115000;
		camouflage = 1.6;
		backpack = "B_Carryall_ocamo_Exp";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
	};
	class O_helipilot_F: O_Soldier_02_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_pilot_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_pilot_p";
		nameSound = "veh_infantry_pilot_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_helipilot_F.jpg";
		_generalMacro = "O_helipilot_F";
		scope = 2;
		displayName = "$STR_B_helipilot_F0";
		linkedItems[] = {"H_PilotHelmetHeli_O","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_PilotHelmetHeli_O","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		uniformClass = "U_O_PilotCoveralls";
		weapons[] = {"SMG_02_ACO_F","Throw","Put"};
		respawnWeapons[] = {"SMG_02_ACO_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 160000;
		role = "Crewman";
		camouflage = 2.0;
	};
	class O_Soldier_A_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_A_F.jpg";
		_generalMacro = "O_Soldier_A_F";
		scope = 2;
		displayName = "$STR_B_Soldier_A_F0";
		cost = 110000;
		role = "Rifleman";
		camouflage = 1.5;
		backpack = "B_FieldPack_cbr_Ammo";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_AT_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_AT_F.jpg";
		_generalMacro = "O_Soldier_AT_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AT_F0";
		backpack = "B_FieldPack_cbr_AT";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		secondaryAmmoCoef = 0.5;
	};
	class O_Soldier_AA_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_AA_F.jpg";
		_generalMacro = "O_Soldier_AA_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AA_F0";
		backpack = "B_FieldPack_ocamo_AA";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		secondaryAmmoCoef = 0.5;
	};
	class O_engineer_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_engineer_F.jpg";
		_generalMacro = "O_engineer_F";
		scope = 2;
		displayName = "$STR_B_engineer_F0";
		cost = 220000;
		camouflage = 1.6;
		backpack = "B_Carryall_ocamo_Eng";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class O_crew_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_crew_F.jpg";
		_generalMacro = "O_crew_F";
		scope = 2;
		displayName = "$STR_B_crew_F0";
		uniformClass = "U_O_SpecopsUniform_ocamo";
		weapons[] = {"arifle_Katiba_C_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		camouflage = 1.6;
		linkedItems[] = {"V_BandollierB_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 90000;
		role = "Crewman";
	};
	class O_Pilot_F: O_helipilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Pilot_F.jpg";
		_generalMacro = "O_Pilot_F";
		displayName = "$STR_B_Pilot_F0";
		linkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShell","SmokeShellRed","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShell","SmokeShellRed","Chemlight_red"};
		backpack = "B_Parachute";
		cost = 160000;
		role = "Crewman";
	};
	class O_helicrew_F: O_helipilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_helicrew_F.jpg";
		_generalMacro = "O_helicrew_F";
		displayName = "$STR_B_helicrew_F0";
		weapons[] = {"arifle_Katiba_C_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_khk","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 80000;
		role = "Crewman";
	};
	class O_soldier_PG_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldier_PG_F.jpg";
		_generalMacro = "O_soldier_PG_F";
		scope = 2;
		displayName = "$STR_B_Soldier_PG_F0";
		backpack = "B_Parachute";
		cost = 120000;
		role = "SpecialOperative";
	};
	class O_Story_Colonel_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Story_Colonel_F.jpg";
		_generalMacro = "O_Story_Colonel_F";
		scope = 2;
		displayName = "$STR_A3_O_Story_Colonel_F0";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		identityTypes[] = {"O_Colonel"};
	};
	class O_Story_CEO_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Story_CEO_F.jpg";
		_generalMacro = "O_Story_CEO_F";
		scope = 2;
		displayName = "$STR_A3_O_Story_CEO_F0";
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
	};
	class O_soldier_UAV_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldier_UAV_F.jpg";
		_generalMacro = "O_soldier_UAV_F";
		scope = 2;
		displayName = "$STR_A3_B_SOLDIER_UAV_F0";
		linkedItems[] = {"V_TacVest_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
		backpack = "O_UAV_01_backpack_F";
		cost = 150000;
		role = "SpecialOperative";
		uavHacker = 1;
	};
	class O_Soldier_universal_F: O_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		_generalMacro = "O_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class O_Survivor_F: O_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Survivor_F.jpg";
		_generalMacro = "O_Survivor_F";
		displayName = "$STR_A3_CfgVehicles_b_survivor_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		items[] = {};
		respawnItems[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		role = "Unarmed";
	};
	class O_Soldier_unarmed_F: O_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_unarmed_F.jpg";
		_generalMacro = "O_Soldier_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
	};
	class O_Soldier_diver_base_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_diver_s"};
				speechPlural[] = {"veh_infantry_diver_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_diver_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_diver_p";
		nameSound = "veh_infantry_diver_s";
		_generalMacro = "O_Soldier_diver_base_F";
		scope = 0;
		selectionPersonality = "personality";
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_diver"};
		displayName = "$STR_B_Soldier_diver_base_F0";
		vehicleClass = "MenDiver";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		role = "SpecialOperative";
		uniformClass = "U_O_Wetsuit";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\diver_suit_iran_co.paa","\A3\Characters_F\Common\Data\diver_equip_iran_co.paa"};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 3;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 3;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Common\Data\diver_suit.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat"};
		};
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_iran_co.paa","\A3\characters_f\common\data\diver_equip_iran_co.paa","\A3\characters_f\data\visors_ca.paa"};
		linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellRed","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellRed","SmokeShellRed","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red"};
		primaryAmmoCoef = 0.4;
		secondaryAmmoCoef = 0.1;
		handgunAmmoCoef = 0.2;
	};
	class O_diver_F: O_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_diver_F.jpg";
		_generalMacro = "O_diver_F";
		scope = 2;
		displayName = "$STR_B_diver_F0";
		backpack = "O_Assault_Diver";
		model = "\A3\characters_F\Common\diver_slotable";
		modelSides[] = {0,3};
		cost = 70000;
		role = "SpecialOperative";
		camouflage = 2.0;
	};
	class O_diver_TL_F: O_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_diver_TL_F.jpg";
		_generalMacro = "O_diver_TL_F";
		scope = 2;
		displayName = "$STR_B_diver_TL_F0";
		weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManLeader";
		role = "SpecialOperative";
		cost = 430000;
		camouflage = 2.0;
	};
	class O_diver_exp_F: O_Soldier_diver_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_diver_exp_F.jpg";
		_generalMacro = "O_diver_exp_F";
		scope = 2;
		displayName = "$STR_B_diver_exp_F0";
		backpack = "B_FieldPack_blk_DiverExp";
		canDeactivateMines = 1;
		cost = 90000;
		camouflage = 2.0;
		icon = "iconManExplosive";
		role = "SpecialOperative";
	};
	class O_Soldier_sniper_base_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Soldier_sniper_base_F";
		scope = 0;
		displayName = "$STR_B_Soldier_sniper_base_F0";
		vehicleClass = "MenSniper";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		role = "Marksman";
		model = "A3\Characters_F\OPFOR\o_sniper.p3d";
		uniformClass = "U_O_GhillieSuit";
		linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
	};
	class O_spotter_F: O_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_spotter_F.jpg";
		_generalMacro = "O_spotter_F";
		scope = 2;
		displayName = "$STR_B_spotter_F0";
		cost = 250000;
		role = "Marksman";
		threat[] = {1,0.3,0.3};
		camouflage = 0.6;
		weapons[] = {"arifle_Katiba_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_sniper_F: O_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_sniper_F.jpg";
		_generalMacro = "O_sniper_F";
		scope = 2;
		displayName = "$STR_B_sniper_F0";
		weapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 350000;
		role = "Marksman";
		threat[] = {1,0.6,0.6};
		camouflage = 0.6;
	};
	class O_Soldier_recon_base: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";
		_generalMacro = "O_Soldier_recon_base";
		scope = 0;
		displayName = "$STR_B_Soldier_recon_base0";
		vehicleClass = "MenRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		role = "Rifleman";
		camouflage = 0.6;
		detectSkill = 30;
		linkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		uniformClass = "U_O_SpecopsUniform_ocamo";
	};
	class O_recon_F: O_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_recon_F.jpg";
		_generalMacro = "O_recon_F";
		scope = 2;
		displayName = "$STR_B_recon_F0";
		weapons[] = {"arifle_Katiba_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 100000;
		role = "Rifleman";
		threat[] = {1,0.3,0.3};
	};
	class O_recon_M_F: O_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_recon_M_F.jpg";
		_generalMacro = "O_recon_M_F";
		scope = 2;
		displayName = "$STR_B_recon_M_F0";
		weapons[] = {"srifle_DMR_01_DMS_snds_BI_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_DMR_01_DMS_snds_BI_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 140000;
		role = "Marksman";
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
	};
	class O_recon_LAT_F: O_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_recon_LAT_F.jpg";
		_generalMacro = "O_recon_LAT_F";
		scope = 2;
		displayName = "$STR_B_recon_LAT_F0";
		uniformClass = "U_O_SpecopsUniform_ocamo";
		backpack = "B_FieldPack_cbr_RPG_AT";
		weapons[] = {"arifle_Katiba_ACO_pointer_snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 150000;
		threat[] = {1,0.6,0.1};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
	};
	class O_recon_medic_F: O_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_recon_medic_F.jpg";
		_generalMacro = "O_recon_medic_F";
		scope = 2;
		displayName = "$STR_B_recon_medic_F0";
		attendant = 1;
		backpack = "B_FieldPack_ocamo_ReconMedic";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 290000;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
	};
	class O_recon_exp_F: O_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_recon_exp_F.jpg";
		_generalMacro = "O_recon_exp_F";
		scope = 2;
		displayName = "$STR_B_recon_exp_F0";
		backpack = "B_FieldPack_ocamo_ReconExp";
		weapons[] = {"arifle_Katiba_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		canDeactivateMines = 1;
		detectSkill = 80;
		cost = 105000;
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
	};
	class O_recon_JTAC_F: O_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_recon_JTAC_F.jpg";
		_generalMacro = "O_recon_JTAC_F";
		scope = 2;
		displayName = "$STR_B_recon_JTAC_F0";
		weapons[] = {"arifle_Katiba_GL_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"arifle_Katiba_GL_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		cost = 200000;
		role = "SpecialOperative";
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_recon_TL_F: O_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_recon_TL_F.jpg";
		_generalMacro = "O_recon_TL_F";
		scope = 2;
		displayName = "$STR_B_recon_TL_F0";
		weapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 440000;
		icon = "iconManLeader";
		role = "Grenadier";
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_support_base_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Soldier_support_base_F";
		scope = 0;
		camouflage = 1.5;
		displayName = "$STR_B_Soldier_support_base_F0";
		vehicleClass = "MenSupport";
		editorSubcategory = "EdSubcat_Personnel";
		role = "Assistant";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_Chestrig_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_AAR_F: O_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_AAR_F.jpg";
		_generalMacro = "O_Soldier_AAR_F";
		scope = 2;
		displayName = "$STR_O_SOLDIERU_AAR_F0";
		backpack = "B_Carryall_ocamo_AAR";
		cost = 95000;
		role = "Assistant";
		threat[] = {1,0.1,0.3};
	};
	class O_Soldier_AAT_F: O_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_AAT_F.jpg";
		_generalMacro = "O_Soldier_AAT_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AAT_F0";
		cost = 93000;
		role = "Assistant";
		backpack = "B_Carryall_cbr_AAT";
	};
	class O_Soldier_AAA_F: O_Soldier_AAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_AAA_F.jpg";
		_generalMacro = "O_Soldier_AAA_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AAA_F0";
		cost = 94000;
		role = "Assistant";
		backpack = "B_Carryall_ocamo_AAA";
	};
	class O_support_MG_F: O_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_support_MG_F.jpg";
		_generalMacro = "O_support_MG_F";
		scope = 2;
		displayName = "$STR_B_support_MG_F0";
		backpack = "O_HMG_01_weapon_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		threat[] = {1,0.3,0.3};
		cost = 460000;
		role = "Assistant";
	};
	class O_support_GMG_F: O_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_support_GMG_F.jpg";
		_generalMacro = "O_support_GMG_F";
		scope = 2;
		displayName = "$STR_B_support_GMG_F0";
		backpack = "O_GMG_01_weapon_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		threat[] = {1,0.6,0.1};
		cost = 470000;
		role = "Assistant";
	};
	class O_support_Mort_F: O_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_support_Mort_F.jpg";
		_generalMacro = "O_support_Mort_F";
		scope = 2;
		displayName = "$STR_B_support_Mort_F0";
		backpack = "O_Mortar_01_weapon_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		threat[] = {1,0.8,0.1};
		cost = 480000;
		role = "Assistant";
	};
	class O_support_AMG_F: O_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_support_AMG_F.jpg";
		_generalMacro = "O_support_AMG_F";
		scope = 2;
		displayName = "$STR_B_support_AMG_F0";
		backpack = "O_HMG_01_support_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		cost = 91000;
		role = "Assistant";
	};
	class O_support_AMort_F: O_Soldier_support_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_support_AMort_F.jpg";
		_generalMacro = "O_support_AMort_F";
		scope = 2;
		displayName = "$STR_B_support_AMort_F0";
		backpack = "O_Mortar_01_support_F";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		cost = 81000;
		role = "Assistant";
	};
	class O_Soldier_Urban_base: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Soldier_Urban_base";
		scope = 0;
		displayName = "$STR_O_Soldier_Urban_base0";
		vehicleClass = "MenUrban";
		editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
		role = "Rifleman";
		linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		uniformClass = "U_O_CombatUniform_oucamo";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_CO.paa"};
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_F.jpg";
		_generalMacro = "O_soldierU_F";
		scope = 2;
		displayName = "$STR_O_soldierU_F0";
		cost = 100000;
	};
	class O_soldierU_AR_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_AR_F.jpg";
		_generalMacro = "O_soldierU_AR_F";
		scope = 2;
		displayName = "$STR_O_soldierU_AR_F0";
		weapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 115000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		role = "MachineGunner";
	};
	class O_soldierU_AAR_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_AAR_F.jpg";
		_generalMacro = "O_soldierU_AAR_F";
		scope = 2;
		displayName = "$STR_O_soldierU_AAR_F0";
		backpack = "B_Carryall_oucamo_AAR";
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 95000;
		role = "Assistant";
	};
	class O_soldierU_LAT_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_LAT_F.jpg";
		_generalMacro = "O_soldierU_LAT_F";
		scope = 2;
		displayName = "$STR_O_soldierU_LAT_F0";
		backpack = "B_FieldPack_oucamo_LAT";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 180000;
		icon = "iconManAT";
		role = "MissileSpecialist";
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
	};
	class O_soldierU_AT_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_AT_F.jpg";
		_generalMacro = "O_soldierU_AT_F";
		scope = 2;
		displayName = "$STR_B_soldier_AT_F0";
		backpack = "B_FieldPack_oucamo_AT";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		secondaryAmmoCoef = 0.5;
	};
	class O_soldierU_AAT_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_AAT_F.jpg";
		_generalMacro = "O_soldierU_AAT_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AAT_F0";
		backpack = "B_Carryall_oucamo_AAT";
		cost = 93000;
		role = "Assistant";
		camouflage = 1.5;
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AA_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_AA_F.jpg";
		_generalMacro = "O_soldierU_AA_F";
		scope = 2;
		displayName = "$STR_B_soldier_AA_F0";
		backpack = "B_FieldPack_oucamo_AA";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
		secondaryAmmoCoef = 0.5;
	};
	class O_soldierU_AAA_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_AAA_F.jpg";
		_generalMacro = "O_soldierU_AAA_F";
		scope = 2;
		displayName = "$STR_B_Soldier_AAA_F0";
		backpack = "B_Carryall_oucamo_AAA";
		cost = 94000;
		role = "Assistant";
		camouflage = 1.5;
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_TL_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_TL_F.jpg";
		_generalMacro = "O_soldierU_TL_F";
		scope = 2;
		displayName = "$STR_O_soldierU_TL_F0";
		weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Grenadier";
		linkedItems[] = {"V_HarnessOGL_gry","H_HelmetLeaderO_oucamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_gry","H_HelmetLeaderO_oucamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_SoldierU_SL_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_SoldierU_SL_F.jpg";
		_generalMacro = "O_SoldierU_SL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_SL_F0";
		weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetLeaderO_oucamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetLeaderO_oucamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 500000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Rifleman";
	};
	class O_soldierU_medic_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_medic_F.jpg";
		_generalMacro = "O_soldierU_medic_F";
		scope = 2;
		displayName = "$STR_B_medic_F0";
		attendant = 1;
		backpack = "B_FieldPack_oucamo_Medic";
		weapons[] = {"arifle_Katiba_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 300000;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
	};
	class O_soldierU_repair_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_repair_F.jpg";
		_generalMacro = "O_soldierU_repair_F";
		scope = 2;
		displayName = "$STR_B_Soldier_repair_F0";
		cost = 220000;
		camouflage = 1.6;
		backpack = "B_FieldPack_oucamo_Repair";
		engineer = 1;
		detectSkill = 40;
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class O_soldierU_exp_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_exp_F.jpg";
		_generalMacro = "O_soldierU_exp_F";
		scope = 2;
		displayName = "$STR_B_Soldier_exp_F0";
		cost = 115000;
		camouflage = 1.6;
		backpack = "B_Carryall_oucamo_Exp";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
		linkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_engineer_U_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_engineer_U_F.jpg";
		_generalMacro = "O_engineer_U_F";
		scope = 2;
		displayName = "$STR_B_engineer_F0";
		cost = 220000;
		camouflage = 1.6;
		backpack = "B_Carryall_oucamo_Eng";
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class O_soldierU_M_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_M_F.jpg";
		_generalMacro = "O_soldierU_M_F";
		scope = 2;
		displayName = "$STR_B_Soldier_M_F0";
		weapons[] = {"srifle_DMR_01_DMS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_DMR_01_DMS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 150000;
		role = "Marksman";
		linkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_A_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_soldierU_A_F.jpg";
		_generalMacro = "O_soldierU_A_F";
		scope = 2;
		displayName = "$STR_B_Soldier_A_F0";
		cost = 105000;
		role = "Rifleman";
		camouflage = 1.5;
		backpack = "B_FieldPack_oucamo_Ammo";
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_SoldierU_GL_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_SoldierU_GL_F.jpg";
		_generalMacro = "O_SoldierU_GL_F";
		scope = 2;
		displayName = "$STR_B_Soldier_GL_F0";
		weapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		cost = 130000;
		role = "Grenadier";
		threat[] = {1,0.3,0.1};
		linkedItems[] = {"V_HarnessOGL_gry","H_HelmetLeaderO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_gry","H_HelmetLeaderO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_SoldierU_unarmed_F: O_soldierU_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_SoldierU_unarmed_F.jpg";
		_generalMacro = "O_SoldierU_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
	};
	class C_Driver_1_F: C_man_1
	{
		DLC = "Kart";
		overviewPicture = "\A3\Data_F_Kart\Images\watermarkInfo_page07_ca.paa";
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Driver_1_F.jpg";
		_generalMacro = "C_Driver_1_F";
		model = "\A3\Characters_F_Kart\Civil\C_Driver_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_01_co.paa"};
		modelSides[] = {3};
		uniformClass = "U_C_Driver_1";
		displayName = "$STR_A3_cfgVehicles_C_Driver_1_F0";
		linkedItems[] = {"H_RacingHelmet_1_F","ItemMap","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"H_RacingHelmet_1_F","ItemMap","ItemCompass","ItemWatch"};
		class EventHandlers{};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Kart\Civil\Data\c_driver_F.rvmat","A3\Characters_F_Kart\Civil\Data\c_driver_F_injury.rvmat","A3\Characters_F_Kart\Civil\Data\c_driver_F_injury.rvmat"};
		};
	};
	class C_Driver_2_F: C_Driver_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Driver_2_F.jpg";
		_generalMacro = "C_Driver_2_F";
		uniformClass = "U_C_Driver_2";
		displayName = "$STR_A3_cfgVehicles_C_Driver_2_F0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_02_co.paa"};
		linkedItems[] = {"H_RacingHelmet_2_F","ItemMap","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"H_RacingHelmet_2_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class C_Driver_3_F: C_Driver_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Driver_3_F.jpg";
		_generalMacro = "C_Driver_3_F";
		uniformClass = "U_C_Driver_3";
		displayName = "$STR_A3_cfgVehicles_C_Driver_3_F0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_03_co.paa"};
		linkedItems[] = {"H_RacingHelmet_3_F","ItemMap","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"H_RacingHelmet_3_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class C_Driver_4_F: C_Driver_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Driver_4_F.jpg";
		_generalMacro = "C_Driver_4_F";
		uniformClass = "U_C_Driver_4";
		displayName = "$STR_A3_cfgVehicles_C_Driver_4_F0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_04_co.paa"};
		linkedItems[] = {"H_RacingHelmet_4_F","ItemMap","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"H_RacingHelmet_4_F","ItemMap","ItemCompass","ItemWatch"};
	};
	class C_Driver_1_random_base_F: C_Driver_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Driver_1_random_base_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_cfgVehicles_C_Driver_1_random_base_F0";
	};
	class C_Driver_1_black_F: C_Driver_1_random_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Driver_1_black_F";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_black_co.paa"};
		uniformClass = "U_C_Driver_1_black";
	};
	class C_Driver_1_blue_F: C_Driver_1_random_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Driver_1_blue_F";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_blue_co.paa"};
		uniformClass = "U_C_Driver_1_blue";
	};
	class C_Driver_1_green_F: C_Driver_1_random_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Driver_1_green_F";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_green_co.paa"};
		uniformClass = "U_C_Driver_1_green";
	};
	class C_Driver_1_red_F: C_Driver_1_random_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Driver_1_red_F";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_red_co.paa"};
		uniformClass = "U_C_Driver_1_red";
	};
	class C_Driver_1_white_F: C_Driver_1_random_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Driver_1_white_F";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_white_co.paa"};
		uniformClass = "U_C_Driver_1_white";
	};
	class C_Driver_1_yellow_F: C_Driver_1_random_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Driver_1_yellow_F";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_yellow_co.paa"};
		uniformClass = "U_C_Driver_1_yellow";
	};
	class C_Driver_1_orange_F: C_Driver_1_random_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Driver_1_orange_F";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_driver_F_base_orange_co.paa"};
		uniformClass = "U_C_Driver_1_orange";
	};
	class C_Marshal_F: B_RangeMaster_F
	{
		DLC = "Kart";
		overviewPicture = "\A3\Data_F_Kart\Images\watermarkInfo_page10_ca.paa";
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_civilian_s"};
				speechPlural[] = {"veh_infantry_civilian_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_civilian_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_civilian_p";
		nameSound = "veh_infantry_civilian_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Marshal_F.jpg";
		_generalMacro = "C_Marshal_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_C_Marshal_F0";
		uniformClass = "U_Marshal";
		weapons[] = {"Throw","Put","hgun_Pistol_Signal_F"};
		respawnWeapons[] = {"Throw","Put","hgun_Pistol_Signal_F"};
		magazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_GreenSignal_F","6Rnd_RedSignal_F"};
		respawnMagazines[] = {"6Rnd_GreenSignal_F","6Rnd_RedSignal_F","6Rnd_GreenSignal_F","6Rnd_RedSignal_F"};
		role = "Unarmed";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Kart\Civil\Data\c_poloshirtpants_2_co.paa"};
		modelSides[] = {3};
		linkedItems[] = {"H_Cap_marshal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] = {"H_Cap_marshal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		side = 3;
		faction = "CIV_F";
	};
	class B_Soldier_VR_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_VR_F.jpg";
		_generalMacro = "B_Soldier_VR_F";
		identityTypes[] = {"LanguageENGVR_F","Head_NATO","NoGlasses"};
		genericNames = "VRMen";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_VR_F0";
		model = "\A3\Characters_F_Bootcamp\Common\VR_Soldier_F.p3d";
		modelSides[] = {"Twest",3};
		vehicleClass = "MenVR";
		editorSubcategory = "EdSubcat_Personnel_VR";
		icon = "iconManVirtual";
		role = "Unarmed";
		nakedUniform = "U_B_Soldier_VR";
		uniformClass = "";
		hiddenSelections[] = {"Camo_arm_left","Camo_arm_right","Camo_body","Camo_head","Camo_leg_left","Camo_leg_right"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"};
		hiddenSelectionsMaterials[] = {"\A3\Characters_F_Bootcamp\Common\Data\B_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\B_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\B_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\B_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\B_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\B_VR_Soldier_F.rvmat"};
		impactEffectsBlood = "";
		canBleed = 0;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				visual = "camo_head";
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "camo_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class hand_l: HitBody
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class hand_r: hand_l
			{
				armor = 1;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_right";
				minimalHit = 0.01;
			};
			class HitArms: hand_r
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class leg_l: HitHands
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class leg_r: leg_l
			{
				armor = 1;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_right";
				minimalHit = 0.01;
			};
			class HitLegs: leg_r
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class O_Soldier_VR_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_VR_F.jpg";
		_generalMacro = "O_Soldier_VR_F";
		identityTypes[] = {"LanguagePERVR_F","Head_TK","NoGlasses"};
		genericNames = "VRMen";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_O_Soldier_VR_F0";
		model = "\A3\Characters_F_Bootcamp\Common\VR_Soldier_F.p3d";
		modelSides[] = {0,3};
		vehicleClass = "MenVR";
		editorSubcategory = "EdSubcat_Personnel_VR";
		icon = "iconManVirtual";
		role = "Unarmed";
		nakedUniform = "U_O_Soldier_VR";
		uniformClass = "";
		hiddenSelections[] = {"Camo_arm_left","Camo_arm_right","Camo_body","Camo_head","Camo_leg_left","Camo_leg_right"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"};
		hiddenSelectionsMaterials[] = {"\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat"};
		impactEffectsBlood = "";
		canBleed = 0;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				visual = "camo_head";
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "camo_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class hand_l: HitBody
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class hand_r: hand_l
			{
				armor = 1;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_right";
				minimalHit = 0.01;
			};
			class HitArms: hand_r
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class leg_l: HitHands
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class leg_r: leg_l
			{
				armor = 1;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_right";
				minimalHit = 0.01;
			};
			class HitLegs: leg_r
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class I_Soldier_VR_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Soldier_VR_F.jpg";
		_generalMacro = "I_Soldier_VR_F";
		identityTypes[] = {"LanguageGREVR_F","Head_Greek","NoGlasses"};
		genericNames = "VRMen";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_I_Soldier_VR_F0";
		model = "\A3\Characters_F_Bootcamp\Common\VR_Soldier_F.p3d";
		modelSides[] = {2,3};
		vehicleClass = "MenVR";
		editorSubcategory = "EdSubcat_Personnel_VR";
		icon = "iconManVirtual";
		role = "Unarmed";
		nakedUniform = "U_I_Soldier_VR";
		uniformClass = "";
		hiddenSelections[] = {"Camo_arm_left","Camo_arm_right","Camo_body","Camo_head","Camo_leg_left","Camo_leg_right"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"};
		hiddenSelectionsMaterials[] = {"\A3\Characters_F_Bootcamp\Common\Data\I_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\I_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\I_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\I_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\I_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\I_VR_Soldier_F.rvmat"};
		impactEffectsBlood = "";
		canBleed = 0;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				visual = "camo_head";
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "camo_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class hand_l: HitBody
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class hand_r: hand_l
			{
				armor = 1;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_right";
				minimalHit = 0.01;
			};
			class HitArms: hand_r
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class leg_l: HitHands
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class leg_r: leg_l
			{
				armor = 1;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_right";
				minimalHit = 0.01;
			};
			class HitLegs: leg_r
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class C_Soldier_VR_F: C_man_1
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\C_Soldier_VR_F.jpg";
		_generalMacro = "C_Soldier_VR_F";
		identityTypes[] = {"LanguageGREVR_F","Head_Greek","NoGlasses"};
		genericNames = "VRMen";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_B_Soldier_VR_F0";
		model = "\A3\Characters_F_Bootcamp\Common\VR_Soldier_F.p3d";
		modelSides[] = {3};
		vehicleClass = "MenVR";
		editorSubcategory = "EdSubcat_Personnel_VR";
		icon = "iconManVirtual";
		role = "Unarmed";
		nakedUniform = "U_C_Soldier_VR";
		uniformClass = "";
		hiddenSelections[] = {"Camo_arm_left","Camo_arm_right","Camo_body","Camo_head","Camo_leg_left","Camo_leg_right"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)","#(argb,8,8,3)color(0.75,0.75,0.75,1,ca)"};
		hiddenSelectionsMaterials[] = {"\A3\Characters_F_Bootcamp\Common\Data\C_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\C_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\C_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\C_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\C_VR_Soldier_F.rvmat","\A3\Characters_F_Bootcamp\Common\Data\C_VR_Soldier_F.rvmat"};
		impactEffectsBlood = "";
		canBleed = 0;
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		class EventHandlers: EventHandlers
		{
			init = "";
		};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				visual = "camo_head";
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "camo_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class hand_l: HitBody
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class hand_r: hand_l
			{
				armor = 1;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_right";
				minimalHit = 0.01;
			};
			class HitArms: hand_r
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class leg_l: HitHands
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class leg_r: leg_l
			{
				armor = 1;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_right";
				minimalHit = 0.01;
			};
			class HitLegs: leg_r
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class B_Protagonist_VR_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Protagonist_VR_F.jpg";
		_generalMacro = "B_Protagonist_VR_F";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_B_Protagonist_VR_F0";
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d";
		modelSides[] = {"Twest",3};
		vehicleClass = "MenVR";
		editorSubcategory = "EdSubcat_Personnel_VR";
		role = "Unarmed";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_B_Protagonist_VR";
		hiddenSelections[] = {"camo_stripes","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.0,0.6,1.0,1,ca)","a3\characters_f_bootcamp\common\data\vrsuit_01_co.paa","a3\characters_f_bootcamp\common\data\vrsuit_02_co.paa","a3\characters_f_bootcamp\common\data\vrarmor_co.paa"};
		hiddenSelectionsMaterials[] = {"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"G_Goggles_VR"};
		respawnLinkedItems[] = {"G_Goggles_VR"};
		engineer = 1;
		canDeactivateMines = 1;
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class O_Protagonist_VR_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Protagonist_VR_F.jpg";
		_generalMacro = "O_Protagonist_VR_F";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_O_Protagonist_VR_F0";
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d";
		modelSides[] = {"Teast",3};
		vehicleClass = "MenVR";
		editorSubcategory = "EdSubcat_Personnel_VR";
		role = "Unarmed";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_O_Protagonist_VR";
		hiddenSelections[] = {"camo_stripes","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.8,0.2,0.2,1,ca)","a3\characters_f_bootcamp\common\data\vrsuit_01_co.paa","a3\characters_f_bootcamp\common\data\vrsuit_02_co.paa","a3\characters_f_bootcamp\common\data\vrarmor_co.paa"};
		hiddenSelectionsMaterials[] = {"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"G_Goggles_VR"};
		respawnLinkedItems[] = {"G_Goggles_VR"};
		engineer = 1;
		canDeactivateMines = 1;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				visual = "camo_head";
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "camo_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class hand_l: HitBody
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class hand_r: hand_l
			{
				armor = 1;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "Camo_arm_right";
				minimalHit = 0.01;
			};
			class HitArms: hand_r
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class leg_l: HitHands
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_left";
				minimalHit = 0.01;
				depends = "0";
			};
			class leg_r: leg_l
			{
				armor = 1;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "Camo_leg_right";
				minimalHit = 0.01;
			};
			class HitLegs: leg_r
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class I_Protagonist_VR_F: I_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Protagonist_VR_F.jpg";
		_generalMacro = "I_Protagonist_VR_F";
		scope = 2;
		displayName = "$STR_A3_CfgVehicles_I_Protagonist_VR_F0";
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d";
		modelSides[] = {2,3};
		vehicleClass = "MenVR";
		editorSubcategory = "EdSubcat_Personnel_VR";
		role = "Unarmed";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_I_Protagonist_VR";
		hiddenSelections[] = {"camo_stripes","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.2,0.8,0.2,1,ca)","a3\characters_f_bootcamp\common\data\vrsuit_01_co.paa","a3\characters_f_bootcamp\common\data\vrsuit_02_co.paa","a3\characters_f_bootcamp\common\data\vrarmor_co.paa"};
		hiddenSelectionsMaterials[] = {"a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"G_Goggles_VR"};
		respawnLinkedItems[] = {"G_Goggles_VR"};
		engineer = 1;
		canDeactivateMines = 1;
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class B_ghillie_base_F: B_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		_generalMacro = "B_ghillie_base_F";
		displayName = "$STR_A3_cfgVehicles_B_ghillie_base_F0";
		uniformClass = "U_B_FullGhillie_lsh";
		model = "\A3\Characters_F_Mark\BLUFOR\b_fullghillie_f.p3d";
		hiddenSelections[] = {"camo","camo3","camo4"};
		DLC = "Mark";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Mark\Common\Data\ghillie_coverall.rvmat","A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat","A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat"};
		};
		weapons[] = {"srifle_LRR_camo_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_camo_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		hideProxySelections[] = {"ghillie_hide"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		role = "Marksman";
		cost = 350000;
		threat[] = {1,0.3,0.3};
		camouflage = 0.4;
		armor = 2;
		armorStructural = 0.37;
		explosionShielding = 0.037;
	};
	class B_ghillie_lsh_F: B_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_ghillie_lsh_F.jpg";
		_generalMacro = "B_ghillie_lsh_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_B_ghillie_lsh_F0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\ghillie_coverall_nato_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"};
		identityTypes[] = {"LanguageENG_F","Head_NATO_camo_lush","G_NATO_sniper"};
	};
	class B_ghillie_sard_F: B_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_ghillie_sard_F.jpg";
		_generalMacro = "B_ghillie_sard_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_B_ghillie_sard_F0";
		uniformClass = "U_B_FullGhillie_sard";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\ghillie_coverall_nato_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_co.paa"};
		identityTypes[] = {"LanguageENG_F","Head_NATO_camo_semiarid","G_NATO_sniper"};
	};
	class B_ghillie_ard_F: B_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_ghillie_ard_F.jpg";
		_generalMacro = "B_ghillie_ard_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_B_ghillie_ard_F0";
		uniformClass = "U_B_FullGhillie_ard";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\ghillie_coverall_nato_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_ard_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_ard_co.paa"};
		identityTypes[] = {"LanguageENG_F","Head_NATO_camo_arid","G_NATO_sniper"};
	};
	class O_ghillie_base_F: O_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		_generalMacro = "O_ghillie_base_F";
		displayName = "$STR_A3_cfgVehicles_O_ghillie_base_F0";
		uniformClass = "U_O_FullGhillie_lsh";
		model = "\A3\Characters_F_Mark\OPFOR\o_fullghillie_f.p3d";
		hiddenSelections[] = {"camo","camo3","camo4"};
		DLC = "Mark";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_opfor.rvmat","A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat","A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat"};
		};
		weapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_camo_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		hideProxySelections[] = {"ghillie_hide"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		role = "Marksman";
		cost = 350000;
		threat[] = {1,0.6,0.6};
		camouflage = 0.4;
		armor = 2;
		armorStructural = 0.33;
		explosionShielding = 0.033;
	};
	class O_ghillie_lsh_F: O_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_ghillie_lsh_F.jpg";
		_generalMacro = "O_ghillie_lsh_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_O_ghillie_lsh_F0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_csat_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"};
		identityTypes[] = {"LanguagePER_F","Head_TK_camo_lush","G_IRAN_default"};
	};
	class O_ghillie_sard_F: O_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_ghillie_sard_F.jpg";
		_generalMacro = "O_ghillie_sard_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_O_ghillie_sard_F0";
		uniformClass = "U_O_FullGhillie_sard";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_csat_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_co.paa"};
		identityTypes[] = {"LanguagePER_F","Head_TK_camo_semiarid","G_IRAN_default"};
	};
	class O_ghillie_ard_F: O_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_ghillie_ard_F.jpg";
		_generalMacro = "O_ghillie_ard_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_O_ghillie_ard_F0";
		uniformClass = "U_O_FullGhillie_ard";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_csat_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_ard_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_ard_co.paa"};
		identityTypes[] = {"LanguagePER_F","Head_TK_camo_arid","G_IRAN_default"};
	};
	class I_ghillie_base_F: I_Soldier_sniper_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_ghillie_base_F";
		displayName = "$STR_A3_cfgVehicles_I_ghillie_base_F0";
		uniformClass = "U_I_FullGhillie_lsh";
		model = "\A3\Characters_F_Mark\INDEP\i_fullghillie_f.p3d";
		hiddenSelections[] = {"camo","camo3","camo4"};
		DLC = "Mark";
		overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page08_ca.paa";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Mark\Common\Data\ghillie_coverall.rvmat","A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_opfor_injury.rvmat","A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_opfor_injury.rvmat"};
		};
		weapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		hideProxySelections[] = {"ghillie_hide"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		role = "Marksman";
		cost = 350000;
		threat[] = {1,0.3,0.3};
		camouflage = 0.4;
		armor = 2;
		armorStructural = 0.37;
		explosionShielding = 0.037;
	};
	class I_ghillie_lsh_F: I_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_ghillie_lsh_F.jpg";
		_generalMacro = "I_ghillie_lsh_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_I_ghillie_lsh_F0";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\ghillie_coverall_aaf_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_lush","G_NATO_sniper"};
	};
	class I_ghillie_sard_F: I_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_ghillie_sard_F.jpg";
		_generalMacro = "I_ghillie_sard_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_I_ghillie_sard_F0";
		uniformClass = "U_I_FullGhillie_sard";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\ghillie_coverall_aaf_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_semiarid","G_NATO_sniper"};
	};
	class I_ghillie_ard_F: I_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_ghillie_ard_F.jpg";
		_generalMacro = "I_ghillie_ard_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_I_ghillie_ard_F0";
		uniformClass = "U_I_FullGhillie_ard";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\INDEP\Data\ghillie_coverall_aaf_co.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_ard_ca.paa","\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_ard_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_arid","G_NATO_sniper"};
	};
	class B_Sharpshooter_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Sharpshooter_F.jpg";
		_generalMacro = "B_Sharpshooter_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_B_Sharpshooter_F0";
		DLC = "Mark";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		role = "Marksman";
		weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_Recon_Sharpshooter_F: B_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Recon_Sharpshooter_F.jpg";
		_generalMacro = "B_Recon_Sharpshooter_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_B_Recon_Sharpshooter_F0";
		DLC = "Mark";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		role = "Marksman";
		weapons[] = {"srifle_DMR_02_sniper_AMS_LP_S_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_DMR_02_sniper_AMS_LP_S_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
		linkedItems[] = {"V_Chestrig_rgr","H_Watchcap_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","H_Watchcap_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_CTRG_Sharphooter_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_CTRG_Sharphooter_F.jpg";
		_generalMacro = "B_CTRG_Sharphooter_F";
		scope = 2;
		vehicleClass = "MenStory";
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "$STR_A3_cfgVehicles_B_CTRG_Sharphooter_F0";
		DLC = "Mark";
		role = "Marksman";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "U_B_CTRG_1";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\clothing1_mtp_co.paa"};
		weapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_DMR_02_camo_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
		linkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetB_light_snakeskin","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetB_light_snakeskin","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_HeavyGunner_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_HeavyGunner_F.jpg";
		_generalMacro = "B_HeavyGunner_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_B_HeavyGunner_F0";
		DLC = "Mark";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		icon = "iconManMG";
		role = "MachineGunner";
		weapons[] = {"MMG_02_sand_RCO_LP_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"MMG_02_sand_RCO_LP_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class O_Sharpshooter_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Sharpshooter_F.jpg";
		_generalMacro = "O_Sharpshooter_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_O_Sharpshooter_F0";
		DLC = "Mark";
		model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
		role = "Marksman";
		weapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Urban_Sharpshooter_F.jpg";
		_generalMacro = "O_Urban_Sharpshooter_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_O_Urban_Sharpshooter_F0";
		DLC = "Mark";
		role = "Marksman";
		weapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Pathfinder_F: O_Soldier_recon_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Pathfinder_F.jpg";
		_generalMacro = "O_Pathfinder_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_O_Pathfinder_F0";
		DLC = "Mark";
		role = "Marksman";
		weapons[] = {"srifle_DMR_04_NS_LP_F","hgun_Rook40_snds_F","Throw","Put","laserdesignator_02"};
		respawnWeapons[] = {"srifle_DMR_04_NS_LP_F","hgun_Rook40_snds_F","Throw","Put","laserdesignator_02"};
		magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
		respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_HeavyGunner_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_HeavyGunner_F.jpg";
		_generalMacro = "O_HeavyGunner_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_O_HeavyGunner_F0";
		DLC = "Mark";
		overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page09_ca.paa";
		model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
		icon = "iconManMG";
		role = "MachineGunner";
		weapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Urban_HeavyGunner_F.jpg";
		_generalMacro = "O_Urban_HeavyGunner_F";
		scope = 2;
		displayName = "$STR_A3_cfgVehicles_O_HeavyGunner_F0";
		DLC = "Mark";
		icon = "iconManMG";
		role = "MachineGunner";
		weapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class I_G_Sharpshooter_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Sharpshooter_F.jpg";
		_generalMacro = "I_G_Sharpshooter_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_cfgVehicles_B_Sharpshooter_F0";
		weapons[] = {"srifle_DMR_06_camo_khs_F","Throw","Put"};
		respawnWeapons[] = {"srifle_DMR_06_camo_khs_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		cost = 150000;
		role = "Marksman";
		linkedItems[] = {"V_BandollierB_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 60;
		allowedHeadgear[] = {"H_Booniehat_khk_hs","H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl"};
		allowedHeadgearB[] = {"H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk_hs","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_surfer","H_Bandanna_surfer_blk","H_Bandanna_surfer_grn","H_Bandanna_camo","H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_oli_hs","H_Cap_tan","H_Cap_blk_Raven","H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_tan","H_ShemagOpen_khk"};
		uniformClass = "U_IG_leader";
		DLC = "Mark";
	};
	class B_G_Sharpshooter_F: I_G_Sharpshooter_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Sharpshooter_F.jpg";
		_generalMacro = "B_G_Sharpshooter_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		modelSides[] = {1,3};
		uniformClass = "U_BG_leader";
	};
	class O_G_Sharpshooter_F: I_G_Sharpshooter_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_G_Sharpshooter_F.jpg";
		_generalMacro = "O_G_Sharpshooter_F";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_G_F";
		modelSides[] = {0,3};
		uniformClass = "U_OG_leader";
	};
	class Headgear_Base_F;
	class Item_Base_F;
	class Vest_Base_F;
	class Weapon_Base_F;
	class Headgear_H_Beret_Colonel: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Beret_Colonel0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Beret_Colonel
			{
				name = "H_Beret_Colonel";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_press: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_Cap_press0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_press
			{
				name = "H_Cap_press";
				count = 1;
			};
		};
	};
	class Headgear_H_Booniehat_oli: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_BOONIEHAT_OLI0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Booniehat_oli
			{
				name = "H_Booniehat_oli";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_surfer_blk: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_BANDANNA_SURFER_BLK0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_surfer_blk
			{
				name = "H_Bandanna_surfer_blk";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_surfer_grn: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_BANDANNA_SURFER_GRN0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_surfer_grn
			{
				name = "H_Bandanna_surfer_grn";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_blu: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_BANDANNA_BLU0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_blu
			{
				name = "H_Bandanna_blu";
				count = 1;
			};
		};
	};
	class Headgear_H_Bandanna_sand: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_BANDANNA_SAND0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Bandanna_sand
			{
				name = "H_Bandanna_sand";
				count = 1;
			};
		};
	};
	class Headgear_H_Watchcap_cbr: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_WATCHCAP_CBR0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Watchcap_cbr
			{
				name = "H_Watchcap_cbr";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_police: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_CAP_POLICE0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_police
			{
				name = "H_Cap_police";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_surfer: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_CAP_SURFER0_BOOT";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_surfer
			{
				name = "H_Cap_surfer";
				count = 1;
			};
		};
	};
	class Headgear_H_Cap_usblack: Headgear_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_H_CAP_USBLACK0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Hats";
		vehicleClass = "ItemsHeadgear";
		model = "\A3\Weapons_F\DummyCap.p3d";
		class TransportItems
		{
			class H_Cap_usblack
			{
				name = "H_Cap_usblack";
				count = 1;
			};
		};
	};
	class Item_U_C_Scientist: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Scientist_clothes";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Scientist
			{
				name = "U_C_Scientist";
				count = 1;
			};
		};
	};
	class Item_U_C_Journalist: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_Journalist_clothes";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Journalist
			{
				name = "U_C_Journalist";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerrilla_6_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_RAIMENT";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerrilla_6_1
			{
				name = "U_IG_Guerrilla_6_1";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerrilla_6_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_GUERILLA_RAIMENT";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerrilla_6_1
			{
				name = "U_BG_Guerrilla_6_1";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerrilla_6_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_RAIMENT";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerrilla_6_1
			{
				name = "U_OG_Guerrilla_6_1";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla1_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_GARMENT";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla1_1
			{
				name = "U_IG_Guerilla1_1";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla1_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_GUERILLA_GARMENT";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla1_1
			{
				name = "U_BG_Guerilla1_1";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla1_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_GARMENT";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla1_1
			{
				name = "U_OG_Guerilla1_1";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla2_3: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla2_3
			{
				name = "U_IG_Guerilla2_3";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla2_3: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla2_3
			{
				name = "U_BG_Guerilla2_3";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla2_3: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla2_3
			{
				name = "U_OG_Guerilla2_3";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla3_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_SMOCKS";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla3_1
			{
				name = "U_IG_Guerilla3_1";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla3_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_GUERILLA_SMOCKS";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla3_1
			{
				name = "U_BG_Guerilla3_1";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla3_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_SMOCKS";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla3_1
			{
				name = "U_OG_Guerilla3_1";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla2_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN_DARK";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla2_1
			{
				name = "U_IG_Guerilla2_1";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla2_1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN_DARK";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla2_1
			{
				name = "U_BG_Guerilla2_1";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla2_1: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PLAIN_DARK";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla2_1
			{
				name = "U_OG_Guerilla2_1";
				count = 1;
			};
		};
	};
	class Item_U_IG_Guerilla2_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PATTERN";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_Guerilla2_2
			{
				name = "U_IG_Guerilla2_2";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla2_2: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PATTERN";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla2_2
			{
				name = "U_BG_Guerilla2_2";
				count = 1;
			};
		};
	};
	class Item_U_OG_Guerilla2_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_OUTFIT_PATTERN";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_Guerilla2_2
			{
				name = "U_OG_Guerilla2_2";
				count = 1;
			};
		};
	};
	class Item_U_IG_leader: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_UNIFORM";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_IG_leader
			{
				name = "U_IG_leader";
				count = 1;
			};
		};
	};
	class Item_U_BG_leader: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_GUERILLA_UNIFORM";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_leader
			{
				name = "U_BG_leader";
				count = 1;
			};
		};
	};
	class Item_U_OG_leader: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_UNIFORM";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_OG_leader
			{
				name = "U_OG_leader";
				count = 1;
			};
		};
	};
	class Item_U_BG_Guerilla3_2: Item_Base_F
	{
		scope = 1;
		scopeCurator = 0;
		displayName = "$STR_A3_GUERILLA_SMOCKS0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_BG_Guerilla3_2
			{
				name = "U_BG_Guerilla3_2";
				count = 1;
			};
		};
	};
	class Vest_V_Press_F: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_V_Press_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Vests";
		vehicleClass = "ItemsVests";
		class TransportItems
		{
			class V_Press_F
			{
				name = "V_Press_F";
				count = 1;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyFlag
	{
		model = "\A3\Characters_F\Proxies\flag";
		selectionFabric = "cloth";
	};
	class ProxyFlag_soldier: ProxyFlag
	{
		model = "\A3\characters_f\flag_soldier";
		selectionFabric = "cloth";
	};
	class ProxyFlag_Vojak: ProxyFlag
	{
		model = "\A3\characters_f\flag_soldier";
		selectionFabric = "cloth";
	};
	class ProxyWeapon{};
	class ProxyM16A2: ProxyWeapon{};
	class ProxyCommander;
	class ProxyCommanderOut: ProxyCommander{};
	class ProxyDriver;
	class ProxyDriverOut: ProxyDriver{};
	class ProxyGunner;
	class ProxyGunner01: ProxyGunner{};
	class ProxyGunner02: ProxyGunner{};
	class ProxyGunnerOut: ProxyGunner{};
	class ProxyCargo;
	class ProxyCargo01: ProxyCargo{};
	class ProxyCargo02: ProxyCargo{};
	class ProxyCargo03: ProxyCargo{};
	class ProxyCargo04: ProxyCargo{};
	class ProxyBasicSittingCommander: ProxyCommander{};
	class ProxyBasicSittingDriver: ProxyDriver{};
	class ProxyBasicSittingGunner: ProxyGunner{};
	class ProxyBasicSittingCargo: ProxyCargo{};
	class ProxyBasicStandingCommander: ProxyCommander{};
	class ProxyBasicStandingDriver: ProxyDriver{};
	class ProxyBasicStandingGunner: ProxyGunner{};
	class ProxyBasicStandingCargo: ProxyCargo{};
};
class CfgSkeletonParameters
{
	class OFP2_ManSkeleton
	{
		pivotsModel = "A3\anims_f\data\skeleton\SkeletonPivots.p3d";
		ragdoll = "Soldier";
		weaponBone = "";
	};
};
class WeaponCloudsGun;
class WeaponCloudsMGun: WeaponCloudsGun
{
	cloudletGrowUp = 0.05;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.1;
	cloudletDuration = 0.05;
	cloudletAnimPeriod = 1.0;
	cloudletSize = 1.0;
	cloudletAlpha = 0.3;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 100;
	cloudletShape = "cloudletClouds";
	cloudletColor[] = {1,1,1,0};
	timeToLive = 0;
	interval = 0.02;
	size = 0.3;
	sourceSize = 0.02;
	initT = 0;
	deltaT = 0;
	class Table
	{
		class T0
		{
			maxT = 0;
			color[] = {1,1,1,0};
		};
	};
};
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
