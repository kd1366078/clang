#include<stdio.h>
main()
{
	int a;
	a = 0;
	printf("文字コード(-999 で入力終了)?");
	scanf("%d", &a);
	while (a != -999) {
		printf("8進数 = %o    16進数 = %x\n", a, a);
		printf("文字コード(-999 で入力終了)?");
		scanf("%d", &a);
	}
	printf("終了");
}