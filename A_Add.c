#include <stdio.h>
void sum(int a, int b)
{
    int c = a + b;
    printf("%d\n", c);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}