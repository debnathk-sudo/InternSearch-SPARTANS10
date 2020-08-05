#include <iostream>
using namespace std;
int func2(int *a, int i, int size,int search)
{
  if(i==size) 
    return 0;
  else if((*a)==search)
    return 1;
  else 
    return func2(a+1,i+1,size,search);
}

int main() {
  std::cout << "Hello World!\n";
  int arr[7]={-1,-2,3,4,-5,-8,9};
  int size=sizeof(arr)/sizeof(arr[0]);

  cout << "Array elements: ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

  int search;
  cout<<"\nEnter element to be searched: "; cin>>search;

  if (func2(arr,0,size,search))
    cout<<"\nElement found!";
  else
    cout<<"\nNot found!";

  return 0;
}
