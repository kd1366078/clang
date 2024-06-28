#include <stdio.h>
main()
{
	int su, su1, su3;
	printf("数は? : ");
	scanf("%d", &su);
	for (su1 = 0, su3 = 0; su != -999; su3++) {

		su1 += su;
		printf("数は? : ");
		scanf("%d", &su);
	}
	printf("合計= %d         平均= %.2f", su1, (float)su1 / su3);//実数まで求めたい場合はint型でやったときは実数で出したい計算の前にfloatをつける
}
