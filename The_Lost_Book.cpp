#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;
    for (int i = 0; i < n; i++)
    {
       if (a[i]==val)
       {
        cout << i << endl;
        return 0;
       }
       
    }
    cout << -1 << endl;
    return 0;
}