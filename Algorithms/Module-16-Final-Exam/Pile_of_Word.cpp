#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int freq1[26] = {0};
        int freq2[26] = {0};
        int flag = 1;
        for (int i = 0; i < (int)s1.size(); i++)
        {
            freq1[s1[i] - 'a']++;
        }
        for (int i = 0; i < (int)s2.size(); i++)
        {
            freq2[s2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] < freq2[i] || freq2[i] < freq1[i])
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            cout << "YES" << endl;
    }

    return 0;
}