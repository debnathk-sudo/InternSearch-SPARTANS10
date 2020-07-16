#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,product=0,temp=0,i=0;
  cout<<"Enter your greater number: "; cin>>a;
  cout<<"\nEnter your smaller number: "; cin>>b;

  if((b&1)==1)
    product=a;
  else
    product=0;
  //cout<<(b&1)<<endl;
  //cout<<"Outside loop debug product: "<<product<<endl;
  b>>=1;

  while(b)
  {
    if((b&1)==1)
      temp=a;
    else
      temp=0;
    //cout<<" debug temp: "<<temp;
    product+=(temp<<(++i));
    //cout<<" debug product: "<<product<<endl;
    b>>=1;
  }

  cout<<"\nProduct: "<<product;

return 0;
}
