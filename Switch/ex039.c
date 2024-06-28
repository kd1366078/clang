#include <stdio.h>
main()
{
	char m;
	int a, b, c;
	printf("ˆ—‚ğ“ü—Í : ");
	scanf("%c", &m);
	printf("®”‚ğ“ü—Í : ");
	scanf("%d %d %d", &a, &b, &c);
	switch (m) {
	case '+':
		printf("‰ÁZ‚Å‚·");
		break;
	case '-':
		printf("Œ¸Z‚Å‚·");
		break;
	case '*':
		printf("æZ‚Å‚·");
		break;
	case '/':
		printf("œZ‚Å‚·");
		break;
	case '%':
		printf("—]‚Å‚·");
		break;
	default:
		printf("‚»‚Ì‘¼‚Å‚·");
	}
}