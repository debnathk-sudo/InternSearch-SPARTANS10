#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node* next;
};

node* INSERT_AT_BEGIN(node *head, int data)
{
  struct node* newNode=new node();
  newNode->data=data;
  if(head==NULL)
  {
    newNode->next=NULL;
    head=newNode;
  }
  else
  {
    newNode->next=head;
    head=newNode;
  }
  return head;
}

void TRAVERSE(node *head)
{
  if(head==NULL)
  {
    cout<<"\nLIST EMPTY!";
    return;
  }

  struct node* temp=new node();
  temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" -> ";
    temp=temp->next;
  }
  cout<<" NULL ";
}

node * DELETE_AT_BEGIN(node* head)
{
  if(head==NULL)
  {
    cout<<"\nLIST EMPTY!";
    return NULL;
  }
  struct node* temp=new node();
  temp=head;
  head=head->next;

  cout<<"\nDeleted element is: "<<temp->data;
  free(temp);
  return (head);
}

int main()
{
  node* head=new node(); head=NULL;
  node* temp=new node();

  int n,ch=1;
  while (ch) {
    cout<<"\n\n0.EXIT\n1.TRAVERSE\n2.INSERT AT BEGINNING\n3.DELETE AT BEGINNING\n\nEnter your choice: ";
    cin>>ch;

    switch (ch) {
      case 0: ch=0; break;
      case 1: TRAVERSE(head);
              break;
      case 2: cout<<"Enter the number: ";
              cin>>n;
              head=INSERT_AT_BEGIN(head,n);
              break;
      case 3: head=DELETE_AT_BEGIN(head);
              break;
      case 4:
      case 5:
      case 6:
      case 7: break;

    }
  }

  return 0;
}
