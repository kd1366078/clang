#include<stdio.h>
main()
{
	char c, * p_c;
	printf("���͕�����?");
	scanf("%c", &c);
	p_c = &c;
	printf("���̕����� %c", *p_c + 1);
}