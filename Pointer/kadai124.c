#include<stdio.h>
main()
{
	char c, * p_c;
	printf("入力文字は?");
	scanf("%c", &c);
	p_c = &c;
	printf("次の文字は %c", *p_c + 1);
}