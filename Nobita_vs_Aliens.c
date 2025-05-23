#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1 - i; j >i; j--)
        {
            if (a[i] + a[j] <= k && a[i] != 0 && a[j] != 0)
            {
                // printf("%d %d\n", a[i], a[j]);
                c++;
                a[i] = 0;
                a[j] = 0;
            }
        }

  
    }
    printf("%d\n", c);

    return 0;
}