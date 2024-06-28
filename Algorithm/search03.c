#include<stdio.h>
main()
{
	int s, d[] = { 10, 15, 18, 23, 28, 35, 47, 55, 65, 70, 80};
	int low, hight, mid;

	printf("’Tõ’l‚Í?");
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
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½");
	}

	else {
		printf("d{%d]”Ô–Ú‚É‚ ‚è‚Ü‚µ‚½", mid);
	}

}