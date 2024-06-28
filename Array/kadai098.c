#include<stdio.h>
main()
{
	int a[10] = { 10, 5, 23, 29, 2, 6,3, 1, 70, 100 };
	int i, max = 0, min = 999;
	printf("”z—ñ = ");
	for (i = 0; i < 10; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}

		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("Å‘å’l%d    Å¬’l%d", max, min);

	
}


