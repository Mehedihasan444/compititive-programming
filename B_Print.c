#include <stdio.h>
void display(int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    display(n);
    return 0;
}