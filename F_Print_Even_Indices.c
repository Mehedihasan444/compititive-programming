#include <stdio.h>
void print(int a[], int n, int i)
{
    if (i == n)
    {
        // printf("%d", i);
        return;
    }
    print(a, n, i + 1);
    if (n % 2 == 0)
    {
        if (i % 2 == 0)
            printf("%d ", a[i]);
    }
    else
    {
        if (i % 2 == 0)
            printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    print(a, n, 0);
    return 0;
}