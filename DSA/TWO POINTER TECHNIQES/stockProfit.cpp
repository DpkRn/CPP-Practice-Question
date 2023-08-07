 #include<bits/stdc++.h>
 using namespace std;
 int maxProfit(vector<int> arr){
    int maxP=-1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxP=max(maxP,arr[j]-arr[i]);
        }
    }
    return maxP;
 }
 int main(){
    vector<int> arr{7,1,5,7,6,4};
  int ans=maxProfit(arr);
 cout<<ans;
 return 0;
 }