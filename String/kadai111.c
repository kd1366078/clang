#include<stdio.h>
main()
{
	char m[10] = "abcde";
	int i;
	for (i = 0; m[i] != '\0'; i++) {
		printf("%c", m[i]);
	}
}