// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     while (n--)
//     {
//         char s1[55], s2[55];
//         scanf("%s %s", s1, s2);
//         int len = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
//         for (int i = 0; i < len; i++)
//         {
//             if (s1[i] != '\0')
//                 printf("%c", s1[i]);
//             if (s2[i] != '\0')
//                 printf("%c", s2[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s1[55], s2[55];
        scanf("%s %s", s1, s2);
        int len = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
        for (int i = 0; i < len; i++)
        {
            if (i<strlen(s1))
                printf("%c", s1[i]);
            if (i<strlen(s2))
                printf("%c", s2[i]);
        }
        printf("\n");
    }

    return 0;
}