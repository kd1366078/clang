#include <stdio.h>
main()
{
	int sum = 0, num;
	while (1) {
		printf("”‚ğ“ü‚ê‚Ä : ");
		scanf("%d", &num);
		if (num == -999)
		{
			break;
		}
		sum += num;
	}
printf("‡Œv= %d", sum);
}