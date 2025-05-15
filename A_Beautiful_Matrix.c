#include <stdio.h>
int main()
{
    int arr[6][6];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (arr[i][j] != 0)
            {

                printf("%d\n", abs(abs(3 - i) + abs(3 - j)));
            }
        }
    }

    return 0;
}

/**
 *
 *  3*3 2*5
 * 3*3 3*2
 * **/