#include "pch.h"
#include "GunRoboTitles.h"

// GUN robo stuff

enum GunRoboLetterIDs : int8_t
{
	gun_1,
	gun_3,
	gun_6,
	gun_B,
	gun_D,
	gun_F,
	gun_G,
	gun_H,
	gun_I,
	gun_L,
	gun_N,
	gun_O,
	gun_R,
	gun_S,
	gun_T,
	gun_Y,
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
	{ gun_1, 16 },
	{ gun_3, 22 },
	{ gun_6, 22 },
	{ gun_B, 15 },
	{ gun_D, 16 },
	{ gun_F, 13 },
	{ gun_G, 17 },
	{ gun_H, 15 },
	{ gun_I, 5 },
	{ gun_L, 12 },
	{ gun_N, 15 },
	{ gun_O, 18 },
	{ gun_R, 16 },
	{ gun_S, 15 },
	{ gun_T, 15 },
	{ gun_Y, 18 },
	{ gun_t, 8 },
	{ gun_x, 13 },
	{ gun_A, 26 },
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

GunRoboBossTitleData BigFootTitle[] = { { gun_S, 30 }, { gun_H, 30 }, { gun_I, 30 }, { gun_T, 30 } }; // using existing letters

void SetNewGunRoboTitles() // this goes to Init function
{
	WriteData((GunRoboBossTitleData**)0x5D8727, BigFootTitle);
	//WriteData((GunRoboBossTitleData**)0x5D8719, HotShotTitle);
	//WriteData((GunRoboBossTitleData**)0x5D870B, FlyingDogTitle);
}

