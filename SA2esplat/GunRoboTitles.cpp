#include "pch.h"
#include "GunRoboTitles.h"

// GUN robo stuff

enum GunRoboLetterIDs : int8_t
{
	gun_1,
	gun_3,
	gun_6,
	gun_V,
	gun_D,
	gun_F,
	gun_G,
	gun_P,
	gun_I,
	gun_L,
	gun_N,
	gun_O,
	gun_R,
	gun_E,
	gun_T,
	gun_C,
	gun_t,
	gun_x,
	gun_A,
	gun_space,
	gun_terminator,
};


// setting up letter widths

struct GunRoboLetterData
{
	int Letter;
	float Width;
};


GunRoboLetterData EnglishWidths[]
{
	{ gun_1, 25 },
	{ gun_3, 22 },
	{ gun_6, 22 },
	{ gun_V, 15 },
	{ gun_D, 16 },
	{ gun_F, 13 },
	{ gun_G, 17 },
	{ gun_P, 13 },
	{ gun_I, 5 },
	{ gun_L, 12 },
	{ gun_N, 15 },
	{ gun_O, 18 },
	{ gun_R, 16 },
	{ gun_E, 13 },
	{ gun_T, 15 },
	{ gun_C, 15 },
	{ gun_t, 8 },
	{ gun_x, 13 },
	{ gun_A, 17 },
	{ gun_space, 7 },
};

void SetUpGunRoboFont(GunRoboLetterData* letterWidths) // this goes to Init function
{
	WriteData((float**)0x5D8523, &letterWidths->Width); // yeah, this looks weird :^)
};


// setting up titles

struct GunRoboBossTitleData
{
	int8_t Letter;
	int8_t FrameCount;
};

GunRoboBossTitleData BigFootTitle[] = { { gun_F, 20 }, { gun_6, 20 }, { gun_t, 20 }, { gun_space, 20 }, { gun_P, 20 }, { gun_I, 20 }, { gun_E, 20 }, { gun_space, 20 }, { gun_G, 20 }, { gun_R, 20 }, { gun_A, 20 }, { gun_N, 20 }, { gun_D, 20 }, { gun_E, 20 } };
GunRoboBossTitleData HotShotTitle[] = { { gun_V, 20 }, { gun_3, 20 }, { gun_x, 20 }, { gun_space, 20 }, { gun_T, 20 }, { gun_I, 20 }, { gun_R, 20 }, { gun_O, 20 }, { gun_space, 20 }, { gun_C, 20 }, { gun_A, 20 }, { gun_N, 20 }, { gun_D, 20 }, { gun_E, 20 }, { gun_N, 20 }, { gun_T, 20 }, { gun_E, 20 } };
GunRoboBossTitleData FlyingDogTitle[] = { { gun_R, 20 }, { gun_1, 20 }, { gun_A, 20 }, { gun_space, 20 }, { gun_P, 20 }, { gun_E, 20 }, { gun_R, 20 }, { gun_R, 20 }, { gun_O, 20 }, { gun_space, 20 }, { gun_V, 20 }, { gun_O, 20 }, { gun_L, 20 }, { gun_A, 20 }, { gun_D, 20 }, { gun_O, 20 }, { gun_R, 20 } };

void SetNewGunRoboTitles() // this goes to Init function
{
	WriteData((GunRoboBossTitleData**)0x5D8727, BigFootTitle);
	WriteData((GunRoboBossTitleData**)0x5D8719, HotShotTitle);
	WriteData((GunRoboBossTitleData**)0x5D870B, FlyingDogTitle);
}

