#include<stdio.h>
main()
{
	char m;
	printf("�A���t�@�x�b�g? ");
	scanf("%c", &m);
	if (m >= 'a' && 'z' >= m) {
		printf("�ϊ����ʂ�%c", m - 0x20);
	}
	else if (m >= 'A' && 'Z' >= m) {
		printf("�ϊ����ʂ�%c", m + 0x20);
	}
	else {
		printf("ERROR");
	}
}