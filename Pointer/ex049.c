#include<stdio.h>
main()
{
	int a = 100, b;//変数の宣言
	int *p_a;      //ポインタの宣言
	p_a = &a;      //アドレスセット
	b = *p_a;
	printf(" a = %d b = %d *p_a = %d\n", a, b, *p_a);
}