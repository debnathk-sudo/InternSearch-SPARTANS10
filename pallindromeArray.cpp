#include <iostream>
using namespace std;

int pallindromeCheck(int *a, int start, int end)
{

  if(start>end)
    return 1;
  else if(a[start]==a[end])
    return pallindromeCheck(a, start+1, end-1);
  else
    return 0;
}

int main() {
  std::cout << "Hello World!\n";
  int arr[7]={0,1,2,3,2,1,0}; 
  int size=sizeof(arr)/sizeof(arr[0]);
  
  cout << "\nArray elements: ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

  if(pallindromeCheck(arr,0,size-1))
    cout<<"\nYes! The array is a pallindrome";
  else 
    cout<<"\nNo!";
    
  return 0;
}