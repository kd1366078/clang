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
	syou sina = { "�P�V�S��", 50 };
	display1(a);   //�l�n��
	//display2(sina);//�l�n��
	display3(&sina);//�A�h���X�n��

	//�����ς�������m�F
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
	//�A�h���X���󂯂��ƂĂ���̂�
	//���������\

	//tanka��100�ɂ���
	strcpy (p->name, "�l�グ�P�V�S��");
	p->tanka = 100;
}