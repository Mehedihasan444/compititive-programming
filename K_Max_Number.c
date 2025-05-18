#include <stdio.h>
#include <limits.h>

int max = INT_MIN;
int find_maximum(int a[], int n, int i)
{

    if (i == n)
    {
        return;
    }
    if (a[i] > max)
    {
        max = a[i];
    }

    find_maximum(a, n, i + 1);

    return max;
}

int main()
{
    int n;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = find_maximum(arr, n, 0);
    printf("%d\n", result);
    return 0;
}
