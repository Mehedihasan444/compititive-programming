#include <stdio.h>
#include <string.h>
char s[10000001];
int main()
{
    scanf("%s", s);
    int c[26] = {0};
    char ch = 'a';
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        c[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (c[i] > 0)
            printf("%c : %d\n", ch, c[i]);
        ch++;
    }
    // printf("%s", s);
    // printf("%d", len);
    return 0;
}
