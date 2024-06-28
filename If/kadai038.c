#include<stdio.h>
main()
{
	char m;
	printf("アルファベット? ");
	scanf("%c", &m);
	if (m >= 'a' && 'z' >= m) {
		printf("変換結果は%c", m - 0x20);
	}
	else if (m >= 'A' && 'Z' >= m) {
		printf("変換結果は%c", m + 0x20);
	}
	else {
		printf("ERROR");
	}
}