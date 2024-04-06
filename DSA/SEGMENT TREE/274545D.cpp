#include<bits/stdc++.h>
using namespace std;

struct triplet{
   int l,r,idx;
};

 #include<bits/stdc++.h>
 using namespace std;
 const int N=2e5+2;
 int tree[4*N];

 int query(int node,int st,int end,int l,int r){
    if(l<=st&&end<=r) return tree[node];
    if(end<l||st>r) return 0;
    int mid=(st+end)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,end,l,r);
    return q1+q2;
 }
 void update(int node,int st,int end,int idx,int val){
   if(st==end){
      tree[node]=val;
      return ;
   }
   int mid=(st+end)/2;
   if(idx<=mid){
      update(2*node,st,mid,idx,val);
   }else{
      update(2*node+1,mid+1,end,idx,val);
   }
   tree[node]=tree[2*node]+tree[2*node+1];
 }
int main(){
 int n; cin>>n;
 triplet t1;
 t1.l=t1.r=-1;
 vector<triplet> t(n,t1);
 for(int i=0;i<2*n;i++){
   int x; cin>>x;
   if(t[x-1].l==-1) t[x-1].l=i; else t[x-1].r=i;
   t[x-1].idx=x;
 }
 sort(t.begin(),t.end(),[&](triplet a,triplet b){
   return a.r<b.r;
 });
//  for(auto it:t){
//    cout<<it.l<<" "<<it.r<<" "<<it.idx<<endl;
//  }
 vector<int> ans(n,-1);
 for(auto it:t){
    //no of segment intersecting=no of elements between segment - 2*no of segment complete nested
    ans[it.idx-1]=it.r-it.l-1-2*query(1,0,2*n-1,it.l,it.r);
    update(1,0,2*n-1,it.l,1);
 }
for(auto it:ans){
   cout<<it<<" ";
}
return 0;
}

/*
//Complete Naive Solution in Brute force
int main(){
 int n; cin>>n;
 int arr[2*n];
 for(int i=0;i<2*n;i++){
    cin>>arr[i];
 }
 vector<int> interval[n+1];
 interval[0]={0,0};
 for(int i=0;i<2*n;i++){
   interval[arr[i]].push_back(i);
 }
 
 for(int i=1;i<=n;i++){
   unordered_map<int,int> mp;
   int cnt=0;
   for(int j=interval[i][0]+1;j<interval[i][1];j++){
      mp[arr[j]]++;
      if(mp[arr[j]]==2) cnt++;
   }
   cout<<cnt<<" ";
 }
 
return 0;
}

*/