#include < stdio.h>
main()
{
	int manth;
	printf("月を入力 : ");
	scanf("%d", &manth);
	if (manth == 2){
	printf("最終日は２８日です");
	}
	else {
		if (manth == 4 || manth == 6 || manth == 9 || manth == 11) {
			printf("最終日は３０日です");
		}
		else {
			printf("最終日は３１日です");
		}

	}
}