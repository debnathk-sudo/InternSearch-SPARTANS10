#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter the 2 numbers: ";
  cin>>a>>b;
  int product=0;
  while(b)
  {
    if(b%2==1)
      product+=a;
    a<<=1;
    b>>=1;
  }
  cout<<"\nProduct: "<<product;

return 0;
}
