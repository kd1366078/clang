#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int p, i;
	srand(time(0));
	rand();
	
	scanf("何を出しますか?\n (1:グー 2:チョキ 3:パー> ");
	scanf("%d", &p);

	i = rand % 3;
	switch (p) 
	{
		case 1:
			printf("\nプレイヤーは、グーです。\n");
			break;
		case 2:
			printf("\nプレイヤーは、チョキです。\n");
			break;
		case 3:
			printf("\nプレイヤーは、パーです。\n");
			break;
	}

	switch (i)
	{
		case 0:
			printf("\nコンピューターは、グーです。\n");
			break;
		case 1:
			printf("\nコンピューターは、チョキです。\n");
			break;
		case 2:
			printf("\nコンピューターは、パーです。\n");
			break;
	}

	switch (((p - 1) - i + 3) % 3)
	{
		case 0:
			printf("\nあいこです。\n");
			break;
		case 1:
			printf("\nコンピューターの勝ちです。\n");
			break;
		case 2:
			printf("\nプレイヤーの勝ちです。\n");
			break;
	}

	
}