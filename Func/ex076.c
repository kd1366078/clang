#include<stdio.h>
void gh(int a, int b, int* g, float* h);
main()
{
	int a, b, g;
	float h;

	printf("������2����:");
	scanf("%d%d", &a, &b);

	gh(a, b, &g, &h);
	printf("���v�� %d�A���ς�%.2f", g, h);
}
void gh(int a, int b, int* g, float* h)
{
	*g = a + b;
	*h = *g / 2.0;
}