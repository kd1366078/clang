#include <stdio.h>
main()
{
	int a, b, c, g;
	printf("整数を３個入力 : ");
	scanf("%d%d%d", &a, &b, &c);//%dの前後に隙間を開けない
	g = a + b + c;
	printf("合計=%d\t平均=%.2f", g, g / 3.0);
}