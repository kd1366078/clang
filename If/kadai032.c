#include <stdio.h>
main()
{
	int a, b;
	printf("整数? ");
	scanf("%d", &a);
	b = a % 2;//%の場合は余りを代入する
	if (b == 0) {
		printf("偶数です\n");
	}
	else {
		printf("奇数です\n");
	}
}