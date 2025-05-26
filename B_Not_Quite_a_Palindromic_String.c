

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        char s[n + 1];
        scanf("%s", s);
        
        int zero = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else if (s[i] == '1')
            {
                one++;
            }
        }
        
        int bp = n/2 - k;
        
        if (zero >= bp && one >= bp && 
            (zero - bp)/2 + (one - bp)/2 >= k)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}