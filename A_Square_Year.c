#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[5];
        scanf("%s", s);

        int num = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 + (s[3] - '0');
        
        int r = (int)sqrt(num); 

       
        if (r * r == num)
        {
            int a, b;
       
            if (r % 2 == 0)
            {
                a = r / 2;
                b = r / 2;
            }
            else
            {
                a = r / 2; 
                b = r / 2 + 1;
            }
            printf("%d %d\n", a, b);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}