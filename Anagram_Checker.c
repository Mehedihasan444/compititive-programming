#include <stdio.h>
#include <string.h>
int main()
{
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);
    int a1[26] = {0};
    int a2[26] = {0};
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for (int i = 0; i < l1; i++)
    {
        a1[s1[i] - 'a']++;
    }
    for (int i = 0; i < l2; i++)
    {
        a2[s2[i] - 'a']++;
    }
    int f = 0;
    for (int i = 0; i < 26; i++)
    {

        if (a2[i] > 0 && a1[i] == 0)
        {
            f = 1;
            printf("No\n");
            break;
        }
        else if (a2[i] == 0 && a1[i] > 0)
        {
            f = 1;
            printf("No\n");
            break;
        }
       
    }
    if (f == 0)
    {
        printf("Yes\n");
    }

    return 0;
}