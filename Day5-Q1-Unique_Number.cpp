#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[]={1,2,2,3,4,1,3,4,5,7,7,88,88};
  int ans=arr[0];
  cout<<ans<<endl;
  for(int i=1;i<sizeof(arr)/sizeof(int);i++)
    {
      ans=ans^arr[i];
      cout<<"i: "<<arr[i]<<", ans= "<<ans<<endl;
    }
  cout<<"Unique element: "<<ans;
  return 0;
}
