#include <stdio.h>
main()
{
	int i, a;
	printf("�������� : ");
	scanf("%d", &a);
	i = 0;
	while (i <= 10) {
		printf("%d + %d =%d\n", a, i, a + i);
		i++;
	}
}