#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        auto temp = find(v.begin(), v.end(), v[i] + 1);
        if (temp != v.end())
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}