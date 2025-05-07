#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l;
        scanf("%d", &l);
        int a[l];
        for (int i = 0; i < l; i++)
        {
            scanf("%d", &a[i]);
        }
        int r = 0, b = 0;
        if (l % 2 != 0)
        {
            printf("No\n");
        }
        else
        {
            for (int i = 0; i < l; i++)
            {
                if (a[i] == 1)
                {
                    r++;
                }
                else if (a[i] == 2)
                {
                    b++;
                }
              
            }
            int tem = l / 2;
            // printf("%d %d %d\n",tem,r,b);
            if (r > tem || b > tem)
            {
                printf("No\n");
            }
            else
            {
                printf("Yes\n");
            }
        }
    }
    return 0;
}