#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int arr[N];
int tree[4*N];
void build(int node,int st,int end){
    if(st==end){
       tree[node]=arr[st];
       return ;
    }
    int mid=st+(end-st)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,end);
    tree[node]=tree[2*node]+tree[2*node+1];

}

void update(int node,int st,int end,int ind){
    if(st==end){
        arr[st]=!arr[st];
       tree[node]=arr[st];
       return ;
    }
    int mid=st+(end-st)/2;
    if(ind<=mid)
    update(2*node,st,mid,ind);
    else
    update(2*node+1,mid+1,end,ind);
    tree[node]=tree[2*node]+tree[2*node+1];

}

int query(int node,int st,int end,int k){
    if(st==end){
        return st;
    }
     int mid=(st+end)/2;
    //left child having required no of child go in left else go in right    
    if(k<=tree[2*node]){
       return query(2*node,st,mid,k);
    }else{
      return query(2*node+1,mid+1,end,k-tree[2*node]);
    }
}
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++) cin>>arr[i];
build(1,0,n-1);
while(m--){
    int type; cin>>type;
    if(type==1){
        int ind; cin>>ind;
        update(1,0,n-1,ind);
    }else{
        int cnt; cin>>cnt;
        int ans=query(1,0,n-1,cnt+1);
        cout<<ans<<endl;
    }
}
return 0;
}