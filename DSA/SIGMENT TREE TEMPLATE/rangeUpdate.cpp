#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int tree[4*N],unpropgate[4*N];
bool lazy[4*N];

void build(int arr[],int v,int lt,int rt){
    if(lt==rt){
        tree[v]=arr[lt];
        return;
    }
    int mid=(lt+rt)/2;
    build(arr,2*v+1,lt,mid);
    build(arr,2*v+2,mid+1,rt);
    tree[v]=tree[2*v+1]+tree[2*v+2];
}
void apply(int v,int lt,int rt,int val){
    if(lt!=rt){
        lazy[v]=true;
        unpropgate[v]=val;
    }
    tree[v]=(rt-lt+1)*val;
}
void pushDown(int v,int lt,int rt){
    if(!lazy[v]) return ;
    lazy[v]=false;
    int mid=(lt+rt)>>1;
    apply(2*v+1,lt,mid,unpropgate[v]);
    apply(2*v+2,mid,rt,unpropgate[v]);
    unpropgate[v]=0;
}
void update(int v,int lt,int rt,int l,int r,int val){
    if(rt<l|r<lt) return;
    if(l<=lt&&rt<=r){
        apply(v,lt,rt,val);
        return;
    }
    pushDown(v,lt,rt);
    int mid=(lt+rt)>>1;
    update(2*v+1,lt,mid,l,r,val);
    update(2*v+2,mid+1,rt,l,r,val);
    tree[v]=tree[2*v+1]+tree[v+2];
}

int query(int v,int lt,int rt,int l, int r){
    if(rt<l|r<lt) return 0;
    if(l<=lt&&rt<=r) return tree[v];
    pushDown(v,lt,rt);
    int mid=(lt+rt)/2;
    int left=query(2*v+1,lt,mid,l,r);
    int right=query(2*v+2,mid+1,rt,l,r);
    return left+right;
}

int main(){
    
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    build(arr,0,0,n-1);
    update(0,0,n-1,1,4,10);
    cout<<query(0,0,n-1,3,4);
    cin>>n;
    

return 0;
}