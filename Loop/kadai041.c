#include<stdio.h>
main()
{
	int a, b;
	float i;
	i = 0, a = 0, b = 0;
	printf("�����u-999 �I���v?");
	scanf("%d", &a);
	while (a != -999) {
		b += a;
		printf("�����u-999 �I���v?");
		scanf("%d", &a);
		i++;
	}
	printf("���v = %d", b);
	printf("���� = %f", b / i);
}