#include<stdio.h>
main()
{
	int i, j;
	char a[50], b[50];
	printf("������1?");
	gets(a);
	printf("������2?");
	gets(b);
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; i++, j++) {
		a[i] = b[j];
	}
	a[i] = '\0';
	puts(a);
}