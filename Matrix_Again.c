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
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[n - 1][i]);
    }
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[j][m - 1]);
    }
    return 0;
}