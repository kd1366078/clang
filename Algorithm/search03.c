#include<stdio.h>
main()
{
	int s, d[] = { 10, 15, 18, 23, 28, 35, 47, 55, 65, 70, 80};
	int low, hight, mid;

	printf("探索値は?");
	scanf("%d", &s);

	low = 0, hight = 10;
	while (low <= hight) {
		mid = (low + hight) / 2;

		if (s == d[mid]) break;

		if (s > d[mid]) {
			low = mid+1;
		}

		if (s < d[mid]) {
			hight = mid-1;
		}
	}
	if (low > hight) {
		printf("見つかりませんでした");
	}

	else {
		printf("d{%d]番目にありました", mid);
	}

}