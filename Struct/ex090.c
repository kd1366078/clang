#include<stdio.h>
typedef struct syohin_data {
	char name[20];
	int tanka;
}bun;
main()
{
	bun syohin;
	bun* p;
	p = &syohin;
	printf("���i��=");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n", p->name);
	printf("p->tanka = %d\n", p->tanka);
	printf("syohin.name = %s\n", syohin.name);
	printf("syohin.tanka = %d\n", syohin.tanka);
}