#include <stdio.h>
main()
{
	int su, su1, su3;
	su = 0,su1 = 0, su3 = 0;
	do {
		su1 += su;
		printf("数は? : ");
		scanf("%d", &su);
		su3++;
	} while (su != -999);
	printf("合計= %d         平均= %.2f", su1, (float)su1 / (su3 - 1));//実数まで求めたい場合はint型でやったときは実数で出したい計算の前にfloatをつける
}