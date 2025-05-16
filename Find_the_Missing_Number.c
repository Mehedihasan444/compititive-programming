#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int m, a, b, c;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        if (m == 0)
        {
            printf("0\n");
            continue;
        }

        if (m % (a * b * c) != 0)
        {
            printf("-1\n");
        }
        else
        {
            long long int ans = m / (a * b * c);

            printf("%lld\n", ans);
        }
    }

    return 0;
}