#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = 0, d = 0;
    for (char c : arr)
    {
        c == 'A' ? a++ : d++;
    }
    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}