#include <stdio.h>
int main()
{
    int n, f = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("NO\n");
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("YES\n");
    }
    return 0;
}