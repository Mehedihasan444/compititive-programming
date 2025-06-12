#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, word;
        cin >> s >> word;
        int l = word.length();
        while (s.find(word) != -1)
        {
            int idx = s.find(word);
            s.erase(idx, l);
            s.insert(idx, "#");
        }
        cout << s << endl;
    }

    return 0;
}