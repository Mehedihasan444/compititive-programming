#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, d;
        scanf("%d %d %d", &a, &b, &d);
        int tp = a + b;
        int r = (a * d) / tp;
        int fn = d - r;
        printf("%d\n", fn);
    }

    return 0;
}