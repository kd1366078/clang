#include<stdio.h>
main()
{
	int i, s, goukei;
	/*�z��̐擪�v�f���̂ݏȗ��ł���*/
	int a[][3] = { { 10, 20, 30 }, { 1, 2, 3 } };
	for (i = 0, s = 0; s < 2; s++) {
		for (goukei = 0, i = 0; i <= 2; i++) {
			printf(" a[%d][%d] = %d\n", s, i, a[s][i]);
			goukei += a[s][i];
		}
		printf(" %d�s�ڂ̍��v= %d\n",s, goukei);
	}
}	