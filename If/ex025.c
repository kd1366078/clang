#include <stdio.h>
main()
{
	char a;
	printf("文字を入力");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z') {
		printf("アルファベットです");
	}
	else {//else ifでこの行を短縮できる
		if (a >= '0' && a <= '9') {//文字コードから引っ張てくると子は''をつける
			printf("数字です");
		}
		else {
			printf("その他の文字です");
		}
	}
}