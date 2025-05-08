#include <stdio.h>
int count_before_one(int arr[], int n)
{
    int c = 0;
    for (int i = 0;i<n; i++)
    {

        if (arr[i] == 1)
        {

            return c;
        }
        c++;
    }

    return n;
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
    int cout = count_before_one(arr, n);
    printf("%d\n", cout);
    return 0;
}