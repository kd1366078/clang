#include <stdio.h>
main()
{
	char a;
	printf("���������");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z') {
		printf("�A���t�@�x�b�g�ł�");
	}
	else {//else if�ł��̍s��Z�k�ł���
		if (a >= '0' && a <= '9') {//�����R�[�h����������Ă���Ǝq��''������
			printf("�����ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
}