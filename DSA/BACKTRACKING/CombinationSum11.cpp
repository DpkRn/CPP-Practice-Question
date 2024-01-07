 #include<bits/stdc++.h>
 using namespace std;
 void solve(int ind,int target,vector<int> &temp,vector<int> &nums,vector<vector<int>>& ans){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    for(int i=ind;i<nums.size();i++){
        if(i!=ind&&nums[i]==nums[i-1])
        continue;
        if(target>=nums[i]){
            temp.push_back(nums[i]);
            solve(i+1,target-nums[i],temp,nums,ans);
            temp.pop_back();
        }
        
    }
 }
 int main(){
    vector<int> nums={1,1,1,2,2};
    int target=3;
    vector<int> temp;
    vector<vector<int>> ans;
    solve(0,target,temp,nums,ans);
    for(auto row:ans){
        for(int x:row)
        cout<<x<<" ";
        cout<<endl;
    }
 }