#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int s, int e)
{
    while (s < e)
    {
        if (str[s] != str[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[105];
        scanf("%s", str);
        int len = strlen(str);
        int r = isPalindrome(str, 0, len - 1);
       
        if (r == 1)
        {
            printf("0\n");
        }
        else
        {
            int x = len / 2;
            for (int i = 0; i < len; i++)
            {
                for (int j = len - 1; i!=j; j--)
                {
                    if (str[i] == str[j] && str[i]!='1')
                    {
                        str[i]='1';
                        str[j]='1';
                    }
                }
            }
            int c=0;
            for (int i = 0; i < len; i++)
            {
                if (str[i]!='1')
                {
                    c++;
                }
                
                
            }
            printf("%d\n",c-1);
            
        }
    }

    return 0;
}