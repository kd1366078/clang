#include<stdio.h>
main()
{
	char data[7] = "Orange";
	int i;
	printf("1文字ずつ表示 : ");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n");
	printf("文字数は %d 文字", i);
}