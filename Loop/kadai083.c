#include<stdio.h>
main()
{
	int i = 0, a = 0;
	while (i < 20)
	{
		i++;
		a = i % 2;
		if (a == 0)
		{
			continue;
		}
		printf("%d ", i);
	}
}