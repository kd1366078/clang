#include <stdio.h>
main()
{
	char moji;
	printf("��������� : ");
	scanf("%c", &moji);
	if (moji >= 'A') {
		if (moji <= 'Z');//YES�̂ق���if��������Ƃ���if if�ɂ���
			printf("�啶���ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
	else {
		printf("���̑��̕����ł�");
	}
}