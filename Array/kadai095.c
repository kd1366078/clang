#include<stdio.h>
main()
{
	int i, g, h, a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int b[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	printf("配列a = ");
	for (i = 0, g = 0, h = 0; i < 10; i++, h++) {
		printf("%d ", a[i]);
		g += a[i];
	}
	printf("\n");
	printf("合計 = %d \t 平均 = %f\n", g, (float)g / h);
	printf("配列b = ");
	for (i = 0, g = 0, h = 0; i < 10; i++, h++) {
		printf("%d ", b[i]);
		g += a[i];
	}
	printf("\n");
	printf("合計 = %d \t 平均 = %f", g, (float)g / h);
}