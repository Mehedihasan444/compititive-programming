#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int c = 0, t;
    for (int i = 1, l = 1; i <= n; i++, l += 2)
    {
        c++;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        if (c % 2 != 0)
            for (int j = 1; j <= l; j++)
            {

                printf("#");
            }

        else
            for (int j = 1; j <= l; j++)
            {

                printf("-");
            }
        t = l;
        printf("\n");
    }

    for (int i = 1, l = t-2; i <= n; i++, l -= 2)
    {
        c++;
        for (int j = 0; j <= i-1; j++)
        {
            printf(" ");
        }
        if (c % 2 != 0)
        {

            for (int j = 1; j <= l; j++)
            {

                printf("#");
            }
        }
        else
            for (int j = 1; j <= l; j++)
            {

                printf("-");
            }
        printf("\n");
    }
    return 0;
}