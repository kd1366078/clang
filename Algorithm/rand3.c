#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int r;
	srand(time(0));
	rand();
	r = rand() % 100 + 1;
	if (r <= 30) {
		printf("��������̂�������!\n");
	}
	else{
		printf("�ʏ�U��\n");
	}
}