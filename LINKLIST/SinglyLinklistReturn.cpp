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
    // Node  *head=Head;
    if(Head==NULL){
        Head=newNode;
        return Head;
    }
    Node* temp=Head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    cout<<"Node inserted !"<<endl;
    return Head;
}
void print(Node* head){
 Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
      int opt;
    Node *Head=NULL;
  do{ cout<<endl;
      cout<<"1. Add"<<endl;
      cout<<"2. Traverse"<<endl;
      cout<<"0.  Exit"<<endl;
     cout<<"choose option:";
      cin>>opt;
     switch(opt){
             
         case 1: 
             cout<<"enter data:";
             int data ;
             cin>>data;
             Head=append(Head,data);
             break;
         case 2:cout<<endl<<"-------data-------"<<endl;
             print(Head);
             break;
        case 0:
        cout<<"Exited !"<<endl;
        break;
         default:
             cout<<"Enter right otpion";
     }
  }while(opt!=0);
}