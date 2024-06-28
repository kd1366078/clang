#include<stdio.h>
main()
{
	int tbl[][3] = { {10, 20, 30},
					{40, 50, 60},
					{70, 80, 90} };
	int* p_tbl, i, j;
	p_tbl = &tbl[0][1];
	for (i = 0; i < 3; i++)//‰½•¶šo‚·‚©‚Ìİ’è
	{
		printf("%d ", *p_tbl);
		p_tbl += 3;
	}
}