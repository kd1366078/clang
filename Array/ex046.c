#include<stdio.h>
main()
{
	int i, s, goukei;
	/*配列の先頭要素数のみ省略できる*/
	int a[][3] = { { 10, 20, 30 }, { 1, 2, 3 } };
	for (i = 0, s = 0; s < 2; s++) {
		for (goukei = 0, i = 0; i <= 2; i++) {
			printf(" a[%d][%d] = %d\n", s, i, a[s][i]);
			goukei += a[s][i];
		}
		printf(" %d行目の合計= %d\n",s, goukei);
	}
}	