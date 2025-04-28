#include <stdio.h>
int main()
{
    int n, x, c1 = 0, c2 = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {

        if (i == x - 1)
        {
            if (arr[i] == 1)
            {
                arr[i] = 0;
            }
            else
            {
                arr[i] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
    printf("\n");
}