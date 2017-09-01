// this file extracted from bohemia files
//			class PointerSlot: PointerSlot{};

class CfgPatches 
{
			class eurof_BI_equipment_patch
			{
						requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Weapons_F_Acc", "A3_Sounds_F_Mark" };
						units[] = 
						{
//							"I_Mortar_01_weapon_F",	"I_Mortar_01_support_F", "I_HMG_01_weapon_F", "I_HMG_01_support_F", "GMG_TriPod","I_GMG_01_weapon_F"
						};
						weapons[] = // scope = 0 weapon seem not to go in here, scope = 1 dont seem to go in here either, base clsses can go in here
						{};
						magazines[] = 
						{};
						version = "V1.0";
						author = "kOepi";
			};
};

class SlotInfo;
class CowsSlot: SlotInfo {};
class MuzzleSlot: SlotInfo {};
class PointerSlot: SlotInfo {};
class Mode_SemiAuto {};
class Mode_Burst: Mode_SemiAuto {};
class Mode_FullAuto: Mode_SemiAuto {};
class WeaponSlotsInfo;

class CfgWeapons
{
	class Default;
	class MGunCore;
	class CannonCore;
	class LauncherCore;
	class RocketPods: LauncherCore {};
	class Launcher: LauncherCore {};
	class Launcher_Base_F: Launcher {};
	class GrenadeCore;
	class GrenadeLauncher: Default {};
	class UGL_F: GrenadeLauncher {};
	class RifleCore: Default{};
	class Rifle: RifleCore { class WeaponSlotsInfo: WeaponSlotsInfo	{ allowedSlots[] = {701,901,931,930}; }; };			// this line aims to allow rifles to go into launcher slot
	class Rifle_Base_F: Rifle { class WeaponSlotsInfo: WeaponSlotsInfo	{ allowedSlots[] = {701,901,931,930}; }; };			// this line aims to allow rifles to go into launcher slot
	class Rifle_Short_Base_F: Rifle_Base_F { class WeaponSlotsInfo: WeaponSlotsInfo	{ allowedSlots[] = {701,901,931,930}; }; };			// this line aims to allow rifles to go into launcher slot
	class Rifle_Long_Base_F: Rifle_Base_F { class WeaponSlotsInfo: WeaponSlotsInfo	{ allowedSlots[] = {701,901,931}; }; };			// this line aims to allow rifles to go into launcher slot
	class HandGunBase: Rifle {};
	class PistolCore: Default{};
	class Pistol: PistolCore {};
	class Pistol_Base_F: Pistol {};
	class Throw: GrenadeLauncher {};
	class Put: Default {};
	class ItemCore: Default {};
	class ItemWatch: ItemCore { class ItemInfo { mass = 1.9; }; };
	class ItemCompass: ItemCore	{ class ItemInfo { mass = 2.5; }; };
	class ItemGPS: ItemCore { scopearsenal = 0; class ItemInfo { mass = 20; }; };
	class ItemRadio: ItemCore { scopearsenal = 0; };
	class ItemMap: ItemCore	{};
	class DetectorCore;
	class MineDetector: DetectorCore {};
	class Binocular: Default { class WeaponSlotsInfo	{ mass = 13.8; }; };
	class Rangefinder: Binocular { scopearsenal = 0; class WeaponSlotsInfo { mass = 43.2; }; };	// Melios GVS-5 4,3125 lb
	class NVGoggles: Binocular { scopearsenal = 0; class ItemInfo	{ mass = 12.5; }; };		// PVS-14 with batteries	350 m detection radios, 300 m recognition radius, 40° FOV
	class NVGoggles_OPFOR: NVGoggles { scopearsenal = 0; };
	class NVGoggles_INDEP: NVGoggles { scopearsenal = 0; };
	class Integrated_NVG_F: NVGoggles { scopearsenal = 0; };
	class Integrated_NVG_TI_0_F: NVGoggles { scopearsenal = 0;};
	class Integrated_NVG_TI_1_F: NVGoggles { scopearsenal = 0; };
	class Laserdesignator: Binocular { scopearsenal = 0; class WeaponSlotsInfo { mass = 20; }; };
	class Laserdesignator_02: Laserdesignator{};
	class Laserdesignator_03: Laserdesignator{};
	
				#include "CfgWeapons.hpp"			// works fine, 2 weapons over
};

				#include "CfgMagazines.hpp"			// does not have any effect for some reason, creates no error
				
class CfgVehicles
{
/*	

	class ReammoBox_F;
//	class ReammoBox;
	class Weapon_Base_F;
	class Pistol_Base_F;
	class Launcher_Base_F;
	class Vest_Camo_Base: ItemCore {};
	class Vest_NoCamo_Base: ItemCore {};
	class All;
	class Strategic;
//	class WeaponHolder;

*/
//	class Default;
//	class ItemCore: Default {};
		
	class ReammoBox_F;
	class ThingX;
	class Item_Base_F;
//	class InventoryItem_Base_F;
	class ContainerSupply;
//	class Headgear_Base_F;
	class H_HelmetB;
	class Vest_Base_F;
//	class Vest_Camo_Base;
//	class Vest_NoCamo_Base;
	class Bag_Base;
					
				#include "CfgBackpacks.hpp"
//				#include "CfgVests.hpp"
//				#include "CfgUniforms.hpp"

};