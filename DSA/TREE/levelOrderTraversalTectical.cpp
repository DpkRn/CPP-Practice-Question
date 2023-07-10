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

void levelOrderTraversalTactical(node* root){
     queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp!=NULL){
        cout<<temp->data<<" ";
         if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        else{
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
        }
    }
}
 int main(){
 node* root=NULL;
    root=buildTree(root);
    cout<<"data traversed into levelOrder"<<endl;
levelOrderTraversalTactical(root);
 return 0;
 }