#include<stdio.h>
main()
{
	char ch, *p_data, data[] = "Language";
	int i = 0;
	p_data = data;
	printf("data[ ] = %s\n", p_data);
	printf("����������?");
	scanf("%c", &ch);
	printf("�������ʂ́A");
	while ((*(p_data + i)) != '\0') {
		if (ch == *(p_data + i)) {
			printf("%d ", i + 1);
		}
		i++;
	}
	printf("�����ڂł�\n");
}