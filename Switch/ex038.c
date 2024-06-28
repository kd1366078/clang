#include <stdio.h>
main()
{
	char su;
	printf("整数を入れて : ");
	scanf("%d", &su);
	switch (su / 10) {
	case 1 :
		printf("10点代です");
		break;
	case 2 :
		printf("20点代です");
		break;
	case 3 :
		printf("30点代です");
		break;
	case 4 :
		printf("40点代です");
		break;
	default:
		printf("エラー");
	}
}