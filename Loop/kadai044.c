#include<stdio.h>
main()
{
	int a;
	a = 0;
	printf("�����R�[�h(-999 �œ��͏I��)?");
	scanf("%d", &a);
	while (a != -999) {
		printf("8�i�� = %o    16�i�� = %x\n", a, a);
		printf("�����R�[�h(-999 �œ��͏I��)?");
		scanf("%d", &a);
	}
	printf("�I��");
}