#include<stdio.h>
main()
{
	int a;
	a = 0;
	printf("�����R�[�h(-1 �œ��͏I��)?");
	scanf("%d", &a);
	while (a != -1) {
		printf("%c\n", a);
		printf("�����R�[�h(-1 �œ��͏I��)?");
		scanf("%d", &a);
	}
	printf("�I��");
}