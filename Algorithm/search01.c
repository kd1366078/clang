#include<stdio.h>
main()
{
	int i, s, d[10] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	for (i = 0; i < 10; i++) {
		printf("%02d", d[i]);
	}
	printf("’Tõ’l‚ð“ü—Í‚µ‚ê‚­‚¾‚³‚¢>");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚è‚è‚Ü‚¹‚ñ‚Å‚µ‚½");
	}
	else {
		printf("”z—ñ‚Ì%d”Ô–Ú‚É‚ ‚è‚Ü‚µ‚½", i);
	}

}