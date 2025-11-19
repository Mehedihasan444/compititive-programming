#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
       int one=0, two=0, three=0;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            if (v == 1)
                one++;
            else if (v == 2)
                two++;
            else
                three++;
        }
        int cnt=0;
        cnt+=min(one,three);
        cnt+= (two==0? 0 : (two-1));
        cout << cnt << "\n";
    }
    return 0;
}