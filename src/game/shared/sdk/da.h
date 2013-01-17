#pragma once

typedef enum
{
	STYLE_POINT_SMALL,
	STYLE_POINT_LARGE,
	STYLE_POINT_STYLISH,
} style_point_t;

typedef enum {
	ANNOUNCEMENT_COOL,
	ANNOUNCEMENT_STYLISH,
	ANNOUNCEMENT_DIVE,
	ANNOUNCEMENT_DIVE_KILL,
	ANNOUNCEMENT_SLIDE,
	ANNOUNCEMENT_SLIDE_KILL,
	ANNOUNCEMENT_STUNT,
	ANNOUNCEMENT_STUNT_KILL,
	ANNOUNCEMENT_THROUGH_WALL,
	ANNOUNCEMENT_LAST_BULLET,
	ANNOUNCEMENT_LONG_RANGE,
	ANNOUNCEMENT_LONG_RANGE_KILL,
	ANNOUNCEMENT_DOUBLE_KILL,
	ANNOUNCEMENT_GRENADE,
	ANNOUNCEMENT_GRENADE_KILL,
	ANNOUNCEMENT_SLOWMO_KILL,
	ANNOUNCEMENT_TACTICOOL,
	ANNOUNCEMENT_BRAWL,
	ANNOUNCEMENT_BRAWL_KILL,
	ANNOUNCEMENT_DIVEPUNCH,
	ANNOUNCEMENT_SLIDEPUNCH,
	ANNOUNCEMENT_HEADSHOT,
	ANNOUNCEMENT_POINT_BLANK,
	ANNOUNCEMENT_EXECUTION,
	TOTAL_ANNOUNCEMENTS
} announcement_t;

typedef enum {
	NOTICE_MARKSMAN,
	NOTICE_TROLL,
	NOTICE_BOUNCER,
	NOTICE_ATHLETIC,
	NOTICE_SUPERSLO,
	NOTICE_RESILIENT,
	NOTICE_SLOMO,
	NOTICE_STYLESTREAK,
	NOTICE_WORTHIT,
	TOTAL_NOTICES
} notice_t;

inline const char* WeaponTypeToAlias( weapontype_t id )
{
	static const char* aszWeaponTypes[] = {
		"none",
		"melee",
		"rifle",
		"shotgun",
		"smg",
		"pistol",
	};

	return aszWeaponTypes[id];
}
