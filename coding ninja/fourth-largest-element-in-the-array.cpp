#include <bits/stdc++.h>
using namespace std;
int getFourthLargest(int arr[], int n)
{
    sort(arr, arr + n, greater<int>());
    return 4 <= n ? arr[3] : INT_MIN;
}
int main()
{
    
    return 0;
}