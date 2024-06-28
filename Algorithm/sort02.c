#include<stdio.h>
main()
{
	int w, i, j, d[5] = { 30, 7, 25, 16, 10 };

	printf("ソート前: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");

	for (i = 4; i > 0; i--)//一番高い数字固定用
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[j + 1])
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}

	printf("ソート後: ");
	for (i = 0; i < 5; i++)
	{

		printf("%d ", d[i]);
	}
}