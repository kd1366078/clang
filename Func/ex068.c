#include<stdio.h>
main()
{
	int c;
	char dumy[256];

	c = getchar();//“ü—Í
	while (c != EOF)//ctrl+z‚ÅI—¹
	{
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();//“ü—Í
	}
}