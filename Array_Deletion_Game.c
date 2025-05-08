#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n * 2];
        for (int i = 0; i < n * 2; i++)
        {
            scanf("%d", &a[i]);
        }
        long long s = 0;
        int r = n * 2;
        
    
        for (int l = 0; l < n; l++)
        {
      
            int max = 0;
            int idx = 0;
            for (int i = 0; i < r; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                    idx = i;
                }
            }
            
   
            s += max;
            
     
            for (int i = idx; i < r - 1; i++)
            {
                a[i] = a[i + 1];
            }
            r--;

            for (int i = 0; i < r - 1; i++)
            {
                a[i] = a[i + 1];
            }
            r--;
        }
        
        printf("%lld\n", s);
    }
    return 0;
}