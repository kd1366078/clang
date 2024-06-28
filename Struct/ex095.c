#include<stdio.h>
typedef struct syohin_deta {
	char name[20];
	int tanka;
}syou;

void display1(int a);
void display2(syou sina);

main()
{
	int a = 10;
	syou sina = { "ƒPƒVƒSƒ€", 50 };
	display1(a);
	display2(sina);
}

void display1(int a)
{
	printf("a = %d\n", a);
}

void display2(syou sina)
{
	printf("sina.name = %s sina.tanka = %d\n", sina.name, sina.tanka);
}