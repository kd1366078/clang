#include <stdio.h>
main()
{
	int su1, i;
	printf("�������� : ");
	scanf("%d", &su1);
	for (i = 1; i <= 5; i++) {
		printf("%d ", su1 * i);
	}
}