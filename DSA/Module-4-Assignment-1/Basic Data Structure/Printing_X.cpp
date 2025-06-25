#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = ceil((float)n / 2);

    for (int i = 1; i <= mid; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        i != mid &&cout << "\\";
        if (mid == i)
        {
            cout << "X";
        }
        else
        {

            for (int j = i; j <= n - 1 - i; j++)
            {
                cout << " ";
            }
        }

        i != mid ? cout << "/" << endl : cout << endl;
    }
    for (int i = mid + 1, k = 1; i <= n; i++, k += 2)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        cout << "/";

        for (int j = 1; j <= k; j++)
        {
            cout << " ";
        }

        cout << "\\" << endl;
    }

    return 0;
}