#include<stdio.h>
main()
{
	int data[] = { 10,9,1,20,45,21,38,45,88 };
	int *pdata,i;
	printf("配列 data[ ] = ");
	for (i = 0; i < 9; i++)
	{
		printf("%d, ", data[i]);
	}
	printf("\n");
	pdata = data;
	printf("最大値 = ");
	for (i = 0; i < 9; i++)
	{
		if (*pdata < data[i])
		{
			*pdata = data[i];
		}
	}
	printf("%d", *pdata);

	printf("\n");
	printf("最小値 = ");
	pdata = data;
	for (i = 0; i < 9; i++)
	{
		if (*pdata > data[i])
		{
			*pdata = data[i];
		}
	}
	printf("%d", *pdata);
}