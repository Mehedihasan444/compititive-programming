#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (int j = 0; j < s.size(); j++)
    {
        if (s[j] == 'e' || s[j] == 'E')
        {
            e++;
        }
        else if (s[j] == 'g' || s[j] == 'G')
        {
            g++;
        }
        else if (s[j] == 'y' || s[j] == 'Y')
        {
            y++;
        }
        else if (s[j] == 'p' || s[j] == 'P')
        {
            p++;
        }
        else if (s[j] == 't' || s[j] == 'T')
        {
            t++;
        }
    }

    int m = min({e, g, y, p, t});
    cout << m << endl;

    return 0;
}