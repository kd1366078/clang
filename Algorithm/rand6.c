#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int p, i;
	srand(time(0));
	rand();
	
	scanf("�����o���܂���?\n (1:�O�[ 2:�`���L 3:�p�[> ");
	scanf("%d", &p);

	i = rand % 3;
	switch (p) 
	{
		case 1:
			printf("\n�v���C���[�́A�O�[�ł��B\n");
			break;
		case 2:
			printf("\n�v���C���[�́A�`���L�ł��B\n");
			break;
		case 3:
			printf("\n�v���C���[�́A�p�[�ł��B\n");
			break;
	}

	switch (i)
	{
		case 0:
			printf("\n�R���s���[�^�[�́A�O�[�ł��B\n");
			break;
		case 1:
			printf("\n�R���s���[�^�[�́A�`���L�ł��B\n");
			break;
		case 2:
			printf("\n�R���s���[�^�[�́A�p�[�ł��B\n");
			break;
	}

	switch (((p - 1) - i + 3) % 3)
	{
		case 0:
			printf("\n�������ł��B\n");
			break;
		case 1:
			printf("\n�R���s���[�^�[�̏����ł��B\n");
			break;
		case 2:
			printf("\n�v���C���[�̏����ł��B\n");
			break;
	}

	
}