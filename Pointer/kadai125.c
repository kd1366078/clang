#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pdata;
	printf("”z—ñ data[ ] = ");
	for (int i = 0; i < 9; i++) {
		pdata = data;
		printf("%d, ", *pdata);
	}
	pdata = data;
	printf("\n");
	printf("”z—ñ data[ ] = ");
	for (int i = 0; i < 9; i++) {
		pdata++;
		printf("%d, ", *pdata);
	}
}