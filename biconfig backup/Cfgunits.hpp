////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Fri Aug 11 18:13:47 2017 : 'file' last modified on Fri Apr 21 13:47:49 2017
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

//Class characters_f_exp : config.bin{
class CfgPatches
{
	class A3_Characters_F_Exp
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Apex - Characters and Clothing";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {"B_CTRG_Miller_F","B_CTRG_Soldier_2_F","B_CTRG_Soldier_3_F","B_CTRG_Soldier_AR_tna_F","B_CTRG_Soldier_Exp_tna_F","B_CTRG_Soldier_F","B_CTRG_Soldier_JTAC_tna_F","B_CTRG_Soldier_LAT_tna_F","B_CTRG_Soldier_M_tna_F","B_CTRG_Soldier_Medic_tna_F","B_CTRG_Soldier_TL_tna_F","B_CTRG_Soldier_tna_F","B_CTRG_Soldier_universal_F","B_CTRG_Soldier_urb_1_F","B_CTRG_Soldier_urb_2_F","B_CTRG_Soldier_urb_3_F","B_GEN_Commander_F","B_GEN_Soldier_F","B_GEN_Soldier_universal_F","B_T_Crew_F","B_T_Diver_Exp_F","B_T_Diver_F","B_T_Diver_TL_F","B_T_Engineer_F","B_T_ghillie_tna_F","B_T_Helicrew_F","B_T_Helipilot_F","B_T_Medic_F","B_T_Officer_F","B_T_Pilot_F","B_T_Recon_Exp_F","B_T_Recon_F","B_T_Recon_JTAC_F","B_T_Recon_LAT_F","B_T_Recon_M_F","B_T_Recon_Medic_F","B_T_Recon_TL_F","B_T_Sniper_F","B_T_Soldier_A_F","B_T_Soldier_AA_F","B_T_Soldier_AAA_F","B_T_Soldier_AAR_F","B_T_Soldier_AAT_F","B_T_Soldier_AR_F","B_T_Soldier_AT_F","B_T_Soldier_Exp_F","B_T_Soldier_F","B_T_Soldier_GL_F","B_T_Soldier_LAT_F","B_T_soldier_M_F","B_T_Soldier_PG_F","B_T_Soldier_Repair_F","B_T_Soldier_SL_F","B_T_Soldier_TL_F","B_T_Soldier_UAV_F","B_T_Soldier_unarmed_F","B_T_Soldier_universal_F","B_T_Spotter_F","B_T_Support_AMG_F","B_T_Support_AMort_F","B_T_Support_GMG_F","B_T_Support_MG_F","B_T_Support_Mort_F","I_C_Helipilot_F","I_C_Pilot_F","I_C_Soldier_Bandit_1_F","I_C_Soldier_Bandit_2_F","I_C_Soldier_Bandit_3_F","I_C_Soldier_Bandit_4_F","I_C_Soldier_Bandit_5_F","I_C_Soldier_Bandit_6_F","I_C_Soldier_Bandit_7_F","I_C_Soldier_Bandit_8_F","I_C_Soldier_base_unarmed_F","I_C_Soldier_Camo_F","I_C_Soldier_Para_1_F","I_C_Soldier_Para_2_F","I_C_Soldier_Para_3_F","I_C_Soldier_Para_4_F","I_C_Soldier_Para_5_F","I_C_Soldier_Para_6_F","I_C_Soldier_Para_7_F","I_C_Soldier_Para_8_F","I_C_Soldier_universal_F","Item_U_B_CTRG_Soldier_2_F","Item_U_B_CTRG_Soldier_3_F","Item_U_B_CTRG_Soldier_F","Item_U_B_CTRG_Soldier_urb_1_F","Item_U_B_CTRG_Soldier_urb_2_F","Item_U_B_CTRG_Soldier_urb_3_F","Item_U_B_GEN_Commander_F","Item_U_B_GEN_Soldier_F","Item_U_B_T_FullGhillie_tna_F","Item_U_B_T_Sniper_F","Item_U_B_T_Soldier_AR_F","Item_U_B_T_Soldier_F","Item_U_B_T_Soldier_SL_F","Item_U_C_Man_casual_1_F","Item_U_C_Man_casual_2_F","Item_U_C_Man_casual_3_F","Item_U_C_Man_casual_4_F","Item_U_C_Man_casual_5_F","Item_U_C_Man_casual_6_F","Item_U_C_man_sport_1_F","Item_U_C_man_sport_2_F","Item_U_C_man_sport_3_F","Item_U_I_C_Soldier_Bandit_1_F","Item_U_I_C_Soldier_Bandit_2_F","Item_U_I_C_Soldier_Bandit_3_F","Item_U_I_C_Soldier_Bandit_4_F","Item_U_I_C_Soldier_Bandit_5_F","Item_U_I_C_Soldier_Camo_F","Item_U_I_C_Soldier_Para_1_F","Item_U_I_C_Soldier_Para_2_F","Item_U_I_C_Soldier_Para_3_F","Item_U_I_C_Soldier_Para_4_F","Item_U_I_C_Soldier_Para_5_F","Item_U_O_T_FullGhillie_tna_F","Item_U_O_T_Officer_F","Item_U_O_T_Sniper_F","Item_U_O_T_Soldier_F","Item_U_O_V_Soldier_Viper_F","Item_U_O_V_Soldier_Viper_hex_F","O_T_Crew_F","O_T_Diver_Exp_F","O_T_Diver_F","O_T_Diver_TL_F","O_T_Engineer_F","O_T_ghillie_tna_F","O_T_Helicrew_F","O_T_Helipilot_F","O_T_Medic_F","O_T_Officer_F","O_T_Pilot_F","O_T_Recon_Exp_F","O_T_Recon_F","O_T_Recon_JTAC_F","O_T_Recon_LAT_F","O_T_Recon_M_F","O_T_Recon_Medic_F","O_T_Recon_TL_F","O_T_Sniper_F","O_T_Soldier_A_F","O_T_Soldier_AA_F","O_T_Soldier_AAA_F","O_T_Soldier_AAR_F","O_T_Soldier_AAT_F","O_T_Soldier_AR_F","O_T_Soldier_AT_F","O_T_Soldier_Exp_F","O_T_Soldier_F","O_T_Soldier_GL_F","O_T_Soldier_LAT_F","O_T_Soldier_M_F","O_T_Soldier_PG_F","O_T_Soldier_Repair_F","O_T_Soldier_SL_F","O_T_Soldier_TL_F","O_T_Soldier_UAV_F","O_T_Soldier_unarmed_F","O_T_Soldier_universal_F","O_T_Spotter_F","O_T_Support_AMG_F","O_T_Support_AMort_F","O_T_Support_GMG_F","O_T_Support_MG_F","O_T_Support_Mort_F","O_V_Soldier_Exp_ghex_F","O_V_Soldier_Exp_hex_F","O_V_Soldier_ghex_F","O_V_Soldier_hex_F","O_V_Soldier_JTAC_ghex_F","O_V_Soldier_JTAC_hex_F","O_V_Soldier_LAT_ghex_F","O_V_Soldier_LAT_hex_F","O_V_Soldier_M_ghex_F","O_V_Soldier_M_hex_F","O_V_Soldier_Medic_ghex_F","O_V_Soldier_Medic_hex_F","O_V_Soldier_TL_ghex_F","O_V_Soldier_TL_hex_F","O_V_Soldier_Viper_F","O_V_Soldier_Viper_hex_F"};
		weapons[] = {"U_B_CTRG_Soldier_2_F","U_B_CTRG_Soldier_3_F","U_B_CTRG_Soldier_F","U_B_CTRG_Soldier_urb_1_F","U_B_CTRG_Soldier_urb_2_F","U_B_CTRG_Soldier_urb_3_F","U_B_GEN_Commander_F","U_B_GEN_Soldier_F","U_B_T_FullGhillie_tna_F","U_B_T_Sniper_F","U_B_T_Soldier_AR_F","U_B_T_Soldier_F","U_B_T_Soldier_SL_F","U_C_Man_casual_1_F","U_C_Man_casual_2_F","U_C_Man_casual_3_F","U_C_Man_casual_4_F","U_C_Man_casual_5_F","U_C_Man_casual_6_F","U_C_man_sport_1_F","U_C_man_sport_2_F","U_C_man_sport_3_F","U_I_C_Soldier_Bandit_1_F","U_I_C_Soldier_Bandit_2_F","U_I_C_Soldier_Bandit_3_F","U_I_C_Soldier_Bandit_4_F","U_I_C_Soldier_Bandit_5_F","U_I_C_Soldier_Camo_F","U_I_C_Soldier_Para_1_F","U_I_C_Soldier_Para_2_F","U_I_C_Soldier_Para_3_F","U_I_C_Soldier_Para_4_F","U_I_C_Soldier_Para_5_F","U_O_T_FullGhillie_tna_F","U_O_T_Officer_F","U_O_T_Sniper_F","U_O_T_Soldier_F","U_O_V_Soldier_Viper_F","U_O_V_Soldier_Viper_hex_F"};
	};
};
class CfgHeads
{
	class Default_A3;
	class TanoanHead_A3: Default_A3
	{
		model = "\A3\Characters_F_Exp\Heads\m_tanoan_01.p3d";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Exp\Heads\Data\m_tanoan_01.rvmat","A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat","A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat"};
		};
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class TanoanHead_A3_01: Default
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_CfgFaces_Man_A3_TanoanHead_A3_010";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_01_co.paa";
			head = "TanoanHead_A3";
			identityTypes[] = {"Head_Tanoan"};
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_01_injury.rvmat";
			textureHL = "\A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_02: TanoanHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_CfgFaces_Man_A3_TanoanHead_A3_020";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_02_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_02_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_03: TanoanHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_CfgFaces_Man_A3_TanoanHead_A3_030";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_03_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_03_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_04: TanoanHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_CfgFaces_Man_A3_TanoanHead_A3_040";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_04_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_04_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_05: TanoanHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_CfgFaces_Man_A3_TanoanHead_A3_050";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_05_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_05_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_06: TanoanHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_CfgFaces_Man_A3_TanoanHead_A3_060";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_06_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_06_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_07: TanoanHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_CfgFaces_Man_A3_TanoanHead_A3_070";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_07_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_07_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanHead_A3_08: TanoanHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_CfgFaces_Man_A3_TanoanHead_A3_080";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_08_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_08_injury.rvmat";
			DLC = "Expansion";
		};
		class TanoanBossHead: TanoanHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayName = "$STR_A3_I_C_Soldier_Camo_F0";
			identityTypes[] = {"Syndikat_Boss_F"};
			texture = "\A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_co.paa";
			material = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_tanoan_boss_injury.rvmat";
			disabled = 1;
			DLC = "Expansion";
		};
		class AsianHead_A3_01;
		class AsianHead_A3_04: AsianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_AsianHead_A3_040";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_04_co.paa";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_04.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_04_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_04_injury.rvmat";
			DLC = "Expansion";
		};
		class AsianHead_A3_05: AsianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_AsianHead_A3_050";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_05_co.paa";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_05.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_05_injury.rvmat";
			DLC = "Expansion";
		};
		class AsianHead_A3_06: AsianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_AsianHead_A3_060";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_06_co.paa";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_06.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_06_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_06_injury.rvmat";
			DLC = "Expansion";
		};
		class AsianHead_A3_07: AsianHead_A3_01
		{
			author = "$STR_A3_Bohemia_Interactive";
			displayname = "$STR_A3_CfgFaces_Man_A3_AsianHead_A3_070";
			texture = "\A3\Characters_F_Exp\Heads\Data\m_Asian_07_co.paa";
			material = "\A3\Characters_F_Exp\Heads\Data\m_Asian_07.rvmat";
			materialWounded1 = "A3\Characters_F_Exp\Heads\Data\m_Asian_07_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Exp\Heads\Data\m_Asian_07_injury.rvmat";
			DLC = "Expansion";
		};
	};
};
class CfgIdentities
{
	class Miller_Exp_F
	{
		name = "$STR_A3_CFGIDENTITIES_MILLER0";
		nameSound = "Miller";
		face = "Miller";
		glasses = "G_Tactical_Black";
		speaker = "Male03ENGB";
		pitch = 1;
	};
	class Syndikat_Boss_F
	{
		name = "$STR_A3_I_C_Soldier_Camo_F0";
		nameSound = "Warlock";
		face = "TanoanBossHead";
		glasses = "";
		speaker = "Male02FRE";
		pitch = 1;
	};
};
class CfgVehicles
{
	class SoldierGB;
	class I_G_Soldier_base_F: SoldierGB
	{
		class EventHandlers;
	};
	class I_C_Soldier_base_F: I_G_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_C_Soldier_base_F";
		faction = "IND_C_F";
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		displayName = "";
		genericNames = "TanoanMen";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
		accuracy = 2;
		threat[] = {1,0.1,0.1};
		camouflage = 1.6;
		cost = 50000;
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\civil\data\c_cloth1.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat","A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1.rvmat","A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_injury.rvmat","A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_injury.rvmat","a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_1.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat","a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_2.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_injury.rvmat","a3\characters_f_beta\indep\data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","a3\characters_f_exp\syndikat\data\u_i_c_soldier_para_3_f_1.rvmat","A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat","a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1.rvmat","a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1_injury.rvmat","a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1_injury.rvmat","a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2.rvmat","a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2_injury.rvmat","a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2_injury.rvmat","a3\characters_f\civil\data\c_poloshirt.rvmat","a3\characters_f\civil\data\c_poloshirt_injury.rvmat","a3\characters_f\civil\data\c_poloshirt_injury.rvmat","a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_2_f_1.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_injury.rvmat"};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		backpack = "";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		headgearList[] = {"",2,"H_FakeHeadgear_Syndikat_F",5,"H_Bandanna_gry",1,"H_Bandanna_blu",1,"H_Bandanna_cbr",1,"H_Bandanna_khk",1,"H_Bandanna_sgg",1,"H_Bandanna_sand",1,"H_Bandanna_surfer_blk",1,"H_Bandanna_camo",1,"H_Booniehat_khk",1,"H_Booniehat_oli",1,"H_Booniehat_tan",1,"H_Cap_blk_Syndikat_F",1,"H_Cap_grn_Syndikat_F",1,"H_Cap_oli_Syndikat_F",1,"H_Cap_tan_Syndikat_F",1};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		DLC = "Expansion";
	};
	class I_C_Soldier_Para_1_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Para_1_F.jpg";
		_generalMacro = "I_C_Soldier_Para_1_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_I_C_Soldier_Para_1_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_1_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		role = "Rifleman";
		cost = 60000;
		weapons[] = {"arifle_AK12_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_Chestrig_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Para_2_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Para_2_F.jpg";
		_generalMacro = "I_C_Soldier_Para_2_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_I_C_Soldier_Para_2_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_2_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_2_F";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_co.paa"};
		role = "Rifleman";
		icon = "iconManLeader";
		cost = 90000;
		weapons[] = {"arifle_AK12_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Para_3_F: I_C_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Para_3_F.jpg";
		_generalMacro = "I_C_Soldier_Para_3_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_I_C_Soldier_Para_3_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_3_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_3_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		role = "CombatLifeSaver";
		icon = "iconManMedic";
		picture = "pictureHeal";
		cost = 80000;
		backpack = "B_Kitbag_rgr_Para_3_F";
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		attendant = 1;
	};
	class I_C_Soldier_Para_4_F: I_C_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Para_4_F.jpg";
		_generalMacro = "I_C_Soldier_Para_4_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_I_C_Soldier_Para_4_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_4_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		role = "MachineGunner";
		icon = "iconManMG";
		cost = 70000;
		threat[] = {1,0.1,0.3};
		weapons[] = {"LMG_03_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_03_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		linkedItems[] = {"V_Chestrig_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Para_5_F: I_C_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Para_5_F.jpg";
		_generalMacro = "I_C_Soldier_Para_5_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_I_C_Soldier_Para_5_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_5_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_5_F";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_5_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_5_F_2_co.paa"};
		role = "MissileSpecialist";
		icon = "iconManAT";
		cost = 80000;
		threat[] = {1,0.7,0.3};
		backpack = "B_Kitbag_cbr_Para_5_F";
		weapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Para_6_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Para_6_F.jpg";
		_generalMacro = "I_C_Soldier_Para_6_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_I_C_Soldier_Para_6_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_1_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		role = "Grenadier";
		cost = 70000;
		threat[] = {1,0.3,0.1};
		weapons[] = {"arifle_AK12_GL_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12_GL_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		linkedItems[] = {"V_Chestrig_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Para_7_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Para_7_F.jpg";
		_generalMacro = "I_C_Soldier_Para_7_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_I_C_Soldier_Para_7_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_4_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_2_co.paa"};
		role = "Rifleman";
		cost = 50000;
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_Chestrig_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Para_8_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Para_8_F.jpg";
		_generalMacro = "I_C_Soldier_Para_8_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_I_C_Soldier_Para_8_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_2_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_2_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_co.paa"};
		role = "Sapper";
		icon = "iconManExplosive";
		picture = "pictureExplosive";
		cost = 60000;
		threat[] = {1,0.5,0.1};
		backpack = "B_Kitbag_rgr_Para_8_F";
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Bandit_1_F: I_C_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_1_F.jpg";
		_generalMacro = "I_C_Soldier_Bandit_1_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_A3_I_C_Soldier_Bandit_1_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_1_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_1_F_1_co.paa"};
		role = "CombatLifeSaver";
		icon = "iconManMedic";
		picture = "pictureHeal";
		cost = 70000;
		camouflage = 2;
		backpack = "B_FieldPack_khk_Bandit_1_F";
		weapons[] = {"arifle_AKS_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		attendant = 1;
	};
	class I_C_Soldier_Bandit_2_F: I_C_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_2_F.jpg";
		_generalMacro = "I_C_Soldier_Bandit_2_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_A3_I_C_Soldier_Bandit_2_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_2_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_2_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_2_co.paa"};
		role = "MissileSpecialist";
		icon = "iconManAT";
		cost = 70000;
		threat[] = {1,0.7,0.3};
		camouflage = 2;
		backpack = "B_Kitbag_cbr_Bandit_2_F";
		weapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Bandit_3_F: I_C_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_3_F.jpg";
		_generalMacro = "I_C_Soldier_Bandit_3_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_A3_I_C_Soldier_Bandit_3_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_3_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_3_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_3_F_1_co.paa","\a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1_co.paa"};
		role = "MachineGunner";
		icon = "iconManMG";
		cost = 60000;
		threat[] = {1,0.1,0.3};
		camouflage = 2;
		backpack = "B_FieldPack_cb_Bandit_3_F";
		weapons[] = {"LMG_03_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_03_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Bandit_4_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_4_F.jpg";
		_generalMacro = "I_C_Soldier_Bandit_4_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_A3_I_C_Soldier_Bandit_4_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_4_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_4_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_co.paa"};
		role = "Rifleman";
		icon = "iconManLeader";
		cost = 80000;
		camouflage = 2;
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};
		linkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Bandit_5_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_5_F.jpg";
		_generalMacro = "I_C_Soldier_Bandit_5_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_A3_I_C_Soldier_Bandit_5_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_5_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_5_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_co.paa"};
		role = "Rifleman";
		cost = 50000;
		camouflage = 2;
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};
		linkedItems[] = {"V_Chestrig_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Bandit_6_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_6_F.jpg";
		_generalMacro = "I_C_Soldier_Bandit_6_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_A3_I_C_Soldier_Bandit_6_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_3_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_3_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_3_F_1_co.paa","\a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1_co.paa"};
		role = "Grenadier";
		cost = 60000;
		threat[] = {1,0.3,0.1};
		camouflage = 2;
		weapons[] = {"arifle_AK12_GL_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12_GL_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		linkedItems[] = {"V_Chestrig_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Bandit_7_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_7_F.jpg";
		_generalMacro = "I_C_Soldier_Bandit_7_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_A3_I_C_Soldier_Bandit_7_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_1_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_1_F";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_1_F_1_co.paa"};
		role = "Rifleman";
		cost = 40000;
		camouflage = 2;
		weapons[] = {"arifle_AKS_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","MiniGrenade","MiniGrenade"};
		linkedItems[] = {"V_BandollierB_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Bandit_8_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Bandit_8_F.jpg";
		_generalMacro = "I_C_Soldier_Bandit_8_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_A3_I_C_Soldier_Bandit_8_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_5_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_5_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_co.paa"};
		role = "Sapper";
		picture = "pictureExplosive";
		icon = "iconManExplosive";
		cost = 50000;
		threat[] = {1,0.5,0.1};
		camouflage = 2;
		backpack = "B_FieldPack_blk_Bandit_8_F";
		weapons[] = {"arifle_AKS_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","MiniGrenade","MiniGrenade"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_C_Soldier_Camo_F: I_C_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_Camo_F.jpg";
		_generalMacro = "I_C_Soldier_Camo_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "$STR_A3_I_C_Soldier_Camo_F0";
		identityTypes[] = {"Syndikat_Boss_F"};
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Camo_F.p3d";
		uniformClass = "U_I_C_Soldier_Camo_F";
		cost = 100000;
		threat[] = {1,0.1,0.1};
		camouflage = 1.6;
		weapons[] = {"hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Camo_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Camo_F_2_co.paa"};
		DLC = "Expansion";
		role = "Rifleman";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setIdentity ""Syndikat_Boss_F""";
		};
	};
	class I_C_Pilot_F: I_C_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Pilot_F.jpg";
		_generalMacro = "I_C_Pilot_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Bandits";
		displayName = "$STR_B_Pilot_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Bandit_3_F.p3d";
		uniformClass = "U_I_C_Soldier_Bandit_3_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_3_F_1_co.paa","\a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1_co.paa"};
		role = "Crewman";
		cost = 50000;
		threat[] = {1,0.1,0.1};
		camouflage = 2;
		weapons[] = {"arifle_AKS_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {"H_Cap_marshal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_marshal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		DLC = "Expansion";
		class EventHandlers: EventHandlers
		{
			init = "";
		};
	};
	class I_C_Helipilot_F: I_C_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Helipilot_F.jpg";
		_generalMacro = "I_C_Helipilot_F";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_Paramilitary";
		displayName = "$STR_B_Helipilot_F0";
		model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";
		uniformClass = "U_I_C_Soldier_Para_1_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa","\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
		role = "Crewman";
		cost = 50000;
		threat[] = {1,0.1,0.1};
		camouflage = 1.6;
		weapons[] = {"arifle_AKS_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {"H_Cap_headphones","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_headphones","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		DLC = "Expansion";
		class EventHandlers: EventHandlers
		{
			init = "";
		};
	};
	class I_C_Soldier_universal_F: I_C_Soldier_Para_1_F
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
		_generalMacro = "I_C_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class I_C_Soldier_base_unarmed_F: I_C_Soldier_Para_1_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\I_C_Soldier_base_unarmed_F.jpg";
		_generalMacro = "I_C_Soldier_base_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_Chestrig_oli","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
	};
	class B_Soldier_base_F;
	class B_Soldier_F: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class B_Soldier_A_F;
	class B_T_Soldier_A_F: B_Soldier_A_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_A_F.jpg";
		_generalMacro = "B_T_Soldier_A_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_Carryall_oli_BTAmmo_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_AAR_F;
	class B_T_Soldier_AAR_F: B_soldier_AAR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_AAR_F.jpg";
		_generalMacro = "B_T_Soldier_AAR_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_support_AMG_F;
	class B_T_Support_AMG_F: B_support_AMG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Support_AMG_F.jpg";
		_generalMacro = "B_T_Support_AMG_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_HMG_01_support_grn_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_support_AMort_F;
	class B_T_Support_AMort_F: B_support_AMort_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Support_AMort_F.jpg";
		_generalMacro = "B_T_Support_AMort_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_Mortar_01_support_grn_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_AAA_F;
	class B_T_Soldier_AAA_F: B_soldier_AAA_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_AAA_F.jpg";
		_generalMacro = "B_T_Soldier_AAA_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_Carryall_oli_BTAAA_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_AAT_F;
	class B_T_Soldier_AAT_F: B_soldier_AAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_AAT_F.jpg";
		_generalMacro = "B_T_Soldier_AAT_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_Carryall_oli_BTAAT_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_AR_F;
	class B_T_Soldier_AR_F: B_soldier_AR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_AR_F.jpg";
		_generalMacro = "B_T_Soldier_AR_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		weapons[] = {"arifle_MX_SW_khk_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_SW_khk_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier2_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier2_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelections[] = {"camo2","camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_medic_F;
	class B_T_Medic_F: B_medic_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Medic_F.jpg";
		_generalMacro = "B_T_Medic_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_AssaultPack_tna_BTMedic_F";
		weapons[] = {"arifle_MX_khk_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrierSpec_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrierSpec_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_crew_F;
	class B_T_Crew_F: B_crew_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Crew_F.jpg";
		_generalMacro = "B_T_Crew_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_SL_F";
		weapons[] = {"arifle_MXC_khk_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetCrew_B","V_BandollierB_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_B","V_BandollierB_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_SL_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_engineer_F;
	class B_T_Engineer_F: B_engineer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Engineer_F.jpg";
		_generalMacro = "B_T_Engineer_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_SL_F";
		backpack = "B_Kitbag_rgr_BTEng_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_SL_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_exp_F;
	class B_T_Soldier_Exp_F: B_soldier_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_Exp_F.jpg";
		_generalMacro = "B_T_Soldier_Exp_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_Kitbag_rgr_BTExp_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Enh_tna_F","V_PlateCarrierGL_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Enh_tna_F","V_PlateCarrierGL_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_Soldier_GL_F;
	class B_T_Soldier_GL_F: B_Soldier_GL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_GL_F.jpg";
		_generalMacro = "B_T_Soldier_GL_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MX_GL_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_GL_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Enh_tna_F","V_PlateCarrierGL_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Enh_tna_F","V_PlateCarrierGL_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_support_GMG_F;
	class B_T_Support_GMG_F: B_support_GMG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Support_GMG_F.jpg";
		_generalMacro = "B_T_Support_GMG_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_GMG_01_Weapon_grn_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_support_MG_F;
	class B_T_Support_MG_F: B_support_MG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Support_MG_F.jpg";
		_generalMacro = "B_T_Support_MG_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_HMG_01_Weapon_grn_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_support_Mort_F;
	class B_T_Support_Mort_F: B_support_Mort_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Support_Mort_F.jpg";
		_generalMacro = "B_T_Support_Mort_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_Mortar_01_Weapon_grn_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_helicrew_F;
	class B_T_Helicrew_F: B_helicrew_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Helicrew_F.jpg";
		_generalMacro = "B_T_Helicrew_F";
		faction = "BLU_T_F";
		DLC = "Expansion";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_Helipilot_F;
	class B_T_Helipilot_F: B_Helipilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Helipilot_F.jpg";
		_generalMacro = "B_T_Helipilot_F";
		faction = "BLU_T_F";
		DLC = "Expansion";
	};
	class B_soldier_M_F;
	class B_T_soldier_M_F: B_soldier_M_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_soldier_M_F.jpg";
		_generalMacro = "B_T_soldier_M_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_AA_F;
	class B_T_Soldier_AA_F: B_soldier_AA_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_AA_F.jpg";
		_generalMacro = "B_T_Soldier_AA_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_Kitbag_rgr_BTAA_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_AT_F;
	class B_T_Soldier_AT_F: B_soldier_AT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_AT_F.jpg";
		_generalMacro = "B_T_Soldier_AT_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_Kitbag_rgr_BTAT_F";
		weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_officer_F;
	class B_T_Officer_F: B_officer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Officer_F.jpg";
		_generalMacro = "B_T_Officer_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MXC_khk_ACO_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_ACO_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		linkedItems[] = {"H_MilCap_tna_F","V_BandollierB_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_MilCap_tna_F","V_BandollierB_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_PG_F;
	class B_T_Soldier_PG_F: B_soldier_PG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_PG_F.jpg";
		_generalMacro = "B_T_Soldier_PG_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_Parachute";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrierSpec_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrierSpec_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_Pilot_F;
	class B_T_Pilot_F: B_Pilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Pilot_F.jpg";
		_generalMacro = "B_T_Pilot_F";
		faction = "BLU_T_F";
		DLC = "Expansion";
	};
	class B_soldier_repair_F;
	class B_T_Soldier_Repair_F: B_soldier_repair_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_Repair_F.jpg";
		_generalMacro = "B_T_Soldier_Repair_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_AssaultPack_tna_BTRepair_F";
		weapons[] = {"arifle_MX_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_T_Soldier_F: B_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_F.jpg";
		_generalMacro = "B_T_Soldier_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_LAT_F;
	class B_T_Soldier_LAT_F: B_soldier_LAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_LAT_F.jpg";
		_generalMacro = "B_T_Soldier_LAT_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_AssaultPack_rgr_BTLAT_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier2_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier2_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_Soldier_SL_F;
	class B_T_Soldier_SL_F: B_Soldier_SL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_SL_F.jpg";
		_generalMacro = "B_T_Soldier_SL_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MX_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		linkedItems[] = {"H_HelmetB_Enh_tna_F","V_PlateCarrierGL_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Enh_tna_F","V_PlateCarrierGL_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_Soldier_TL_F;
	class B_T_Soldier_TL_F: B_Soldier_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_TL_F.jpg";
		_generalMacro = "B_T_Soldier_TL_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MX_GL_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_GL_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		linkedItems[] = {"H_HelmetB_Enh_tna_F","V_PlateCarrierGL_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Enh_tna_F","V_PlateCarrierGL_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_soldier_UAV_F;
	class B_T_Soldier_UAV_F: B_soldier_UAV_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_UAV_F.jpg";
		_generalMacro = "B_T_Soldier_UAV_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrierSpec_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F","B_UavTerminal"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrierSpec_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F","B_UavTerminal"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_diver_F;
	class B_T_Diver_F: B_diver_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Diver_F.jpg";
		_generalMacro = "B_T_Diver_F";
		faction = "BLU_T_F";
		DLC = "Expansion";
	};
	class B_diver_exp_F;
	class B_T_Diver_Exp_F: B_diver_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Diver_Exp_F.jpg";
		_generalMacro = "B_T_Diver_Exp_F";
		faction = "BLU_T_F";
		DLC = "Expansion";
	};
	class B_diver_TL_F;
	class B_T_Diver_TL_F: B_diver_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Diver_TL_F.jpg";
		_generalMacro = "B_T_Diver_TL_F";
		faction = "BLU_T_F";
		DLC = "Expansion";
	};
	class B_recon_exp_F;
	class B_T_Recon_Exp_F: B_recon_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Recon_Exp_F.jpg";
		_generalMacro = "B_T_Recon_Exp_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_Kitbag_rgr_BTReconExp_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_Booniehat_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_Booniehat_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_recon_JTAC_F;
	class B_T_Recon_JTAC_F: B_recon_JTAC_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Recon_JTAC_F.jpg";
		_generalMacro = "B_T_Recon_JTAC_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MX_GL_khk_Holo_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_GL_khk_Holo_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put","Laserdesignator"};
		linkedItems[] = {"H_Watchcap_camo","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_Watchcap_camo","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_recon_M_F;
	class B_T_Recon_M_F: B_recon_M_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Recon_M_F.jpg";
		_generalMacro = "B_T_Recon_M_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		weapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_Booniehat_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_Watchcap_camo","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_recon_medic_F;
	class B_T_Recon_Medic_F: B_recon_medic_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Recon_Medic_F.jpg";
		_generalMacro = "B_T_Recon_Medic_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_rgr_BTReconMedic";
		weapons[] = {"arifle_MXC_khk_ACO_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_Light_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_recon_F;
	class B_T_Recon_F: B_recon_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Recon_F.jpg";
		_generalMacro = "B_T_Recon_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_SL_F";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		linkedItems[] = {"H_Watchcap_camo","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_Watchcap_camo","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_SL_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_recon_LAT_F;
	class B_T_Recon_LAT_F: B_recon_LAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Recon_LAT_F.jpg";
		_generalMacro = "B_T_Recon_LAT_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_rgr_ReconLAT";
		weapons[] = {"arifle_MX_khk_ACO_Pointer_Snds_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_Snds_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_HelmetB_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_02_co.paa"};
		DLC = "Expansion";
	};
	class B_recon_TL_F;
	class B_T_Recon_TL_F: B_recon_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Recon_TL_F.jpg";
		_generalMacro = "B_T_Recon_TL_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_SL_F";
		weapons[] = {"arifle_MX_khk_Hamr_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_khk_Hamr_Pointer_Snds_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_MilCap_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"H_MilCap_tna_F","V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_SL_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_sniper_F;
	class B_T_Sniper_F: B_sniper_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Sniper_F.jpg";
		_generalMacro = "B_T_Sniper_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Sniper_F";
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_sniper_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_spotter_F;
	class B_T_Spotter_F: B_spotter_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Spotter_F.jpg";
		_generalMacro = "B_T_Spotter_F";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Sniper_F";
		weapons[] = {"arifle_MX_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_MX_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Laserdesignator"};
		linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		hiddenSelections[] = {"camo","camo3"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_sniper_F_tna_co.paa"};
		DLC = "Expansion";
	};
	class B_ghillie_base_F;
	class B_T_ghillie_tna_F: B_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_ghillie_tna_F.jpg";
		_generalMacro = "B_T_ghillie_tna_F";
		scope = 2;
		faction = "BLU_T_F";
		displayName = "$STR_A3_O_T_GHILLIE_TNA_F0";
		uniformClass = "U_B_T_FullGhillie_tna_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\ghillie_coverall_nato_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_tna_ca.paa","\A3\Characters_F_Exp\BLUFOR\Data\ghillie_threads_5LOD_tna_co.paa"};
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		DLC = "Expansion";
	};
	class B_T_Soldier_universal_F: B_T_Soldier_F
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
		_generalMacro = "B_T_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class B_T_Soldier_unarmed_F: B_T_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_unarmed_F.jpg";
		_generalMacro = "B_T_Soldier_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
	};
	class O_Soldier_A_F;
	class O_T_Soldier_A_F: O_Soldier_A_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_A_F.jpg";
		_generalMacro = "O_T_Soldier_A_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTAmmo_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_AAR_F;
	class O_T_Soldier_AAR_F: O_Soldier_AAR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AAR_F.jpg";
		_generalMacro = "O_T_Soldier_AAR_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTAAR_AAR_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_support_AMG_F;
	class O_T_Support_AMG_F: O_support_AMG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_AMG_F.jpg";
		_generalMacro = "O_T_Support_AMG_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_HMG_01_support_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_support_AMort_F;
	class O_T_Support_AMort_F: O_support_AMort_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_AMort_F.jpg";
		_generalMacro = "O_T_Support_AMort_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_Mortar_01_support_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_AAA_F;
	class O_T_Soldier_AAA_F: O_Soldier_AAA_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AAA_F.jpg";
		_generalMacro = "O_T_Soldier_AAA_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTAAA_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_AAT_F;
	class O_T_Soldier_AAT_F: O_Soldier_AAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AAT_F.jpg";
		_generalMacro = "O_T_Soldier_AAT_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTAAT_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_AR_F;
	class O_T_Soldier_AR_F: O_Soldier_AR_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AR_F.jpg";
		_generalMacro = "O_T_Soldier_AR_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTARS_blk_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTARS_blk_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_medic_F;
	class O_T_Medic_F: O_medic_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Medic_F.jpg";
		_generalMacro = "O_T_Medic_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTMedic_F";
		weapons[] = {"arifle_CTAR_blk_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_crew_F;
	class O_T_Crew_F: O_crew_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Crew_F.jpg";
		_generalMacro = "O_T_Crew_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_BandollierB_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_BandollierB_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_engineer_F;
	class O_T_Engineer_F: O_engineer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Engineer_F.jpg";
		_generalMacro = "O_T_Engineer_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTEng_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_soldier_exp_F;
	class O_T_Soldier_Exp_F: O_soldier_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_Exp_F.jpg";
		_generalMacro = "O_T_Soldier_Exp_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTExp_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_GL_F;
	class O_T_Soldier_GL_F: O_Soldier_GL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_GL_F.jpg";
		_generalMacro = "O_T_Soldier_GL_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTAR_GL_blk_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_GL_blk_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_support_GMG_F;
	class O_T_Support_GMG_F: O_support_GMG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_GMG_F.jpg";
		_generalMacro = "O_T_Support_GMG_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_GMG_01_weapon_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_support_MG_F;
	class O_T_Support_MG_F: O_support_MG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_MG_F.jpg";
		_generalMacro = "O_T_Support_MG_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_HMG_01_weapon_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_support_Mort_F;
	class O_T_Support_Mort_F: O_support_Mort_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Support_Mort_F.jpg";
		_generalMacro = "O_T_Support_Mort_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_Mortar_01_weapon_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_helicrew_F;
	class O_T_Helicrew_F: O_helicrew_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Helicrew_F.jpg";
		_generalMacro = "O_T_Helicrew_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		weapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_CrewHelmetHeli_O","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_CrewHelmetHeli_O","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_helipilot_F;
	class O_T_Helipilot_F: O_helipilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Helipilot_F.jpg";
		_generalMacro = "O_T_Helipilot_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faction = "OPF_T_F";
		weapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"SMG_02_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_CrewHelmetHeli_O","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_CrewHelmetHeli_O","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_soldier_M_F;
	class O_T_Soldier_M_F: O_soldier_M_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_M_F.jpg";
		_generalMacro = "O_T_Soldier_M_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"srifle_DMR_07_blk_DMS_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"srifle_DMR_07_blk_DMS_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_AA_F;
	class O_T_Soldier_AA_F: O_Soldier_AA_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AA_F.jpg";
		_generalMacro = "O_T_Soldier_AA_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTAA_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Titan_ghex_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Titan_ghex_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_AT_F;
	class O_T_Soldier_AT_F: O_Soldier_AT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_AT_F.jpg";
		_generalMacro = "O_T_Soldier_AT_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTAT_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Titan_short_ghex_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Titan_short_ghex_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_officer_F;
	class O_T_Officer_F: O_officer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Officer_F.jpg";
		_generalMacro = "O_T_Officer_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Officer_F";
		weapons[] = {"arifle_CTAR_blk_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_Beret_blk","V_BandollierB_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\officer_tna_CO.paa"};
		DLC = "Expansion";
	};
	class O_soldier_PG_F;
	class O_T_Soldier_PG_F: O_soldier_PG_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_PG_F.jpg";
		_generalMacro = "O_T_Soldier_PG_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Parachute";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Pilot_F;
	class O_T_Pilot_F: O_Pilot_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Pilot_F.jpg";
		_generalMacro = "O_T_Pilot_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		DLC = "Expansion";
	};
	class O_soldier_repair_F;
	class O_T_Soldier_Repair_F: O_soldier_repair_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_Repair_F.jpg";
		_generalMacro = "O_T_Soldier_Repair_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTRepair_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_F;
	class O_T_Soldier_F: O_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_F.jpg";
		_generalMacro = "O_T_Soldier_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_LAT_F;
	class O_T_Soldier_LAT_F: O_Soldier_LAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_LAT_F.jpg";
		_generalMacro = "O_T_Soldier_LAT_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTLAT_F";
		weapons[] = {"arifle_CTAR_blk_ACO_F","launch_RPG32_ghex_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_F","launch_RPG32_ghex_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_SL_F;
	class O_T_Soldier_SL_F: O_Soldier_SL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_SL_F.jpg";
		_generalMacro = "O_T_Soldier_SL_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_Soldier_TL_F;
	class O_T_Soldier_TL_F: O_Soldier_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_TL_F.jpg";
		_generalMacro = "O_T_Soldier_TL_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTAR_GL_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_CTAR_GL_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_soldier_UAV_F;
	class O_T_Soldier_UAV_F: O_soldier_UAV_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_UAV_F.jpg";
		_generalMacro = "O_T_Soldier_UAV_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "O_UAV_01_backpack_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_diver_F;
	class O_T_Diver_F: O_diver_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Diver_F.jpg";
		_generalMacro = "O_T_Diver_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faction = "OPF_T_F";
		DLC = "Expansion";
	};
	class O_diver_exp_F;
	class O_T_Diver_Exp_F: O_diver_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Diver_Exp_F.jpg";
		_generalMacro = "O_T_Diver_Exp_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faction = "OPF_T_F";
		DLC = "Expansion";
	};
	class O_diver_TL_F;
	class O_T_Diver_TL_F: O_diver_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Diver_TL_F.jpg";
		_generalMacro = "O_T_Diver_TL_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faction = "OPF_T_F";
		DLC = "Expansion";
	};
	class O_recon_exp_F;
	class O_T_Recon_Exp_F: O_recon_exp_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_Exp_F.jpg";
		_generalMacro = "O_T_Recon_Exp_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_Carryall_ghex_OTReconExp_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_recon_JTAC_F;
	class O_T_Recon_JTAC_F: O_recon_JTAC_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_JTAC_F.jpg";
		_generalMacro = "O_T_Recon_JTAC_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTAR_GL_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"arifle_CTAR_GL_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_recon_M_F;
	class O_T_Recon_M_F: O_recon_M_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_M_F.jpg";
		_generalMacro = "O_T_Recon_M_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"srifle_DMR_07_blk_DMS_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_DMR_07_blk_DMS_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_recon_medic_F;
	class O_T_Recon_Medic_F: O_recon_medic_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_Medic_F.jpg";
		_generalMacro = "O_T_Recon_Medic_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTReconMedic_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_recon_F;
	class O_T_Recon_F: O_recon_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_F.jpg";
		_generalMacro = "O_T_Recon_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_recon_LAT_F;
	class O_T_Recon_LAT_F: O_recon_LAT_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_LAT_F.jpg";
		_generalMacro = "O_T_Recon_LAT_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		backpack = "B_FieldPack_ghex_OTRPG_AT_F";
		weapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_recon_TL_F;
	class O_T_Recon_TL_F: O_recon_TL_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Recon_TL_F.jpg";
		_generalMacro = "O_T_Recon_TL_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		DLC = "Expansion";
	};
	class O_sniper_F;
	class O_T_Sniper_F: O_sniper_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Sniper_F.jpg";
		_generalMacro = "O_T_Sniper_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Sniper_F";
		weapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};
		DLC = "Expansion";
	};
	class O_spotter_F;
	class O_T_Spotter_F: O_spotter_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Spotter_F.jpg";
		_generalMacro = "O_T_Spotter_F";
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		uniformClass = "U_O_T_Sniper_F";
		weapons[] = {"arifle_CTAR_blk_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"arifle_CTAR_blk_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\ghillie_tna_CO.paa"};
		DLC = "Expansion";
	};
	class O_ghillie_base_F;
	class O_T_ghillie_tna_F: O_ghillie_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_ghillie_tna_F.jpg";
		_generalMacro = "O_T_ghillie_tna_F";
		scope = 2;
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		displayName = "$STR_A3_O_T_ghillie_tna_F0";
		uniformClass = "U_O_T_FullGhillie_tna_F";
		weapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ghillie_coverall_csat_co.paa","\A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_tna_ca.paa","\A3\Characters_F_Exp\OPFOR\Data\ghillie_threads_5LOD_tna_co.paa"};
		DLC = "Expansion";
	};
	class O_Soldier_base_F;
	class O_V_Soldier_Viper_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_V_Soldier_Viper_F";
		faction = "OPF_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		vehicleClass = "MenRecon";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		scope = 1;
		displayName = "TBD: Viper Operative (Green Hex)";
		model = "\A3\Characters_F_Exp\OPFOR\o_viper.p3d";
		uniformClass = "U_O_V_Soldier_Viper_F";
		role = "Rifleman";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_viper_co.paa"};
		weapons[] = {"arifle_ARX_Viper_F","Throw","Put"};
		respawnWeaponsp[] = {"arifle_ARX_Viper_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		DLC = "Expansion";
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
				armor = 6;
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
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 8;
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
				armor = 8;
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
				armor = 8;
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
				armor = 8;
				material = -1;
				name = "arms";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitHands: HitArms
			{
				armor = 8;
				material = -1;
				name = "hands";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 8;
				material = -1;
				name = "legs";
				passThrough = 0.7;
				radius = 0.14;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
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
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class O_V_Soldier_Viper_hex_F: O_V_Soldier_Viper_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_V_Soldier_Viper_hex_F";
		faction = "OPF_T_F";
		displayName = "TBD: Viper Operative (Hex)";
		uniformClass = "U_O_V_Soldier_Viper_hex_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hex_co.paa"};
		weapons[] = {"arifle_ARX_Viper_hex_F","Throw","Put"};
		respawnWeaponsp[] = {"arifle_ARX_Viper_hex_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		DLC = "Expansion";
	};
	class O_T_Soldier_universal_F: O_T_Soldier_F
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
		_generalMacro = "O_T_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class O_T_Soldier_unarmed_F: O_T_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_Soldier_unarmed_F.jpg";
		_generalMacro = "O_T_Soldier_unarmed_F";
		displayName = "$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		role = "Unarmed";
		threat[] = {0.1,0.1,0.1};
	};
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_CTRG_Soldier_base_F";
		faction = "BLU_CTRG_F";
		editorSubcategory = "EdSubcat_Personnel_Pacific";
		displayName = "";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		uniformClass = "U_B_CTRG_Soldier_F";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"};
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetB_TI_tna_F","V_TacVest_oli","G_Balaclava_TI_G_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_tna_F","V_TacVest_oli","G_Balaclava_TI_G_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
		DLC = "Expansion";
	};
	class B_CTRG_Soldier_F: B_CTRG_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_CTRG_Soldier_F";
		faction = "BLU_CTRG_F";
		uniformClass = "U_B_CTRG_Soldier_F";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f_exp\blufor\data\U_B_CTRG_Soldier_F.rvmat","A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat","A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat"};
		};
		DLC = "Expansion";
		armor = 2;
		armorStructural = 3;
		explosionShielding = 0.3;
	};
	class B_CTRG_Soldier_2_F: B_CTRG_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_CTRG_Soldier_2_F";
		faction = "BLU_CTRG_F";
		uniformClass = "U_B_CTRG_Soldier_2_F";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_02_F.p3d";
		scope = 1;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f_exp\blufor\data\U_B_CTRG_Soldier_F.rvmat","A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat","A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat"};
		};
		DLC = "Expansion";
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class B_CTRG_Soldier_3_F: B_CTRG_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_CTRG_Soldier_3_F";
		faction = "BLU_CTRG_F";
		uniformClass = "U_B_CTRG_Soldier_3_F";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f_exp\blufor\data\U_B_CTRG_Soldier_F.rvmat","A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat","A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat"};
		};
		DLC = "Expansion";
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
	};
	class B_CTRG_Soldier_TL_tna_F: B_CTRG_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Soldier_TL_tna_F.jpg";
		_generalMacro = "B_CTRG_Soldier_TL_tna_F";
		scope = 2;
		displayName = "$STR_B_SOLDIER_TL_F0";
		cost = 450000;
		weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Soldier_Exp_tna_F.jpg";
		_generalMacro = "B_CTRG_Soldier_Exp_tna_F";
		scope = 2;
		displayName = "$STR_A3_B_CTRG_Soldier_Exp_tna_F0";
		role = "Sapper";
		cost = 115000;
		canDeactivateMines = 1;
		detectSkill = 80;
		backpack = "B_Kitbag_rgr_CTRGExp_F";
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_tna_F","V_PlateCarrierIAGL_oli","G_Balaclava_TI_G_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_tna_F","V_PlateCarrierIAGL_oli","G_Balaclava_TI_G_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
	};
	class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Soldier_Medic_tna_F.jpg";
		_generalMacro = "B_CTRG_Soldier_Medic_tna_F";
		scope = 2;
		displayName = "$STR_A3_B_CTRG_Soldier_Medic_tna_F0";
		role = "CombatLifeSaver";
		cost = 300000;
		backpack = "B_AssaultPack_rgr_CTRGMedic_F";
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		attendant = 1;
	};
	class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Soldier_M_tna_F.jpg";
		_generalMacro = "B_CTRG_Soldier_M_tna_F";
		scope = 2;
		displayName = "$STR_B_SOLDIER_M_F0";
		role = "Marksman";
		cost = 150000;
		backpack = "";
		weapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_tna_F: B_CTRG_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Soldier_tna_F.jpg";
		_generalMacro = "B_CTRG_Soldier_tna_F";
		scope = 2;
		displayName = "$STR_A3_B_CTRG_Soldier_tna_F0";
		role = "Rifleman";
		cost = 100000;
		backpack = "";
	};
	class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Soldier_LAT_tna_F.jpg";
		_generalMacro = "B_CTRG_Soldier_LAT_tna_F";
		scope = 2;
		displayName = "$STR_A3_B_CTRG_Soldier_LAT_tna_F0";
		role = "MissileSpecialist";
		cost = 180000;
		threat[] = {1,0.7,0.3};
		backpack = "B_AssaultPack_rgr_CTRGLAT_F";
		weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Soldier_AR_tna_F.jpg";
		_generalMacro = "B_CTRG_Soldier_AR_tna_F";
		scope = 2;
		displayName = "$STR_B_SOLDIER_AR_F0";
		role = "MachineGunner";
		cost = 125000;
		threat[] = {1,0.1,0.3};
		backpack = "";
		weapons[] = {"arifle_SPAR_02_blk_ERCO_Pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_02_blk_ERCO_Pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Soldier_JTAC_tna_F.jpg";
		_generalMacro = "B_CTRG_Soldier_JTAC_tna_F";
		scope = 2;
		displayName = "$STR_A3_B_CTRG_Soldier_JTAC_tna_F0";
		role = "SpecialOperative";
		cost = 200000;
		backpack = "";
		weapons[] = {"arifle_SPAR_01_GL_blk_ERCO_Pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};
		respawnWeapons[] = {"arifle_SPAR_01_GL_blk_ERCO_Pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		linkedItems[] = {"H_HelmetB_TI_tna_F","V_PlateCarrierIAGL_oli","G_Balaclava_TI_G_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_tna_F","V_PlateCarrierIAGL_oli","G_Balaclava_TI_G_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
	};
	class B_CTRG_Miller_F: B_CTRG_Soldier_3_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_CTRG_Miller_F.jpg";
		_generalMacro = "B_CTRG_Miller_F";
		scope = 2;
		faction = "BLU_CTRG_F";
		editorSubcategory = "EdSubcat_Personnel_Story";
		displayName = "$STR_A3_CFGVEHICLES_B_MILLER0";
		identityTypes[] = {"Miller"};
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F.rvmat","\A3\Data_f\default.rvmat"};
		weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_rgr_noflag_F","G_Tactical_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr_noflag_F","G_Tactical_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class EventHandlers
		{
			init = "(_this select 0) setIdentity ""Miller_Exp_F""";
		};
		DLC = "Expansion";
	};
	class B_CTRG_Soldier_urb_1_F: B_CTRG_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_CTRG_Soldier_urb_1_F";
		scope = 1;
		faction = "BLU_CTRG_F";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "U_B_CTRG_Soldier_urb_1_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\clothing1_mtp_urban_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f\blufor\data\clothing1.rvmat","a3\characters_f\blufor\data\clothing1_injury.rvmat","a3\characters_f\blufor\data\clothing1_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\m_white_01.rvmat","a3\characters_f\heads\data\m_white_01_injury.rvmat","a3\characters_f\heads\data\m_white_01_injury.rvmat"};
		};
		DLC = "Expansion";
	};
	class B_CTRG_Soldier_urb_2_F: B_CTRG_Soldier_2_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_CTRG_Soldier_urb_2_F";
		scope = 1;
		faction = "BLU_CTRG_F";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\clothing1_mtp_urban_co.paa","\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f\blufor\data\clothing1.rvmat","a3\characters_f\blufor\data\clothing1_injury.rvmat","a3\characters_f\blufor\data\clothing1_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\m_white_01.rvmat","a3\characters_f\heads\data\m_white_01_injury.rvmat","a3\characters_f\heads\data\m_white_01_injury.rvmat","a3\characters_f\common\data\basicbody.rvmat","a3\characters_f\common\data\basicbody_injury.rvmat","a3\characters_f\common\data\basicbody_injury.rvmat"};
		};
		DLC = "Expansion";
	};
	class B_CTRG_Soldier_urb_3_F: B_CTRG_Soldier_3_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_CTRG_Soldier_urb_3_F";
		scope = 1;
		faction = "BLU_CTRG_F";
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\clothing1_mtp_urban_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f\blufor\data\clothing1.rvmat","a3\characters_f\blufor\data\clothing1_injury.rvmat","a3\characters_f\blufor\data\clothing1_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\m_white_01.rvmat","a3\characters_f\heads\data\m_white_01_injury.rvmat","a3\characters_f\heads\data\m_white_01_injury.rvmat"};
		};
		DLC = "Expansion";
	};
	class B_CTRG_Soldier_universal_F: B_CTRG_Soldier_tna_F
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
		_generalMacro = "B_CTRG_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class O_V_Soldier_base_F: O_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_V_Soldier_base_F";
		faction = "OPF_F";
		genericNames = "ChineseMen";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		editorSubcategory = "EdSubcat_Personnel_Viper";
		displayName = "";
		accuracy = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1;
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f_exp\opfor\data\viperop_suit.rvmat","A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_injury.rvmat","A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_injury.rvmat"};
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
				armor = 6;
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
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.33;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 8;
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
				armor = 8;
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
				armor = 8;
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
				armor = 8;
				material = -1;
				name = "arms";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "";
			};
			class HitHands: HitArms
			{
				armor = 8;
				material = -1;
				name = "hands";
				passThrough = 0.7;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 8;
				material = -1;
				name = "legs";
				passThrough = 0.7;
				radius = 0.14;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "";
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
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.4;
		model = "\A3\Characters_F_Exp\OPFOR\o_viper.p3d";
		uniformClass = "U_O_V_Soldier_Viper_hex_F";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hex_co.paa"};
		backpack = "B_ViperHarness_hex_M_F";
		weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		DLC = "Expansion";
	};
	class O_V_Soldier_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_hex_F.jpg";
		_generalMacro = "O_V_Soldier_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_hex_F0";
		role = "Rifleman";
		cost = 150000;
	};
	class O_V_Soldier_TL_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_TL_hex_F.jpg";
		_generalMacro = "O_V_Soldier_TL_hex_F";
		scope = 2;
		cost = 500000;
		displayName = "$STR_A3_O_V_Soldier_TL_hex_F0";
		backpack = "B_ViperHarness_hex_TL_F";
		weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
	};
	class O_V_Soldier_Exp_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_Exp_hex_F.jpg";
		_generalMacro = "O_V_Soldier_Exp_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_Exp_hex_F0";
		role = "Sapper";
		cost = 200000;
		threat[] = {1,0.5,0.1};
		canDeactivateMines = 1;
		detectSkill = 80;
		backpack = "B_ViperHarness_hex_Exp_F";
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_Medic_hex_F: O_V_Soldier_base_F
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
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_Medic_hex_F.jpg";
		_generalMacro = "O_V_Soldier_Medic_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_SOLDIER_MEDIC_HEX_F0";
		role = "CombatLifeSaver";
		cost = 350000;
		backpack = "B_ViperHarness_hex_Medic_F";
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		attendant = 1;
	};
	class O_V_Soldier_M_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_M_hex_F.jpg";
		_generalMacro = "O_V_Soldier_M_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_M_hex_F0";
		role = "Marksman";
		cost = 250000;
		backpack = "B_ViperHarness_hex_M_F";
		weapons[] = {"arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_LAT_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_LAT_hex_F.jpg";
		_generalMacro = "O_V_Soldier_LAT_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_LAT_hex_F0";
		role = "MissileSpecialist";
		accuracy = 2;
		cost = 300000;
		threat[] = {1,0.7,0.3};
		backpack = "B_ViperHarness_hex_LAT_F";
		weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","RPG32_F","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","RPG32_F","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_JTAC_hex_F: O_V_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_JTAC_hex_F.jpg";
		_generalMacro = "O_V_Soldier_JTAC_hex_F";
		scope = 2;
		displayName = "$STR_A3_O_V_Soldier_JTAC_hex_F0";
		role = "SpecialOperative";
		cost = 200000;
		backpack = "B_ViperHarness_hex_JTAC_F";
		weapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"arifle_ARX_hex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Laserbatteries","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","16Rnd_9x21_Mag","Laserbatteries","Chemlight_red","Chemlight_red"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_hex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_ghex_F: O_V_Soldier_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_M_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_TL_ghex_F: O_V_Soldier_TL_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_TL_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_TL_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_TL_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_Exp_ghex_F: O_V_Soldier_Exp_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_Exp_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_Exp_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_Exp_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_Medic_ghex_F: O_V_Soldier_Medic_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_Medic_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_Medic_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_Medic_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_M_ghex_F: O_V_Soldier_M_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_M_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_M_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_M_F";
		weapons[] = {"arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_LAT_ghex_F: O_V_Soldier_LAT_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_LAT_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_LAT_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_LAT_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_V_Soldier_JTAC_ghex_F: O_V_Soldier_JTAC_hex_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_JTAC_ghex_F.jpg";
		_generalMacro = "O_V_Soldier_JTAC_ghex_F";
		faction = "OPF_T_F";
		uniformClass = "U_O_V_Soldier_Viper_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		backpack = "B_ViperHarness_ghex_JTAC_F";
		weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
		respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
		linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_GEN_Soldier_base_F: B_Soldier_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_GEN_Soldier_base_F";
		scope = 0;
		faction = "BLU_GEN_F";
		genericNames = "TanoanMen";
		displayName = "$STR_A3_B_GEN_Soldier_base_F0";
		accuracy = 1.5;
		threat[] = {1,0.1,0.1};
		camouflage = 2;
		model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Soldier_F.p3d";
		uniformClass = "U_B_GEN_Soldier_F";
		identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Soldier_F_01_co.paa","\A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat","a3\characters_f\heads\data\hl_white_hairy_muscular.rvmat","a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat","a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat","a3\characters_f_bootcamp\guerrilla\data\ig_guerrilla_6_1.rvmat","a3\characters_f_bootcamp\guerrilla\data\ig_guerrilla_6_1_injury.rvmat","a3\characters_f_bootcamp\guerrilla\data\ig_guerrilla_6_1_injury.rvmat","a3\characters_f_exp\syndikat\data\u_i_c_soldier_para_3_f_1.rvmat","A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat","A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat","a3\characters_f_exp\gendarmerie\data\u_b_gen_soldier_f_02.rvmat","A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_injury.rvmat","A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Soldier_F_02_injury.rvmat"};
		};
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
		linkedItems[] = {"H_MilCap_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_MilCap_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		DLC = "Expansion";
	};
	class B_GEN_Soldier_F: B_GEN_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
		_generalMacro = "B_GEN_Soldier_F";
		scope = 2;
		DLC = "Expansion";
	};
	class B_GEN_Commander_F: B_GEN_Soldier_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Commander_F.jpg";
		_generalMacro = "B_GEN_Commander_F";
		scope = 2;
		displayName = "$STR_A3_B_GEN_Commander_F0";
		model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
		uniformClass = "U_B_GEN_Commander_F";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Commander_F_co.paa"};
		cost = 500000;
		weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};
		linkedItems[] = {"H_Beret_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		DLC = "Expansion";
	};
	class B_GEN_Soldier_universal_F: B_GEN_Soldier_F
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
		_generalMacro = "B_GEN_Soldier_universal_F";
		scope = 1;
		displayName = "$STR_A3_CfgVehicles_b_soldier_universal_f_displayName";
		attendant = 1;
		engineer = 1;
		canDeactivateMines = 1;
		role = "Rifleman";
	};
	class Headgear_Base_F;
	class Vest_Base_F;
	class Item_Base_F;
	class Item_U_B_T_Soldier_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_BT_SOLDIER_F_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_T_Soldier_F
			{
				name = "U_B_T_Soldier_F";
				count = 1;
			};
		};
	};
	class Item_U_B_T_Soldier_AR_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_BT_SOLDIER_AR_F_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_T_Soldier_AR_F
			{
				name = "U_B_T_Soldier_AR_F";
				count = 1;
			};
		};
	};
	class Item_U_B_T_Soldier_SL_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_BT_SOLDIER_SL_F_0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_T_Soldier_SL_F
			{
				name = "U_B_T_Soldier_SL_F";
				count = 1;
			};
		};
	};
	class Item_U_B_T_Sniper_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_BT_sniper_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_T_Sniper_F
			{
				name = "U_B_T_Sniper_F";
				count = 1;
			};
		};
	};
	class Item_U_B_T_FullGhillie_tna_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_FullGhillie_tna_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_T_FullGhillie_tna_F
			{
				name = "U_B_T_FullGhillie_tna_F";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_F
			{
				name = "U_B_CTRG_Soldier_F";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_2_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_2_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_2_F
			{
				name = "U_B_CTRG_Soldier_2_F";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_3_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_3_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_3_F
			{
				name = "U_B_CTRG_Soldier_3_F";
				count = 1;
			};
		};
	};
	class Item_U_B_GEN_Soldier_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_GEN_Soldier_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_GEN_Soldier_F
			{
				name = "U_B_GEN_Soldier_F";
				count = 1;
			};
		};
	};
	class Item_U_B_GEN_Commander_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_GEN_Commander_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_GEN_Commander_F
			{
				name = "U_B_GEN_Commander_F";
				count = 1;
			};
		};
	};
	class Item_U_O_T_Soldier_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_O_T_Soldier_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_T_Soldier_F
			{
				name = "U_O_T_Soldier_F";
				count = 1;
			};
		};
	};
	class Item_U_O_T_Officer_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_O_T_Officer_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_T_Officer_F
			{
				name = "U_O_T_Officer_F";
				count = 1;
			};
		};
	};
	class Item_U_O_T_Sniper_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_O_T_Sniper_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_T_Sniper_F
			{
				name = "U_O_T_Sniper_F";
				count = 1;
			};
		};
	};
	class Item_U_O_T_FullGhillie_tna_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_O_FullGhillie_ghex_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_T_FullGhillie_tna_F
			{
				name = "U_O_T_FullGhillie_tna_F";
				count = 1;
			};
		};
	};
	class Item_U_O_V_Soldier_Viper_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_O_Soldier_Viper_ghex_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_V_Soldier_Viper_F
			{
				name = "U_O_V_Soldier_Viper_F";
				count = 1;
			};
		};
	};
	class Item_U_O_V_Soldier_Viper_hex_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_O_Soldier_Viper_hex_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_O_V_Soldier_Viper_hex_F
			{
				name = "U_O_V_Soldier_Viper_hex_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Para_1_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_1_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Para_1_F
			{
				name = "U_I_C_Soldier_Para_1_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Para_2_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_2_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Para_2_F
			{
				name = "U_I_C_Soldier_Para_2_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Para_3_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_3_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Para_3_F
			{
				name = "U_I_C_Soldier_Para_3_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Para_4_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_4_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Para_4_F
			{
				name = "U_I_C_Soldier_Para_4_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Para_5_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_5_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Para_5_F
			{
				name = "U_I_C_Soldier_Para_5_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Bandit_1_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_1_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Bandit_1_F
			{
				name = "U_I_C_Soldier_Bandit_1_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Bandit_2_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_2_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Bandit_2_F
			{
				name = "U_I_C_Soldier_Bandit_2_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Bandit_3_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_3_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Bandit_3_F
			{
				name = "U_I_C_Soldier_Bandit_3_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Bandit_4_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_4_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Bandit_4_F
			{
				name = "U_I_C_Soldier_Bandit_4_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Bandit_5_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_5_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Bandit_5_F
			{
				name = "U_I_C_Soldier_Bandit_5_F";
				count = 1;
			};
		};
	};
	class Item_U_I_C_Soldier_Camo_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Camo_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_I_C_Soldier_Camo_F
			{
				name = "U_I_C_Soldier_Camo_F";
				count = 1;
			};
		};
	};
	class Item_U_C_man_sport_1_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_man_sport_1_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_man_sport_1_F
			{
				name = "U_C_man_sport_1_F";
				count = 1;
			};
		};
	};
	class Item_U_C_man_sport_2_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_man_sport_2_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_man_sport_2_F
			{
				name = "U_C_man_sport_2_F";
				count = 1;
			};
		};
	};
	class Item_U_C_man_sport_3_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_man_sport_3_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_man_sport_3_F
			{
				name = "U_C_man_sport_3_F";
				count = 1;
			};
		};
	};
	class Item_U_C_Man_casual_1_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_Man_casual_1_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Man_casual_1_F
			{
				name = "U_C_Man_casual_1_F";
				count = 1;
			};
		};
	};
	class Item_U_C_Man_casual_2_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_Man_casual_2_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Man_casual_2_F
			{
				name = "U_C_Man_casual_2_F";
				count = 1;
			};
		};
	};
	class Item_U_C_Man_casual_3_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_Man_casual_3_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Man_casual_3_F
			{
				name = "U_C_Man_casual_3_F";
				count = 1;
			};
		};
	};
	class Item_U_C_Man_casual_4_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_Man_casual_4_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Man_casual_4_F
			{
				name = "U_C_Man_casual_4_F";
				count = 1;
			};
		};
	};
	class Item_U_C_Man_casual_5_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_Man_casual_5_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Man_casual_5_F
			{
				name = "U_C_Man_casual_5_F";
				count = 1;
			};
		};
	};
	class Item_U_C_Man_casual_6_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_C_Man_casual_6_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_C_Man_casual_6_F
			{
				name = "U_C_Man_casual_6_F";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_urb_1_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_urb_1_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_urb_1_F
			{
				name = "U_B_CTRG_Soldier_urb_1_F";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_urb_2_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_urb_2_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_urb_2_F
			{
				name = "U_B_CTRG_Soldier_urb_2_F";
				count = 1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_urb_3_F: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_urb_3_F0";
		author = "$STR_A3_Bohemia_Interactive";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		vehicleClass = "ItemsUniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_urb_3_F
			{
				name = "U_B_CTRG_Soldier_urb_3_F";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class U_B_T_Soldier_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_BT_Soldier_F_0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_BT_Soldier_F_tna_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_T_Soldier_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_T_Soldier_AR_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_BT_Soldier_AR_F_0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_BT_Soldier_AR_F_tna_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_AR_F_tna_01_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_T_Soldier_AR_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_T_Soldier_SL_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_BT_Soldier_SL_F_0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_BT_Soldier_SL_F_tna_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_SL_F_tna_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_T_Soldier_SL_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_T_Sniper_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_BT_sniper_F0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_BT_sniper_F_tna_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_SL_F_tna_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_T_Sniper_F";
			containerClass = "Supply60";
			mass = 60;
		};
	};
	class U_B_T_FullGhillie_tna_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_FullGhillie_tna_F0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_B_FullGhillie_tna_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_T_ghillie_tna_F";
			containerClass = "Supply60";
			mass = 80;
		};
	};
	class U_B_CTRG_Soldier_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_F0";
		picture = "\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_Soldier_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CTRG_Soldier_2_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_2_F0";
		picture = "\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_2_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_Soldier_2_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CTRG_Soldier_3_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_3_F0";
		picture = "\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_3_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_Soldier_3_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_GEN_Soldier_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_GEN_Soldier_F0";
		picture = "\A3\characters_f_exp\Gendarmerie\data\ui\icon_U_B_GEN_Soldier_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Soldier_F_01_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_GEN_Soldier_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_GEN_Commander_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_GEN_Commander_F0";
		picture = "\A3\characters_f_exp\Gendarmerie\data\ui\icon_U_B_GEN_Commander_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Gendarmerie\Data\U_B_GEN_Commander_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_GEN_Commander_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_O_T_Soldier_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_O_T_Soldier_F0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_OT_Soldier_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_T_Soldier_F";
			containerClass = "Supply40";
			mass = 80;
		};
	};
	class U_O_T_Officer_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_O_T_Officer_F0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_OT_officer_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\officer_tna_CO.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_T_Officer_F";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	class U_O_T_Sniper_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_O_T_Sniper_F0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_OT_sniper_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_T_Sniper_F";
			containerClass = "Supply40";
			mass = 100;
		};
	};
	class U_O_T_FullGhillie_tna_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_O_FullGhillie_ghex_F0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_O_FullGhillie_tna_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_T_ghillie_tna_F";
			containerClass = "Supply60";
			mass = 120;
		};
	};
	class U_O_V_Soldier_Viper_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_O_Soldier_Viper_ghex_F0";
		picture = "\A3\characters_f_exp\OPFOR\data\ui\icon_U_O_Soldier_Viper_ghex_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_V_Soldier_TL_ghex_F";
			containerClass = "Supply20";
			mass = 120;
		};
	};
	class U_O_V_Soldier_Viper_hex_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_O_Soldier_Viper_hex_F0";
		picture = "\A3\characters_f_exp\OPFOR\data\ui\icon_U_O_Soldier_Viper_hex_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hex_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_V_Soldier_TL_hex_F";
			containerClass = "Supply20";
			mass = 120;
		};
	};
	class U_I_C_Soldier_Para_1_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_1_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Para_1_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Para_1_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_C_Soldier_Para_2_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_2_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Para_2_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Para_2_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_C_Soldier_Para_3_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_3_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Para_3_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_3_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Para_3_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_C_Soldier_Para_4_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_4_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Para_4_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Para_4_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_C_Soldier_Para_5_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Para_5_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Para_5_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_5_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Para_5_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_I_C_Soldier_Bandit_1_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_1_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Bandit_1_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_1_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Bandit_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_I_C_Soldier_Bandit_2_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_2_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Bandit_2_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Bandit_2_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_I_C_Soldier_Bandit_3_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_3_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Bandit_3_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_3_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Bandit_3_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_I_C_Soldier_Bandit_4_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_4_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Bandit_4_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Bandit_4_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_I_C_Soldier_Bandit_5_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Bandit_5_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Bandit_5_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Bandit_5_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_I_C_Soldier_Camo_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_I_C_Soldier_Camo_F0";
		picture = "\A3\characters_f_exp\syndikat\data\ui\icon_U_I_C_Soldier_Camo_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Camo_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "I_C_Soldier_Camo_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_C_man_sport_1_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_man_sport_1_F0";
		picture = "\A3\characters_f_exp\data\ui\icon_U_C_man_sport_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\u_c_man_sport_1_f_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_sport_1_F_tanoan";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class U_C_man_sport_2_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_man_sport_2_F0";
		picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_man_sport_2_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\U_C_man_sport_2_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_sport_2_F_tanoan";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class U_C_man_sport_3_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_man_sport_3_F0";
		picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_man_sport_3_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\U_C_man_sport_3_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_man_sport_3_F_tanoan";
			containerClass = "Supply20";
			mass = 20;
		};
	};
	class U_C_Man_casual_1_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_Man_casual_1_F0";
		picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_1_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_1_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Man_casual_1_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Man_casual_2_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_Man_casual_2_F0";
		picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_2_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_2_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Man_casual_2_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Man_casual_3_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_Man_casual_3_F0";
		picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_3_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_3_F_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Man_casual_3_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Man_casual_4_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_Man_casual_4_F0";
		picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_4_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Man_casual_4_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Man_casual_5_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_Man_casual_5_F0";
		picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_5_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Man_casual_5_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_C_Man_casual_6_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_C_Man_casual_6_F0";
		picture = "\A3\characters_f_exp\Civil\data\ui\icon_U_C_Man_casual_6_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_Man_casual_6_F";
			containerClass = "Supply30";
			mass = 30;
		};
	};
	class U_B_CTRG_Soldier_urb_1_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_urb_1_F0";
		picture = "\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_urb_1_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\clothing1_mtp_urban_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_Soldier_urb_1_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CTRG_Soldier_urb_2_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_urb_2_F0";
		picture = "\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_urb_2_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\clothing1_mtp_urban_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_Soldier_urb_2_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class U_B_CTRG_Soldier_urb_3_F: Uniform_Base
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_U_B_CTRG_Soldier_urb_3_F0";
		picture = "\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_urb_3_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\clothing1_mtp_urban_co.paa"};
		DLC = "Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_CTRG_Soldier_urb_3_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};
};
class CfgGlasses
{
	class None;
	class G_Balaclava_TI_blk_F: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Balaclava_TI_blk_F";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "$STR_A3_G_Balaclava_TI_blk_F0";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa"};
		identityTypes[] = {};
		mass = 6;
		DLC = "Expansion";
	};
	class G_Balaclava_TI_tna_F: G_Balaclava_TI_blk_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Balaclava_TI_tna_F";
		displayName = "$STR_A3_G_Balaclava_TI_tna_F0";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_tna_F_ca.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_tna_F_co.paa"};
		identityTypes[] = {};
		mass = 6;
		DLC = "Expansion";
	};
	class G_Balaclava_TI_G_blk_F: G_Balaclava_TI_blk_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Balaclava_TI_G_blk_F";
		displayName = "$STR_A3_G_Balaclava_TI_G_blk_F0";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa","\A3\Characters_F\Heads\Glasses\data\g_combat_ca.paa"};
		identityTypes[] = {};
		mass = 10;
		DLC = "Expansion";
	};
	class G_Balaclava_TI_G_tna_F: G_Balaclava_TI_tna_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Balaclava_TI_G_tna_F";
		displayName = "$STR_A3_G_Balaclava_TI_G_tna_F0";
		model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_tna_F_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_tna_F_co.paa","\A3\Characters_F\Heads\Glasses\data\g_combat_ca.paa"};
		identityTypes[] = {};
		mass = 10;
		DLC = "Expansion";
	};
	class G_Combat_Goggles_tna_F: None
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "G_Combat_Goggles_tna_F";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "$STR_A3_G_Combat_Goggles_tna_F0";
		model = "\A3\Characters_F_Beta\Heads\Glasses\g_combat.p3d";
		picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Combat_Goggles_tna_F_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\G_Combat_Goggles_tna_F_ca.paa"};
		identityTypes[] = {};
		mass = 6;
		DLC = "Expansion";
	};
};
class CfgGroups
{
	class West
	{
		name = "$STR_A3_CfgGroups_West0";
		side = 1;
		class BLU_T_F
		{
			name = "$STR_A3_CfgGroups_West_BLU_T_F0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class B_T_InfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class B_T_InfSquad_Weapons
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class B_T_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_InfTeam_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_InfTeam_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class B_T_ReconTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_recon_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_recon_JTAC_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_recon_exp_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class B_T_ReconPatrol
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_ReconSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_recon_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class B_T_SniperTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit1
					{
						side = 1;
						vehicle = "B_T_sniper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_spotter_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class SpecOps
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
				class B_T_DiverTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_DiverTeam_Boat
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_DiverTeam_Boat0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_Boat_Transport_01_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class B_T_DiverTeam_SDV
				{
					name = "$STR_A3_cfggroups_West_BLU_F_SpecOps_BUS_DiverTeam_SDV0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_SDV_01_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_SDV_01_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class B_T_SmallTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_smallUAV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UAV_01_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_ReconTeam_UGV
				{
					name = "$STR_A3_cfggroups_uavteam_reconUGV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UGV_01_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_AttackTeam_UGV
				{
					name = "$STR_A3_cfggroups_uavteam_attackUGV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UGV_01_rcws_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_ReconTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_reconUAV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UAV_02_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_AttackTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_attackUAV";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_UAV_02_CAS_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
			class Support
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Support0";
				class B_T_Support_CLS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_Support_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_Support_ENG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_repair_F";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				class B_T_Recon_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_recon_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_recon_exp_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class B_T_Support_MG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_support_MG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_Support_GMG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_support_GMG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_Support_Mort
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_support_Mort_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_AMort_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class B_T_MotInf_Team
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_gmg_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class B_T_MotInf_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_MGTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_MG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_GMGTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_GMG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_MortTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MRAP_01_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_support_Mort_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_support_AMort_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class B_T_MotInf_Reinforcements
				{
					name = "$STR_A3_CFGGROUPS_WEST_BLU_F_MOTORIZED_BUS_MOTINF_REINFORCE0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_Truck_01_transport_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-4,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {5,-6,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-8,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {5,-12,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {5,-14,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-2,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-4,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-5,-6,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,-8,0};
					};
					class Unit14
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-10,0};
					};
					class Unit15
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-5,-12,0};
					};
					class Unit16
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-14,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
				class B_T_MechInfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_APC_Wheeled_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_T_MechInf_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_APC_Tracked_01_rcws_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_AT_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_T_MechInf_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_soldier_AA_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class B_T_MechInf_Support
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_APC_Wheeled_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_soldier_repair_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_T_engineer_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_T_medic_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "B_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
			class Armored
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
				class B_T_TankPlatoon
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_T_TankPlatoon_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_APC_Tracked_01_aa_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_T_TankSection
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_cannon_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class B_T_SPGPlatoon_Scorcher
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class B_T_SPGSection_Scorcher
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class B_T_SPGSection_MLRS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_MLRS0";
					side = 1;
					faction = "BLU_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_MBT_01_mlrs_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_T_MBT_01_mlrs_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
			};
		};
		class BLU_CTRG_F
		{
			name = "$STR_A3_CfgGroups_West_CTRG_F0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class CTRG_InfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_TL_tna_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Exp_tna_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class CTRG_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_TL_tna_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class CTRG_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_tna_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class CTRG_MotInf_ReconTeam
				{
					name = "$STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_ReconTeam0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_LSV_01_unarmed_CTRG_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_JTAC_tna_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Exp_tna_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class CTRG_MotInf_AssaultTeam
				{
					name = "$STR_A3_CfgGroups_West_CTRG_F_Motorized_CTRG_MotInf_AssaultTeam0";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_T_LSV_01_armed_CTRG_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_Medic_tna_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_M_tna_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_AR_tna_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "B_CTRG_Soldier_LAT_tna_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
				};
			};
		};
		class Gendarmerie
		{
			name = "$STR_A3_CfgGroups_West_Gendarmerie0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class GENDARME_Inf_Patrol
				{
					name = "$STR_A3_CfgGroups_West_Gendarmerie_Infantry_GENDARME_Inf_Patrol0";
					side = 1;
					faction = "BLU_GEN_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_GEN_Commander_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_GEN_Soldier_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class GENDARME_MotInf_Patrol
				{
					name = "$STR_A3_CfgGroups_West_Gendarmerie_Motorized_GENDARME_MotInf_Patrol0";
					side = 1;
					faction = "BLU_GEN_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "B_GEN_Offroad_01_gen_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "B_GEN_Soldier_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};
	class East
	{
		name = "$STR_A3_CfgGroups_East0";
		side = 0;
		class OPF_T_F
		{
			name = "$STR_A3_CfgGroups_East_OPF_T_F0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class O_T_InfSquad
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class O_T_InfSquad_Weapons
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_M_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class O_T_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_InfTeam_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_InfTeam_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class O_T_reconTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_recon_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_recon_JTAC_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_recon_exp_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class O_T_reconPatrol
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_reconSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSentry0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_recon_M_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_recon_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class O_T_SniperTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_sniper_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_spotter_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class SpecOps
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
				class O_T_diverTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_diverTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_diverTeam_Boat
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_diverTeam_Boat0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_Boat_Transport_01_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class O_T_diverTeam_SDV
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps_BUS_diverTeam_SDV0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_diver_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_diver_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_diver_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_SDV_01_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_SDV_01_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class O_T_SmallTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_smallUAV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UAV_01_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_ReconTeam_UGV
				{
					name = "$STR_A3_cfggroups_uavteam_reconUGV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UGV_01_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_AttackTeam_UGV
				{
					name = "$STR_A3_cfggroups_uavteam_attackUGV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UGV_01_rcws_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_ReconTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_reconUAV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UAV_02_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_AttackTeam_UAV
				{
					name = "$STR_A3_cfggroups_uavteam_attackUAV";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_UAV_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_UAV_02_CAS_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_ViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_SpecOps_OI_ViperTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
			};
			class Support
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Support0";
				class O_T_support_CLS
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_CLS0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_support_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_EOD0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_support_ENG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_ENG0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_repair_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_recon_EOD
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_recon_EOD0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_recon_exp_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_recon_exp_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class O_T_support_MG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_MG0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_support_MG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_support_GMG
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_GMG0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_support_GMG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_support_Mort
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_Mort0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_support_Mort_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_AMort_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
			class Motorized_MTP
			{
				name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP0";
				class O_T_MotInf_Team
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInfTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_gmg_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class O_T_MotInf_AT
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_AT0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_AA
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_AA0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_MGTeam
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_MGTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_MG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_GMGTeam
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_GMGTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_GMG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_support_AMG_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_MortTeam
				{
					name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_MortTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MRAP_02_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_support_Mort_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_support_AMort_F";
						rank = "PRIVATE";
						position[] = {0,-10,0};
					};
				};
				class O_T_MotInf_ReconViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_ReconViperTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_LSV_02_unarmed_viper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class O_T_MotInf_AssaultViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_AssaultViperTeam0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_LSV_02_armed_viper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_ghex_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_ghex_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_M_ghex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_ghex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_ghex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_ghex_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class O_T_MotInf_Reinforcements
				{
					name = "$STR_A3_CFGGROUPS_WEST_BLU_F_MOTORIZED_BUS_MOTINF_REINFORCE0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_Truck_03_transport_ghex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-4,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {5,-6,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-8,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-10,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-5,-8,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-10,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-2,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "O_T_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-4,0};
					};
					class Unit12
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-6,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
				class O_T_MechInfSquad
				{
					name = "$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class O_T_MechInf_AT
				{
					name = "$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_APC_Tracked_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_AT_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class O_T_MechInf_AA
				{
					name = "$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_APC_Tracked_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {10,-20,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-10,-20,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_soldier_AA_F";
						rank = "SERGEANT";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class O_T_MechInf_Support
				{
					name = "$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_Support0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_soldier_repair_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_T_engineer_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_T_medic_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_T_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_T_soldier_exp_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "O_T_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-20,-2,0};
					};
				};
			};
			class Armored
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Armored0";
				class O_T_TankPlatoon
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class O_T_TankPlatoon_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_APC_Tracked_02_AA_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_APC_Tracked_02_AA_ghex_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class O_T_TankSection
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_MBT_02_cannon_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class O_T_SPGPlatoon_Scorcher
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class O_T_SPGSection_Scorcher
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0";
					side = 0;
					faction = "OPF_T_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_T_MBT_02_arty_ghex_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
			};
		};
		class OPF_F
		{
			class SpecOps
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
				class OI_ViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_SpecOps_OI_ViperTeam0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
			};
			class Motorized_MTP
			{
				name = "$STR_A3_cfggroups_East_OPF_F_Motorized_MTP0";
				class O_MotInf_ReconViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_ReconViperTeam0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_LSV_02_unarmed_viper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class O_MotInf_AssaultViperTeam
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Motorized_MTP_O_MotInf_AssaultViperTeam0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "O_LSV_02_armed_viper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_V_Soldier_TL_hex_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_V_Soldier_JTAC_hex_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_V_Soldier_M_hex_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_V_Soldier_Exp_hex_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_V_Soldier_LAT_hex_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_V_Soldier_Medic_hex_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
			};
		};
	};
	class Indep
	{
		class IND_C_F
		{
			name = "$STR_A3_CfgGroups_Indep_IND_C_F0";
			class Infantry
			{
				name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";
				class ParaFireTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaFireTeam0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_2_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_4_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_1_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_3_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class ParaShockTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaShockTeam0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_6_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_5_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_7_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_8_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class ParaCombatGroup
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_ParaCombatGroup0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_2_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_4_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_6_F";
						rank = "SERGEANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_1_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_7_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_5_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_8_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "I_C_Soldier_Para_3_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class BanditFireTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_BanditFireTeam0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_4_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_3_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_5_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_1_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BanditShockTeam
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_BanditShockTeam0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_6_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_2_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_7_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_8_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class BanditCombatGroup
				{
					name = "$STR_A3_CfgGroups_Indep_IND_C_F_Infantry_BanditCombatGroup0";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
					class Unit0
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_4_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_3_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_7_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_5_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_6_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_2_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_8_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "I_C_Soldier_Bandit_1_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			};
		};
	};
};
//};
