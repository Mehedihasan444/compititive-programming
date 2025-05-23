#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, c;
        scanf("%d %d %d %d", &n, &a, &b, &c);
        if (b >= n && (a + c) >= n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}