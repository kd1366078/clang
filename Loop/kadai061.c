#include<stdio.h>
main()
{
	int a=1;
	do {
		printf(" %d ", a);
		a++;
	} while (a <= 10);
	printf("\n");
	do {
		printf("%d ", a);
		a++;
	} while (a <= 20);
}