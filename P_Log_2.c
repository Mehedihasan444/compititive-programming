#include <stdio.h>

long long int log2(long long int n)
{
    if (n <= 1)
    {
        return 0;
    }
    return 1 + log2(n / 2);
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%lld\n", log2(n));
    return 0;
}