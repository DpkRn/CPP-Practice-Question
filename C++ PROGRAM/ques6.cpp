#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* left;
    int data;
    Node *right;
    public:
    Node(int data){
        this->left=NULL;
        this->data=data;
        this->right=NULL;
    }
    
};
void print(Node* &Root){
    Node* temp=Root;
    cout<<temp->data<<" ";
    cout<<temp->left->data<<" ";
    cout<<temp->right->data<<" ";
    cout<<temp->left->left->data<<" ";
    cout<<temp->left->right->data<<" ";
    cout<<temp->right->left->data<<" ";
    cout<<temp->right->right->data<<" ";

}
void insertNode(Node* &Root,int data){
    Node* newNode=new Node(data);
    if(Root==NULL){
         Root=newNode;
         return;
    }
    Node* temp=Root;
    if(temp->left==NULL){
        temp->left=newNode;
    }else if(temp->right==NULL){
        temp->right=newNode;
    }else if(temp->left->left==NULL){
        temp->left->left=newNode;
    }else if(temp->left->right==NULL){
        temp->left->right=newNode;
    }else if(temp->right->left==NULL){
        temp->right->left=newNode;
    }else if(temp->right->right==NULL){
        temp->right->right=newNode;
    }
    
}

int main(){
    Node* Root=NULL;
    insertNode(Root,30);
    insertNode(Root,45);
    insertNode(Root,56);
    insertNode(Root,57);
    insertNode(Root,58);
    insertNode(Root,59);
    insertNode(Root,60);
    print(Root);

}