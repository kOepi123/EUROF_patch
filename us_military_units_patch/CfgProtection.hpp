// handles the armor values for helmets and vests

class Default;
	class ItemCore: Default{};
	class UniformItem;
	class HeadgearItem;
	class VestItem;
	class Uniform_Base;
	
	class usm_bdu_w: Uniform_Base
	{
		displayName = "BDUs, blouse/trousers, woodland";
		class ItemInfo: UniformItem
		{
			mass = 31;
		};
	};
	class usm_bdu_cap_wdl: ItemCore
	{
		weaponPoolAvailable = 1;
		displayName = "BDU cover, woodland";
		class ItemInfo: HeadgearItem
		{
			mass = 3.1;
			allowedSlots[] = {701,801,901};
			armor = 0;
			passThrough = 1;
		};
	};
	class usm_bdu_boonie_wdl: ItemCore
	{
		weaponPoolAvailable = 1;
		displayName = "BDU boonie, woodland";
		class ItemInfo: HeadgearItem
		{
			mass = 3.1;
			allowedSlots[] = {701,801,901};
			armor = 0;
			passThrough = 1;
		};
	};
	class usm_helmet_pasgt_w: ItemCore
	{
		weaponPoolAvailable = 1;
		displayName = "Helmet, PASGT, woodland";
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			allowedSlots[] = {701,901};
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
	class usm_helmet_cvc: ItemCore
	{
		weaponPoolAvailable = 1;
		displayName = "Helmet, CVC";
		class ItemInfo: HeadgearItem
		{
			mass = 25;
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
		class ItemInfo: VestItem
		{
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
	class usm_vest_pasgtdes: ItemCore
	{
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, Desert cover";
		class ItemInfo: VestItem
		{
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
	class usm_vest_pasgtdcu: ItemCore
	{
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, DCU cover2";
		class ItemInfo: VestItem
		{
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
	class usm_vest_rba: ItemCore
	{
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, RBA, woodland";
		class ItemInfo: VestItem
		{
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