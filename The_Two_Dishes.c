#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, s;
        scanf("%d %d", &n, &s);
        if (s <= n)
        {
            printf("%d\n", s);
        }
        else
        {
            printf("%d\n", 2 * n - s);
        }
    }
}
