#include <stdio.h>
main()
{
	int a, b, c, g;
	printf("�������R���� : ");
	scanf("%d%d%d", &a, &b, &c);//%d�̑O��Ɍ��Ԃ��J���Ȃ�
	g = a + b + c;
	printf("���v=%d\t����=%.2f", g, g / 3.0);
}