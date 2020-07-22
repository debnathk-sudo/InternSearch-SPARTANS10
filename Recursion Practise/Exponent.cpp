#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

double raise(double a,int b)
{
  if(b==0)
    return 1;
  else if(b%2==0)
    {
      double y=raise(a,b/2);
      return y*y;
    }
  else
    return (1/a)*raise(a,b-1);
}

int main()
{
  double a; int b;
  cout<<"RAISE TO A NEGATIVE INTEGER\n\nEnter the number: ";cin>>a;
  //cout<<setprecision(8)<<a<<endl; cout<<setprecision(10)<<a<<endl;
  cout<<"\nEnter the power(you may choose to include the negative sign): ";cin>>b;

  cout<<fixed<<raise(a,abs(b));

  return 0;
}
