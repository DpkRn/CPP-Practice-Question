 #include<bits/stdc++.h>
 using namespace std;
 
 class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
 };
 node* buildTree(node* root){
    queue<node*> q;
    cout<<"enter data of root:";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        //entering left of data;
        cout<<"enter left of "<<temp->data<<endl;
        cin>>data;
        if(data!=-1){
        temp->left=new node(data);
        q.push(temp->left);
        }
        //entering right of data;
         cout<<"enter right of "<<temp->data<<endl;
        cin>>data;
        if(data!=-1){
        temp->right=new node(data);

        q.push(temp->right);
        }
    }
    return root;
 }

 //make tree having value of 0 and 1. you have to traverse all path from root to leaf and make string and add all the binary path combined by the node and sum them 

 void traverse(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        node* temp=q.front();
        q.pop();
        if(temp){
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        else{
            if(!q.empty())
            q.push(NULL);
            cout<<endl;
        }
    }
 }
 int getDec(string str){
    return stoi(str,0,2);
 }
void solve(node* root,int &sum,string &str){
    if(root==NULL)
    return;
    if(root->left==NULL&& root->right==NULL){
        str=str+to_string(root->data);
        sum=sum+getDec(str);
        return;
    }
    str=str+to_string(root->data);
    solve(root->left,sum,str);
    solve(root->right,sum,str);
    str.pop_back();
}
int getSum(node* root){
    int sum=0;string str;
    solve(root,sum,str);
    return sum;
      
}
 int main(){
node* root=NULL;
root=buildTree(root);
traverse(root);
int sum=getSum(root);
cout<<endl<<"sum="<<sum;
 return 0;
 }