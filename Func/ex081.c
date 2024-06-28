#include<stdio.h>
int Get_Max(int* arrya, int size);
int Get_Min(int* arrya, int size);
main()
{
	int data[8] = { 6, 10, 8 ,2, 9, 5, 1, 7 };
	printf("Å‘å’l = %d\n", Get_Max(data, 8));
	printf("Å¬’l = %d\n", Get_Min(data, 8));
}

int Get_Max(int* arrya, int size){
	int i, max;
	for (max = *arrya, i = 1; i < size; i++)
	{
		if (max < *(arrya + i))
		{
			max = *(arrya + i);
		}
	}
	return max;
}

int Get_Min(int* arrya, int size)
{
	int i, min;
	for (min = *arrya, i = 1; i < size; i++)
	{
		if (min > *(arrya + i))
		{
			min = *(arrya + i);
		}
	}
	return min;
}