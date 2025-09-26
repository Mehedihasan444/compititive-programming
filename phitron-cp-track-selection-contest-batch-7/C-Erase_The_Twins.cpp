#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str, s;
        cin >> str;

        for (auto c : str)
        {
            if (!s.empty() && s.back() == c)
            {
                s.pop_back();
            }
            else
            {
                s.push_back(c);
            }
        }

        cout << s.length() << "\n";
    }

    return 0;
}
