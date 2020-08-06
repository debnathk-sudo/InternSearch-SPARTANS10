#include <iostream>
using namespace std;

void reverseArray(int *a, int start, int end)
{
  if(start>end)
    return;
  else
    {
      int temp=a[start];
      a[start]=a[end];
      a[end]=temp;
      reverseArray(a, start+1, end-1);
    }
  
}

int main() {
  std::cout << "Hello World!\n";
  int arr[7]={0,1,2,3,4,5,6}; 
  int size=sizeof(arr)/sizeof(arr[0]);
  
  cout << "\nArray elements: ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

  reverseArray(arr, 0, size-1);
  cout << "\nArray elements after inversion: ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    
  return 0;
}