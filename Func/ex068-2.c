#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char *p;

	p = gets(dumy);
	while (c != NULL)
	{
		printf("%s\n", dumy);
		c = gets(dumy);
	}
}