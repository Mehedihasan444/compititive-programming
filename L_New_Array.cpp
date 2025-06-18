#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> c;
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());

    for(int x: c)
    {
        cout << x << " ";
    }
    return 0;
}