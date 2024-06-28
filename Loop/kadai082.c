#include<stdio.h>
main()
{
	int su1=0, g=0, h=0;
	while (su1 != -999){
		printf("®” -999 ‚ÅI—¹?");
		scanf("%d", &su1);
		if (su1 == -999 || su1 < 0 )
		{
			continue;
		}
		g += su1;
		h++;
	}
	printf("‡Œv = %d \t •½‹Ï = %.2f", g, (float)g / h);


}