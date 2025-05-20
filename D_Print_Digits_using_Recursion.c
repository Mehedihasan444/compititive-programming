#include <stdio.h>
#include <string.h>

void printDigits(int n)
{
    if (n == 0)
        return;
    printDigits(n / 10);
    printf("%d ", n % 10);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0\n");
            continue;
        }

        printDigits(n);
        printf("\n");
        // char s[15];
        // sprintf(s, "%d", n);
        // int len = strlen(s);
        // for (int i = 0; i < len; i++)
        // {
        //     printf("%c ", s[i]);
        // }
        // printf("\n");
    }

    return 0;
}