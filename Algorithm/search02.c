#include<stdio.h>
main()
{
	int i, s, d[11] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };

	printf("探索値は?");
	scanf("%d", &s);

	d[10] = s;

	for (i = 0; s != d[i]; i++) {

	}

	if (i >= 10) {
		printf("見つかりませんでした\n");
	}

	else {
		printf("d[%d]にあった\n", i);
	}
}