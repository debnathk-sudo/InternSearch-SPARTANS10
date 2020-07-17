#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int no_of_set_bits(int n)
{
  int c=0;
  while(n)
  {
    n&=(n-1);
    c++;
  }
  return c;
}

int main()
{
  int n,flag=0;
  cout<<"Enter the number: ";
  cin>>n;

  for(int i=(n-log2(n));i<=n;i++)
  {
    if((i+no_of_set_bits(i)) == n)
      {flag=1; break;}
  }

  flag?cout<<"\nNot a Bleak Number":cout<<"\nBleak Number";
return 0;
}
