#include<stdio.h>
int add(int c, int d);
main()
{
	int a, b, kotae;
	printf("整数を2つ入力: ");
	scanf("%d%d", &a, &b);
	kotae = add(a,b);
	printf("合計は %d です\n", kotae);

	//printf("合計は %d です\n", add(a,b);これでもk
}

/*関数addの記述*/
int add(int c, int d)
{
	int ans;
	ans = c * d;//一行でreturn a + b でも結果は同じになる!!
	return ans;
}