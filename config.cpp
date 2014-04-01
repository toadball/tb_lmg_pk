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
		class WeaponSlotsInfo {
			class CowsSlot;
			class MuzzleSlot;
			class PointerSlot;
		}; 
	};
	class tb_lmg_pk_base : LMG_Zafir_F {
		displayName = "PKP Pecheneg";
		picture = "\tb_lmg_pk\data\pkp_ca.paa";
		magazines[] = {"100Rnd_762x54_Box","100Rnd_762x54_Box_Tracer"};
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
			begin1[] = {"tb_lmg_pk\data\sounds\beltmachine_08_PK", 1.25893, 1, 1200};
			begin2[] = {"tb_lmg_pk\data\sounds\beltmachine_08_PK", 1.25893, 1, 1200};
			closure1[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_3", 0.75, 1, 10};
			closure2[] = {"A3\sounds_f\weapons\zafir\zafir_sfx_4", 0.75, 1, 10};
			reloadTime = 0.08;
		};
		class close: FullAuto {
			airateoffire = 0.5;
			airateoffiredistance = 50;
			burst = 10;
			maxrange = 50;
			maxrangeprobab = 0.04;
			midrange = 30;
			midrangeprobab = 0.7;
			minrange = 0;
			minrangeprobab = 0.05;
			showtoplayer = 0;
		};
		class short: close {
			airateoffire = 2;
			airateoffiredistance = 300;
			burst = 8;
			maxrange = 300;
			maxrangeprobab = 0.04;
			midrange = 150;
			midrangeprobab = 0.7;
			minrange = 50;
			minrangeprobab = 0.05;
		};
		class medium: close {
			airateoffire = 4;
			airateoffiredistance = 600;
			burst = 5;
			maxrange = 600;
			maxrangeprobab = 0.1;
			midrange = 400;
			midrangeprobab = 0.6;
			minrange = 200;
			minrangeprobab = 0.05;
		};
		class far_optic1: close {
			airateoffire = 9;
			airateoffiredistance = 900;
			burst = 3;
			maxrange = 700;
			maxrangeprobab = 0.01;
			midrange = 550;
			midrangeprobab = 0.5;
			minrange = 350;
			minrangeprobab = 0.04;
			requiredoptictype = 1;
			showtoplayer = 0;
		};
		class far_optic2: far_optic1 {
			autofire = 0;
			burst = 1;
			maxrange = 1000;
			maxrangeprobab = 0.01;
			midrange = 800;
			midrangeprobab = 0.5;
			minrange = 400;
			minrangeprobab = 0.05;
			requiredoptictype = 2;
		};		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 99;
			class MuzzleSlot: MuzzleSlot {compatibleitems[] = {};};
			class CowsSlot: CowsSlot {compatibleitems[] = {};};
			class PointerSlot: PointerSlot {compatibleitems[] = {};};
		};	

		};
	class tb_lmg_pkp : tb_lmg_pk_base {
		scope = 2;
	};
};

class CfgMagazines {
	class 150Rnd_762x51_Box;
	class 100Rnd_762x54_Box : 150Rnd_762x51_Box {
		displayname = "7.62mmR 100Rnd Box";
		displaynameshort = "7.62x54mmR";
		descriptionshort = "Caliber: 7.62x54mmR<br/>Rounds: 100<br />Used in: PKP/PKM";
		ammo = "tb_B_762x54";
		tracersevery = 0;
		lastroundstracer = 4;
		initspeed = 825;
		picture = "\tb_lmg_pk\data\m_pk_ca.paa";
	};
	class 100Rnd_762x54_Box_Tracer : 100Rnd_762x54_Box {
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