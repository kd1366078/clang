#include<stdio.h>
main()
{
	int a, b;
	float i;
	i = 0, a = 0, b = 0;
	printf("整数「-999 終了」?");
	scanf("%d", &a);
	while (a != -999) {
		b += a;
		printf("整数「-999 終了」?");
		scanf("%d", &a);
		i++;
	}
	printf("合計 = %d", b);
	printf("平均 = %f", b / i);
}