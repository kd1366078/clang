#include<stdio.h>
main()
{
	int i, s, d[10] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	for (i = 0; i < 10; i++) {
		printf("%02d", d[i]);
	}
	printf("探索値を入力しれください>");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i >= 10) {
		printf("見つかりりませんでした");
	}
	else {
		printf("配列の%d番目にありました", i);
	}

}