#include<stdio.h>
main()
{
	char ch, *p_data, data[] = "Language";
	int i = 0;
	p_data = data;
	printf("data[ ] = %s\n", p_data);
	printf("ŒŸõ•¶š‚Í?");
	scanf("%c", &ch);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	while ((*(p_data + i)) != '\0') {
		if (ch == *(p_data + i)) {
			printf("%d ", i + 1);
		}
		i++;
	}
	printf("•¶š–Ú‚Å‚·\n");
}