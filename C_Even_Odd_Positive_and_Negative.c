#include <stdio.h>
int main()
{
    int n;
    int a[1000];
    scanf("%d", &n);
    int e=0,o=0,p=0,ne=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if (a[i] > 0)
        {
            p++;
        }
        else if (a[i] < 0)
        {
            ne++;
        }
    }


    printf("Even: %d\n", e);
    printf("Odd: %d\n", o);
    printf("Positive: %d\n", p);
    printf("Negative: %d\n", ne);

    return 0;
}