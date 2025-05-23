#include <stdio.h>
int o = 0, e = 0;
void countOddEven(int n)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    if (digit % 2 == 0)
    {
        e++;
    }
    else
    {
        o++;
    }
    countOddEven(n / 10);
}
int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    int f = 0;
    for (int i = l; i <= r; i++)
    {
        e = 0;
        o = 0;
        countOddEven(i);
        // printf("%d %d\n", o, e);
        if (e == o && e!=0)
        {
            printf("%d\n", i);

            f = 1;
        }
    }
    if (f == 0)
    {
        printf("-1\n");
    }

    return 0;
}