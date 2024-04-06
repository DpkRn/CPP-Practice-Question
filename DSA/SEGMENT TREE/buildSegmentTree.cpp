#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int arr[N],tree[4*N];
void build(int node,int st,int end){
    if(st==end){
        tree[node]=arr[st];
        return;
    }
    int mid=(st+end)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,end);
    tree[node]=tree[2*node]+tree[2*node+1];
}
int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    build(1,0,n-1);
    for(int i=0;i<2*n;i++){
        cout<<tree[i]<<" ";
    }
return 0;
}