#include <stdio.h>
main()
{
	int i, j, num;
	printf("����? : ");
	scanf("%d", &num);
	i = 0;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i + 1);//������+1�����Ă������Ƃ�i=0�ł��ŏ��̈ꕶ���ڂ��o�͂ł���
		printf("\n");
		i++;
	} while (i < num);
}