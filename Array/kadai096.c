#include<stdio.h>
main()
{
	int i, p, g, c[10];
	for (i = 0, g = 0; i < 10; i++, g++)
	{
		
		printf("����(-999)�ŏI��?");
		scanf("%d", &p);
		if (p == -999)
		{
			break;
		}
		c[i] = p;
	}
	printf("�z��a= ");
	for (i = 0; i < g; i++)
	{
		printf("%d ", c[i]);
	}
}