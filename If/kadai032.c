#include <stdio.h>
main()
{
	int a, b;
	printf("����? ");
	scanf("%d", &a);
	b = a % 2;//%�̏ꍇ�͗]���������
	if (b == 0) {
		printf("�����ł�\n");
	}
	else {
		printf("��ł�\n");
	}
}