#include<stdio.h>
main()
{
	int su1=0, su2=0;
	while (su2 != -999) {
		printf("®”1?");
		scanf("%d", &su1);
		printf("®”2?");
		scanf("%d", &su2);
		if (su1 == 0 || su2 == 0)
		{
			continue;
		}
		if (su1 == -999 || su2 == -999)
		{
			break;
		}
		printf("%d / %d = %d ‚ ‚Ü‚è %d\n", su1, su2, su1 / su2, su1 % su2);

	}
}