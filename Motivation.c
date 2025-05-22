#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int maxRating = 0;
        for (int i = 0; i < n; i++) {
            int s, r;
            scanf("%d %d", &s, &r);
            if (s <= x && r > maxRating) {
                maxRating = r;
            }
        }
        printf("%d\n", maxRating);
    }
    return 0;
}

// this not optimized code

// #include <stdio.h>
// int main() {
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 	    int n,x;
// 	    scanf("%d %d",&n,&x);
// 	    int a[n],b[n];
// 	    int s,r;
// 	    for(int i=0;i<n;i++){
// 	        scanf("%d %d",&s,&r);
// 	        a[i]=s;
// 	        b[i]=r;
// 	    }
	    
// 	    for(int i=0;i<n-1;i++){
// 	        for(int j=i+1;j<n;j++){
// 	            if(b[i]<b[j]){
// 	                int temp1 = b[i];
// 	                b[i]=b[j];
// 	                b[j]=temp1;
// 	                   int temp2 = a[i];
// 	                a[i]=a[j];
// 	                a[j]=temp2;
// 	            }
// 	        }
// 	    }
	    
// 	    for(int i=0;i<n;i++){
// 	        if(a[i]<=x){
// 	            printf("%d\n",b[i]);
// 	            break;
// 	        }
// 	    }
// 	}

// }

