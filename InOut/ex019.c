#include<stdio.h>
main()
{
	char o;
	//scanfにする場合はo=?を使って文字を入れておく必要はない
	printf("1文字入力 : ");
	scanf("%c",&o);
	printf("入力文字=%c", o);
}