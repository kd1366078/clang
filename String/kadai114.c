#include<stdio.h>
main()
{
	int i, k;
	char m[20];
	printf("文字列は?");
	scanf("%s", & m);
	printf("文字列 = ");
	for (i = 0; m[i] != '\0'; i++) {
		printf("%c", m[i]);
	}
	printf("\t");
	printf("文字数 = %d文字", i);
}