#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] = { {1, "�k�C��", NULL},
							{ 2, "�X��", NULL},
							{ 3, "��茧", NULL},
							{ 4, "�{�茧", NULL},
							{ 5, "�H�c��", NULL},
							{ 6, "�R�`��", NULL},
							{ 7, "������", NULL},
							{ DATA_END,"", NULL} };

	struct ken* p, * wp;



	//�����N�̐ݒ�
	p = wp = ken_data;
	do {
		p++;//��s����
		wp->next = p;//NULL�ɓ����
		wp = p;//�ǂ���
	} while (p->code != DATA_END);

	//��茧�ƎR�`��������΂�
	//�X����next�ɋ{�錧�̃A�h���X������
	ken_data[1].next = &ken_data[3];
	ken_data[4].next = &ken_data[6];

	//�����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}