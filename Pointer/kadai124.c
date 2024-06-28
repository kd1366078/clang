#include<stdio.h>
main()
{
	char c, * p_c;
	printf("“ü—Í•¶Žš‚Í?");
	scanf("%c", &c);
	p_c = &c;
	printf("ŽŸ‚Ì•¶Žš‚Í %c", *p_c + 1);
}