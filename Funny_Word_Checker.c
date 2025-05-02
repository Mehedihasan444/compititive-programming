#include <stdio.h>
#include <string.h>
int main(){
   char s[101];
   scanf("%s",s);
   const l=strlen(s);
   if (s[0]==s[l-1])
   {
   printf("Yes\n");
   }else{
    printf("No\n");
   }
   
    return 0;
}