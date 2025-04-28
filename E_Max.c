#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = INT_MIN;

    while (n--)
    {
        int current;
        scanf("%d", &current);

        if (current >= max)
        {
            max = current;
        }
    };
    printf("%d\n", max);

    return 0;
}