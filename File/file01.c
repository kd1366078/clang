#include<stdio.h>
main()
{
	FILE* fp;
	int a = 10,b=10;
	fp = fopen("file01.txt", "w");
	fprintf("ひのきの 棒");
	fprintf("ひのきの剣");
	fclose(fp);
}