#include <stdio.h>
main()
{
	int su, su1, su3;
	printf("����? : ");
	scanf("%d", &su);
	for (su1 = 0, su3 = 0; su != -999; su3++) {

		su1 += su;
		printf("����? : ");
		scanf("%d", &su);
	}
	printf("���v= %d         ����= %.2f", su1, (float)su1 / su3);//�����܂ŋ��߂����ꍇ��int�^�ł�����Ƃ��͎����ŏo�������v�Z�̑O��float������
}
