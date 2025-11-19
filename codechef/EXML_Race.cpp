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
        // int arr[n];
        int mx=INT_MIN;
        int temp,idx;
        for (int i = 0; i < n; i++)
        {
            int d,t;
            cin >> d>> t;
             temp=d/t;
            if(temp>mx){
                mx=temp;
                idx=i+1;
            }
        }
        cout<<idx<<"\n";
    }

    return 0;
}