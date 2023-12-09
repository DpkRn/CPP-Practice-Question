#include<bits/stdc++.h>
using namespace std;
void makeUniqe(vector<int> &arr){
    int pos=0;
    int flag=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=flag){
            arr[pos]=arr[i];
            flag=arr[pos];
            pos++;
        }
    }
    arr.resize(pos);
}
int main(){
    //to get in o(n) array must be sorted
    vector<int> v={2,2,2,2,2,2,};
    makeUniqe(v);
    for(auto x:v)
    cout<<x<<" ";
    return 0;
    
}