//REPLL.IT LINK : https://repl.it/@debnathk/Problem-1

#include <iostream>
using namespace std;

struct node
{
  int data;
  node* next;
};

node* insertNode(node * head,node * temp,node * newNode,int counter, int i)
{
  if(i==0)
  {
    newNode->next=head;
    head=newNode;
    return head;
  }
  else if(counter==i)
  {
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
  }
  else 
      return insertNode(head,temp->next,newNode,counter+1,i-1);
}

void traverseList(node* head)
{
  if(head==NULL)
  { cout<<" NULL!\n"; return; }

    cout<<head->data<<" -> ";
    return traverseList(head->next);
}

int findLength(node* head)
{
  if(head==NULL)
    return 0;
  return 1+findLength(head->next);
}

node* rotateList(node* head,node * temp,int counter, int k)
{
  if(counter==(k-1))
  {
    node *lastNode=temp;
    while(lastNode->next)
      lastNode=lastNode->next;
    
    lastNode->next=head;
    node *newHead=temp->next;
    temp->next=NULL;

    cout<<"\nList Rotated!";
    return newHead;
  }

  else 
    return rotateList(head, temp->next, counter+1, k);
}

int main() {
  std::cout << "Hello World!\n";
  int choice;

  node * head=new node();
  head=NULL;

  while(1)
  { 
    cout<<"\n0.Exit\n1.Display\n2.Insert\n3.Calculate Length\n4.Rotate anti-clock wise\n\nEnter choice: ";
    cin>>choice;
    switch(choice)
    {
      case 0: return 0;
      case 1: traverseList(head);
              break;
      case 2: {
                cout<<"\nEnter position & data (0:beginning, i:any other position): ";
                int i; cin>>i;
                int data; cin>>data;
                node *newNode= new node();
                newNode->data=data;

                head=insertNode(head,head,newNode,0,i);
                break;
              }
      case 3: cout<<"\nLength: "<<findLength(head);
              break;
      case 4: {
                cout<<"\nEnter offset: ";
                int k; cin>>k;
                int length=findLength(head);
                head=rotateList(head,head,0,k%length);
                break;
              }
      deafult: cout<<"\nWrong choice! Try again!";
    }
  }
}

