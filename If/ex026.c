#include < stdio.h>
main()
{
	int manth;
	printf("������� : ");
	scanf("%d", &manth);
	if (manth == 2){
	printf("�ŏI���͂Q�W���ł�");
	}
	else {
		if (manth == 4 || manth == 6 || manth == 9 || manth == 11) {
			printf("�ŏI���͂R�O���ł�");
		}
		else {
			printf("�ŏI���͂R�P���ł�");
		}

	}
}