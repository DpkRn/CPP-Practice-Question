 //https://www.youtube.com/watch?v=rwXVCELcrqU&list=PLgUwDviBIf0rf5CQf_HFt35_cF04d8dHN&index=4
 #include<bits/stdc++.h>
 using namespace std;
 const int N=1e5+2;
 long long tree[4*N],arr[N]={0};
 long long lazy[4*N]={0};
//  void build(int node,int st,int end){
//     if(st==end){
//         tree[node]=arr[st];
//         return ;
//     }
//     int mid=(st+end)/2;
    
//     build(2*node+1,st,mid);
//     build(2*node+2,mid+1,end);
//     tree[node]=tree[2*node+1]+tree[2*node+2];
//  }

 void rangeUpdate(int node,int st,int end,int l,int r,int val){
    if(lazy[node]!=0){
        tree[node]+=(end-st+1)*lazy[node];
        if(st!=end){
            lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
        }
        lazy[node]=0;
    }

    if(end<l||st>r) return ;

    if(l<=st&&end<=r){
        tree[node]+=(end-st+1)*val;
        if(st!=end){
            lazy[2*node+1]+=val;
            lazy[2*node+2]+=val;
        }
        return ;
    }
    int mid=(st+end)/2;
    rangeUpdate(2*node+1,st,mid,l,r,val);
    rangeUpdate(2*node+2,mid+1,end,l,r,val);
    tree[node]=tree[2*node+1]+tree[2*node+2];
 }
long long query(int node,int st,int end,int idx){
     if(lazy[node]!=0){
        tree[node]+=(end-st+1)*lazy[node];
        if(st!=end){
            lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
        }
        lazy[node]=0;
    }
   if(st==end){
      return tree[node];
   }
   int mid=(st+end)/2;
   if(idx<=mid){
      return query(2*node+1,st,mid,idx);
   }else{
      return query(2*node+2,mid+1,end,idx);
   }
 }
int main(){
    int n,m; cin>>n>>m;
    // for(int i=0;i<n;i++) cin>>arr[i];
    // build(0,0,n-1);
    while(m--){
        int type; cin>>type;
        if(type==1){
            int l,r,val;
            cin>>l>>r>>val;
            rangeUpdate(0,0,n-1,l,r-1,val);
        }else{
            int ind; cin>>ind;
            cout<<query(0,0,n-1,ind)<<endl;
        }
    }
 return 0;
}
