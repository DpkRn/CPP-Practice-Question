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
Node* arrayToLinkList(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    return head;

}
void print(Node* head){
    if(head==NULL) cout<<"Empty !"<<endl;
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node* insertAtBegin(Node* head,int data){
    if(head==NULL) return new Node(data);
    Node* newNode=new Node(data);
    newNode->next=head;
    return newNode;
}
Node* insertAtLast(Node* head,int data){
    if(head==NULL) return new Node(data);
    Node* curr=head;
    while(curr->next) curr=curr->next;
    curr->next=new Node(data);
    return head;
}
Node* insertAtKthPosition(Node* head,int data,int k){
    int cnt=0;
    Node* curr=head;
    Node* prev=NULL;
    while(curr){
        cnt++;
        if(cnt==k) break;
        prev=curr;
        curr=curr->next;
    }
     if(prev==NULL){
       Node* temp=new Node(data); 
       temp->next=head;
       head=temp;
    }else{
       prev->next=new Node(data);
       prev->next->next=curr;
    }
    return head;
}

Node* deleteAtBegin(Node* head){
    if(!head&&!head->next) return NULL;
    Node* temp=head;
    head=head->next;
    //delete(temp);
    return head;

}
Node* deleteAtLast(Node* head){
    if(head==NULL && head->next==NULL) return NULL;
    Node* prev=NULL;
    Node* curr=head;
    while(curr->next){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;

    //delete(curr);
    return head;
}
Node* deleteAtKthPosition(Node* head,int k){
    int cnt=0;
    if(head==NULL) return NULL;
    
    Node* curr=head;
    Node* prev=NULL;

    while(curr){
        cnt++;
        if(cnt==k) break;
       
        prev=curr;
        curr=curr->next;
       
    }
     if(curr==NULL){ //if exceeds
        cout<<"exceeded !";
    }else if(prev==NULL){ //if first element
        head=head->next;
        delete(curr);      
    }else if(curr->next==NULL){ //if last element
             prev->next=NULL;
    }else {
        prev->next=curr->next; //if between
        delete(curr);
    }
    
    return head;
}




int main(){
    vector<int> arr={1,2,4,5,6,7};
    //vector<int> arr={1};

    Node* head=arrayToLinkList(arr);
    head=deleteAtKthPosition(head,6);
    head=insertAtKthPosition(head,8,3);
    print(head);
    return 0;
}