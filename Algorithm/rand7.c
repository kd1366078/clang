#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int r, i, a;
	srand(time(0));
	rand();
	r = rand() % 1000 + 1;
	i = 0, a = 0;
	printf("1�`1000�̒��œ����萔��\�z���Ă�������\n");
	while (i != r) {
		printf("������̐���?->");
		scanf("%d", &i);
		if (i > r) {
			printf("������̐���葽���ł�\n");
		}
		else if (i < r) {
			printf("������̐���菭�Ȃ��ł�\n");
		}
		else if (i == r) {
			printf("%d��ڂœ�����܂���\n", a);
		}
		a++;
	}
}


