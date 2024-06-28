#include<stdio.h>
main()
{
	int a;
	a = 0;
	printf("文字コード(-1 で入力終了)?");
	scanf("%d", &a);
	while (a != -1) {
		printf("%c\n", a);
		printf("文字コード(-1 で入力終了)?");
		scanf("%d", &a);
	}
	printf("終了");
}