#include <iostream>
using namespace std;
void func1(int *a, int i, int size)
{
  if(i==size) return;
  if((*a)<0)
    (*a)=0;

  return func1(a+1,i+1,size);
}

int main() {
  std::cout << "Hello World!\n";
  int arr[7]={-1,-2,3,4,-5,-8,9};
  int size=sizeof(arr)/sizeof(arr[0]);

  cout<<"Before function call: ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

  func1(arr,0,size);
  
  cout<<"\nAfter function call:   ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

  return 0;
}