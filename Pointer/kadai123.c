#include<stdio.h>
main()
{
	double a, b, * p_a, * p_b;
	printf("実数地1?");
	scanf("%lf", &a);
	p_a = &a;
	printf("実数地2?");
	scanf("%lf", &b);
	p_b = &b;

	if (*p_a > *p_b) {
		printf("大きいほう=%f", *p_a);
	}
	else {
		printf("大きいほう=%f", *p_b);
	}
}