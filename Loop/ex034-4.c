#include <stdio.h>
main()
{
	int i, j, num;
	printf("数は? : ");
	scanf("%d", &num);
	i = 0;
	do {
		j = 0;
		do {
			printf(" ");
			j++;
		} while (j < num - i);
		j = 0;
		do{
			printf("*");
			j++;
		} while (j < i + 1);//ここに+1を入れておくことでi=0でも最初の一文字目を出力できる
		printf("\n");
		i++;
	} while (i < num);
}