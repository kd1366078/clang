#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 }, * pa;
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 }, * pb;
	int wrk, i;
	pa = a;
	pb = b;
	printf("�z�� a[ ] = ");
	for (; *pa != 0; pa++)
	{
		printf("%d, ", *pa);
	}
	printf("\n");

	printf("�z�� b[ ] = ");
	for (; *pb != 0; pb++)
	{
		printf("%d, ", *pb);
	}
	printf("\n");

	pb = b;

	for (i = 0; i < 11;pa++,pb++, i++)
	{
		*pa = *pb;

	}

	printf("---���s��---\n");
	pa = a, pb = b;
	printf("�z�� a[ ] = ");
	for (; *pa != 0; pa++)
	{
		printf("%d, ", *pa);
	}
	printf("\n");
}