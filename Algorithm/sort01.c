#include<stdio.h>

#define data 5
main()
{
	int w, i, j, d[data] = { 30, 7, 25, 16, 10 };


	printf("ソート前: ");
	for (i = 0; i < data; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");

	for (i = 0; i < data - 1; i++)
	{
		for (j = i + 1; j < data; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("ソート後: ");
	for (i = 0; i < data; i++)
	{

		printf("%d ", d[i]);
	}

}