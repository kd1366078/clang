#include<stdio.h>
#include<string.h>
typedef struct zibunn_data {
	char name[20];
	int birth[3];
	char blood[5];
}zi;
main()
{
	int i;
	zi data[5];
	zi *p;
	p = data;
	for (i = 0; i < 5; i++, p++) {
		printf("%d�Ԗڂ�(���O):", i + 1);
		scanf("%s",p->name);
		printf("%d�Ԗڂ�(���N����):", i + 1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d�Ԗڂ�(���t�^):",i+1);
		scanf("%s", p->blood);
	}
	for (p = data, i = 0; i < 5; i++, p++)
	{
		if (strcmp(p->blood,"A") == 0) {
			printf("%s--%d�N%02d��%02d���� ���t�^�[%s�^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}
