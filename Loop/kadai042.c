#include<stdio.h>
main()
{
	int a, b;
	a = 1, b = 0;
	while (b != 325) {
		printf("%d+", a);
		b += a;
		a++;
	}
	printf("=%d", b);
}