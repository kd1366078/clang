#include <stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í : ");
	scanf("%c", &moji);
	if (moji >= 'A') {
		if (moji <= 'Z');//YES‚Ì‚Ù‚¤‚Éif•¶‚ð‚Â‚¯‚é‚Æ‚«‚Íif if‚É‚·‚é
			printf("‘å•¶Žš‚Å‚·");
		}
		else {
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
		}
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}