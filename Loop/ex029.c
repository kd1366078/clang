#include <stdio.h>
main()
{
	int a, b;
	printf("�������� : ");
	scanf("%d", &a);
	b = 0;
	while (b < a) {
		printf("*");
		b++;//b=b+1 �܂��� b+=1�ł��ǂ�
	}
}