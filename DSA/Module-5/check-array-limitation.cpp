#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    cout << (long long)&v[3] << " " << (long long)&v[4] << " " << (long long)&v[5] << endl;
    return 0;
}