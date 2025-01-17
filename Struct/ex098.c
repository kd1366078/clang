#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;//県コード
	char name[20];//県名
	struct ken* next;
};
main()
{
	struct ken ken_data[] = { {1, "北海道", NULL},
							{ 2, "青森県", NULL},
							{ 3, "岩手県", NULL},
							{ 4, "宮崎県", NULL},
							{ 5, "秋田県", NULL},
							{ 6, "山形県", NULL},
							{ 7, "福島県", NULL},
							{ DATA_END,"", NULL} };

	struct ken* p, * wp;

	struct ken hyogo = { 28,"兵庫県",NULL };
	struct ken oosaka = { 27,"大阪府",NULL };

	//リンクの設定
	p = wp = ken_data;
	do {
		p++;//先行する
		wp->next = p;//NULLに入れる
		wp = p;//追いつく
	} while (p->code != DATA_END);

	//リンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
	printf("\n");

	ken_data[6].next = &oosaka;//北海道のnextに兵庫県のアドレスをセット
	oosaka.next = &ken_data[7];

	//北海道と青森県の間に兵庫県を入れる
	ken_data[0].next = &hyogo;//北海道のnextに兵庫県のアドレスをセット
	hyogo.next = &ken_data[1];//兵庫のnextに青森のあどれすをセット



	//データ挿入後のリンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}