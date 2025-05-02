#include <stdio.h>
#include <string.h>
int main()
{
    char s[78];
    scanf("%s", s);
    int al[26] = {0};
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        al[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (al[i] == 2)
        {
            printf("%c", i + 'a');
            break;
        }
        // printf("%d ",al[i]);
    }

    return 0;
}