#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

void insertNode(Node* head,int data){
    Node *temp=head;
    while(temp->next!=nullptr)
    temp=temp->next;
    temp->next=new Node(data);

}

// void deleteFromLast(Node *&head){
//     if(head==NULL|| head->next==NULL){
//     head=NULL;
//     return;
//     }
//     Node* prev=nullptr;
//     Node* curr=head;
//     while(curr->next!=nullptr){
//         prev=curr;
//         curr=curr->next;
//     }
//     prev->next=NULL;
// }

Node* deleteFromLast(Node *head){
    if(head==NULL|| head->next==NULL){
    
    return NULL;
    }
    Node* prev=nullptr;
    Node* curr=head;
    while(curr->next!=nullptr){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    return head;
}
void print(Node *head){
     Node* tmp=head;
    if(tmp==NULL) cout<<"EMPTY !";
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}
// void insertAtFirst(Node* &head,int data){
//     Node* temp=head;
//     head=new Node(data);
//     head->next=temp;
// }

Node* insertAtFirst(Node* head,int data){
    Node* temp=head;
    head=new Node(data);
    head->next=temp;
    return head;
}

int main(){
    Node* head=nullptr;
    head=new Node(1);
    // insertNode(head,5);
    // insertNode(head,7);
    // insertNode(head,8);
   head= insertAtFirst(head,0);
   head=deleteFromLast(head);
   head=deleteFromLast(head);
  


    print(head);
   
   
    return 0;
}