#include <stdio.h>
int main()
{
    int n, a = 0, b = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if ((arr[i] % 2 == 0 && arr[i] % 3 == 0) || arr[i] % 2 == 0)
        {
            a++;
        }
        else if (arr[i] % 3 == 0)
        {
            b++;
        }
    }
    printf("%d %d", a, b);
    return 0;
}