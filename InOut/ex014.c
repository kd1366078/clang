#include <stdio.h>
main()
{
	int no ;
	printf(" 整数を入れて:")；
	scanf( "%d", &no );//アドレスを使うときは&を使う
	printf(" 入力値は%dです\n", no);
}