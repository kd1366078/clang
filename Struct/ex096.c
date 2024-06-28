#include<stdio.h>
typedef struct syohin_deta {
	char name[20];
	int tanka;
}syou;

void display1(int a);
void display2(syou sina);
void display3(syou *p);

main()
{
	int a = 10;
	syou sina = { "ケシゴム", 50 };
	display1(a);   //値渡し
	//display2(sina);//値渡し
	display3(&sina);//アドレス渡し

	//書き変わったか確認
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

void display3(syou* p)
{
	printf("sina.name = %s sina.tanka = %d\n", p->name, p->tanka);
	//アドレスを受けっとているので
	//書き換が可能

	//tankaを100にする
	strcpy (p->name, "値上げケシゴム");
	p->tanka = 100;
}