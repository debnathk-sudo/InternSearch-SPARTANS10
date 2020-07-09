//SOLUTION IS O(N) time + O(N) space


#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n=12,count=0;
  int memory[n+1]; *memory=0;

  for(int i=1;i<=n;i++)
    {
      memory[i]=memory[i/2]+(i%2);
      cout<<" "<<memory[i];
      count+=memory[i];
    }

  cout<<"\nSet bit count: "<<count;
  return 0;
}
