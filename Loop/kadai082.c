#include<stdio.h>
main()
{
	int su1=0, g=0, h=0;
	while (su1 != -999){
		printf("���� -999 �ŏI��?");
		scanf("%d", &su1);
		if (su1 == -999 || su1 < 0 )
		{
			continue;
		}
		g += su1;
		h++;
	}
	printf("���v = %d \t ���� = %.2f", g, (float)g / h);


}