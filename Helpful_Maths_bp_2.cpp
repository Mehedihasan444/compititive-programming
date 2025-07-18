#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> digits;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] != '+')
        {
            digits.push_back(s[i]);
        }
    }

    sort(digits.begin(), digits.end());

    for (int i = 0; i < (int)digits.size(); i++)
    {
        cout << digits[i];
        if (i < (int)digits.size() - 1)
        {
            cout << "+";
        }
    }
    cout << endl;

    return 0;
}