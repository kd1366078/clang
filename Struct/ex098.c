#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;//���R�[�h
	char name[20];//����
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

	struct ken hyogo = { 28,"���Ɍ�",NULL };
	struct ken oosaka = { 27,"���{",NULL };

	//�����N�̐ݒ�
	p = wp = ken_data;
	do {
		p++;//��s����
		wp->next = p;//NULL�ɓ����
		wp = p;//�ǂ���
	} while (p->code != DATA_END);

	//�����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
	printf("\n");

	ken_data[6].next = &oosaka;//�k�C����next�ɕ��Ɍ��̃A�h���X���Z�b�g
	oosaka.next = &ken_data[7];

	//�k�C���ƐX���̊Ԃɕ��Ɍ�������
	ken_data[0].next = &hyogo;//�k�C����next�ɕ��Ɍ��̃A�h���X���Z�b�g
	hyogo.next = &ken_data[1];//���ɂ�next�ɐX�̂��ǂꂷ���Z�b�g



	//�f�[�^�}����̃����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}