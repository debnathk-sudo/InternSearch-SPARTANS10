#include <iostream>
using namespace std;

int countOccurances(int *a,int i, int size, int search)
{
    static int count=0;
    if(i==size) return count;
    else if(*a==search)
      count++;
    return countOccurances(a+1, i+1, size, search);  
}

int main() {
  std::cout << "Hello World!\n";
  int arr[7]={0,1,0,3,0,5,0}; 
  int size=sizeof(arr)/sizeof(arr[0]);
  
  cout << "\nArray elements: ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

  cout << "\nEnter element to be searched: ";
  int search; cin>>search;
  cout<<"\nNumber of occurances: "<<countOccurances(arr, 0, size, search);    
  return 0;
}