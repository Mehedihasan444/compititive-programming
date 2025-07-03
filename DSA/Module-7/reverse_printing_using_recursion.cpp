#include <bits/stdc++.h>
using namespace std;

void reverse_print(int i,int n)
{
    if (i>n)
    {
        return;
    }
    reverse_print(i+1, n);
    cout << "Value of i : " << i << endl;
}

int main()
{
    int n=5;
    reverse_print(1, n);


    return 0;
}