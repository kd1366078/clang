#include<stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21,0 }, * pa;
	int b[] = { 4,8,12,16,20,24,28,32,38,42,0 }, * pb;
	int i;
	pa = a;
	pb = b;
	printf("”z—ñ b[ ] = ");
	for (; *pa != 0; pa++,pb++)
	{
		*pb += *pa;
		printf("%d, ", *pb);
	}
}