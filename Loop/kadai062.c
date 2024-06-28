#include<stdio.h>
main()
{
	int a=20;
	do {
		printf("%d ", a);
		a--;
	} while (a >= 11);
	printf("\n");
	do {
		printf("%d ", a);
		a--;
	} while (a >= 1);
}