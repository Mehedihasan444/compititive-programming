#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0)
        {

            printf("%d\n", a / 2);
        }
        else
        {

            printf("%d\n", (a + 1) / 2);
        }
    }
}
