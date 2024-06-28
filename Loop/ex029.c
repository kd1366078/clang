#include <stdio.h>
main()
{
	int a, b;
	printf("”‚ğ“ü‚ê‚Ä : ");
	scanf("%d", &a);
	b = 0;
	while (b < a) {
		printf("*");
		b++;//b=b+1 ‚Ü‚½‚Í b+=1‚Å‚à—Ç‚¢
	}
}