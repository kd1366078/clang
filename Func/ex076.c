#include<stdio.h>
void gh(int a, int b, int* g, float* h);
main()
{
	int a, b, g;
	float h;

	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);

	gh(a, b, &g, &h);
	printf("合計は %d、平均は%.2f", g, h);
}
void gh(int a, int b, int* g, float* h)
{
	*g = a + b;
	*h = *g / 2.0;
}