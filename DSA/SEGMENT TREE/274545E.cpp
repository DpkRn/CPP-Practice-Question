 #include<bits/stdc++.h>
 using namespace std;
 const int N=1e5+2;
 int tree[4*N],arr[N]={0};
 void build(int node,int st,int end){
    if(st==end){
        tree[node]=arr[st];
        return ;
    }
    int mid=(st+end)/2;
    
    build(2*node,st,mid);
    build(2*node+1,mid+1,end);
    tree[node]=max(tree[2*node],tree[2*node+1]);
 }

 void update(int node,int st,int end,int l,int r,int val){
    if(st==end)  {
        tree[node]=val;
        arr[st]=val;
        return ;
    }
    if(end<l||st>r) return;

    int mid=(st+end)/2;

    update(2*node,st,mid,l,r,val);
    
    update(2*node+1,mid+1,end,l,r,val);
    tree[node]=val;
 }
 int query(int node,int st,int end,int idx){
   if(st==end){
      return tree[node];
   }
   int mid=(st+end)/2;
   if(idx<=mid){
      query(2*node,st,mid,idx);
   }else{
      query(2*node+1,mid+1,end,idx);
   }
 };
int main(){
    int n,m; cin>>n>>m;
    while(m--){
        int type; cin>>type;
        if(type==1){
            int l,r,val;
            cin>>l>>r>>val;
            update(1,0,n-1,l,r-1,val);
        }else{
            int ind; cin>>ind;
            cout<<query(1,0,n-1,ind)<<endl;
        }
    }
 return 0;
}
