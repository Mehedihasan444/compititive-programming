#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int b[r];
    for (int i = 0; i < r; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                b[i]++;
            }
        }

    }
    int max = b[0];
    int idx=0;
    for (int j = 0; j < r; j++)
    {
        if(b[j]>max){
            max = b[j];
            idx = j;
        }
    }
    printf("%d\n", idx);
    return 0;
}