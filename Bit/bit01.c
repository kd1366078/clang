#include<stdio.h>
	enum BitState{Base = 0,Poison = 1 << 0,Sleep = 1 << 1,Paralysis = 1 << 2,Burn = 1 << 3,AtkUp = 1 << 4,AtkDown = 1 << 5};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	//ó‘Ô‚ðŠÇ—‚·‚é•Ï”MyState‚ðéŒ¾‚µ‚ÄBase(0)‚Å‰Šú‰»
	UINT MyState = Base;
	ChangeFlag(&MyState);
	//DisplayStatus(MyState);
	ClearFlag(&MyState);
	//DisplayStatus(MyState);
}
void DisplayStatus(UINT s) {
	printf("*****Œ»Ý‚Ìó‘Ô*****\n");
	if (s & Poison) {
		printf("“Å\n");
	}
	if (s & Sleep) {
		printf("‡–°\n");
	}
	if (s & Paralysis) {
		printf("–ƒáƒ\n");
	}
	if (s & Burn) {
		printf("‰Î\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & AtkDown) {
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	printf("************************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©?\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:“ü—ÍI—¹>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("‚Ç‚Ìó‘Ô‚ð‰ñ•œ‚µ‚Ü‚·‚©\n");
		printf("1:“Å 2 : ‡–° 3 : –ƒáƒ 4 : ‰Î 5 : UŒ‚ª 6 : UŒ‚« 7:‘Só‘Ô‰ñ•œ 0 : “ü—ÍI—¹ > ");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:
			break;
		}
	}
}