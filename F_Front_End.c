#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (n % 2 != 0)
        {
            if (a[i] == a[n - i - 1])
            {
                printf("%d", a[i]);
                break;
            }

            printf("%d %d ", a[i], a[n - i - 1]);
        }
        else
        {
            if ((i + 1) > n / 2)
            {
                break;
            }

            if (i == 0)
            {

                printf("%d %d", a[i], a[n - i - 1]);
            }
            else
            {
                printf(" %d %d", a[i], a[n - i - 1]);
            }
        }
    }

    return 0;
}