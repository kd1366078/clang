#include <stdio.h>
main()
{
	char m;
	int a, b, c;
	printf("��������� : ");
	scanf("%c", &m);
	printf("��������� : ");
	scanf("%d %d %d", &a, &b, &c);
	switch (m) {
	case '+':
		printf("���Z�ł�");
		break;
	case '-':
		printf("���Z�ł�");
		break;
	case '*':
		printf("��Z�ł�");
		break;
	case '/':
		printf("���Z�ł�");
		break;
	case '%':
		printf("�]�ł�");
		break;
	default:
		printf("���̑��ł�");
	}
}