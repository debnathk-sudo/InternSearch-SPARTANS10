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

int main() {
  std::cout << "Hello World!\n";
  int choice;

  node * head=new node();
  head=NULL;

  while(1)
  { 
    cout<<"\n0.Exit\n1.Display\n2.Insert\nEnter choice: ";
    cin>>choice;
    switch(choice)
    {
      case 0: return 0;
      case 1: traverseList(head);
              break;
      case 2: cout<<"\nEnter position & data (0:beginning, i:any other position): ";
              int i; cin>>i;
              int data; cin>>data;
              node *newNode= new node();
              newNode->data=data;

              head=insertNode(head,head,newNode,0,i);
              break;
      deafult: cout<<"\nWrong choice! Try again!";
    }
  }
}

