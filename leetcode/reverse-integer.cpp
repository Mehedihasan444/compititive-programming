#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    long long val = abs((long long)x);
    string s = to_string(val);

    for (int i = 0; i < s.size() / 2; i++)
    {
        swap(s[i], s[s.size() - i - 1]);
    }
    long long int num = 0;
    for (long long int i = 0; i < s.size(); i++)
    {
        num += s[i] - '0';
        if (i == s.size() - 1)
            continue;

        num *= 10;
    }
    if (num > INT_MAX)
        return 0;
    return x < 0 ? -1 * num : num;
}
int main()
{
    int t;
    cin >> t;
    int r = reverse(t);
    cout << r << endl;

    return 0;
}