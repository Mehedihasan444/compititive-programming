#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,x;
	    scanf("%d %d %d",&a,&b,&x);
	    int dif=b-a;
	    int ans= dif/x;
	    printf("%d\n",ans);
	}

}

