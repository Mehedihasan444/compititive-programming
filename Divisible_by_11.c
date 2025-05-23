#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[105];
    scanf("%s", str);
    int len = strlen(str);
    int o = 0, e = 0;
    for (int i = len - 1, j = 1; i >= 0; i--, j++)
    {
        if (j % 2 == 0)
        {
            e += str[i] - '0';
        }
        else
        {
            o += str[i] - '0';
        }
    }
    int dif = abs(o - e);
    if (dif % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}