#include<bits/stdc++.h>
using namespace std;
int floor(vector<int> arr,int x){
    int n=arr.size();
    int l=0;int h=n-1;
    int ans=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]>=x){
            ans=m;
            h=m-1;
        }
        
    }
}
int main(){
vector<int> arr={};
cout<<floor(arr,x);
return 0;
}