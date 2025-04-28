#include <stdio.h>
#include <string.h>
int main()
{
    char str1[21], str2[21];
    scanf("%s %s", str1, str2);

    const a = strcmp(str1, str2);
    if (a < 0)
    {
        printf("%s\n", str1);
    }
    else if (a > 0)
    {
        printf("%s\n", str2);
    }
    else
    {
        printf("%s\n", str1);
    }

    return 0;
}