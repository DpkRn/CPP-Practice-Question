#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* append(Node* Head,int data){
    Node* newNode=new Node(data);
     Node  *head=Head;
    if(head==NULL){
        head=newNode;
        return head;
    }
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    cout<<"Node inserted !"<<endl;
    return head;
}
void print(Node* head){
 Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
      struct Node* head=NULL;
      head=append(head,34);
      head=append(head,50);
      head=append(head,40);
      print(head);

}