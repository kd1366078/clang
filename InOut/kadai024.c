#include <stdio.h>
main()
{
	int ia, ib;
	printf("2�̐���? ");
	scanf("%d %d", &ia, &ib);//�R���}�ł��Y�꒍��
	printf("*** %d �� %d �� �l�����Z***\n", ia, ib);
	printf("%d + %d = %d\n", ia, ib, ia + ib);
	printf("%d - %d = %d\n", ia, ib, ia - ib);
	printf("%d * %d = %d\n", ia, ib, ia * ib);
	printf("%d / %d = %d ���܂� %d\n", ia, ib, ia / ib, ia % ib);
}