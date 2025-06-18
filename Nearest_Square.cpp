#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
    
        for (int i = n; i >=1; i--)
        {
            if (i * i <= n)
            {
                
              cout << i * i << endl;
              break;
            }
        }
    
        
    }

    return 0;
}