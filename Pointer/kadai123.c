#include<stdio.h>
main()
{
	double a, b, * p_a, * p_b;
	printf("�����n1?");
	scanf("%lf", &a);
	p_a = &a;
	printf("�����n2?");
	scanf("%lf", &b);
	p_b = &b;

	if (*p_a > *p_b) {
		printf("�傫���ق�=%f", *p_a);
	}
	else {
		printf("�傫���ق�=%f", *p_b);
	}
}