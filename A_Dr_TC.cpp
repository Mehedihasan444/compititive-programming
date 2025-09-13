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
        vector<string> arr(n);
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            string temp = s;
            if (s[i] == '1')
            {
                temp[i] = '0';
                arr.push_back(temp);
            }
            else
            {
                temp[i] = '1';
                arr.push_back(temp);
            }
        }
        int cnt = 0;
        for (auto x : arr)
        {
            for (auto c : x)
            {
                if (c == '1')
                    cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}