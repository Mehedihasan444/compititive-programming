#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        scanf("%s", s);
        int sm = 0, cp = 0, dg = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                sm++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cp++;
            }
            else
            {
                dg++;
            }
        }
        printf("%d %d %d\n", cp,sm,  dg);
    }

    return 0;
}