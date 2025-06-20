#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        char c = i + 'a';
        if (v[i] > 0)
        {
            cout << c << " : " << v[i] << endl;
        }
    }

    return 0;
}