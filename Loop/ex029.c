#include <stdio.h>
main()
{
	int a, b;
	printf("数を入れて : ");
	scanf("%d", &a);
	b = 0;
	while (b < a) {
		printf("*");
		b++;//b=b+1 または b+=1でも良い
	}
}