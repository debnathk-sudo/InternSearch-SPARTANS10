#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i;
  cout<<"Enter your number & the bit position: "; cin>>n>>i;

  if(n & (1 << (i-1)))
    cout<<"\nBit is Set ";
  else
    cout<<"\nBit is not Set ";
return 0;
}

/*GUESS THE TIME COMPLEXITY
WHY IS IT LOG(n)*/
