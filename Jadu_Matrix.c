#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (m != n)
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 1)
            {
                printf("NO\n");
                return 0;
            }

            if (a[i][j] == 1 && i + j != n - 1 && i != j)
            {
                printf("NO\n");
                return 0;
            }

            if (i == j && a[i][j] != 1)
            {
                printf("NO\n");
                return 0;
            }
            if (i + j == n - 1 && a[i][j] != 1)
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}