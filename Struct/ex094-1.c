#include<stdio.h>
#define go 5
typedef struct hizuke {
	int nen;
	int tuki;
	int hi;
}hizu;

typedef struct zibunn_data {
	char name[20];
	hizu date;
	char blood[5];
}zi;
main()
{
	zi data[go] = { {"rian",2000, 02, 22, "A"},{"dare",2015, 04, 30, "B"},{ "hima",1995, 02, 22, "A" },{ "nani",2009, 12, 22, "O" },{ "kanami",1970, 02, 17, "AB" } };

	zi *p;
	int i;
	for (p = data, i = 0; i < go; i++, p++)
	{
		if (p->date.tuki == 2) {
			printf("%s--%d”N%02dŒŽ%02d“ú¶ ŒŒ‰tŒ^[%sŒ^\n", p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}
