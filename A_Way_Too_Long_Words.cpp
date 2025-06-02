#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
        {
            // cout << *(s.begin()) << s.size() - 2 << *(s.end()-1) << endl;
            cout << s.front() << s.size() - 2 << s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}