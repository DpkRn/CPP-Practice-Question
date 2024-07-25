#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int tree[4*N];
void build(int arr[],int node,int lt,int rt){
    if(lt==rt){
        tree[node]=arr[lt];
        return;
    }
    int mid=(lt+rt)/2;
    build(arr,2*node+1,lt,mid);
    build(arr,2*node+2,mid+1,rt);
    tree[node]=tree[2*node+1]+tree[2*node+2];
}

void update(int arr[],int node,int lt,int rt,int idx,int val){
    if(lt==rt){
        tree[node]=val;
        arr[lt]=val;
        return ;
    }
    int mid=(lt+rt)>>1;
    if(idx<=mid) update(arr,2*node+1,lt,mid,idx,val);
    else update(arr,2*node+2,mid+1,rt,idx,val);
    tree[node]=tree[2*node+1]+tree[node+2];
}

int query(int arr[],int node,int lt,int rt,int l, int r){
    if(rt<l|r<lt){
        return 0;
    }
    if(l<=lt&&rt<=r) return tree[node];
    int mid=(lt+rt)/2;
    int left=query(arr,2*node+1,lt,mid,l,r);
    int right=query(arr,2*node+2,mid+1,rt,l,r);
    return left+right;
}

int main(){
    
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    build(arr,0,0,n-1);
    update(arr,0,0,n-1,3,14);
    cout<<query(arr,0,0,n-1,2,3);

return 0;
}