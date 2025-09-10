#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int action = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                action = 2;
                i += 2;
                break;
            }
            else if (s[i] == '.' && s[i + 1] == '.')
            {
                action += 2;
                i++;
            }
            else if (s[i] == '.')
            {
                action++;
            }
        }
        cout << action << endl;
    }

    return 0;
}