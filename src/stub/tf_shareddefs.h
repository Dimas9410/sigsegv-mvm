#ifndef _INCLUDE_SIGSEGV_STUB_TF_SHAREDDEFS_H_
#define _INCLUDE_SIGSEGV_STUB_TF_SHAREDDEFS_H_


#include "stub/baseentity.h"


enum : int32_t
{
	TF_TEAM_RED  = 2,
	TF_TEAM_BLUE = 3,
	
	TF_TEAM_HALLOWEEN_BOSS = 5,
	
	TF_TEAM_PVE_DEFENDERS = TF_TEAM_RED,
	TF_TEAM_PVE_INVADERS  = TF_TEAM_BLUE,
};

enum : int32_t
{
	TF_WEAPON_NONE = 0,
	TF_WEAPON_BAT,
	TF_WEAPON_BAT_WOOD,
	TF_WEAPON_BOTTLE,
	TF_WEAPON_FIREAXE,
	TF_WEAPON_CLUB,
	TF_WEAPON_CROWBAR,
	TF_WEAPON_KNIFE,
	TF_WEAPON_FISTS,
	TF_WEAPON_SHOVEL,
	TF_WEAPON_WRENCH,
	TF_WEAPON_BONESAW,
	TF_WEAPON_SHOTGUN_PRIMARY,
	TF_WEAPON_SHOTGUN_SOLDIER,
	TF_WEAPON_SHOTGUN_HWG,
	TF_WEAPON_SHOTGUN_PYRO,
	TF_WEAPON_SCATTERGUN,
	TF_WEAPON_SNIPERRIFLE,
	TF_WEAPON_MINIGUN,
	TF_WEAPON_SMG,
	TF_WEAPON_SYRINGEGUN_MEDIC,
	TF_WEAPON_TRANQ,
	TF_WEAPON_ROCKETLAUNCHER,
	TF_WEAPON_GRENADELAUNCHER,
	TF_WEAPON_PIPEBOMBLAUNCHER,
	TF_WEAPON_FLAMETHROWER,
	TF_WEAPON_GRENADE_NORMAL,
	TF_WEAPON_GRENADE_CONCUSSION,
	TF_WEAPON_GRENADE_NAIL,
	TF_WEAPON_GRENADE_MIRV,
	TF_WEAPON_GRENADE_MIRV_DEMOMAN,
	TF_WEAPON_GRENADE_NAPALM,
	TF_WEAPON_GRENADE_GAS,
	TF_WEAPON_GRENADE_EMP,
	TF_WEAPON_GRENADE_CALTROP,
	TF_WEAPON_GRENADE_PIPEBOMB,
	TF_WEAPON_GRENADE_SMOKE_BOMB,
	TF_WEAPON_GRENADE_HEAL,
	TF_WEAPON_GRENADE_STUNBALL,
	TF_WEAPON_GRENADE_JAR,
	TF_WEAPON_GRENADE_JAR_MILK,
	TF_WEAPON_PISTOL,
	TF_WEAPON_PISTOL_SCOUT,
	TF_WEAPON_REVOLVER,
	TF_WEAPON_NAILGUN,
	TF_WEAPON_PDA,
	TF_WEAPON_PDA_ENGINEER_BUILD,
	TF_WEAPON_PDA_ENGINEER_DESTROY,
	TF_WEAPON_PDA_SPY,
	TF_WEAPON_BUILDER,
	TF_WEAPON_MEDIGUN,
	TF_WEAPON_GRENADE_MIRVBOMB,
	TF_WEAPON_FLAMETHROWER_ROCKET,
	TF_WEAPON_GRENADE_DEMOMAN,
	TF_WEAPON_SENTRY_BULLET,
	TF_WEAPON_SENTRY_ROCKET,
	TF_WEAPON_DISPENSER,
	TF_WEAPON_INVIS,
	TF_WEAPON_FLAREGUN,
	TF_WEAPON_LUNCHBOX,
	TF_WEAPON_JAR,
	TF_WEAPON_COMPOUND_BOW,
	TF_WEAPON_BUFF_ITEM,
	TF_WEAPON_PUMPKIN_BOMB,
	TF_WEAPON_SWORD,
	TF_WEAPON_ROCKETLAUNCHER_DIRECTHIT,
	TF_WEAPON_LIFELINE,
	TF_WEAPON_LASER_POINTER,
	TF_WEAPON_DISPENSER_GUN,
	TF_WEAPON_SENTRY_REVENGE,
	TF_WEAPON_JAR_MILK,
	TF_WEAPON_HANDGUN_SCOUT_PRIMARY,
	TF_WEAPON_BAT_FISH,
	TF_WEAPON_CROSSBOW,
	TF_WEAPON_STICKBOMB,
	TF_WEAPON_HANDGUN_SCOUT_SECONDARY,
	TF_WEAPON_SODA_POPPER,
	TF_WEAPON_SNIPERRIFLE_DECAP,
	TF_WEAPON_RAYGUN,
	TF_WEAPON_PARTICLE_CANNON,
	TF_WEAPON_MECHANICAL_ARM,
	TF_WEAPON_DRG_POMSON,
	TF_WEAPON_BAT_GIFTWRAP,
	TF_WEAPON_GRENADE_ORNAMENT_BALL,
	TF_WEAPON_FLAREGUN_REVENGE,
	TF_WEAPON_PEP_BRAWLER_BLASTER,
	TF_WEAPON_CLEAVER,
	TF_WEAPON_GRENADE_CLEAVER,
	TF_WEAPON_STICKY_BALL_LAUNCHER,
	TF_WEAPON_GRENADE_STICKY_BALL,
	TF_WEAPON_SHOTGUN_BUILDING_RESCUE,
	TF_WEAPON_CANNON,
	TF_WEAPON_THROWABLE,
	TF_WEAPON_GRENADE_THROWABLE,
	TF_WEAPON_PDA_SPY_BUILD,
	TF_WEAPON_GRENADE_WATERBALLOON,
	TF_WEAPON_HARVESTER_SAW,
	TF_WEAPON_SPELLBOOK,
	TF_WEAPON_SPELLBOOK_PROJECTILE,
	TF_WEAPON_SNIPERRIFLE_CLASSIC,
	TF_WEAPON_PARACHUTE,
	TF_WEAPON_GRAPPLINGHOOK,
	TF_WEAPON_PASSTIME_GUN,
	TF_WEAPON_CHARGED_SMG,
	TF_WEAPON_BREAKABLE_SIGN,
	TF_WEAPON_ROCKETPACK,
	TF_WEAPON_SLAP,
	TF_WEAPON_JAR_GAS,
	TF_WEAPON_GRENADE_JAR_GAS,
	TF_WEPON_FLAME_BALL, // sigh
	TF_WEAPON_COUNT,
};


enum ETFDmgCustom : int32_t
{
	TF_DMG_CUSTOM_NONE = 0,
	TF_DMG_CUSTOM_HEADSHOT,
	TF_DMG_CUSTOM_BACKSTAB,
	TF_DMG_CUSTOM_BURNING,
	TF_DMG_WRENCH_FIX,
	TF_DMG_CUSTOM_MINIGUN,
	TF_DMG_CUSTOM_SUICIDE,
	TF_DMG_CUSTOM_TAUNTATK_HADOUKEN,
	TF_DMG_CUSTOM_BURNING_FLARE,
	TF_DMG_CUSTOM_TAUNTATK_HIGH_NOON,
	TF_DMG_CUSTOM_TAUNTATK_GRAND_SLAM,
	TF_DMG_CUSTOM_PENETRATE_MY_TEAM,
	TF_DMG_CUSTOM_PENETRATE_ALL_PLAYERS,
	TF_DMG_CUSTOM_TAUNTATK_FENCING,
	TF_DMG_CUSTOM_PENETRATE_NONBURNING_TEAMMATE,
	TF_DMG_CUSTOM_TAUNTATK_ARROW_STAB,
	TF_DMG_CUSTOM_TELEFRAG,
	TF_DMG_CUSTOM_BURNING_ARROW,
	TF_DMG_CUSTOM_FLYINGBURN,
	TF_DMG_CUSTOM_PUMPKIN_BOMB,
	TF_DMG_CUSTOM_DECAPITATION,
	TF_DMG_CUSTOM_TAUNTATK_GRENADE,
	TF_DMG_CUSTOM_BASEBALL,
	TF_DMG_CUSTOM_CHARGE_IMPACT,
	TF_DMG_CUSTOM_TAUNTATK_BARBARIAN_SWING,
	TF_DMG_CUSTOM_AIR_STICKY_BURST,
	TF_DMG_CUSTOM_DEFENSIVE_STICKY,
	TF_DMG_CUSTOM_PICKAXE,
	TF_DMG_CUSTOM_ROCKET_DIRECTHIT,
	TF_DMG_CUSTOM_TAUNTATK_UBERSLICE,
	TF_DMG_CUSTOM_PLAYER_SENTRY,
	TF_DMG_CUSTOM_STANDARD_STICKY,
	TF_DMG_CUSTOM_SHOTGUN_REVENGE_CRIT,
	TF_DMG_CUSTOM_TAUNTATK_ENGINEER_GUITAR_SMASH,
	TF_DMG_CUSTOM_BLEEDING,
	TF_DMG_CUSTOM_GOLD_WRENCH,
	TF_DMG_CUSTOM_CARRIED_BUILDING,
	TF_DMG_CUSTOM_COMBO_PUNCH,
	TF_DMG_CUSTOM_TAUNTATK_ENGINEER_ARM_KILL,
	TF_DMG_CUSTOM_FISH_KILL,
	TF_DMG_CUSTOM_TRIGGER_HURT,
	TF_DMG_CUSTOM_DECAPITATION_BOSS,
	TF_DMG_CUSTOM_STICKBOMB_EXPLOSION,
	TF_DMG_CUSTOM_AEGIS_ROUND,
	TF_DMG_CUSTOM_FLARE_EXPLOSION,
	TF_DMG_CUSTOM_BOOTS_STOMP,
	TF_DMG_CUSTOM_PLASMA,
	TF_DMG_CUSTOM_PLASMA_CHARGED,
	TF_DMG_CUSTOM_PLASMA_GIB,
	TF_DMG_CUSTOM_PRACTICE_STICKY,
	TF_DMG_CUSTOM_EYEBALL_ROCKET,
	TF_DMG_CUSTOM_HEADSHOT_DECAPITATION,
	TF_DMG_CUSTOM_TAUNTATK_ARMAGEDDON,
	TF_DMG_CUSTOM_FLARE_PELLET,
	TF_DMG_CUSTOM_CLEAVER,
	TF_DMG_CUSTOM_CLEAVER_CRIT,
	TF_DMG_CUSTOM_SAPPER_RECORDER_DEATH,
	TF_DMG_CUSTOM_MERASMUS_PLAYER_BOMB,
	TF_DMG_CUSTOM_MERASMUS_GRENADE,
	TF_DMG_CUSTOM_MERASMUS_ZAP,
	TF_DMG_CUSTOM_MERASMUS_DECAPITATION,
	TF_DMG_CUSTOM_CANNONBALL_PUSH,
	TF_DMG_CUSTOM_TAUNTATK_ALLCLASS_GUITAR_RIFF,
	TF_DMG_CUSTOM_THROWABLE,
	TF_DMG_CUSTOM_THROWABLE_KILL,
	TF_DMG_CUSTOM_SPELL_TELEPORT,
	TF_DMG_CUSTOM_SPELL_SKELETON,
	TF_DMG_CUSTOM_SPELL_MIRV,
	TF_DMG_CUSTOM_SPELL_METEOR,
	TF_DMG_CUSTOM_SPELL_LIGHTNING,
	TF_DMG_CUSTOM_SPELL_FIREBALL,
	TF_DMG_CUSTOM_SPELL_MONOCULUS,
	TF_DMG_CUSTOM_SPELL_BLASTJUMP,
	TF_DMG_CUSTOM_SPELL_BATS,
	TF_DMG_CUSTOM_SPELL_TINY,
	TF_DMG_CUSTOM_KART,
	TF_DMG_CUSTOM_GIANT_HAMMER,
	TF_DMG_CUSTOM_RUNE_REFLECT,
	TF_DMG_CUSTOM_DRAGONS_FURY_IGNITE,
	TF_DMG_CUSTOM_DRAGONS_FURY_BONUS_BURNING,
	TF_DMG_CUSTOM_SLAP_KILL,
	TF_DMG_CUSTOM_CROC,
	TF_DMG_CUSTOM_TAUNTATK_GASBLAST,
};

enum : int32_t
{
	TAUNTATK_NONE = 0,
	TAUNTATK_PYRO_HADOUKEN,
	TAUNTATK_HEAVY_EAT,
	TAUNTATK_HEAVY_RADIAL_BUFF,
	TAUNTATK_HEAVY_HIGH_NOON,
	TAUNTATK_SCOUT_DRINK,
	TAUNTATK_SCOUT_GRAND_SLAM,
	TAUNTATK_MEDIC_INHALE,
	TAUNTATK_SPY_FENCING_SLASH_A,
	TAUNTATK_SPY_FENCING_SLASH_B,
	TAUNTATK_SPY_FENCING_STAB,
	TAUNTATK_RPS_KILL,
	TAUNTATK_SNIPER_ARROW_STAB_IMPALE,
	TAUNTATK_SNIPER_ARROW_STAB_KILL,
	TAUNTATK_SOLDIER_GRENADE_KILL,
	TAUNTATK_DEMOMAN_BARBARIAN_SWING,
	TAUNTATK_MEDIC_UBERSLICE_IMPALE,
	TAUNTATK_MEDIC_UBERSLICE_KILL,
	TAUNTATK_FLIP_LAND_PARTICLE,
	TAUNTATK_RPS_PARTICLE,
	TAUNTATK_HIGHFIVE_PARTICLE,
	TAUNTATK_ENGINEER_GUITAR_SMASH,
	TAUNTATK_ENGINEER_ARM_IMPALE,
	TAUNTATK_ENGINEER_ARM_KILL,
	TAUNTATK_ENGINEER_ARM_BLEND,
	TAUNTATK_SOLDIER_GRENADE_KILL_WORMSIGN,
	TAUNTATK_SHOW_ITEM,
	TAUNTATK_MEDIC_RELEASE_DOVES,
	TAUNTATK_PYRO_ARMAGEDDON,
	TAUNTATK_PYRO_SCORCHSHOT,
	TAUNTATK_ALLCLASS_GUITAR_RIFF,
	TAUNTATK_MEDIC_HEROIC_TAUNT,
	TAUNTATK_PYRO_GASBLAST,
};

enum : int32_t
{
	OBJ_DISPENSER         = 0,
	OBJ_TELEPORTER        = 1,
	OBJ_SENTRYGUN         = 2,
	OBJ_ATTACHMENT_SAPPER = 3,
	OBJ_LAST              = 4
};

/* from SourceMod; can't seem to find these elsewhere */
enum : uint32_t
{
	TF_STUNFLAG_SLOWDOWN        = (1 << 0),	/**< activates slowdown modifier */
	TF_STUNFLAG_BONKSTUCK       = (1 << 1),	/**< bonk sound, stuck */
	TF_STUNFLAG_LIMITMOVEMENT   = (1 << 2),	/**< disable forward/backward movement */
	TF_STUNFLAG_CHEERSOUND      = (1 << 3),	/**< cheering sound */
	TF_STUNFLAG_NOSOUNDOREFFECT = (1 << 5),	/**< no sound or particle */
	TF_STUNFLAG_THIRDPERSON     = (1 << 6),	/**< panic animation */
	TF_STUNFLAG_GHOSTEFFECT     = (1 << 7),	/**< ghost particles */
	
	TF_STUNFLAGS_LOSERSTATE     = TF_STUNFLAG_SLOWDOWN | TF_STUNFLAG_NOSOUNDOREFFECT | TF_STUNFLAG_THIRDPERSON,
	TF_STUNFLAGS_GHOSTSCARE     = TF_STUNFLAG_GHOSTEFFECT | TF_STUNFLAG_THIRDPERSON,
	TF_STUNFLAGS_SMALLBONK      = TF_STUNFLAG_THIRDPERSON | TF_STUNFLAG_SLOWDOWN,
	TF_STUNFLAGS_NORMALBONK     = TF_STUNFLAG_BONKSTUCK,
	TF_STUNFLAGS_BIGBONK        = TF_STUNFLAG_CHEERSOUND | TF_STUNFLAG_BONKSTUCK,
};

enum : int32_t
{
	TF_PROJECTILE_NONE,
	TF_PROJECTILE_BULLET,
	TF_PROJECTILE_ROCKET,
	TF_PROJECTILE_PIPEBOMB,
	TF_PROJECTILE_PIPEBOMB_REMOTE,
	TF_PROJECTILE_SYRINGE,
	TF_PROJECTILE_FLARE,
	TF_PROJECTILE_JAR,
	TF_PROJECTILE_ARROW,
	TF_PROJECTILE_FLAME_ROCKET,
	TF_PROJECTILE_JAR_MILK,
	TF_PROJECTILE_HEALING_BOLT,
	TF_PROJECTILE_ENERGY_BALL,
	TF_PROJECTILE_ENERGY_RING,
	TF_PROJECTILE_PIPE_REMOTE_PRACTICE,
	TF_PROJECTILE_CLEAVER,
	TF_PROJECTILE_STICKY_BALL,
	TF_PROJECTILE_CANNONBALL,
	TF_PROJECTILE_BUILDING_REPAIR_BOLT,
	TF_PROJECTILE_FESTIVE_ARROW,
	TF_PROJECTILE_THROWABLE,
	TF_PROJECTILE_SPELLFIREBALL,
	TF_PROJECTILE_FESTIVE_URINE,
	TF_PROJECTILE_FESTIVE_HEALING_BOLT,
	TF_PROJECTILE_BREADMONSTER_JARATE,
	TF_PROJECTILE_BREADMONSTER_MADMILK,
	TF_PROJECTILE_GRAPPLINGHOOK,
	TF_PROJECTILE_SENTRY_ROCKET,
	TF_PROJECTILE_BREAD_MONSTER,
	TF_PROJECTILE_JAR_GAS,
	TF_PROJECTILE_BALLOFFIRE,
	
	TF_NUM_PROJECTILES,
};

enum loadout_positions_t : int32_t
{
	LOADOUT_POSITION_INVALID   = -1,
	
	LOADOUT_POSITION_PRIMARY   =  0,
	LOADOUT_POSITION_SECONDARY =  1,
	LOADOUT_POSITION_MELEE     =  2,
	LOADOUT_POSITION_UTILITY   =  3,
	LOADOUT_POSITION_BUILDING  =  4,
	LOADOUT_POSITION_PDA       =  5,
	LOADOUT_POSITION_PDA2      =  6,
	LOADOUT_POSITION_HEAD      =  7,
	LOADOUT_POSITION_MISC      =  8,
	LOADOUT_POSITION_ACTION    =  9,
	LOADOUT_POSITION_MISC2     = 10,
	LOADOUT_POSITION_TAUNT     = 11,
	LOADOUT_POSITION_TAUNT2    = 12,
	LOADOUT_POSITION_TAUNT3    = 13,
	LOADOUT_POSITION_TAUNT4    = 14,
	LOADOUT_POSITION_TAUNT5    = 15,
	LOADOUT_POSITION_TAUNT6    = 16,
	LOADOUT_POSITION_TAUNT7    = 17,
	LOADOUT_POSITION_TAUNT8    = 18,
	
	LOADOUT_POSITION_COUNT,
};

enum : int32_t
{
	TF_WPN_TYPE_PRIMARY        =  0,
	TF_WPN_TYPE_SECONDARY      =  1,
	TF_WPN_TYPE_MELEE          =  2,
	TF_WPN_TYPE_GRENADE        =  3,
	TF_WPN_TYPE_BUILDING       =  4,
	TF_WPN_TYPE_PDA            =  5,
	TF_WPN_TYPE_ITEM1          =  6,
	TF_WPN_TYPE_ITEM2          =  7,
	TF_WPN_TYPE_HEAD           =  8,
	TF_WPN_TYPE_MISC           =  9,
	TF_WPN_TYPE_MELEE_ALLCLASS = 10,
	TF_WPN_TYPE_SECONDARY2     = 11,
	TF_WPN_TYPE_PRIMARY2       = 12,
	TF_WPN_TYPE_ITEM3          = 13,
	TF_WPN_TYPE_ITEM4          = 14,
};

enum : int32_t
{
	TF_AMMO_DUMMY = 0,
	TF_AMMO_PRIMARY,
	TF_AMMO_SECONDARY,
	TF_AMMO_METAL,
	TF_AMMO_GRENADES1,
	TF_AMMO_GRENADES2,
	TF_AMMO_GRENADES3,
	TF_AMMO_COUNT,
};

enum : uint32_t
{
	DMG_USE_HITLOCATIONS   = DMG_AIRBOAT,
	DMG_HALF_FALLOFF       = DMG_RADIATION,
	DMG_CRITICAL           = DMG_ACID,
	DMG_RADIUS_MAX         = DMG_ENERGYBEAM,
	DMG_IGNITE             = DMG_PLASMA,
	DMG_USEDISTANCEMOD     = DMG_SLOWBURN,
	DMG_NOCLOSEDISTANCEMOD = DMG_POISON,
	DMG_MELEE              = DMG_BLAST_SURFACE,
	DMG_DONT_COUNT_DAMAGE_TOWARDS_CRIT_RATE = DMG_DISSOLVE,
	
	/* for TakeHealth() calls only: */
	DMG_IGNORE_MAXHEALTH   = DMG_BULLET,
	DMG_IGNORE_DEBUFFS     = DMG_SLASH
};

enum : int32_t
{
	TF_STATE_ACTIVE   = 0,
	TF_STATE_WELCOME  = 1,
	TF_STATE_OBSERVER = 2,
	TF_STATE_DYING    = 3,
	
	TF_STATE_COUNT,
};

enum : uint32_t
{
	TF_ITEM_UNDEFINED    = 0,
	TF_ITEM_CAPTURE_FLAG = (1 << 0),
//	TF_ITEM_HEALTH_KIT   = (1 << 1),
//	TF_ITEM_ARMOR        = (1 << 2),
//	TF_ITEM_AMMO_PACK    = (1 << 3),
//	TF_ITEM_GRENADE_PACK = (1 << 4),
};

/* really belongs in econ_item_constants.h or econ_holidays.h, but whatever */
enum : int32_t
{
	kHoliday_None                            =  0, // name confirmed
	kHoliday_TF2Birthday                     =  1,
	kHoliday_Halloween                       =  2,
	kHoliday_Christmas                       =  3, // name confirmed
	kHoliday_CommunityUpdate                 =  4,
	kHoliday_EOTL                            =  5, // name confirmed
	kHoliday_ValentinesDay                   =  6,
	kHoliday_MeetThePyro                     =  7,
	kHoliday_FullMoon                        =  8,
	kHoliday_HalloweenOrFullMoon             =  9,
	kHoliday_HalloweenOrFullMoonOrValentines = 10,
	kHoliday_AprilFools                      = 11,
};

enum taunts_t
{
	TAUNT_BASE_WEAPON,
	TAUNT_MISC_ITEM,
	TAUNT_SHOW_ITEM,
	TAUNT_LONG,
	TAUNT_SPECIAL,
};

#define TF_FLAGINFO_NONE		0
#define TF_FLAGINFO_STOLEN		(1<<0)
#define TF_FLAGINFO_DROPPED		(1<<1)

#define CONTENTS_REDTEAM CONTENTS_TEAM1
#define CONTENTS_BLUETEAM CONTENTS_TEAM2

enum
{
	TF_COLLISIONGROUP_GRENADES = LAST_SHARED_COLLISION_GROUP,
	TFCOLLISION_GROUP_OBJECT,
	TFCOLLISION_GROUP_OBJECT_SOLIDTOPLAYERMOVEMENT,
	TFCOLLISION_GROUP_COMBATOBJECT,
	TFCOLLISION_GROUP_ROCKETS,
	TFCOLLISION_GROUP_RESPAWNROOMS,
	TFCOLLISION_GROUP_TANK,
	TFCOLLISION_GROUP_ROCKET_BUT_NOT_WITH_OTHER_ROCKETS,
};

#define IN_ATTACK		(1 << 0)
#define IN_JUMP			(1 << 1)
#define IN_DUCK			(1 << 2)
#define IN_FORWARD		(1 << 3)
#define IN_BACK			(1 << 4)
#define IN_USE			(1 << 5)
#define IN_CANCEL		(1 << 6)
#define IN_LEFT			(1 << 7)
#define IN_RIGHT		(1 << 8)
#define IN_MOVELEFT		(1 << 9)
#define IN_MOVERIGHT	(1 << 10)
#define IN_ATTACK2		(1 << 11)
#define IN_RUN			(1 << 12)
#define IN_RELOAD		(1 << 13)
#define IN_ALT1			(1 << 14)
#define IN_ALT2			(1 << 15)
#define IN_SCORE		(1 << 16)   // Used by client.dll for when scoreboard is held down
#define IN_SPEED		(1 << 17)	// Player is holding the speed key
#define IN_WALK			(1 << 18)	// Player holding walk key
#define IN_ZOOM			(1 << 19)	// Zoom key for HUD zoom
#define IN_WEAPON1		(1 << 20)	// weapon defines these bits
#define IN_WEAPON2		(1 << 21)	// weapon defines these bits
#define IN_BULLRUSH		(1 << 22)
#define IN_GRENADE1		(1 << 23)	// grenade 1
#define IN_GRENADE2		(1 << 24)	// grenade 2
#define	IN_ATTACK3		(1 << 25)

#define MVM_CLASS_FLAG_NONE				0
#define MVM_CLASS_FLAG_NORMAL			(1<<0)
#define MVM_CLASS_FLAG_SUPPORT			(1<<1)
#define MVM_CLASS_FLAG_MISSION			(1<<2)
#define MVM_CLASS_FLAG_MINIBOSS			(1<<3)
#define MVM_CLASS_FLAG_ALWAYSCRIT		(1<<4)
#define MVM_CLASS_FLAG_SUPPORT_LIMITED	(1<<5)

typedef enum
{
	AE_INVALID = -1,			// So we have something more succint to check for than '-1'
	AE_EMPTY,
	AE_NPC_LEFTFOOT, // #define	NPC_EVENT_LEFTFOOT			2050
	AE_NPC_RIGHTFOOT, // #define NPC_EVENT_RIGHTFOOT			2051
	AE_NPC_BODYDROP_LIGHT, //#define NPC_EVENT_BODYDROP_LIGHT	2001
	AE_NPC_BODYDROP_HEAVY, //#define NPC_EVENT_BODYDROP_HEAVY	2002
	AE_NPC_SWISHSOUND, //#define NPC_EVENT_SWISHSOUND		2010
	AE_NPC_180TURN, //#define NPC_EVENT_180TURN			2020
	AE_NPC_ITEM_PICKUP, //#define NPC_EVENT_ITEM_PICKUP					2040
	AE_NPC_WEAPON_DROP, //#define NPC_EVENT_WEAPON_DROP					2041
	AE_NPC_WEAPON_SET_SEQUENCE_NAME, //#define NPC_EVENT_WEAPON_SET_SEQUENCE_NAME		2042
	AE_NPC_WEAPON_SET_SEQUENCE_NUMBER, //#define NPC_EVENT_WEAPON_SET_SEQUENCE_NUMBER	2043
	AE_NPC_WEAPON_SET_ACTIVITY, //#define NPC_EVENT_WEAPON_SET_ACTIVITY			2044
	AE_NPC_HOLSTER,
	AE_NPC_DRAW,
	AE_NPC_WEAPON_FIRE,

	AE_CL_PLAYSOUND, // #define CL_EVENT_SOUND				5004	// Emit a sound 
	AE_SV_PLAYSOUND,
	AE_CL_STOPSOUND,

	AE_START_SCRIPTED_EFFECT,
	AE_STOP_SCRIPTED_EFFECT,

	AE_CLIENT_EFFECT_ATTACH,
	
	AE_MUZZLEFLASH,			// Muzzle flash from weapons held by the player
	AE_NPC_MUZZLEFLASH,		// Muzzle flash from weapons held by NPCs
	
	AE_THUMPER_THUMP,		//Thumper Thump!
	AE_AMMOCRATE_PICKUP_AMMO,	//Ammo crate pick up ammo!

	AE_NPC_RAGDOLL,

	AE_NPC_ADDGESTURE,
	AE_NPC_RESTARTGESTURE,

	AE_NPC_ATTACK_BROADCAST,

	AE_NPC_HURT_INTERACTION_PARTNER,
	AE_NPC_SET_INTERACTION_CANTDIE,

	AE_SV_DUSTTRAIL,

	AE_CL_CREATE_PARTICLE_EFFECT,

	AE_RAGDOLL,

	AE_CL_ENABLE_BODYGROUP,
	AE_CL_DISABLE_BODYGROUP,
	AE_CL_BODYGROUP_SET_VALUE,
	AE_CL_BODYGROUP_SET_VALUE_CMODEL_WPN,

	AE_WPN_PRIMARYATTACK,	// Used by weapons that want their primary attack to occur during an attack anim (i.e. grenade throwing)
	AE_WPN_INCREMENTAMMO,

	AE_WPN_HIDE,		// Used to hide player weapons
	AE_WPN_UNHIDE,		// Used to unhide player weapons

	AE_WPN_PLAYWPNSOUND,	// Play a weapon sound from the weapon script file

	AE_RD_ROBOT_POP_PANELS_OFF,

	AE_TAUNT_ENABLE_MOVE,
	AE_TAUNT_DISABLE_MOVE,

	AE_CL_REMOVE_PARTICLE_EFFECT,

	LAST_SHARED_ANIMEVENT,
} Animevent;

/* I invented this function, because this particular idiom comes up frequently;
 * I can't seem to actually find it anywhere in the 2013 SDK or the 2007 leak,
 * so I don't know if it actually is an inlined function or just a copypasta */
inline int GetEnemyTeam(int teamnum)
{
	switch (teamnum) {
	case TF_TEAM_RED:
		teamnum = TF_TEAM_BLUE;
		break;
	case TF_TEAM_BLUE:
		teamnum = TF_TEAM_RED;
		break;
	}
	
	return teamnum;
}
inline int GetEnemyTeam(CBaseEntity *ent)
{
	return GetEnemyTeam(ent->GetTeamNumber());
}


inline bool IsLoadoutSlot_Cosmetic(loadout_positions_t slot)
{
	switch (slot) {
	case LOADOUT_POSITION_HEAD:
	case LOADOUT_POSITION_MISC:
	case LOADOUT_POSITION_MISC2:
		return true;
	default:
		return false;
	}
}

#endif
