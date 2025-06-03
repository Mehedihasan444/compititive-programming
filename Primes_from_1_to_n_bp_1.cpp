#include <bits/stdc++.h>
using namespace std;
bool isPrime(int k)
{
    if (k < 2)
        return false;
    if (k == 2)
        return true;
    for (int j = 2; j < k; j++)
    {
        if (k % j == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {

        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}