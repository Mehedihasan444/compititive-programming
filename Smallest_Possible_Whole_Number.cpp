// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,k;
// 	    cin>>n>>k;
// 	    while(n>=k){
// 	        n =n-k;
// 	    }
// 	    cout<<n<<endl;
// 	}

// }

// optimized version
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k == 0) {
            cout<<n<<endl;
        } else {
            cout<<n%k<<endl;
        }
    }
}