 #include<bits/stdc++.h>
 using namespace std;
 const int N=1e5+2;
 int tree[4*N],arr[N];
 void build(int node,int st,int end){
    if(st==end){
        tree[node]=arr[st];
        return ;
    }
    int mid=(st+end)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,end);
    tree[node]=min(tree[2*node],tree[2*node+1]);
 }

 int query(int node,int st,int end,int l,int r){
    if(l<=st&&end<=r) return tree[node];
    if(end<l||st>r) return 1e9+7;
    int mid=(st+end)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,end,l,r);
    return min(q1,q2);
 }
 void update(int node,int st,int end,int idx,int val){
   if(st==end){
      arr[idx]=val;
      tree[node]=val;
      return ;
   }
   int mid=(st+end)/2;
   if(idx<=mid){
      update(2*node,st,mid,idx,val);
   }else{
      update(2*node+1,mid+1,end,idx,val);
   }
   tree[node]=min(tree[2*node],tree[2*node+1]);
 }
 int main(){
 int n,m;cin>>n>>m;
 for(int i=0;i<n;i++) cin>>arr[i];
 build(1,0,n-1);
 
 while(m--){
    int type; cin>>type;
    
    if(type==2){
        int l,r;
        cin>>l>>r;
        int ans=query(1,0,n-1,l,r-1);
        cout<<ans<<endl;
    }else{
      int ind,val;
      cin>>ind>>val;
      update(1,0,n-1,ind,val);
    }
 }
 return 0;
 }