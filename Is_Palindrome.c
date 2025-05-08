#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[l - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int r = is_palindrome(s);
    if (r == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}