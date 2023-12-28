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
void print(Node *head){
     Node* tmp=head;
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
    insertNode(head,5);
    insertNode(head,7);
    insertNode(head,8);
   head= insertAtFirst(head,0);
    print(head);
   
   
    return 0;
}