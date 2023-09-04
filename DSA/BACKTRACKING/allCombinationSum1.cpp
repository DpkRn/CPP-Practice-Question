  #include<bits/stdc++.h>
 using namespace std;
void solve( vector<int> arr,vector<vector<int>> &ans,vector<int> temp,int i,int target){
    if(target<0)
    return;
    if(i>=arr.size()){
        if(target==0)
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[i]);
    solve(arr,ans,temp,i+1,target-arr[i]);
    temp.pop_back();
     solve(arr,ans,temp,i+1,target);
}
vector<vector<int>> getComb(vector<int> arr,int target){
   vector<vector<int>> ans;
   vector<int> temp;
   int i=0;
   solve(arr,ans,temp,i,target);
   return ans;
}

 int main(){
 vector<int> v={1,1,2};
 int target=3;
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