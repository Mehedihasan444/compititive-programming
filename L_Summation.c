#include <stdio.h>

long long summation(int a[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return (long long)a[n - 1] + summation(a, n - 1);
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
    long long sum = summation(arr, n);
    printf("%lld\n", sum);
    return 0;
}

// #include <stdio.h>
// int sum = 0;
// void summation(int a[], int n)
// {
//     sum += a[n - 1];
//     if (n - 1 == 0)
//     {
//         printf("%d\n", sum);
//         return;
//     }
//     summation(a, n - 1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     summation(arr, n);
//     return 0;
// }