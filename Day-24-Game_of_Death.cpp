#include <iostream>
#include <vector>
using namespace std;

int circleState(vector <int> &circle, int k, vector<int>::iterator sword_Iterator)
{
  cout<<"\nCircle State: ";
  for(auto i:circle)
    cout<<i<<" ";

  if(circle.size()==1)
    return circle[0];

  int sword_index=sword_Iterator-circle.begin(); 

  cout<<"\nSword is with element: "<<*sword_Iterator;
  cout<<"\nsword_index: "<<sword_index;
  
  vector<int>::iterator delete_Iterator = (circle.begin()  +   ((sword_index+(k-1))%(circle.size())));
  circle.erase(delete_Iterator);

  if(*sword_Iterator!=circle.back())
    sword_Iterator++;
  else
    sword_Iterator=circle.begin();
  
  cout<<"\n\n";
  return circleState(circle,k,sword_Iterator);
}



int main() {
  std::cout << "Hello World!\n";

  vector <int> circle {1,2,3,4};
  cout<<"Vector elements are: ";
  for(auto i:circle)
    cout<<i<<" ";
  cout<<"\n";
  //cout<<"\nEnter k: ";
  //int k; cin>>k;
  
  int result=circleState(circle,2,circle.begin());
  cout<<"\n\nLast element to survive: "<<result;
}

