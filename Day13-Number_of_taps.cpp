#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int t,n,count,i,j;
  cin>>t;
  while(t--)
  {
    cin>>n;
    count=0;
    for(i=1;i<=n;i++)
    {
      for(j=i+1;j<=n;j++)
      {
        cout<<i<<"^"<<j<<"="<<(i^j)<<endl;
        if((i^j)<=n)
          count++;
      }
    }
    cout<<"\nNumber of taps required: "<<count<<endl;
  }
return 0;
}
