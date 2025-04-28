#include <stdio.h>
int main(){
    int n,c1=0,c2=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
        {
            c1++;
        }
        else if (arr[i] == 1)
        {
            c2++;
        }
        
    }
    printf("%d %d\n", c1, c2);
    return 0;
}