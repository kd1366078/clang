#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i, work, target, data[20];
	srand(time(0));
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;     //�ŏ�data[0] = 1�Ƃ������ƂɂȂ��Ă���
	}

	for (i = 0; i < 20; i++) {
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}
	for (i = 0; i < 20; i++) {
		printf("%d ", data[i]);
	}
}