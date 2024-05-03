//wrong solution

#include <bits/stdc++.h>
using namespace std;
const int N=1e5+2;
bool tree[4*N];


bool isEven(int n){
    return n%2==0;
}
void build(int node,int st,int end,auto &arr){
    if(st==end){
        tree[node]=true;
        return;
    }
    int mid=(st+end)/2;
    build(2*node+1,st,mid,arr);
    build(2*node+2,mid+1,end,arr);
    tree[node]=tree[2*node+1]&&tree[2*node+2]&&isEven(abs(arr[mid]-arr[mid+1]));
}
bool query(int node,int st,int end,int l,int r,auto &arr){
    if(l<=st&&end<=r) return tree[node];
    if(r<st||end<l) return true;
    int mid=(st+end)>>1;
    bool q1= query(2*node+1,st,mid,l,r,arr);
    bool q2=query(2*node+2,mid+1,end,l,r,arr);
    if(st<=mid&&end>=mid) 
    return q1&&q2&&isEven(abs(arr[mid]-arr[mid+1]));
    return q1&&q2;
    
}
void solve(){
    int n,qn;
    cin>>n>>qn;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(0,0,n-1,arr);
    // for(int i=0;i<2*n;i++){
    //     cout<<tree[i]<<" ";
    // }
    vector<pair<int,int>> queries(qn);
    for(int i=0;i<qn;i++){
       int q1,q2;
       cin>>q1>>q2;
       queries[i]={q1,q2};
    }
    for(auto q:queries){
      cout<<query(0,0,n-1,q.first,q.second,arr);
      cout<<endl;
    }
    

}

int main(){
    int t;
    cin>>t;
    int i=0;
    while(t--){
        i++;
        cout<<"case #"<<i<<":";
        solve();
        cout<<endl;
    }
return 0;
}