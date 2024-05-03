
#include<iostream>
using namespace std;
const int N=1e5+2;
int tree[N]={0},arr[N]={0};
void update(int ind,int add,int n){
    
    while(ind<=n){
        tree[ind]=tree[ind]+add;
        ind=ind+(ind&(-ind));
    }
}
int findSum(int ind){
    int sum=0;
    while(ind>0){
        sum+=tree[ind];
        ind=ind-(ind&(-ind));
    }
    return sum;
}
int rangeSum(int l,int r){
    return findSum(r)-findSum(l-1);
}


int main(){
    int n;
cin>>n;
    
    for(int i=1;i<=n;i++){ //0 1 2 3 
        cin>>arr[i];
        update(i,arr[i],n);
    }
    cout<<findSum(2+1)<<endl;
    cout<<rangeSum(2,4);
    
return 0;
}