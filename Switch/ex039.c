#include <stdio.h>
main()
{
	char m;
	int a, b, c;
	printf("処理を入力 : ");
	scanf("%c", &m);
	printf("整数を入力 : ");
	scanf("%d %d %d", &a, &b, &c);
	switch (m) {
	case '+':
		printf("加算です");
		break;
	case '-':
		printf("減算です");
		break;
	case '*':
		printf("乗算です");
		break;
	case '/':
		printf("除算です");
		break;
	case '%':
		printf("余です");
		break;
	default:
		printf("その他です");
	}
}