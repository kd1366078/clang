#include <stdio.h>
main()
{
	int a, b, c;
	printf("•b”‚ğ“ü—Í : ");
	scanf("%d", &a);
	if (a <= 5000) {
		b = a / 3600;
		a = a % 3600;
		c = a / 60;
		a = a % 60;
		printf("%dŠÔ%d•ª%d•b", b, c, a);
	}
	else {
		printf("ƒGƒ‰[");
	}
}