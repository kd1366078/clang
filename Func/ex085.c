#include<stdio.h>
void h1(char* m, char* r);
main()
{
	char a[256], b[256];
	printf("”z—ñ a :");
	gets(a);
	printf("”z—ñ b :");
	gets(b);
	h1(a, b);
	printf("”z—ña : %s\n", a);
}

void h1(char* m, char* r)
{
	int i, j;
	for (i = 0; *(m + i) != '\0';i++);
	for (j = 0; *(m + i) = *(r + j); i++, j++);
}
