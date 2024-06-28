#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int r, i;
	srand(time(0));
	rand();
	r = rand()% 5 + 1;
	for (i = 0; i < r; i++) {
		printf("¡“ú‚Ì‰^¨‚Í™œc");
	}
}