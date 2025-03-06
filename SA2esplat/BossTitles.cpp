#include "pch.h"
#include "BossTitles.h"

// Rey Boom Boo
BossTitleLetterData KBBLetters[]
{
	{ kbb_R, 21, 22, 0, 32, 32, 0 },
	{ kbb_E, 19, 22, 0, 32, 32, 0 },
	{ kbb_Y, 17, 22, 0, 32, 32, 0 },
	{ space, 16, 22, 0, 32, 32, 0 },
	{ kbb_B, 24, 22, 0, 32, 32, 0 },
	{ kbb_O, 22, 22, 0, 32, 32, 0 },
	{ kbb_O, 22, 22, 0, 32, 32, 0 },
	{ kbb_M, 28, 22, 0, 32, 32, 0 },
	{ space, 16, 22, 0, 32, 32, 0 },
	{ kbb_B, 24, 22, 0, 32, 32, 0 },
	{ kbb_O, 22, 22, 0, 32, 32, 0 },
	{ kbb_O, 22, 22, 0, 32, 32, 0 },
};

FullBossTitleData KingBoomBooTitle[]
{
	{ arrayptrandlengthT(KBBLetters, short), -2, 20, 0, KingBoomBoo.Bar, 16, BossTitle_SetDisplayTime | BossTitle_SetScale, 360, 0, KingBoomBoo.Texlist, 320.0f, 275.0f, 1.75f, KBBColor },
};

void WriteKingBoomBooTitle()
{
	KingBoomBoo = KingBoomBooTitle[0];
}

// El Biolagarto
BossTitleLetterData BiolizardLetters[]
{
	{ bio_E, 19, 20, 0, 32, 32, 0 },
	{ bio_L, 16, 20, 0, 32, 32, 0 },
	{ space, 12, 20, 0, 32, 32, 0 },
	{ bio_B, 19, 20, 0, 32, 32, 0 },
	{ bio_I,  8, 20, 0, 32, 32, 0 },
	{ bio_O, 21, 20, 0, 32, 32, 0 },
	{ bio_L, 16, 20, 0, 32, 32, 0 },
	{ bio_A, 22, 20, 0, 32, 32, 0 },
	{ bio_G, 20, 20, 0, 32, 32, 0 },
	{ bio_A, 22, 20, 0, 32, 32, 0 },
	{ bio_R, 20, 20, 0, 32, 32, 0 },
	{ bio_T, 19, 20, 0, 32, 32, 0 },
	{ bio_O, 21, 20, 0, 32, 32, 0 },
};

FullBossTitleData BiolizardTitle[]
{
	{ arrayptrandlengthT(BiolizardLetters, short), 0, 25, 0, Biolizard.Bar, 15, BossTitle_SetScale, 0, 0, Biolizard.Texlist, 320.0f, 240.0f, 1.5f, WhiteColor },
};

void WriteBiolizardTitle()
{
	Biolizard = BiolizardTitle[0];
}

// La Amenaza Final
BossTitleLetterData FinalhazardLetters[]
{
	{ fin_L, 12, 25, 0, 32, 32, 0 },
	{ fin_A, 17, 25, 0, 32, 32, 0 },
	{ space,  7, 25, 0, 32, 32, 0 },
	{ fin_A, 17, 25, 0, 32, 32, 0 },
	{ fin_M, 19, 25, 0, 32, 32, 0 },
	{ fin_E, 12, 25, 0, 32, 32, 0 },
	{ fin_N, 15, 25, 0, 32, 32, 0 },
	{ fin_A, 17, 25, 0, 32, 32, 0 },
	{ fin_Z, 13, 25, 0, 32, 32, 0 },
	{ fin_A, 17, 25, 0, 32, 32, 0 },
	{ space,  7, 25, 0, 32, 32, 0 },
	{ fin_F, 12, 25, 0, 32, 32, 0 },
	{ fin_I,  8, 27, 0, 32, 32, 0 },
	{ fin_N, 15, 25, 0, 32, 32, 0 },
	{ fin_A, 17, 25, 0, 32, 32, 0 },
	{ fin_L, 12, 25, 0, 32, 32, 0 },
};

FullBossTitleData FinalhazardTitle[]
{
	{ arrayptrandlengthT(FinalhazardLetters, short), 0, 25, 0, Finalhazard.Bar, 13, BossTitle_SetScale, 0, 0, Finalhazard.Texlist, 320.0f, 240.0f, 2.0f, WhiteColor },
};

void WriteFinalHazardTitle()
{
	Finalhazard = FinalhazardTitle[0];
}

void InitOtherBossTitles()
{
	WriteKingBoomBooTitle();
	WriteBiolizardTitle();
	WriteFinalHazardTitle();
}