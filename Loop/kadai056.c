#include<stdio.h>
main()
{
	char i, a;
	printf("������?");
	scanf("%c", &a);
	for (i = a; i <= 122; i++) {
		printf("%c ", i);
	}
}