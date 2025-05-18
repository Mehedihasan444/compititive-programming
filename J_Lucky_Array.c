#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    int min = INT_MAX;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int c = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i] == min)
        {
            c++;
        }
    }
    int temp = c % 2 == 0 ? 1 : 0;
    if (temp == 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}
