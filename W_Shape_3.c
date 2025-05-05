#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1, k = 1; i <= n; i++, k += 2)
    {
        for (int j = n-1 - i; j >= 0; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1, k = n+n-1; i <= n; i++, k -= 2)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}