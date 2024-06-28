#include<stdio.h>
long take(int a, int b);
main()
{
    int a, b, c;
    printf("数値１？");
    scanf("%d", &a);
    printf("数値２？");
    scanf("%d", &b);
    c = take(a, b);

    printf("%dの%d乗は、%d", a, b, c);
}
long take(int a, int b)
{
    int c = 1;
    for (int i = 0; i != b; i++)
    {
        c = c * a;
    }
    return c;
}
