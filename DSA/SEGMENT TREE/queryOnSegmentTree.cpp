#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int arr[N],tree[4*N];
//size of tree can be 2N because no of nodes will be 2N-1
//building tree that will store sum of each interval
/*
arr[5]={1,2,3,4,5}
                    Node-1   1 2 3 4 5  
                            /        \
                (N:2)  1 2 3  (N:3) 4 5       2*p    and  2*p+1
                        /  \        /  \
                (N:4)1 2 (N:5)3 (N:6)4  (N:7)5
*/ 
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
//https://www.youtube.com/playlist?list=PLTenPTx8NQDJniUgCDAydREd8h2Bbi_NX
int query(int node,int st,int end,int l,int r){
    //complete segment l...st....end...r
    //or               st.............end
    if(l<=st&&r>=end) return tree[node];
    //st...end...l...r || l...r...st...end (Non-overlapping)
    if(end<l||st>r) return 0;
    int mid=(st+end)/2;
    // for partial st....l....end....r  it will call again non-overlapping will be igonored and remaining will be considered 
    int q1=query(2*node,st,mid,l,r );
    int q2=query(2*node+1,mid+1,end,l,r);
    return q1+q2;

}
int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    build(1,0,n-1);
    while(true){
        int choice;cin>>choice;
        if(choice==-1){
            break;
        }else{
            int l,r;
            cin>>l>>r;
            int ans=query(1,0,n-1,l,r);
            cout<<ans<<endl;
        }
    }
return 0;
}