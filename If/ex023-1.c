#include <stdio.h>
main()
{
	int s, h, m;
	printf("�b������� : ");
	scanf("%d", &s);
	if (s < 0) {//�}�C�i�X���ǂ������`�F�b�N
		printf("�}�C�i�X�̓G���[�ł�");
	}
	else {
		if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d����%d��%d�b", h, m, s);
		}
		else {
			printf("�G���[");
		}
	}
}