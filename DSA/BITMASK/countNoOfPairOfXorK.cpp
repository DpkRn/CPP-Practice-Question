 #include<bits/stdc++.h>
 using namespace std;
 int findPairCount(vector<int> arr,int k){
    map<int,int> mp;
    int n=arr.size();
    int ans=0;
    // arr[i]^arr[j]=k 
    //arr[j]=k^arr[i] if you are on index i then only get count of arr[i]^k in before 0 to i will be no of pair for arr[i]
    for(int i=0;i<n;i++){
        ans+=mp[arr[i]^k];
        mp[arr[i]]++;
    }
    return ans;
 }
 int main(){
   vector<int> arr={3,2,5,6,7,1,3,7,2,0};
   int k=0;
   cout<<findPairCount(arr,k);
   
 return 0;
 }