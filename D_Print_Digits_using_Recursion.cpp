#include <bits/stdc++.h>
using namespace std;

void printDigits(int n)
{
    if (n < 10) {   
        cout << n;
        return;
    }
    printDigits(n / 10);
    cout << " " << n % 10;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        printDigits(n);
        cout << endl;  
    }

    return 0;
}
