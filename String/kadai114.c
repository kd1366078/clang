#include<stdio.h>
main()
{
	int i, k;
	char m[20];
	printf("�������?");
	scanf("%s", & m);
	printf("������ = ");
	for (i = 0; m[i] != '\0'; i++) {
		printf("%c", m[i]);
	}
	printf("\t");
	printf("������ = %d����", i);
}