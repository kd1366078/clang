#include<stdio.h>
main()
{
	char s[30];
	int  k[30];
	int i;
	
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚ÌˆÃ†‰ºƒL[", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("ˆÃ†•¶š—ñs‚ğ•\¦%s\n",s);
}