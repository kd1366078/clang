#include <stdio.h>
main()
{
	int su, su1, su3;
	su = 0,su1 = 0, su3 = 0;
	do {
		su1 += su;
		printf("����? : ");
		scanf("%d", &su);
		su3++;
	} while (su != -999);
	printf("���v= %d         ����= %.2f", su1, (float)su1 / (su3 - 1));//�����܂ŋ��߂����ꍇ��int�^�ł�����Ƃ��͎����ŏo�������v�Z�̑O��float������
}