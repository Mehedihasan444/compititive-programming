#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);
    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a, b);
    printf("%c", b[0]);
    for (int i = 1; i < strlen(a); i++)
    {

        printf("%c", a[i]);
    }

    printf(" %c", a[0]);
    for (int i = 1; i < strlen(b); i++)
    {

        printf("%c", b[i]);
    }
    printf("\n");
    return 0;
}