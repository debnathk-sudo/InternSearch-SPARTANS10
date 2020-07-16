#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;


  cout<<"\nAfter swapping odd even bits: "<<( ((n & 0xAAAAAAAA)>>1) | ((n & 0x55555555)<<1) );

return 0;
}
