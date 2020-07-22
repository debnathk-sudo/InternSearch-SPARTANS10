#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int multiply(int a,int b)
{
  if(b==1)
    return a;
  else
    return a+multiply(a,b-1);
}

int main()
{
  int a,b;
  cout<<"Enter the 2 numbers: ";cin>>a>>b;

  cout<<multiply(a,b);

  return 0;
}
