#include<stdio.h>
main()
{
	double data[] = { 10.800000,20.300000,30.600000,40.400000, 50.500000, },*pdata,m=0,h=0;
	int i;
	pdata = data;
	printf("�z�� data[ ] = ");
	for (i = 0; i < 5; i++)
	{
		printf("%f, ", data[i]);
		m += *pdata;
		pdata++;
	}
	printf("\n");
	printf("���v = %.3f", m);
	printf("\n");
	printf("���� = %.3f", m/i);


}