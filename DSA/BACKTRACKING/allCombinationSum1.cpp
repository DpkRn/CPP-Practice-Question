  #include<bits/stdc++.h>
 using namespace std;
void solve( vector<int> arr,vector<vector<int>> &ans,vector<int> temp,int i,int sum,int target){
    if(sum>target)
    return;
    if(i>=arr.size()){
        if(sum==target)
        ans.push_back(temp);
        return;
    }

    temp.push_back(arr[i]);
    sum+=arr[i];
    solve(arr,ans,temp,i+1,sum,target);
    temp.pop_back();
    sum-=arr[i];
     solve(arr,ans,temp,i+1,sum,target);
}
vector<vector<int>> getComb(vector<int> arr,int target){
   vector<vector<int>> ans;
   vector<int> temp;
   int i=0;
   int sum=0;
   solve(arr,ans,temp,i,sum,target);
   return ans;
}

 int main(){
 vector<int> v={1,1,2,2,1,1};
 int target=4;
 vector<vector<int>> ans=getComb(v,target);
 for(vector<int> i:ans){
    if(i.size()==0){
    cout<<"{}"<<endl;
    continue;
    }
    for(int x:i){
        cout<<x<<" ";
    }
    cout<<endl;
 }
 return 0;
 }