#include<stdio.h>
main()
{
	char day[7][10] = { "sunday", "manday", "tuesday","wednesday", "thursday", "friday","saturday" };
	int i, j;
	for (i = 0,j = 0; i < 7; i++) {
		if (day[i][j] == 's') {
			puts(day[i]);
		}
	}
}