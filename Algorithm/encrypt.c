#include<stdio.h>
main()
{
	char s[30];
	int i;
	printf("文字列を入力しなさい>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i]  + 1;
	}
	printf("暗号化文字列は、%sです", s);
}