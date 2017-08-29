// disables some items in the arsenal

#define _ARMA_

//Class 45KO_SO_Equipment : config.bin{
class CfgPatches
{
	class 45KO_Equipment_patch
	{
		name = "45KO equipment mod patch";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		author = "kOepi";
		authors[] = {};
		versionAr[] = {1.0};
		magazines[] = {};
		ammo[] = {};
		requiredAddons[] = {"45KO_SO_Equipment"};
	};
};
class CfgVehicles
{
	class B_Carryall_Base;
	class B_assaultpack_Base;
	class B_Kitbag_Base;
	class 45KO_so_Carryall_camo2: B_Carryall_Base
	{
		scope = 0;
	};
	class 45KO_so_Carryall_camo3: B_Carryall_Base
	{
		scope = 0;		
	};
	class 45KO_so_Carryall_camo5: B_Carryall_Base
	{
		scope = 0;
	};
	class 45KO_so_Carryall_camo7: B_Carryall_Base
	{
		scope = 0;
	};
	class 45KO_so_assaultpack_camo1grey: B_assaultpack_Base
	{
		scope = 0;
	};
	class 45KO_so_assaultpack_camo1b: B_assaultpack_Base
	{
		scope = 0;
	};
};
class CfgWeapons
{
	class V_TacVest_blk_POLICE;
	class VestItem;
	class ItemInfo;
	class H_HelmetSpecB;
	class H_HelmetB;
	class HeadgearItem;
	class V_PlateCarrier2_rgr;
	class V_Chestrig_khk;
	class H_HelmetB_camo;
	class 45KOso_Chestrig_cbr: V_Chestrig_khk
	{
		scope = 0;
	};
	class 45KOso_PlateCarrier1_cbr: V_PlateCarrier2_rgr
	{
		scope = 0;
	};
	class 45KO_PlateCarrier1_khk: V_PlateCarrier2_rgr
	{
		scope = 0;
	};
	class 45KO_so_tacvest_camo8: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_camo7: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_camo5: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_camo3: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_camo2: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_camo1g: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_camo1b: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_camo1grey: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_black: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_oggo: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_leopard_snow: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_DSB: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_GreyOlive: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_OliveDrap: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_OliveGreen: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_PearlBeige: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class 45KO_so_tacvest_Tan: V_TacVest_blk_POLICE
	{
		scope = 0;
	};
	class B_ViperHarness_base_F;
	class B_ViperLightHarness_base_F;
	class 45KO_SO_SuitBackPack_black_F: B_ViperHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_camo1dark_F: B_ViperHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_camo2_F: B_ViperHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_camo7_F: B_ViperHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_camo7tan_F: B_ViperHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_camo8_F: B_ViperHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_L_black_F: B_ViperLightHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_L_camo1dark_F: B_ViperLightHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_L_camo2_F: B_ViperLightHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_L_camo7_F: B_ViperLightHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_L_camo7tan_F: B_ViperLightHarness_base_F
	{
		scope = 0;
	};
	class 45KO_SO_SuitBackPack_L_camo8_F: B_ViperLightHarness_base_F
	{
		scope = 0;
	};	
};