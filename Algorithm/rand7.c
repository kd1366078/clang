#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int r, i, a;
	srand(time(0));
	rand();
	r = rand() % 1000 + 1;
	i = 0, a = 0;
	printf("1〜1000の中で当たり数を予想してください\n");
	while (i != r) {
		printf("あたりの数は?->");
		scanf("%d", &i);
		if (i > r) {
			printf("あたりの数より多いです\n");
		}
		else if (i < r) {
			printf("当たりの数より少ないです\n");
		}
		else if (i == r) {
			printf("%d回目で当たりました\n", a);
		}
		a++;
	}
}


