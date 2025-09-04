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
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s[i] == 'a')
                {
                    s.insert(s.begin() + i + 1, 'b');
                }
                else
                {
                    s.insert(s.begin() + i + 1, 'a');
                }
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            if (s[s.size() - 1] != 'a')
                s.push_back('a');
            else
                s.push_back('b');
        }
        cout << s << endl;
    }

    return 0;
}