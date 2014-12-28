class CfgPatches {
	class tb_lmg_pk	{
		units[] = {};
		weapons[] = {"tb_lmg_pkp"};
		requiredVersion = 0.10;
		requiredAddons[] = {"A3_Weapons_F_beta"};
	};
};

class CfgWeapons {
	class Rifle_Long_Base_F;
	class LMG_Zafir_F: Rifle_Long_Base_F {
		class FullAuto;
		class close;
		class short;
		class medium;
		class far_optic1;
		class far_optic2;
		class WeaponSlotsInfo;
	};
	class tb_lmg_pk_base : LMG_Zafir_F {
		displayName = "PKP Pecheneg";
		picture = "\tb_lmg_pk\data\pkp_ca.paa";
		magazines[] = {"tb_100Rnd_762x54_Box","tb_100Rnd_762x54_Box_Tracer"};
		model = "tb_lmg_pk\Pecheneg";
		modes[] = {	"FullAuto","close","short","medium","far_optic1","far_optic2"};
		discretedistance[] = {200, 300, 400, 500, 600, 700};
		dexterity = 1.68;
		scope = 0;
		displaynameshort = "PKP";
		handAnim[] = {};
		modelOptics = "-";
		weaponinfotype = "RscWeaponZeroing";
		class FullAuto : FullAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType {
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3",0.9,1,10};
				closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4",0.9,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"tb_lmg_pk\data\sounds\beltmachine_08_PK",1,1,1200};
				begin2[] = {"tb_lmg_pk\data\sounds\beltmachine_08_PK",1,1,1200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-25",0.891251,1,200};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-26",0.891251,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};		
			reloadTime = 0.08;
		};
		class close: FullAuto {
			airateoffire = 0.5;
			airateoffiredistance = 50;
			burst = 10;
			minRange = 1;
			minRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.04;
			showtoplayer = 0;
		};
		class short: close {
			airateoffire = 2;
			airateoffiredistance = 300;
			burst = 8;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close {
			airateoffire = 4;
			airateoffiredistance = 600;
			burst = 5;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class long: close {
			airateoffire = 9;
			airateoffiredistance = 900;
			burst = 3;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.6;
			maxRange = 850;
			maxRangeProbab = 0.1;
			requiredoptictype = 1;
			showtoplayer = 0;
		};	
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 99;
			class MuzzleSlot {compatibleitems[] = {};};
			class CowsSlot {compatibleitems[] = {};};
			class PointerSlot {compatibleitems[] = {};};
		};	
	};
	class tb_lmg_pkp : tb_lmg_pk_base {
		scope = 2;
	};
};

class CfgMagazines {
	class 150Rnd_762x51_Box;
	class tb_100Rnd_762x54_Box : 150Rnd_762x51_Box {
		displayname = "7.62mmR 100Rnd Box";
		displaynameshort = "7.62x54mmR";
		descriptionshort = "Caliber: 7.62x54mmR<br/>Rounds: 100<br />Used in: PKP/PKM";
		count = 100;
		ammo = "tb_B_762x54";
		tracersevery = 0;
		lastroundstracer = 4;
		initspeed = 825;
		picture = "\tb_lmg_pk\data\m_pk_ca.paa";
	};
	class tb_100Rnd_762x54_Box_Tracer : tb_100Rnd_762x54_Box {
		displayname = "7.62mmR 100Rnd Tracer Box";
		displaynameshort = "Tracer";
		descriptionshort = "Caliber: 7.62x54mmR Tracer<br/>Rounds: 100<br />Used in: PKP/PKM";
		tracersevery = 4;	
		lastroundstracer = 4;
	};

};

class CfgAmmo {
	class B_762x51_Ball;
	class tb_B_762x54 : B_762x51_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		typicalspeed = 750;
		deflecting = 20;
	};
};