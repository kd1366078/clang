#include<stdio.h>
main()
{
	char m;
	printf("�A���t�@�x�b�g? ");
	scanf("%c", &m);
	if (m >= 'a' && 'z' >= m) {
		printf("���̕����́u�������v�ł�");
	}
	else if(m >= 'A' && 'Z' >= m) {
		printf("���̕����́u�啶���v�ł�");
	}
	else {
		printf("ERROR");
	}
}