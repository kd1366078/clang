#include<stdio.h>
main()
{
	int *a, *b;
	int j=100, k=10;
	a = &j, b = &k;
	printf("%d + %d = %d\n", *a, *b, *a + *b);
	printf("%d - %d = %d\n", *a, *b, *a - *b);
	printf("%d * %d = %d\n", *a, *b, *a * *b);
	printf("%d / %d = %d", *a, *b, *a / *b);

}