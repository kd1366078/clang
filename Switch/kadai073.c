#include<stdio.h>
main()
{
	int a;
	char m;
	printf("10�i���̐���?");
	scanf("%d", & a);
	printf("�A���t�@�x�b�g (o or h or d) ?");
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