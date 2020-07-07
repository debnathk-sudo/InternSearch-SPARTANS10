#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
  int count=0;
  while(n)
  {
    n&=(n-1);
    count++;
  }
  return count;
}

int main()
{
  int n;
  cout<<"Enter your number: "; cin>>n;
  cout<<"No. of 1's = "<<countSetBits(n);

return 0;
}
