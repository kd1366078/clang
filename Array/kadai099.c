#include<stdio.h>
main()
{
	char a[256];
	int i, j, kaisu;

	printf("�񐔂ƕ���������");
	scanf("%d %s", &kaisu, &a);
	for (i = 0; i < kaisu; i++) {
			printf("%s ", &a[0]);
	}
}