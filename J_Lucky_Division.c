#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[5];
    sprintf(str, "%d", n);
    int len = strlen(str);
    int f = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == '7' || str[i] == '4')
        {
            continue;
        }
        else
        {
            f = 1;
            if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 ||
                n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 ||
                n % 474 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 ||
                n % 774 == 0 || n % 777 == 0)
            {
                printf("YES\n");
                return 0;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    if (f == 0)
    {
        printf("YES\n");
    }

    return 0;
}