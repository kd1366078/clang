#include<stdio.h>
main()
{
	int a;
	printf("0 から 100までの整数?");
	scanf("%d", &a);
	if (a >= 0 && a < 30) {
		printf("その数値の判定結果は「1」です");
	}
	else if (a >= 30 && a < 50) {
		printf("その数値の判定結果は「2」です");
	}
	else if (a >= 50 && a < 70) {
		printf("その数値の判定結果は「3」です");
	}
	else if (a >= 70 && a < 90) {
		printf("その数値の判定結果は「4」です");
	}
	else if (a >= 90 && a <= 100) {
		printf("その数値の判定結果は「5」です");
	}
	else {
		printf("数値エラーです");
	}
}