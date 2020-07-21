#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int sumUptoN(int n)
{
  if(n==1)
    return n;
  else
    return n+sumUptoN(n-1);
}

int main()
{
  int n;
  cout<<"Enter the number: ";cin>>n;

  cout<<sumUptoN(n);

  return 0;
}
