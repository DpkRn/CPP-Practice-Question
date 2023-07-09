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
        this->left=NULL;
        this->right=NULL;

    }
 };
 node* levelOrderTree(node* root){
    cout<<"enter data:";
    int data;
    cin>>data;
    root=new node(data);
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"Enter data to the left of "<<temp->data<<endl;
        cin>>data;
        if(data!=-1){
            temp->left=new node(data);
            q.push(temp->left);
        }else
        {
            temp->left=NULL;
       
        }

        cout<<"Enter data to the right of "<<temp->data<<endl;
        cin>>data;
        if(data!=-1){
            temp->right=new node(data);
            q.push(temp->right);
        }else{
            temp->right=NULL;
      
        }
    }
    return root;
 }

 void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
        q.push(temp->left);
        if(temp->right)

        q.push(temp->right);
    }
 }
 int main(){
    node* root=NULL;
    root=levelOrderTree(root);
    cout<<"data traversed into levelOrder"<<endl;
levelOrderTraversal(root);
   
 
 return 0;
 }