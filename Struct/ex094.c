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
		printf("%d”Ô–Ú‚Ì(–¼‘O):", i + 1);
		scanf("%s",p->name);
		printf("%d”Ô–Ú‚Ì(¶”NŒŽ“ú):", i + 1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d”Ô–Ú‚Ì(ŒŒ‰tŒ^):",i+1);
		scanf("%s", p->blood);
	}
	for (p = data, i = 0; i < 5; i++, p++)
	{
		if (strcmp(p->blood,"A") == 0) {
			printf("%s--%d”N%02dŒŽ%02d“ú¶ ŒŒ‰tŒ^[%sŒ^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}
