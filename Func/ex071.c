#include<stdio.h>
int goukei(int d, int e, int f);
float heikin(int d, int e, int f);
main()
{
	int a, b, c, g;
	float h;
	printf("整数を3つ入力: ");
	scanf("%d%d%d", &a, &b, &c);
	g = goukei(a, b, c);
	h = heikin(a, b, c);
	printf("合計は%d\t平均は%.2f", g, h);
}

/*関数の記述*/
int goukei(int d, int e, int f)
{
	int ans;
	ans = d + e + f;
	return ans;
}

float heikin(int d, int e, int f)
{
	float cnt;
	cnt = (float)(d + e + f) / 3;
	return cnt;
}