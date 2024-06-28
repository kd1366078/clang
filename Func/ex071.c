#include<stdio.h>
int goukei(int d, int e, int f);
float heikin(int d, int e, int f);
main()
{
	int a, b, c, g;
	float h;
	printf("®”‚ğ3‚Â“ü—Í: ");
	scanf("%d%d%d", &a, &b, &c);
	g = goukei(a, b, c);
	h = heikin(a, b, c);
	printf("‡Œv‚Í%d\t•½‹Ï‚Í%.2f", g, h);
}

/*ŠÖ”‚Ì‹Lq*/
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