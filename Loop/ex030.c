#include <stdio.h>
main()
{
	int i, a;
	printf("数を入れて : ");
	scanf("%d", &a);
	i = 0;
	while (i <= 10) {
		printf("%d + %d =%d\n", a, i, a + i);
		i++;
	}
}