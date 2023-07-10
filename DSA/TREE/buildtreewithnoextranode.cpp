#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    public:
    node(int data){
        this->data=data;
        this->left=left;
        this->right=right;
    }
};
node* buildTree(node* root){
    cout<<"enter data:";
    int data;
    cin>>data;
    if(data==-1)
    return NULL;
    root=new node(data);
    cout<<"enter data to left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data to right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void traverse(node* root){
    
if(root==NULL)
    return;
    cout<<root->data<<" ";
    traverse(root->left);
    traverse(root->right);
    

}
int main(){
node* root=NULL;
root=buildTree(root);
cout<<endl;
traverse(root);
return 0;
}