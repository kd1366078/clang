#include<stdio.h>
main()
{
	int su1, su2;
	char en;
	printf("®”1?");
	scanf("%d", &su1);
	printf("®”2?");
	scanf("%d", &su2);
	printf("‰‰Zq?");
	scanf("%*c%c", &en);
	switch(en) {
		case '+':
			printf("%d + %d = %d", su1, su2, su1 + su2);
			break;

		case '-':
			printf("%d - %d = %d", su1, su2, su1 - su2);
			break;

		case '*':
			printf("%d ~ %d = %d", su1, su2, su1 * su2);
			break;

		case '/':
			printf("%d € %d = %d", su1, su2, su1 / su2);
			break;

		case '%':
			printf("%d € %d = ‚ ‚Ü‚è%d", su1, su2, su1 % su2);
			break;

		default:
			printf("ƒGƒ‰[");

	}
}