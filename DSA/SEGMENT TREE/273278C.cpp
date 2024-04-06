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
    tree[node]=max(tree[2*node],tree[2*node+1]);
 }

 int query(int node,int st,int end,int k){
   if(st==end){
      return arr[st]>=k?st:-1;
   }
    
   int mid=(st+end)/2;
   if(k<=tree[2*node])
    return query(2*node,st,mid,k);
   else return query(2*node+1,mid+1,end,k);
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
   tree[node]=max(tree[2*node],tree[2*node+1]);
 };
 int main()
 {
   int n,m; cin>>n>>m;
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   build(1,0,n-1);
   while(m--){
      int ch; cin>>ch;
      if(ch==1){
         int ind,val; cin>>ind>>val;
         update(1,0,n-1,ind,val);
      }else{
         int x; cin>>x;
         int ans=query(1,0,n-1,x);
         cout<<query(1,0,n-1,x)<<endl;
      }
   }
   return 0;
 }

 /*
 
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
    tree[node]=max(tree[2*node],tree[2*node+1]);
 }

 int query(int node,int st,int end,int l,int r){
    if(l<=st&&end<=r) return tree[node];
    if(end<l||st>r) return -1e9;
    int mid=(st+end)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,end,l,r);
    return max(q1,q2);
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
   tree[node]=max(tree[2*node],tree[2*node+1]);
 };
 int main()
 {
   int n,m; cin>>n>>m;
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   build(1,0,n-1);
   while(m--){
      int ch; cin>>ch;
      if(ch==1){
         int ind,val; cin>>ind>>val;
         update(1,0,n-1,ind,val);
      }else{
        int k; cin>>k; 
        int l=0,h=n-1;
        int ans=n;
        while(l<=h){
            int mid=(l+h)/2;
            if(k<=query(1,0,n-1,l,mid)){
               h=mid-1;
               ans=min(ans,mid);
            }else{
               l=mid+1;
            }
        }
        if(ans==n) cout<<"-1"<<endl; else cout<<ans<<endl;
        
      }
   }
   return 0;
 }
 */
 
 