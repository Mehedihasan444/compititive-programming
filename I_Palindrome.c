#include <stdio.h>
#include <string.h>
int main()
{
    int f = 0;
    char arr[1001];
    scanf("%s", arr);

    for (int i = 0, j = strlen(arr) - 1; i < strlen(arr); i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("NO\n");
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("YES\n");
    }
    return 0;
}