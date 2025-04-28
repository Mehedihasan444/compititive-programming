#include <stdio.h>
int main()
{
    int n, s = 0;
    scanf("%d", &n);
    char str[n + 1];

    scanf("%s", &str);

    for (int i = n - 1; i >= 0; i--)
    {
        s += (str[i] - 48);
    }
    printf("%d\n", s);

    return 0;
}

/**
 * printf("%c %d\n", '3', '3' - 48);
 *   '3'
 */