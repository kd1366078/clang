#include<stdio.h>
main()
{
	double a, b, * p_a, * p_b;
	printf("ŽÀ”’n1?");
	scanf("%lf", &a);
	p_a = &a;
	printf("ŽÀ”’n2?");
	scanf("%lf", &b);
	p_b = &b;

	if (*p_a > *p_b) {
		printf("‘å‚«‚¢‚Ù‚¤=%f", *p_a);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤=%f", *p_b);
	}
}