#include<stdio.h>
main()
{
	int a;
	printf("0 ���� 100�܂ł̐���?");
	scanf("%d", &a);
	if (a >= 0 && a < 30) {
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
	}
	else if (a >= 30 && a < 50) {
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}
	else if (a >= 50 && a < 70) {
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
	}
	else if (a >= 70 && a < 90) {
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}
	else if (a >= 90 && a <= 100) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else {
		printf("���l�G���[�ł�");
	}
}