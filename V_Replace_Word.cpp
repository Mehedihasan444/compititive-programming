#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            // s[i] = 'a';
            // s[i + 1] = 'a';
            // s[i + 2] = 'a';
            // s[i + 3] = 'a';
            // s[i + 4] = ' ';
            s.replace(i, 5, " ");
        }
    }
    //  for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i]!='a')
    //     {

    //         cout << s[i];
    //     }

    // }
    cout << s << endl;
    return 0;
}