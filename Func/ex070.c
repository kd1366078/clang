#include<stdio.h>
int add(int c, int d);
main()
{
	int a, b, kotae;
	printf("������2����: ");
	scanf("%d%d", &a, &b);
	kotae = add(a,b);
	printf("���v�� %d �ł�\n", kotae);

	//printf("���v�� %d �ł�\n", add(a,b);����ł�k
}

/*�֐�add�̋L�q*/
int add(int c, int d)
{
	int ans;
	ans = c * d;//��s��return a + b �ł����ʂ͓����ɂȂ�!!
	return ans;
}