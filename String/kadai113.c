#include<stdio.h>
main()
{
	int i,k;
	char m[20] = "GameSoft";
	printf("文字列 = ");
	for (i = 0; m[i] != '\0'; i++) {
		printf("%c", m[i]);
	}
	printf("\n");
	printf("文字数 = %d", i);
}