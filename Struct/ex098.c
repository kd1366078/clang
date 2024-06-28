#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;//Œ§ƒR[ƒh
	char name[20];//Œ§–¼
	struct ken* next;
};
main()
{
	struct ken ken_data[] = { {1, "–kŠC“¹", NULL},
							{ 2, "ÂXŒ§", NULL},
							{ 3, "ŠâŽèŒ§", NULL},
							{ 4, "‹{èŒ§", NULL},
							{ 5, "H“cŒ§", NULL},
							{ 6, "ŽRŒ`Œ§", NULL},
							{ 7, "•Ÿ“‡Œ§", NULL},
							{ DATA_END,"", NULL} };

	struct ken* p, * wp;

	struct ken hyogo = { 28,"•ºŒÉŒ§",NULL };
	struct ken oosaka = { 27,"‘åã•{",NULL };

	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = ken_data;
	do {
		p++;//æs‚·‚é
		wp->next = p;//NULL‚É“ü‚ê‚é
		wp = p;//’Ç‚¢‚Â‚­
	} while (p->code != DATA_END);

	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
	printf("\n");

	ken_data[6].next = &oosaka;//–kŠC“¹‚Ìnext‚É•ºŒÉŒ§‚ÌƒAƒhƒŒƒX‚ðƒZƒbƒg
	oosaka.next = &ken_data[7];

	//–kŠC“¹‚ÆÂXŒ§‚ÌŠÔ‚É•ºŒÉŒ§‚ð“ü‚ê‚é
	ken_data[0].next = &hyogo;//–kŠC“¹‚Ìnext‚É•ºŒÉŒ§‚ÌƒAƒhƒŒƒX‚ðƒZƒbƒg
	hyogo.next = &ken_data[1];//•ºŒÉ‚Ìnext‚ÉÂX‚Ì‚ ‚Ç‚ê‚·‚ðƒZƒbƒg



	//ƒf[ƒ^‘}“üŒã‚ÌƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}