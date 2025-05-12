#include <stdio.h>
int main()
{
    int n, m, x;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &x);
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                f = 1;
                printf("will not take number\n");
                return 0;
             
            }
        }
    }
    if (f == 0)
    {
        printf("will take number\n");
    }

    return 0;
}
