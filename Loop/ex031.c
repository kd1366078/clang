#include <stdio.h>
main() {
	int i, g;
	for (g = 0, i = 1; i <= 10; i++) {//(初期値;継続条件;再初期化式)
		g += i;
		printf("1 から %d までの和 = %d\n", i, g);
	}


}