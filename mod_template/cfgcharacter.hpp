// this file can modify different type of characters, civilian, soldier, special forces in stamina etc.	
	
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
