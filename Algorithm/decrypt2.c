#include<stdio.h>
main()
{
	char s[30];
	int  k[30];
	int i;
	
	printf("文字列を入力してください＞");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の暗号下キー", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("暗号文字列sを表示%s\n",s);
}