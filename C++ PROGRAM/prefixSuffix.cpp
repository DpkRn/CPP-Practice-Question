#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr){
    for(auto x:arr)
    cout<<x<<" ";
}
int fun(vector<int> arr){
    int n=arr.size();
    vector<int> preMax(n,-1);
    vector<int> postMin(n,-1);
    preMax[0]=INT_MIN;
    postMin[n-1]=INT_MAX;
    for(int i=1;i<n;i++){
        preMax[i]=max(preMax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        postMin[i]=min(arr[i],postMin[i+1]);
    }
    //print(preMax);
    //print(postMin);

    for(int i=1;i<n-1;i++){
        if(arr[i]>=preMax[i]&&arr[i]<=postMin[i])
        return arr[i];
    }
    return -1;
    

}
int main(){
vector<int> arr={1,6,5,7,10,8,9};
cout<<fun(arr);
return 0;
}