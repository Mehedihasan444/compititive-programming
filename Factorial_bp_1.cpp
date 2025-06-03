#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mal = 1;
    for (int i = n; i > 0; i--)
    {

        mal *= i;
    }
    cout << mal << endl;
    return 0;
}