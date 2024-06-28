#include<stdio.h>
main()
{
	char m;
	printf("アルファベット? ");
	scanf("%c", &m);
	if (m >= 'a' && 'z' >= m) {
		printf("その文字は「小文字」です");
	}
	else if(m >= 'A' && 'Z' >= m) {
		printf("その文字は「大文字」です");
	}
	else {
		printf("ERROR");
	}
}