#include <stdio.h>
main()
{
	int a;
	printf("”‚ð“ü‚ê‚Ä : ");
	scanf("%d", &a);
	while (a > 0) {
		printf("*");
		a--;//b=b+1 ‚Ü‚½‚Í b+=1‚Å‚à—Ç‚¢
	}
}