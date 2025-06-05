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
        char s[n];
        int arr[26] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            arr[s[i] - 'A']++;
        }
        int bln=0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i]>0)
            {
                bln+=arr[i]+1;
            }
            
        }
        cout<<bln << endl;
    }

    return 0;
}