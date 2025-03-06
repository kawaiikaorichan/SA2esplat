#pragma once

struct FullBossTitleData
{
	BossTitleLetterData* Letters;
	short LetterCount;
	short Spacing;
	short Delay;
	short Null1;				// always 0 probably, setting non-zero value doesn't seem to change anything
	BossTitleLetterData* Bar;
	short BarFragmentsCount;
	short DisplayMode;			// uses flags
	short DisplayTime;
	short Null2;				// always 0 probably as well
	NJS_TEXLIST* Texlist;
	float X;
	float Y;
	float Scale;
	int Color;
};

enum BossTitleDisplayFlags : short
{
	BossTitle_SetDisplayTime = 1,	// DisplayTime = 0 if not set (boss title doesn't disappear in this case, unless some other code makes it disappear)
	BossTitle_SetScale = 2,			// Scale = 1.0 if not set
	BossTitle_IgnoreDelay = 4,		// Delay = 0 if set (displays only first letter in this case), use set delay if not set
};

enum BossTitleLetterIDs
{
	space = 0,

	// King Boom Boo

	kbb_R = 8795042,
	kbb_E = 8795041,
	kbb_Y = 8795044,
	kbb_B = 8795029,
	kbb_O = 8795045,
	kbb_M = 8795043,

	// The Biolizard

	bio_E = 8795064,
	bio_L = 8795095,
	bio_B = 8795047,
	bio_I = 8795066,
	bio_O = 8795067,
	bio_A = 8795046,
	bio_G = 8795065,
	bio_R = 8795068,
	bio_T = 8795069,
	
	// The Finalhazard

	fin_L = 8795090,
	fin_A = 8795071,
	fin_M = 8795093,
	fin_E = 8795086,
	fin_N = 8795091,
	fin_Z = 8795094,
	fin_F = 8795087,
	fin_I = 8795089,
};

DataPointer(FullBossTitleData, KingBoomBoo, 0x100C808);
DataPointer(FullBossTitleData, Biolizard, 0x1371BEC);
DataPointer(FullBossTitleData, Finalhazard, 0x170639C);

const int WhiteColor = 0xFFFFFF;
const int KBBColor = 0x22FF22;

void InitOtherBossTitles();