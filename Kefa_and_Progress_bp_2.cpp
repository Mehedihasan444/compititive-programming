#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int c = 0, m = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            c++;
        }
        else
        {
            m = max(m, c);
            c = 0;
        }
    }

    m = max(m, c);

    cout << m + 1 << endl; 
    return 0;
}
