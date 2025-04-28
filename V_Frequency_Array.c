#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m];

    int fre[n];
    for (int i = 0; i <= n; i++)
    {
        fre[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);

        fre[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", fre[i]);
    }

    return 0;
}