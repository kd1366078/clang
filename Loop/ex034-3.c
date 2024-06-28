#include <stdio.h>
main()
{
	int i, j, num;
	printf("”‚Í? : ");
	scanf("%d", &num);
	i = 0;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i + 1);//‚±‚±‚É+1‚ğ“ü‚ê‚Ä‚¨‚­‚±‚Æ‚Åi=0‚Å‚àÅ‰‚Ìˆê•¶š–Ú‚ğo—Í‚Å‚«‚é
		printf("\n");
		i++;
	} while (i < num);
}