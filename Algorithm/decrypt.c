#include<stdio.h>
main()
{
	char s[30];
	int i;
	printf("�Í������������͂��Ȃ���>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	printf("�����ςݕ������", s);
}