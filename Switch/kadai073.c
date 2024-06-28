#include<stdio.h>
main()
{
	int a;
	char m;
	printf("10進数の整数?");
	scanf("%d", & a);
	printf("アルファベット (o or h or d) ?");
	scanf("%*c%c", & m);
	switch (m) {
		case 'o':
			printf("%o", a);
			break;

		case 'h':
			printf("%x", a);
			break;

		default:
			printf("%d", a);
	}

}