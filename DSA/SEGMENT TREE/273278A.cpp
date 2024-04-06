//using mlogn
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
//[]={pref,suff,sum,ans}
vector<vector<long long>> tree(4*N,vector<long long>(4,0));
long long arr[N];
void build(int node,int st,int end){
    if(st==end)
    {
        if(arr[st]<0){
           tree[node]={0, 0,arr[st],0};
        }else{
            tree[node]={arr[st],arr[st],arr[st],arr[st]};
        }
        return;
    }
    int mid=st+(end-st)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,end);
    //max(--->--,--- + -->)
    //9 5 -12  4 5 -5 max(14,2+9) maxi=14
    tree[node][0]=max(tree[2*node][0],tree[2*node][2]+tree[2*node+1][0]);
    //opposit to pref
    tree[node][1]=max(tree[2*node+1][1],tree[2*node+1][2]+tree[2*node][1]);
    tree[node][2]=tree[2*node][2]+tree[2*node+1][2];
    //max(l.ans,---<---+--->---,R.ans)
    tree[node][3]=max({tree[2*node][3],tree[2*node][1]+tree[2*node+1][0],tree[2*node+1][3]});
}
void update(int node,int st,int end,int idx,int val){
    if(st==end)
    {
        arr[st]=val;
        if(arr[st]<0){
           tree[node]={0, 0,arr[st],0};
        }else{
            tree[node]={arr[st],arr[st],arr[st],arr[st]};
        }
        return ;
        
    }
    int mid=st+(end-st)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }else{
        update(2*node+1,mid+1,end,idx,val);
    }
    tree[node][0]=max(tree[2*node][0],tree[2*node][2]+tree[2*node+1][0]);
    tree[node][1]=max(tree[2*node+1][1],tree[2*node+1][2]+tree[2*node][1]);
    tree[node][2]=tree[2*node][2]+tree[2*node+1][2];
    tree[node][3]=max({tree[2*node][3],tree[2*node][1]+tree[2*node+1][0],tree[2*node+1][3]});
}
int main(){
    int n,m; cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    build(1,0,n-1);
    cout<<tree[1][3]<<endl;
    while(m--){
        int idx,val;
        cin>>idx>>val;
        update(1,0,n-1,idx,val);
        cout<<tree[1][3]<<endl;

    }
    return 0;
}

/*
//using nmlogn
#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+2;
long long tree[4*N],arr[N];
long long kadane(int st,int end){
    long long sum=0;
    long long maxi=0;
    for(int i=st;i<=end;i++){   
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0) sum=0;
    }
    return maxi;
}
void build(int node,int st,int end){
    if(st==end)
    {
        tree[node]=arr[st]>=0?arr[st]:0;
        return ;
    }
    int mid=st+(end-st)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,end);
    tree[node]=kadane(st,end);
}
void update(int node,int st,int end, int idx,int val){
    if(st==end){
        tree[node]=val>=0?val:0;
        arr[st]=val;
        return;
    }
    int mid=st+(end-st)/2;

    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }else{
        update(2*node+1,mid+1,end,idx,val);
    }
    tree[node]=kadane(st,end);
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>arr[i];
    build(1,0,n-1);
    cout<<tree[1]<<endl;
    while(m--){
        int idx,val; cin>>idx>>val;
        update(1,0,n-1,idx,val);
        cout<<tree[1]<<endl;
    }
    
    return 0;
}
*/
