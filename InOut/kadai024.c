#include <stdio.h>
main()
{
	int ia, ib;
	printf("2‚Â‚Ì®”? ");
	scanf("%d %d", &ia, &ib);//ƒRƒ“ƒ}‘Å‚¿–Y‚ê’ˆÓ
	printf("*** %d ‚Æ %d ‚Ì l‘¥‰‰Z***\n", ia, ib);
	printf("%d + %d = %d\n", ia, ib, ia + ib);
	printf("%d - %d = %d\n", ia, ib, ia - ib);
	printf("%d * %d = %d\n", ia, ib, ia * ib);
	printf("%d / %d = %d ‚ ‚Ü‚è %d\n", ia, ib, ia / ib, ia % ib);
}