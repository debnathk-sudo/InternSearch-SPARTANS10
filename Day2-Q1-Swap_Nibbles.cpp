#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,n;
  cin>>t;
  while(t)
  {
    cin>>n;
    cout<<(((n & 0x0F) << 4) | ((n & 0xF0) >> 4));
  }

  return 0;
}
