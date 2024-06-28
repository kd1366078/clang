#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int r, i, a;
	srand(time(0));
	rand();
	r = rand() % 1000 + 1;
	i = 0, a = 0;
	printf("1`1000‚Ì’†‚Å“–‚½‚è”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	while (i != r) {
		printf("‚ ‚½‚è‚Ì”‚Í?->");
		scanf("%d", &i);
		if (i > r) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è‘½‚¢‚Å‚·\n");
		}
		else if (i < r) {
			printf("“–‚½‚è‚Ì”‚æ‚è­‚È‚¢‚Å‚·\n");
		}
		else if (i == r) {
			printf("%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", a);
		}
		a++;
	}
}


