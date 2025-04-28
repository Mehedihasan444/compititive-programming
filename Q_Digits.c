#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        if (a == 0)
        {
            printf("0\n");
            continue;
        }
        else
            for (int i = 0; a > 0; i++)
            {

                printf("%d ", a % 10);
                a = a / 10;
            }
        printf("\n");
    }

    return 0;
}