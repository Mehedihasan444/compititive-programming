#include <stdio.h>
int main()
{
    char s[201];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')

        {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}