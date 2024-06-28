#include<stdio.h>
main()
{
	int i, su1;
	printf("     1 2 3 4 5 6 7 8 9\n");
	printf("====================\n");
	for (i = 1; i <= 9; i++) {
		printf("%d | ", i);
		for (su1 = 1; su1 <= 9; su1++) {
			printf("%d ", su1 * i);
		}
		printf("\n");
	}
}