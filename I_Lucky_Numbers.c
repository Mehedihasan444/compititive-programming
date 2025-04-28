#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int d1 = n % 10;
    int d2 = n / 10;
    
    if (d1%d2==0 || d2%d1 == 0)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }

    return 0;
}