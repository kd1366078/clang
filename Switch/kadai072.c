#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g?");
	scanf("%c", &a);
	switch (a) {
		case 'a':
			printf("Amwrica\n");
			printf("Australia");
			break;
		case 'e':
			printf("England");
			break;
		case 'f':
			printf("Franca");
			break;
		case 'j':
			printf("Japan");
			break;
		default:
			printf("���̕����͏o�͂ł��܂���");
	}
}