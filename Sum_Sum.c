#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], posi = 0, nega = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {

            posi += arr[i];
        }
        else
        {
            nega += arr[i];
        }
    }
    printf("%d %d\n", posi, nega);
    return 0;
}