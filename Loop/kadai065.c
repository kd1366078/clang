#include<stdio.h>
main()
{
	int a=0, g=0;
	float i=-1;
	do {
		g += a;
		i++;
		printf("����(-999 �ŏI��)?");
		scanf("%d", &a);
		
	} while (a != -999);
	printf("���v=%d", g);
	printf("����=%f", g / i);
}