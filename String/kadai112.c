#include<stdio.h>
main()
{
	int i;
	char m1[10] = "abcde";
	char m2[10];
	for (i = 0; m1[i] != '\0'; i++) {
		m2[i] = m1[i];
	}
	printf("(�R�s�[��) �z�� data1[] = ");
	for (i = 0; m1[i] != '\0'; i++) {
		printf("%c", m1[i]);
	}
	printf("\n");
	printf("(�R�s�[��) �z�� data2[] = ");
	for (i = 0; m2[i] != '\0'; i++) {
		printf("%c", m2[i]);
	}
}