#include <stdio.h>
int main(){
   int n,sum=0;
   scanf("%d",&n);
   char s[n+1];
    scanf("%s",s);
    for (int  i = 0; i < n; i++)
    {
        sum+= s[i]-'0';

    }
    if (sum%3==0)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
 
    
    return 0;
}