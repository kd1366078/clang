#include<stdio.h>
long take(int a, int b);
main()
{
    int a, b, c;
    printf("���l�P�H");
    scanf("%d", &a);
    printf("���l�Q�H");
    scanf("%d", &b);
    c = take(a, b);

    printf("%d��%d��́A%d", a, b, c);
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
