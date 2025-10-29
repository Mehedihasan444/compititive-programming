#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
      int sum=0,j=0;
      for (int i = 1; i <= n; i++)
      {
        if(i>=x)
        {
            sum+=i;
            j++;
        }
      }
      cout<<sum-(j*x)<<"\n";
    }
    return 0;
}
