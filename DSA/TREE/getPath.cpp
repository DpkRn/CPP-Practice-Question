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

node* getPath(node* root,vector<int> &ans,int n){
   if(root==NULL)
   return NULL;
   if(root->data==n)
{
    ans.push_back(root->data);
    return root;
}
   ans.push_back(root->data);
 node* l=getPath(root->left,ans,n);
node* r=getPath(root->right,ans,n);
if(l==NULL&&r==NULL){
ans.pop_back();
return NULL;

}

if(l!=NULL&&r==NULL)
return l;
if(l==NULL&&r!=NULL)
return r;






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
    root=buildTree(root);//11 4 14 1 9 12 -1 -1 3 6 -1 -1 -1
    cout<<"data traversed into levelOrder"<<endl;
levelOrderTraversalTactical(root);
vector<int> ans;
getPath(root,ans,9);
cout<<endl;
for(auto i:ans)
cout<<i<<" ";
 return 0;
 }