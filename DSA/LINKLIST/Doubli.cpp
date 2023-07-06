#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
   Node *prev;
   int data;
   Node *next;

public:
   Node(int data)
   {
      this->prev = NULL;
      this->data = data;
      this->next = NULL;
   }
};
void insertAtFirst(Node *&Head, int data)
{
   Node *newNode = new Node(data);
   if (Head == NULL)
   {
      Head = newNode;
   }
   else
   {
      newNode->next = Head;
      Head->prev = newNode;
      Head = newNode;
   }
}
void insertAtLast(Node *&Head, int data)
{
   Node *newNode = new Node(data);
   if (Head == NULL)
   {
      Head = newNode;
   }
   else
   {
      Node *temp = Head;
      while (temp->next != NULL)
      {
         temp = temp->next;
      }
      temp->next = newNode;
      newNode->prev = temp;
   }
}

void deleteFirst(Node *&Head)
{
 if (Head == NULL)
   {
      cout << "Data is already empty!";
      return;
   }
  if (Head->next == NULL)
   {
      Head = NULL;
      return;
   }
      Head = Head->next;
      free(Head->prev);
      Head->prev = NULL;
   
}

void deleteLast(Node *&Head)
{
   Node *temp = Head;
   if (Head == NULL)
   {
      cout << "List is Empty !";
      return;
   }
   if (Head->prev == NULL&&Head->next)
   {
      Head = NULL;
      return;
   }
   /*else if(Head->prev==NULL && Head->next==NULL){
      Head=NULL;
      }
      else{
      while(temp->next!=NULL){
         temp=temp->next;
      }
      temp->prev->next=NULL;
       free(temp);
   }*/

   while (temp->next != NULL)
      temp = temp->next;
      temp->prev->next = NULL;
       free(temp);
}


void print(Node *&Head)
{
   Node *temp = Head;
   if (Head == NULL)
   {
      cout << "list is Empty:";
   }
   else
   {
      while (temp != NULL)
      {
         cout << temp->data << " ";
         temp = temp->next;
      }
   }
}
int main()
{
   Node *Head = NULL;
   // insertAtFirst(Head, 19);
   // insertAtFirst(Head, 18);
   // insertAtFirst(Head, 12);
   // insertAtLast(Head,20);
   insertAtLast(Head, 22);
   insertAtLast(Head, 25);
   print(Head);
   int n;
   do
   {
      cout << endl
           << "1. for Delete\n 2. for print  \n 0. for exit:";

      cin >> n;
      if (n == 1)
      {
         deleteFirst(Head);
      }
      if (n == 2)
      {
         print(Head);
      }

   } while (n != 0);
}