class CfgVehicles
	class ThingEffect;
	class Strategic;
	class Static;
	
	class ReammoBox: Strategic
		vehicleClass = "Ammo";
		class DestructionEffects
			class Light1
			class Sound
			class Fire1
			class Fire2
			class Smoke1
			class Smoke2
			class Smoke3
			class HouseDestr
	class WeaponHolder: ReammoBox
		class TransportMagazines{};
	class WeaponHolder_Single_F: WeaponHolder
	class ContainerSupply: WeaponHolder
	class placed_chemlight_green: All
		vehicleClass = "mines";
	class placed_chemlight_red: placed_chemlight_green
	class placed_chemlight_yellow: placed_chemlight_green
	class placed_chemlight_blue: placed_chemlight_green
	class thing;
	class test_EmptyObjectForBubbles: thing
		vehicleClass = "Emitters";
		class EventHandlers
	class test_EmptyObjectForFireBig: test_EmptyObjectForBubbles
		class EventHandlers
	class test_EmptyObjectForSmoke: test_EmptyObjectForBubbles
		class EventHandlers
	class WeaponHolder_Single_limited_item_F: WeaponHolder_Single_F
	class WeaponHolder_Single_limited_magazine_F: WeaponHolder_Single_F
	class WeaponHolder_Single_limited_weapon_F: WeaponHolder_Single_F

	class placed_B_IR_grenade: All
		vehicleClass = "mines";
	class placed_O_IR_grenade: placed_B_IR_grenade
	class placed_I_IR_grenade: placed_B_IR_grenade
	class Weapon_Base_F: WeaponHolder
	class Pistol_Base_F: WeaponHolder
	class Launcher_Base_F: WeaponHolder
	class Item_Base_F: WeaponHolder
	class Headgear_Base_F: WeaponHolder
	class Vest_Base_F: WeaponHolder
	class Item_ItemWatch: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class ItemWatch
	class Item_ItemCompass: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class ItemCompass
	class Item_ItemGPS: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class ItemGPS
	class Item_ItemRadio: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class ItemRadio
	class Item_ItemMap: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class ItemMap
	class Item_MineDetector: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class MineDetector
	class Item_Binocular: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class Binocular
	class Item_Rangefinder: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class Rangefinder
	class Item_NVGoggles: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class NVGoggles
	class Item_NVGoggles_OPFOR: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class NVGoggles_OPFOR
	class Item_NVGoggles_INDEP: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class NVGoggles_INDEP
	class Item_FirstAidKit: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class FirstAidKit
	class Item_Medikit: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class Medikit
	class Item_ToolKit: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class ToolKit
	class Weapon_launch_NLAW_F: Launcher_Base_F
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
			class launch_NLAW_F
		class TransportMagazines
			class NLAW_F
	class Weapon_launch_RPG32_F: Launcher_Base_F
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
			class launch_RPG32_F
		class TransportMagazines
			class RPG32_F
	class Weapon_srifle_EBR_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class srifle_EBR_F
		class TransportMagazines
			class 20Rnd_762x51_Mag
	class Weapon_srifle_GM6_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class srifle_GM6_F
		class TransportMagazines
			class 5Rnd_127x108_Mag
	class Weapon_srifle_LRR_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class srifle_LRR_F
		class TransportMagazines
			class 7Rnd_408_Mag
	class Weapon_LMG_Mk200_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class LMG_Mk200_F
		class TransportMagazines
			class 200Rnd_65x39_cased_Box
	class Weapon_hgun_P07_F: Pistol_Base_F
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
			class hgun_P07_F
		class TransportMagazines
			class 16Rnd_9x21_Mag
	class Weapon_hgun_Rook40_F: Pistol_Base_F
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
			class hgun_Rook40_F
		class TransportMagazines
			class 16Rnd_9x21_Mag
	class Weapon_arifle_Katiba_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Katiba_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_green
	class Weapon_arifle_Katiba_C_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Katiba_C_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_green
	class Weapon_arifle_Katiba_GL_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Katiba_GL_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_green
	class Weapon_arifle_MXC_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MXC_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_mag
	class Weapon_arifle_MXC_Black_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MXC_Black_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_mag
	class Weapon_arifle_MX_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MX_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_mag
	class Weapon_arifle_MX_Black_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MX_Black_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_mag
	class Weapon_arifle_MX_GL_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MX_GL_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_mag
	class Weapon_arifle_MX_GL_Black_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MX_GL_Black_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_mag
	class Weapon_arifle_MX_SW_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MX_SW_F
		class TransportMagazines
			class 100Rnd_65x39_caseless_mag_Tracer
	class Weapon_arifle_MX_SW_Black_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MX_SW_Black_F
		class TransportMagazines
			class 100Rnd_65x39_caseless_mag_Tracer
	class Weapon_arifle_MXM_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MXM_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_mag
	class Weapon_arifle_MXM_Black_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_MXM_Black_F
		class TransportMagazines
			class 30Rnd_65x39_caseless_mag
	class Weapon_arifle_SDAR_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_SDAR_F
		class TransportMagazines
			class 20Rnd_556x45_UW_mag
	class Weapon_arifle_TRG21_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_TRG21_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Weapon_arifle_TRG20_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_TRG20_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Weapon_arifle_TRG21_GL_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_TRG21_GL_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Item_Laserdesignator: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class Laserdesignator
	class Weapon_launch_B_Titan_F: Launcher_Base_F
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
			class launch_B_Titan_F
		class TransportMagazines
			class Titan_AA
	class Weapon_launch_I_Titan_F: Weapon_launch_B_Titan_F
		class TransportWeapons
			class launch_I_Titan_F
	class Weapon_launch_O_Titan_F: Weapon_launch_B_Titan_F
		class TransportWeapons
			class launch_O_Titan_F
	class Weapon_launch_launch_B_Titan_short_F: Launcher_Base_F
		vehicleClass = "WeaponsSecondary";
		class TransportWeapons
			class launch_B_Titan_short_F
		class TransportMagazines
			class Titan_AT
	class Weapon_launch_I_Titan_short_F: Weapon_launch_launch_B_Titan_short_F
		class TransportWeapons
			class launch_I_Titan_short_F
	class Weapon_launch_O_Titan_short_F: Weapon_launch_launch_B_Titan_short_F
		class TransportWeapons
			class launch_O_Titan_short_F
	class Weapon_LMG_Zafir_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class LMG_Zafir_F
		class TransportMagazines
			class 150Rnd_762x54_Box
	class Weapon_hgun_ACPC2_F: Pistol_Base_F
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
			class hgun_ACPC2_F
		class TransportMagazines
			class 9Rnd_45ACP_Mag
	class Weapon_arifle_Mk20_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Mk20_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Weapon_arifle_Mk20_plain_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Mk20_plain_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Weapon_arifle_Mk20C_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Mk20C_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Weapon_arifle_Mk20C_plain_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Mk20C_plain_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Weapon_arifle_Mk20_GL_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Mk20_GL_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Weapon_arifle_Mk20_GL_plain_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class arifle_Mk20_GL_plain_F
		class TransportMagazines
			class 30Rnd_556x45_Stanag
	class Weapon_SMG_01_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class SMG_01_F
		class TransportMagazines
			class 30Rnd_45ACP_Mag_SMG_01
	class Weapon_SMG_02_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class SMG_02_F
		class TransportMagazines
			class 30Rnd_9x21_Green_Mag
	class Weapon_srifle_DMR_01_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class srifle_DMR_01_F
		class TransportMagazines
			class 10Rnd_762x54_Mag
	class Weapon_hgun_Pistol_heavy_01_F: Pistol_Base_F
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
			class hgun_Pistol_heavy_01_F
		class TransportMagazines
			class 11Rnd_45ACP_Mag
	class Weapon_hgun_Pistol_heavy_02_F: Pistol_Base_F
		vehicleClass = "WeaponsHandguns";
		class TransportWeapons
			class hgun_Pistol_heavy_02_F
		class TransportMagazines
			class 6Rnd_45ACP_Cylinder
	class Weapon_hgun_PDW2000_F: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
			class hgun_PDW2000_F
		class TransportMagazines
			class 30Rnd_9x21_Yellow_Mag
	class Item_U_BasicBody: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_BasicBody
	class Item_U_B_CombatUniform_mcam: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_mcam
	class Item_U_B_CombatUniform_mcam_tshirt: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_mcam_tshirt
	class Item_U_B_CombatUniform_mcam_vest: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_mcam_vest
	class Item_U_B_GhillieSuit: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_GhillieSuit
	class Item_U_B_HeliPilotCoveralls: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_HeliPilotCoveralls
	class Item_U_B_Wetsuit: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_Wetsuit
	class Item_U_O_CombatUniform_ocamo: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_CombatUniform_ocamo
	class Item_U_O_GhillieSuit: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_GhillieSuit
	class Item_U_O_PilotCoveralls: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_PilotCoveralls
	class Item_U_O_Wetsuit: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_Wetsuit
	class Item_U_C_Poloshirt_blue: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poloshirt_blue
	class Item_U_C_Poloshirt_burgundy: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poloshirt_burgundy
	class Item_U_C_Poloshirt_stripped: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poloshirt_stripped
	class Item_U_C_Poloshirt_tricolour: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poloshirt_tricolour
	class Item_U_C_Poloshirt_salmon: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poloshirt_salmon
	class Item_U_C_Poloshirt_redwhite: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poloshirt_redwhite
	class Item_U_I_G_resistanceLeader_F: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_G_resistanceLeader_F
	class Item_U_B_Protagonist_VR: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_Protagonist_VR
	class Item_U_O_Protagonist_VR: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_Protagonist_VR
	class Item_U_I_Protagonist_VR: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_Protagonist_VR
	class Item_U_I_G_Story_Protagonist_F: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_G_Story_Protagonist_F
	class Item_U_C_Commoner1_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Commoner1_1
	class Item_U_C_Commoner1_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Commoner1_2
	class Item_U_C_Commoner1_3: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Commoner1_3
	class Item_U_Rangemaster: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_Rangemaster
	class Vest_V_Rangemaster_belt: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_Rangemaster_belt
	class Vest_V_BandollierB_khk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_BandollierB_khk
	class Vest_V_BandollierB_cbr: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_BandollierB_cbr
	class Vest_V_BandollierB_rgr: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_BandollierB_rgr
	class Vest_V_BandollierB_blk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_BandollierB_blk
	class Vest_V_PlateCarrier1_rgr: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrier1_rgr
	class Vest_V_PlateCarrier2_rgr: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrier2_rgr
	class Vest_V_PlateCarrier2_blk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrier2_blk
	class Vest_V_Chestrig_khk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_Chestrig_khk
	class Vest_V_Chestrig_rgr: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_Chestrig_rgr
	class Vest_V_Chestrig_blk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_Chestrig_blk
	class Vest_V_TacVest_khk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_TacVest_khk
	class Vest_V_TacVest_brn: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_TacVest_brn
	class Vest_V_TacVest_oli: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_TacVest_oli
	class Vest_V_TacVest_blk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_TacVest_blk
	class Vest_V_HarnessO_brn: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_HarnessO_brn
	class Vest_V_HarnessOGL_brn: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_HarnessOGL_brn
	class Vest_V_RebreatherB: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_RebreatherB
	class Vest_V_RebreatherIR: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_RebreatherIR
	class Vest_V_I_G_resistanceLeader_F: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_I_G_resistanceLeader_F
	class Headgear_H_HelmetB: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB
	class Headgear_H_HelmetB_camo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_camo
	class Headgear_H_Booniehat_khk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Booniehat_khk
	class Headgear_H_Booniehat_oli: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Booniehat_oli
	class Headgear_H_Booniehat_mcamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Booniehat_mcamo
	class Headgear_H_HelmetB_light: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_light
	class Headgear_H_Cap_red: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_red
	class Headgear_H_Cap_blu: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_blu
	class Headgear_H_Cap_oli: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_oli
	class Headgear_H_Cap_headphones: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_headphones
	class Headgear_H_PilotHelmetHeli_B: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_PilotHelmetHeli_B
	class Headgear_H_PilotHelmetHeli_O: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_PilotHelmetHeli_O
	class Headgear_H_HelmetO_ocamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetO_ocamo
	class Headgear_H_HelmetLeaderO_ocamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetLeaderO_ocamo
	class Headgear_H_MilCap_ocamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_MilCap_ocamo
	class Headgear_H_MilCap_mcamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_MilCap_mcamo
	class Item_U_B_CombatUniform_mcam_worn: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_mcam_worn
	class Item_U_B_CombatUniform_wdl: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_wdl
	class Item_U_B_CombatUniform_wdl_tshirt: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_wdl_tshirt
	class Item_U_B_CombatUniform_wdl_vest: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_wdl_vest
	class Item_U_B_CombatUniform_sgg: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_sgg
	class Item_U_B_CombatUniform_sgg_tshirt: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_sgg_tshirt
	class Item_U_B_CombatUniform_sgg_vest: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CombatUniform_sgg_vest
	class Item_U_B_SpecopsUniform_sgg: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_SpecopsUniform_sgg
	class Item_U_B_PilotCoveralls: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_PilotCoveralls
	class Item_U_O_CombatUniform_oucamo: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_CombatUniform_oucamo
	class Item_U_O_SpecopsUniform_ocamo: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_SpecopsUniform_ocamo
	class Item_U_O_SpecopsUniform_blk: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_SpecopsUniform_blk
	class Item_U_O_OfficerUniform_ocamo: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_O_OfficerUniform_ocamo
	class Item_U_I_CombatUniform: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_CombatUniform
	class Item_U_I_CombatUniform_tshirt: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_CombatUniform_tshirt
	class Item_U_I_CombatUniform_shortsleeve: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_CombatUniform_shortsleeve
	class Item_U_I_pilotCoveralls: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_pilotCoveralls
	class Item_U_I_HeliPilotCoveralls: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_HeliPilotCoveralls
	class Item_U_I_GhillieSuit: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_GhillieSuit
	class Item_U_I_OfficerUniform: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_OfficerUniform
	class Item_U_I_Wetsuit: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_I_Wetsuit
	class Item_U_Competitor: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_Competitor
	class Item_U_NikosBody: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_NikosBody
	class Item_U_MillerBody: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_MillerBody
	class Item_U_KerryBody: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_KerryBody
	class Item_U_OrestesBody: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OrestesBody
	class Item_U_AttisBody: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_AttisBody
	class Item_U_AntigonaBody: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_AntigonaBody
	class Item_U_OI_Scientist: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OI_Scientist
	class Vest_V_BandollierB_oli: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_BandollierB_oli
	class Vest_V_PlateCarrier1_blk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrier1_blk
	class Vest_V_Chestrig_oli: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_Chestrig_oli
	class Vest_V_TacVest_camo: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_TacVest_camo
	class Vest_V_TacVest_blk_POLICE: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_TacVest_blk_POLICE
	class Vest_V_TacVestIR_blk: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_TacVestIR_blk
	class Vest_V_HarnessO_gry: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_HarnessO_gry
	class Vest_V_HarnessOGL_gry: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_HarnessOGL_gry
	class Vest_V_PlateCarrierIA1_dgtl: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrierIA1_dgtl
	class Vest_V_PlateCarrierIA2_dgtl: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrierIA2_dgtl
	class Vest_V_RebreatherIA: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_RebreatherIA
	class Headgear_H_Booniehat_tan: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Booniehat_tan
	class Headgear_H_Booniehat_dgtl: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Booniehat_dgtl
	class Headgear_H_Booniehat_khk_hs: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Booniehat_khk_hs
	class Headgear_H_HelmetSpecB: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetSpecB
	class Headgear_H_HelmetSpecB_paint1: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetSpecB_paint1
	class Headgear_H_HelmetSpecB_paint2: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetSpecB_paint2
	class Headgear_H_HelmetSpecB_blk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetSpecB_blk
	class Headgear_H_HelmetSpecB_snakeskin: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetSpecB_snakeskin
	class Headgear_H_HelmetSpecB_sand: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetSpecB_sand
	class Headgear_H_HelmetIA: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetIA
	class Headgear_H_Cap_tan: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_tan
	class Headgear_H_Cap_blk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_blk
	class Headgear_H_Cap_blk_CMMG: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_blk_CMMG
	class Headgear_H_Cap_brn_SPECOPS: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_brn_SPECOPS
	class Headgear_H_Cap_tan_specops_US: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_tan_specops_US
	class Headgear_H_Cap_khaki_specops_UK: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_khaki_specops_UK
	class Headgear_H_Cap_grn: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_grn
	class Headgear_H_Cap_grn_BI: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_grn_BI
	class Headgear_H_Cap_blk_Raven: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_blk_Raven
	class Headgear_H_Cap_blk_ION: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_blk_ION
	class Headgear_H_Cap_oli_hs: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_oli_hs
	class Headgear_H_Cap_press: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_press
	class Headgear_H_Cap_usblack: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_usblack
	class Headgear_H_Cap_surfer: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_surfer
	class Headgear_H_Cap_police: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Cap_police
	class Headgear_H_HelmetCrew_B: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetCrew_B
	class Headgear_H_HelmetCrew_O: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetCrew_O
	class Headgear_H_HelmetCrew_I: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetCrew_I
	class Headgear_H_PilotHelmetFighter_B: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_PilotHelmetFighter_B
	class Headgear_H_PilotHelmetFighter_O: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_PilotHelmetFighter_O
	class Headgear_H_PilotHelmetFighter_I: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_PilotHelmetFighter_I
	class Headgear_H_PilotHelmetHeli_I: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_PilotHelmetHeli_I
	class Headgear_H_CrewHelmetHeli_B: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_CrewHelmetHeli_B
	class Headgear_H_CrewHelmetHeli_O: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_CrewHelmetHeli_O
	class Headgear_H_CrewHelmetHeli_I: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_CrewHelmetHeli_I
	class Headgear_H_HelmetO_oucamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetO_oucamo
	class Headgear_H_HelmetLeaderO_oucamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetLeaderO_oucamo
	class Headgear_H_HelmetSpecO_ocamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetSpecO_ocamo
	class Headgear_H_HelmetSpecO_blk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetSpecO_blk
	class Headgear_H_MilCap_gry: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_MilCap_gry
	class Headgear_H_MilCap_dgtl: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_MilCap_dgtl
	class Headgear_H_MilCap_blue: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_MilCap_blue
	class Headgear_H_Bandanna_surfer: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_surfer
	class Headgear_H_Bandanna_khk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_khk
	class Headgear_H_Bandanna_khk_hs: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_khk_hs
	class Headgear_H_Bandanna_cbr: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_cbr
	class Headgear_H_Bandanna_sgg: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_sgg
	class Headgear_H_Bandanna_sand: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_sand
	class Headgear_H_Bandanna_gry: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_gry
	class Headgear_H_Bandanna_camo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_camo
	class Headgear_H_Bandanna_mcamo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_mcamo
	class Headgear_H_Bandanna_surfer_blk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_surfer_blk
	class Headgear_H_Bandanna_surfer_grn: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_surfer_grn
	class Headgear_H_Bandanna_blu: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Bandanna_blu
	class Headgear_H_Shemag_olive: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Shemag_olive
	class Headgear_H_Shemag_olive_hs: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Shemag_olive_hs
	class Headgear_H_ShemagOpen_khk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_ShemagOpen_khk
	class Headgear_H_ShemagOpen_tan: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_ShemagOpen_tan
	class Headgear_H_Beret_blk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Beret_blk
	class Headgear_H_Beret_02: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Beret_02
	class Headgear_H_Beret_Colonel: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Beret_Colonel
	class Headgear_H_Watchcap_blk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Watchcap_blk
	class Headgear_H_Watchcap_cbr: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Watchcap_cbr
	class Headgear_H_Watchcap_khk: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Watchcap_khk
	class Headgear_H_Watchcap_camo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Watchcap_camo
	class Headgear_H_StrawHat: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_StrawHat
	class Headgear_H_StrawHat_dark: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_StrawHat_dark
	class Headgear_H_Hat_blue: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Hat_blue
	class Headgear_H_Hat_brown: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Hat_brown
	class Headgear_H_Hat_camo: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Hat_camo
	class Headgear_H_Hat_grey: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Hat_grey
	class Headgear_H_Hat_checker: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Hat_checker
	class Headgear_H_Hat_tan: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_Hat_tan
	class Item_U_IG_Guerilla1_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_IG_Guerilla1_1
	class Item_U_IG_Guerilla2_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_IG_Guerilla2_1
	class Item_U_IG_Guerilla2_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_IG_Guerilla2_2
	class Item_U_IG_Guerilla2_3: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_IG_Guerilla2_3
	class Item_U_IG_Guerilla3_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_IG_Guerilla3_1
	class Item_U_IG_Guerilla3_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_IG_Guerilla3_2
	class Item_U_IG_leader: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_IG_leader
	class Item_U_BG_Guerilla1_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_BG_Guerilla1_1
	class Item_U_BG_Guerilla2_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_BG_Guerilla2_1
	class Item_U_BG_Guerilla2_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_BG_Guerilla2_2
	class Item_U_BG_Guerilla2_3: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_BG_Guerilla2_3
	class Item_U_BG_Guerilla3_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_BG_Guerilla3_1
	class Item_U_BG_Guerilla3_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_BG_Guerilla3_2
	class Item_U_BG_leader: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_BG_leader
	class Item_U_OG_Guerilla1_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OG_Guerilla1_1
	class Item_U_OG_Guerilla2_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OG_Guerilla2_1
	class Item_U_OG_Guerilla2_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OG_Guerilla2_2
	class Item_U_OG_Guerilla2_3: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OG_Guerilla2_3
	class Item_U_OG_Guerilla3_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OG_Guerilla3_1
	class Item_U_OG_Guerilla3_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OG_Guerilla3_2
	class Item_U_OG_leader: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_OG_leader
	class Item_U_C_Poor_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poor_1
	class Item_U_C_Poor_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poor_2
	class Item_U_C_Scavenger_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Scavenger_1
	class Item_U_C_Scavenger_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Scavenger_2
	class Item_U_C_Farmer: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Farmer
	class Item_U_C_Fisherman: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Fisherman
	class Item_U_C_WorkerOveralls: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_WorkerOveralls
	class Item_U_C_FishermanOveralls: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_FishermanOveralls
	class Item_U_C_WorkerCoveralls: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_WorkerCoveralls
	class Item_U_C_HunterBody_grn: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_HunterBody_grn
	class Item_U_C_HunterBody_brn: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_HunterBody_brn
	class Item_U_C_Commoner2_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Commoner2_1
	class Item_U_C_Commoner2_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Commoner2_2
	class Item_U_C_Commoner2_3: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Commoner2_3
	class Item_U_C_PriestBody: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_PriestBody
	class Item_U_C_Poor_shorts_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poor_shorts_1
	class Item_U_C_Poor_shorts_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Poor_shorts_2
	class Item_U_C_Commoner_shorts: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_Commoner_shorts
	class Item_U_C_ShirtSurfer_shorts: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_ShirtSurfer_shorts
	class Item_U_C_TeeSurfer_shorts_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_TeeSurfer_shorts_1
	class Item_U_C_TeeSurfer_shorts_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_C_TeeSurfer_shorts_2
	class Item_B_UavTerminal: Item_Base_F
		vehicleClass = "Items";
		class TransportItems
			class B_UavTerminal
	class Item_O_UavTerminal: Item_B_UavTerminal
		class TransportItems
			class O_UavTerminal
	class Item_I_UavTerminal: Item_B_UavTerminal
		class TransportItems
			class I_UavTerminal
	class Item_muzzle_snds_H: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class muzzle_snds_H
	class Item_muzzle_snds_L: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class muzzle_snds_L
	class Item_muzzle_snds_M: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class muzzle_snds_M
	class Item_muzzle_snds_B: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class muzzle_snds_B
	class Item_muzzle_snds_H_MG: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class muzzle_snds_H_MG
	class Item_optic_Arco: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_Arco
	class Item_optic_Hamr: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_Hamr
	class Item_optic_Aco: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_Aco
	class Item_optic_ACO_grn: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_ACO_grn
	class Item_optic_Aco_smg: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_Aco_smg
	class Item_optic_ACO_grn_smg: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_ACO_grn_smg
	class Item_optic_Holosight: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_Holosight
	class Item_optic_Holosight_smg: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_Holosight_smg
	class Item_optic_SOS: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_SOS
	class Item_acc_flashlight: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class acc_flashlight
	class Item_acc_pointer_IR: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class acc_pointer_IR
	class Item_acc_flashlight_pistol: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class acc_flashlight_pistol
	class Item_optic_MRCO: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_MRCO
	class Item_muzzle_snds_acp: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class muzzle_snds_acp
	class Item_optic_DMS: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_DMS
	class Item_optic_Yorris: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_Yorris
	class Item_optic_MRD: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_MRD
	class Item_optic_NVS: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_NVS
	class Item_optic_Nightstalker: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_Nightstalker
	class Item_optic_tws: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_tws
	class Item_optic_tws_mg: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_tws_mg
	class Item_optic_LRPS: Item_Base_F
		vehicleClass = "WeaponAccessories";
		class TransportItems
			class optic_LRPS
	class Item_U_B_CTRG_1: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CTRG_1
	class Item_U_B_CTRG_2: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CTRG_2
	class Item_U_B_CTRG_3: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_CTRG_3
	class Item_U_B_survival_uniform: Item_Base_F
		vehicleClass = "ItemsUniforms";
		class TransportItems
			class U_B_survival_uniform
	class Vest_V_PlateCarrier_Kerry: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrier_Kerry
	class Vest_V_PlateCarrierL_CTRG: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrierL_CTRG
	class Vest_V_PlateCarrierH_CTRG: Vest_Base_F
		vehicleClass = "ItemsVests";
		class TransportItems
			class V_PlateCarrierH_CTRG
	class Headgear_H_HelmetB_grass: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_grass
	class Headgear_H_HelmetB_snakeskin: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_snakeskin
	class Headgear_H_HelmetB_desert: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_desert
	class Headgear_H_HelmetB_black: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_black
	class Headgear_H_HelmetB_sand: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_sand
	class Headgear_H_HelmetB_light_grass: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_light_grass
	class Headgear_H_HelmetB_light_snakeskin: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_light_snakeskin
	class Headgear_H_HelmetB_light_desert: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_light_desert
	class Headgear_H_HelmetB_light_black: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_light_black
	class Headgear_H_HelmetB_light_sand: Headgear_Base_F
		vehicleClass = "ItemsHeadgear";
		class TransportItems
			class H_HelmetB_light_sand
	class Weapon_Empty: Weapon_Base_F
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons{};
		class TransportMagazines{};
class CfgNonAIVehicles
	class ProxyLeftHand;
	class ProxyDalekohled_Proxy: ProxyLeftHand{};
	class ProxyBinoculars: ProxyLeftHand{};
	class ProxyDriver;
	class ProxyParasutista: ProxyDriver{};
	class ProxyFlag;
	class ProxyPlane_Flag_F: ProxyFlag
	class ProxyPlane_Flag_big_F: ProxyFlag
	class ProxyGoggles;
	class ProxyNVG_Proxy: ProxyGoggles
	class ProxyNVG: ProxyGoggles
	class ProxyNVG_Head: ProxyGoggles
	class ProxyNVG_Head_Big: ProxyGoggles
	class ProxyNVG_Head_R: ProxyGoggles
	class ProxyNVG_Head_C: ProxyGoggles
	class ProxyNVG_Head_S: ProxyGoggles
	class ProxyWeapon;
	class ProxyRadio_proxy: ProxyWeapon
	class ProxyHeadGear_proxy: ProxyWeapon
	class ProxyMissile_AT_03_F: ProxyWeapon
	class ProxyBomb_01_F: ProxyWeapon
	class ProxyBomb_02_F: ProxyWeapon
	class ProxyMissile_AA_02_F: ProxyWeapon
	class ProxyMissile_AT_02_F: ProxyWeapon
	class ProxyBomb_03_F: ProxyWeapon
	class ProxyBomb_04_F: ProxyWeapon
	class ProxyMissile_AA_03_F: ProxyWeapon
	class ProxyMissile_AA_04_F: ProxyWeapon
	class ProxyMissile_AGM_01_F: ProxyWeapon
	class ProxyMissile_AGM_02_F: ProxyWeapon
	class ProxyRocket_03_AP_F: ProxyWeapon
	class ProxyRocket_03_FL_F: ProxyWeapon
	class ProxyRocket_03_HE_F: ProxyWeapon
	class ProxyRocket_04_AP_F: ProxyWeapon
	class ProxyRocket_04_FL_F: ProxyWeapon
	class ProxyRocket_04_HE_F: ProxyWeapon
	class ProxyPylonPod_3x_Missile_AGM_02_F: ProxyWeapon
class SlotInfo;
class CowsSlot: SlotInfo
class MuzzleSlot: SlotInfo
class PointerSlot: SlotInfo
