#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
  if(b==0)
    return a;
  else
    return gcd(b,a%b);

}

int main()
{
  int a,b;
  cout<<"Enter numbers in decreasing order: ";
  cin>>a>>b;
  cout<<"\nGCD : "<<gcd(a,b);
  return 0;
}
