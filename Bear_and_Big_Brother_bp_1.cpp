#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,b;
    cin >> l>> b;
int y=0;
  for (int i = 0; l<=b; i++)
  {
    l*=3;
    b*=2;
    y++;
  }
  
cout<<y<<endl;
    return 0;
}