#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", (str[i] + ('a' - 'A')));
        }
        else if (str[i] == ',')
        {
            printf(" ");
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", (str[i] - ('a' - 'A')));
        }
    }

    return 0;
}