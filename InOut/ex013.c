#include <stdio.h>
main()
{
	char su;
	su = '1';
	printf(" su : %c \n", su);
	printf(" 数値に変換 : %d \n", su - '0');//文字1=49,文字0=48だから49-48=になり１になる
}