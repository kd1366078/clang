#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] = { {1, "kC¹", NULL},
							{ 2, "ÂX§", NULL},
							{ 3, "âè§", NULL},
							{ 4, "{è§", NULL},
							{ 5, "Hc§", NULL},
							{ 6, "R`§", NULL},
							{ 7, "§", NULL},
							{ DATA_END,"", NULL} };

	struct ken* p, * wp;

	//NÌÝè
	p = wp = ken_data;
	do {
		p++;//æs·é
		wp->next = p;//NULLÉüêé
		wp = p;//Ç¢Â­
	} while (p->code != DATA_END);

	//NÌ\¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}