#include<stdio.h>
main()
{
	int a=1, g=0;
	do {
		printf("%d", a);
		printf("+");
		g += a;
		a++;
	} while (g <= 300);
	printf("=%d", g);
}