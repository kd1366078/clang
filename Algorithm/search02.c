#include<stdio.h>
main()
{
	int i, s, d[11] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };

	printf("’Tõ’l‚Í?");
	scanf("%d", &s);

	d[10] = s;

	for (i = 0; s != d[i]; i++) {

	}

	if (i >= 10) {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}

	else {
		printf("d[%d]‚É‚ ‚Á‚½\n", i);
	}
}