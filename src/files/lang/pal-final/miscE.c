#include <ultra64.h>

char *lang[] = {
	/*  0*/ "E R R O R\n",
	/*  1*/ "No briefing for this mission\n",
	/*  2*/ "\n",
	/*  3*/ "Objective",
	/*  4*/ "Completed\n",
	/*  5*/ "Incomplete\n",
	/*  6*/ "Failed\n",
	/*  7*/ "One minute left.\n",
	/*  8*/ "OBJECTIVES FAILED - abort mission.\n",
	/*  9*/ "Guard Greeting\n",
	/* 10*/ "What's that gun?\n",
	/* 11*/ "Don't point that gun at me.\n",
	/* 12*/ "S/MPS",
	/* 13*/ "H/M",
	/* 14*/ "Y/D",
	/* 15*/ "P/D",
	/* 16*/ "CI 2023",
	/* 17*/ "YKK: 95935",
	/* 18*/ "CAMSPY",
	/* 19*/ "MODEL 1.2",
	/* 20*/ "GYROSTAT",
	/* 21*/ "Meat",
	/* 22*/ "Easy",
	/* 23*/ "Normal",
	/* 24*/ "Hard",
	/* 25*/ "Perfect",
	/* 26*/ "Dark",
	/* 27*/ "MeatSim",
	/* 28*/ "EasySim",
	/* 29*/ "NormalSim",
	/* 30*/ "HardSim",
	/* 31*/ "PerfectSim",
	/* 32*/ "DarkSim",
	/* 33*/ "PeaceSim",
	/* 34*/ "ShieldSim",
	/* 35*/ "RocketSim",
	/* 36*/ "KazeSim",
	/* 37*/ "FistSim",
	/* 38*/ "PreySim",
	/* 39*/ "CowardSim",
	/* 40*/ "JudgeSim",
	/* 41*/ "FeudSim",
	/* 42*/ "SpeedSim",
	/* 43*/ "TurtleSim",
	/* 44*/ "VengeSim",
	/* 45*/ "MeatSim:  This is the easiest of all the simulants to defeat and is, therefore, the best choice for the beginner.  It is not very intelligent, and its shooting skills are very poor.\n",
	/* 46*/ "EasySim:  This simulant has basic skills and intelligence, but it can still be dangerous.\n",
	/* 47*/ "NormalSim:  This simulant is as skilled as the average human player.\n",
	/* 48*/ "HardSim:  This simulant is as skilled as a good human player.\n",
	/* 49*/ "PerfectSim: The ultimate adversary, the most intelligent and skilled simulant.  Most players will eventually want to use PerfectSim all the time as their skills improve.\n",
	/* 50*/ "DarkSim: Prototype cyborg developed by dataDyne to counteract Carrington operatives.  Remember that this simulant, unlike all the others, is not human.  This means that it may be able to do things which a human cannot.\n",
	/* 51*/ "PeaceSim:  These simulants are scientists who protest the use of weapons.  They will go around the level hunting for guns that are lying around and hoard them so that players cannot use them.  Of course, if you were to shoot them, they might just drop a few!\n",
	/* 52*/ "ShieldSim:  Always goes for maximum shield protection.  If this simulant loses any shield energy, it will go and search for a new shield.  Not much use if there are no shields on the level!\n",
	/* 53*/ "RocketSim:  This simulant loves to see things blow up.  It prefers weapons which make big explosions over conventional handguns or automatics.  This also extends to weapons which have explosive secondary functions!\n",
	/* 54*/ "KazeSim:  This simulant will stop at nothing to destroy its target.  It is very aggressive and never keeps its distance - even if it's holding a grenade!  Be very careful of an adversary who is not afraid to die.\n",
	/* 55*/ "FistSim:  This simulant protests the use of weapons in a similar way to the PeaceSims.  However, it has no such reservations when it comes to unarmed combat.  It will always try to use its fists to attack or disarm its opponent.\n",
	/* 56*/ "PreySim:  This simulant prefers to prey on the weak in order to get easier kills.  It will look for players who have just respawned, have an inferior weapon, or are low on health.\n",
	/* 57*/ "CowardSim:  This simulant does not really want to fight and will try to survive by running away.  It may sometimes attack, but only if the opponent has an inferior weapon.  Draw out a better gun or shoot it, and it will run away!\n",
	/* 58*/ "JudgeSim:  This simulant has a strong sense of justice and despises the tactics of the PreySim.  It will always try to kill the winning player in order to even up the score.\n",
	/* 59*/ "FeudSim:  Once this simulant picks a target, that player had better watch out!  A FeudSim will pursue the player until the game is over!  Even if it is killed, it will bear its grudge.\n",
	/* 60*/ "SpeedSim:  These simulants have been trained for speed.  They can easily outrun a human player, so it's no use  running away from a SpeedSim unless you know some good shortcuts!\n",
	/* 61*/ "TurtleSim:  This simulant wears a prototype shield generator developed by dataDyne scientists.  The generator projects a protective shield around its host which has twice the strength of a normal shield.  Unfortunately, this restricts the host's movement, so it can only move at a slow pace.  TurtleSims carry this shield as standard even if there are no shields on the level.\n",
	/* 62*/ "VengeSim:  Be careful if you shoot or kill a VengeSim because it always attacks the player who last killed it.",
	/* 63*/ "Dark Combat",
	/* 64*/ "Skedar Mystery",
	/* 65*/ "CI Operative",
	/* 66*/ "dataDyne Action",
	/* 67*/ "Maian Tears",
	/* 68*/ "Alien Conflict",
	/* 69*/ "Carrington Institute",
	/* 70*/ "dD Central",
	/* 71*/ "dD Central X",
	/* 72*/ "dD Research",
	/* 73*/ "dD Research X",
	/* 74*/ "dD Extraction",
	/* 75*/ "dD Extraction X",
	/* 76*/ "Carrington Villa",
	/* 77*/ "Carrington Villa X",
	/* 78*/ "Chicago",
	/* 79*/ "Chicago X",
	/* 80*/ "G5 Building",
	/* 81*/ "G5 Building X",
	/* 82*/ "A51 Infiltration",
	/* 83*/ "A51 Infiltration X",
	/* 84*/ "A51 Rescue",
	/* 85*/ "A51 Rescue X",
	/* 86*/ "A51 Escape",
	/* 87*/ "A51 Escape X",
	/* 88*/ "Air Base",
	/* 89*/ "Air Base X",
	/* 90*/ "Air Force One",
	/* 91*/ "Air Force One X",
	/* 92*/ "Crash Site",
	/* 93*/ "Crash Site X",
	/* 94*/ "Pelagic II",
	/* 95*/ "Pelagic II X",
	/* 96*/ "Deep Sea",
	/* 97*/ "Deep Sea X",
	/* 98*/ "Institute Defense",
	/* 99*/ "Institute Defense X",
	/*100*/ "Attack Ship",
	/*101*/ "Attack Ship X",
	/*102*/ "Skedar Ruins",
	/*103*/ "Skedar Ruins X",
	/*104*/ "End Credits",
	/*105*/ "Random\n",
	/*106*/ "Select All\n",
	/*107*/ "Select None\n",
	/*108*/ "Randomize\n",
	/*109*/ "Weapon\n",
	/*110*/ "Function\n",
	/*111*/ "Orders\n",
	/*112*/ "No Weapon\n",
	/*113*/ "Pick Target\n",
	/*114*/ "Follow\n",
	/*115*/ "Attack\n",
	/*116*/ "Defend\n",
	/*117*/ "Hold\n",
	/*118*/ "Normal\n",
	/*119*/ "Download\n",
	/*120*/ "Get Case\n",
	/*121*/ "Tag Box\n",
	/*122*/ "Killed by",
	/*123*/ "Killed",
	/*124*/ "Beginner:21\n",
	/*125*/ "Trainee:20\n",
	/*126*/ "Amateur:19\n",
	/*127*/ "Rookie:18\n",
	/*128*/ "Novice:17\n",
	/*129*/ "Trooper:16\n",
	/*130*/ "Agent:15\n",
	/*131*/ "Star Agent:14\n",
	/*132*/ "Special Agent:13\n",
	/*133*/ "Expert:12\n",
	/*134*/ "Veteran:11\n",
	/*135*/ "Professional:10\n",
	/*136*/ "Dangerous:9\n",
	/*137*/ "Deadly:8\n",
	/*138*/ "Killer:7\n",
	/*139*/ "Assassin:6\n",
	/*140*/ "Lethal:5\n",
	/*141*/ "Elite:4\n",
	/*142*/ "Invincible:3\n",
	/*143*/ "Near Perfect:2\n",
	/*144*/ "Perfect:1\n",
	/*145*/ "DARTAMMO",
	/*146*/ "MODEL 1.4",
	/*147*/ "JM: 201172",
	/*148*/ "Save Case\n",
	/*149*/ "Def Hill\n",
	/*150*/ "Hold Hill\n",
	/*151*/ "Get Case\n",
	/*152*/ "Pop Cap\n",
	/*153*/ "Protect\n",
	/*154*/ "All Simulants\n",
	/*155*/ "MODEL 1.3",
	/*156*/ "BNC: 15877",
	/*157*/ "Not enough room to launch ",
	/*158*/ "GOAL TARGETS:",
	/*159*/ "GOAL SCORE:",
	/*160*/ "MIN ACCURACY:",
	/*161*/ "FIRE TO START\n",
	/*162*/ "GET READY!\n",
	/*163*/ "LIMIT:",
	/*164*/ "ZONE 3\n",
	/*165*/ "ZONE 2\n",
	/*166*/ "ZONE 1\n",
	/*167*/ "BULL'S-EYE\n",
	/*168*/ "EXPLODED\n",
	/*169*/ "Elvis is dead.\n",
	/*170*/ "Style 1",
	/*171*/ "Style 2",
	/*172*/ "Style 3",
	/*173*/ "Style 4",
	/*174*/ "Blonde",
	/*175*/ "Black",
	/*176*/ "Auburn",
	/*177*/ "Blue Rinse",
	/*178*/ "Player",
	/*179*/ "",
	/*180*/ "Identify\n",
	/*181*/ "unused",
	/*182*/ "Challenges\n",
	/*183*/ "Load/Preset Games\n",
	/*184*/ "Quick Start\n",
	/*185*/ "Advanced Setup\n",
	/*186*/ "Combat Simulator\n",
	/*187*/ "Carrington Institute\n",
	/*188*/ "Team Score\n",
	/*189*/ "Finished Setup\n",
	/*190*/ "Player 1 Team\n",
	/*191*/ "Player 2 Team\n",
	/*192*/ "Player 3 Team\n",
	/*193*/ "Player 4 Team\n",
	/*194*/ "Number Of Simulants\n",
	/*195*/ "Simulants Per Team\n",
	/*196*/ "Simulant Difficulty\n",
	/*197*/ "Start Game\n",
	/*198*/ "Drop Out\n",
	/*199*/ "Player Settings\n",
	/*200*/ "Game Settings\n",
	/*201*/ "Quick Go\n",
	/*202*/ "Ready!\n",
	/*203*/ "Quick Team\n",
	/*204*/ "Players Only\n",
	/*205*/ "Players and Simulants\n",
	/*206*/ "Player Teams\n",
	/*207*/ "Players vs. Simulants\n",
	/*208*/ "Player-Simulant Teams\n",
	/*209*/ "DRUGSPY",
	/*210*/ "BOMBSPY",
	/*211*/ "Replay Previous Mission\n",
	/*212*/ "Holograph\n",
	/*213*/ "Aggressive\n",
	/*214*/ "Passive\n",
	/*215*/ "Perfect Buddies\n",
	/*216*/ "Stealth\n",
	/*217*/ NULL,
	/*218*/ NULL,
	/*219*/ NULL,
};
