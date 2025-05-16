#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1, k = 0; i <= 11 + n / 2; i++, k += 2)
    {
        // if (k >= (9 + n * 2))
        if (k >= (10 + n))
        {
            // k = 0;
            for (int j = 5; j > 0; j--)
            {
                printf(" ");
            }

            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
        }
        else
        {
            int tem = (10 + n) / 2;
            for (int j = tem - i; j >= 0; j--)
            {
                printf(" ");
            }

            for (int j = 0; j <= k; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}